/****************************************************************************
 * arch/mips/src/pic32mx/pic32mx_gpio.c
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <stdint.h>
#include <assert.h>
#include <errno.h>

#include <nuttx/irq.h>
#include <nuttx/arch.h>
#include <arch/board/board.h>

#include "mips_internal.h"
#include "chip.h"
#include "pic32mx_ioport.h"
#include "pic32mx.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/****************************************************************************
 * Public Data
 ****************************************************************************/

/****************************************************************************
 * Private Data
 ****************************************************************************/

static const uintptr_t g_gpiobase[CHIP_NPORTS] =
{
  PIC32MX_IOPORTA_K1BASE
#if CHIP_NPORTS > 1
  , PIC32MX_IOPORTB_K1BASE
#endif
#if CHIP_NPORTS > 2
  , PIC32MX_IOPORTC_K1BASE
#endif
#if CHIP_NPORTS > 3
  , PIC32MX_IOPORTD_K1BASE
#endif
#if CHIP_NPORTS > 4
  , PIC32MX_IOPORTE_K1BASE
#endif
#if CHIP_NPORTS > 5
  , PIC32MX_IOPORTF_K1BASE
#endif
#if CHIP_NPORTS > 6
  , PIC32MX_IOPORTG_K1BASE
#endif
};

/****************************************************************************
 * Private Functions
 ****************************************************************************/

/****************************************************************************
 * Name: Inline PIN set field extractors
 ****************************************************************************/

static inline bool pic32mx_output(uint16_t pinset)
{
  return ((pinset & GPIO_OUTPUT) != 0);
}

static inline bool pic32mx_opendrain(uint16_t pinset)
{
  return ((pinset & GPIO_MODE_MASK) == GPIO_OPENDRAN);
}

static inline bool pic32mx_outputhigh(uint16_t pinset)
{
  return ((pinset & GPIO_VALUE_MASK) != 0);
}

static inline unsigned int pic32mx_portno(uint16_t pinset)
{
  return ((pinset & GPIO_PORT_MASK) >> GPIO_PORT_SHIFT);
}

static inline unsigned int pic32mx_pinno(uint16_t pinset)
{
  return ((pinset & GPIO_PIN_MASK) >> GPIO_PIN_SHIFT);
}

#if defined(CHIP_PIC32MX1) || defined(CHIP_PIC32MX2)
static inline unsigned int pic32mx_analog(uint16_t pinset)
{
  return ((pinset & GPIO_ANALOG_MASK) != 0);
}
#else
#  define pic32mx_analog(pinset) (false)
#endif

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: pic32mx_configgpio
 *
 * Description:
 *   Configure a GPIO pin based on bit-encoded description of the pin (the
 *   interrupt will be configured when pic32mx_attach() is called.
 *
 * Returned Value:
 *   OK on success; negated errno on failure.
 *
 ****************************************************************************/

int pic32mx_configgpio(uint16_t cfgset)
{
  unsigned int port = pic32mx_portno(cfgset);
  unsigned int pin  = pic32mx_pinno(cfgset);
  uint32_t     mask = (1 << pin);
  uintptr_t    base;
  irqstate_t   flags;

  /* Verify that the port number is within range */

  if (port < CHIP_NPORTS)
    {
      /* Get the base address of the ports */

      base = g_gpiobase[port];

      /* Is this an input or an output? */

      flags = enter_critical_section();
      if (pic32mx_output(cfgset))
        {
          /* Not analog */

#if defined(CHIP_PIC32MX1) || defined(CHIP_PIC32MX2)
          putreg32(mask, base + PIC32MX_IOPORT_ANSELCLR_OFFSET);
#endif
          /* It is an output; clear the corresponding bit in TRIS register */

          putreg32(mask, base + PIC32MX_IOPORT_TRISCLR_OFFSET);

          /* Is it an open drain output? */

          if (pic32mx_opendrain(cfgset))
            {
              /* It is an open drain output.  Set the corresponding bit in
               * the ODC register.
               */

              putreg32(mask, base + PIC32MX_IOPORT_ODCSET_OFFSET);
            }
          else
            {
              /* Is is a normal output.  Clear the corresponding bit in the
               * ODC register.
               */

              putreg32(mask, base + PIC32MX_IOPORT_ODCCLR_OFFSET);
            }

          /* Set the initial output value */

          pic32mx_gpiowrite(cfgset, pic32mx_outputhigh(cfgset));
        }
      else
        {
          /* It is an input; set the corresponding bit in TRIS register. */

          putreg32(mask, base + PIC32MX_IOPORT_TRISSET_OFFSET);
          putreg32(mask, base + PIC32MX_IOPORT_ODCCLR_OFFSET);

          /* Is it an analog input? */

#if defined(CHIP_PIC32MX1) || defined(CHIP_PIC32MX2)
          if (pic32mx_analog(cfgset))
            {
              putreg32(mask, base + PIC32MX_IOPORT_ANSELSET_OFFSET);
            }
          else
            {
              putreg32(mask, base + PIC32MX_IOPORT_ANSELCLR_OFFSET);
            }
#endif
        }

      leave_critical_section(flags);
      return OK;
    }

  return -EINVAL;
}

/****************************************************************************
 * Name: pic32mx_gpiowrite
 *
 * Description:
 *   Write one or zero to the selected GPIO pin
 *
 ****************************************************************************/

void pic32mx_gpiowrite(uint16_t pinset, bool value)
{
  unsigned int port = pic32mx_portno(pinset);
  unsigned int pin  = pic32mx_pinno(pinset);
  uintptr_t    base;

  /* Verify that the port number is within range */

  if (port < CHIP_NPORTS)
    {
      /* Get the base address of the ports */

      base = g_gpiobase[port];

      /* Set or clear the output */

      if (value)
        {
          putreg32(1 << pin, base + PIC32MX_IOPORT_PORTSET_OFFSET);
        }
      else
        {
          putreg32(1 << pin, base + PIC32MX_IOPORT_PORTCLR_OFFSET);
        }
    }
}

/****************************************************************************
 * Name: pic32mx_gpioread
 *
 * Description:
 *   Read one or zero from the selected GPIO pin
 *
 ****************************************************************************/

bool pic32mx_gpioread(uint16_t pinset)
{
  unsigned int port = pic32mx_portno(pinset);
  unsigned int pin  = pic32mx_pinno(pinset);
  uintptr_t    base;

  /* Verify that the port number is within range */

  if (port < CHIP_NPORTS)
    {
      /* Get the base address of the ports */

      base = g_gpiobase[port];

      /* Get and return the input value */

      return (getreg32(base + PIC32MX_IOPORT_PORT_OFFSET) & (1 << pin)) != 0;
    }

  return false;
}

/****************************************************************************
 * Function:  pic32mx_dumpgpio
 *
 * Description:
 *   Dump all GPIO registers associated with the provided base address
 *
 ****************************************************************************/

#ifdef CONFIG_DEBUG_GPIO_INFO
void pic32mx_dumpgpio(uint32_t pinset, const char *msg)
{
  unsigned int port = pic32mx_portno(pinset);
  irqstate_t   flags;
  uintptr_t    base;

  /* Verify that the port number is within range */

  if (port < CHIP_NPORTS)
    {
      /* Get the base address of the ports */

      base = g_gpiobase[port];

      /* The following requires exclusive access to the GPIO registers */

      gpioinfo("IOPORT%c pinset: %04x base: %08x -- %s\n",
               'A' + port, pinset, base, msg);
      gpioinfo("   TRIS: %08x   PORT: %08x    LAT: %08x    ODC: %08x\n",
               getreg32(base + PIC32MX_IOPORT_TRIS_OFFSET),
               getreg32(base + PIC32MX_IOPORT_PORT_OFFSET),
               getreg32(base + PIC32MX_IOPORT_LAT_OFFSET),
               getreg32(base + PIC32MX_IOPORT_ODC_OFFSET));
      gpioinfo("  CNCON: %08x   CNEN: %08x  CNPUE: %08x\n",
               getreg32(PIC32MX_IOPORT_CNCON),
               getreg32(PIC32MX_IOPORT_CNEN),
               getreg32(PIC32MX_IOPORT_CNPUE));
    }
}
#endif
