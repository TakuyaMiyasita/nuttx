/****************************************************************************
 * arch/risc-v/src/esp32c3-legacy/hardware/esp32c3_dma.h
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

#ifndef __ARCH_RISCV_SRC_ESP32C3_LEGACY_HARDWARE_ESP32C3_DMA_H
#define __ARCH_RISCV_SRC_ESP32C3_LEGACY_HARDWARE_ESP32C3_DMA_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "esp32c3_soc.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* DMA_INT_RAW_CH0_REG register
 * DMA_INT_RAW_CH0_REG.
 */

#define DMA_INT_RAW_CH0_REG (DR_REG_GDMA_BASE + 0x0)

/* DMA_OUTFIFO_UDF_CH0_INT_RAW : R/WTC/SS; bitpos: [12]; default: 0;
 * This raw interrupt bit turns to high level when level 1 fifo of Tx
 * channel 0 is underflow.
 */

#define DMA_OUTFIFO_UDF_CH0_INT_RAW    (BIT(12))
#define DMA_OUTFIFO_UDF_CH0_INT_RAW_M  (DMA_OUTFIFO_UDF_CH0_INT_RAW_V << DMA_OUTFIFO_UDF_CH0_INT_RAW_S)
#define DMA_OUTFIFO_UDF_CH0_INT_RAW_V  0x00000001
#define DMA_OUTFIFO_UDF_CH0_INT_RAW_S  12

/* DMA_OUTFIFO_OVF_CH0_INT_RAW : R/WTC/SS; bitpos: [11]; default: 0;
 * This raw interrupt bit turns to high level when level 1 fifo of Tx
 * channel 0 is overflow.
 */

#define DMA_OUTFIFO_OVF_CH0_INT_RAW    (BIT(11))
#define DMA_OUTFIFO_OVF_CH0_INT_RAW_M  (DMA_OUTFIFO_OVF_CH0_INT_RAW_V << DMA_OUTFIFO_OVF_CH0_INT_RAW_S)
#define DMA_OUTFIFO_OVF_CH0_INT_RAW_V  0x00000001
#define DMA_OUTFIFO_OVF_CH0_INT_RAW_S  11

/* DMA_INFIFO_UDF_CH0_INT_RAW : R/WTC/SS; bitpos: [10]; default: 0;
 * This raw interrupt bit turns to high level when level 1 fifo of Rx
 * channel 0 is underflow.
 */

#define DMA_INFIFO_UDF_CH0_INT_RAW    (BIT(10))
#define DMA_INFIFO_UDF_CH0_INT_RAW_M  (DMA_INFIFO_UDF_CH0_INT_RAW_V << DMA_INFIFO_UDF_CH0_INT_RAW_S)
#define DMA_INFIFO_UDF_CH0_INT_RAW_V  0x00000001
#define DMA_INFIFO_UDF_CH0_INT_RAW_S  10

/* DMA_INFIFO_OVF_CH0_INT_RAW : R/WTC/SS; bitpos: [9]; default: 0;
 * This raw interrupt bit turns to high level when level 1 fifo of Rx
 * channel 0 is overflow.
 */

#define DMA_INFIFO_OVF_CH0_INT_RAW    (BIT(9))
#define DMA_INFIFO_OVF_CH0_INT_RAW_M  (DMA_INFIFO_OVF_CH0_INT_RAW_V << DMA_INFIFO_OVF_CH0_INT_RAW_S)
#define DMA_INFIFO_OVF_CH0_INT_RAW_V  0x00000001
#define DMA_INFIFO_OVF_CH0_INT_RAW_S  9

/* DMA_OUT_TOTAL_EOF_CH0_INT_RAW : R/WTC/SS; bitpos: [8]; default: 0;
 * The raw interrupt bit turns to high level when data corresponding a
 * outlink (includes one link descriptor or few link descriptors) is
 * transmitted out for Tx channel 0.
 */

#define DMA_OUT_TOTAL_EOF_CH0_INT_RAW    (BIT(8))
#define DMA_OUT_TOTAL_EOF_CH0_INT_RAW_M  (DMA_OUT_TOTAL_EOF_CH0_INT_RAW_V << DMA_OUT_TOTAL_EOF_CH0_INT_RAW_S)
#define DMA_OUT_TOTAL_EOF_CH0_INT_RAW_V  0x00000001
#define DMA_OUT_TOTAL_EOF_CH0_INT_RAW_S  8

/* DMA_IN_DSCR_EMPTY_CH0_INT_RAW : R/WTC/SS; bitpos: [7]; default: 0;
 * The raw interrupt bit turns to high level when Rx buffer pointed by
 * inlink is full and receiving data is not completed, but there is no more
 * inlink for Rx channel 0.
 */

#define DMA_IN_DSCR_EMPTY_CH0_INT_RAW    (BIT(7))
#define DMA_IN_DSCR_EMPTY_CH0_INT_RAW_M  (DMA_IN_DSCR_EMPTY_CH0_INT_RAW_V << DMA_IN_DSCR_EMPTY_CH0_INT_RAW_S)
#define DMA_IN_DSCR_EMPTY_CH0_INT_RAW_V  0x00000001
#define DMA_IN_DSCR_EMPTY_CH0_INT_RAW_S  7

/* DMA_OUT_DSCR_ERR_CH0_INT_RAW : R/WTC/SS; bitpos: [6]; default: 0;
 * The raw interrupt bit turns to high level when detecting outlink
 * descriptor error, including owner error, the second and third word error
 * of outlink descriptor for Tx channel 0.
 */

#define DMA_OUT_DSCR_ERR_CH0_INT_RAW    (BIT(6))
#define DMA_OUT_DSCR_ERR_CH0_INT_RAW_M  (DMA_OUT_DSCR_ERR_CH0_INT_RAW_V << DMA_OUT_DSCR_ERR_CH0_INT_RAW_S)
#define DMA_OUT_DSCR_ERR_CH0_INT_RAW_V  0x00000001
#define DMA_OUT_DSCR_ERR_CH0_INT_RAW_S  6

/* DMA_IN_DSCR_ERR_CH0_INT_RAW : R/WTC/SS; bitpos: [5]; default: 0;
 * The raw interrupt bit turns to high level when detecting inlink
 * descriptor error, including owner error, the second and third word error
 * of inlink descriptor for Rx channel 0.
 */

#define DMA_IN_DSCR_ERR_CH0_INT_RAW    (BIT(5))
#define DMA_IN_DSCR_ERR_CH0_INT_RAW_M  (DMA_IN_DSCR_ERR_CH0_INT_RAW_V << DMA_IN_DSCR_ERR_CH0_INT_RAW_S)
#define DMA_IN_DSCR_ERR_CH0_INT_RAW_V  0x00000001
#define DMA_IN_DSCR_ERR_CH0_INT_RAW_S  5

/* DMA_OUT_EOF_CH0_INT_RAW : R/WTC/SS; bitpos: [4]; default: 0;
 * The raw interrupt bit turns to high level when the last data pointed by
 * one outlink descriptor has been read from memory for Tx channel 0.
 */

#define DMA_OUT_EOF_CH0_INT_RAW    (BIT(4))
#define DMA_OUT_EOF_CH0_INT_RAW_M  (DMA_OUT_EOF_CH0_INT_RAW_V << DMA_OUT_EOF_CH0_INT_RAW_S)
#define DMA_OUT_EOF_CH0_INT_RAW_V  0x00000001
#define DMA_OUT_EOF_CH0_INT_RAW_S  4

/* DMA_OUT_DONE_CH0_INT_RAW : R/WTC/SS; bitpos: [3]; default: 0;
 * The raw interrupt bit turns to high level when the last data pointed by
 * one outlink descriptor has been transmitted to peripherals for Tx channel
 * 0.
 */

#define DMA_OUT_DONE_CH0_INT_RAW    (BIT(3))
#define DMA_OUT_DONE_CH0_INT_RAW_M  (DMA_OUT_DONE_CH0_INT_RAW_V << DMA_OUT_DONE_CH0_INT_RAW_S)
#define DMA_OUT_DONE_CH0_INT_RAW_V  0x00000001
#define DMA_OUT_DONE_CH0_INT_RAW_S  3

/* DMA_IN_ERR_EOF_CH0_INT_RAW : R/WTC/SS; bitpos: [2]; default: 0;
 * The raw interrupt bit turns to high level when data error is detected
 * only in the case that the peripheral is UHCI0 for Rx channel 0. For other
 * peripherals, this raw interrupt is reserved.
 */

#define DMA_IN_ERR_EOF_CH0_INT_RAW    (BIT(2))
#define DMA_IN_ERR_EOF_CH0_INT_RAW_M  (DMA_IN_ERR_EOF_CH0_INT_RAW_V << DMA_IN_ERR_EOF_CH0_INT_RAW_S)
#define DMA_IN_ERR_EOF_CH0_INT_RAW_V  0x00000001
#define DMA_IN_ERR_EOF_CH0_INT_RAW_S  2

/* DMA_IN_SUC_EOF_CH0_INT_RAW : R/WTC/SS; bitpos: [1]; default: 0;
 * The raw interrupt bit turns to high level when the last data pointed by
 * one inlink descriptor has been received for Rx channel 0. For UHCI0, the
 * raw interrupt bit turns to high level when the last data pointed by one
 * inlink descriptor has been received and no data error is detected for Rx
 * channel 0.
 */

#define DMA_IN_SUC_EOF_CH0_INT_RAW    (BIT(1))
#define DMA_IN_SUC_EOF_CH0_INT_RAW_M  (DMA_IN_SUC_EOF_CH0_INT_RAW_V << DMA_IN_SUC_EOF_CH0_INT_RAW_S)
#define DMA_IN_SUC_EOF_CH0_INT_RAW_V  0x00000001
#define DMA_IN_SUC_EOF_CH0_INT_RAW_S  1

/* DMA_IN_DONE_CH0_INT_RAW : R/WTC/SS; bitpos: [0]; default: 0;
 * The raw interrupt bit turns to high level when the last data pointed by
 * one inlink descriptor has been received for Rx channel 0.
 */

#define DMA_IN_DONE_CH0_INT_RAW    (BIT(0))
#define DMA_IN_DONE_CH0_INT_RAW_M  (DMA_IN_DONE_CH0_INT_RAW_V << DMA_IN_DONE_CH0_INT_RAW_S)
#define DMA_IN_DONE_CH0_INT_RAW_V  0x00000001
#define DMA_IN_DONE_CH0_INT_RAW_S  0

/* DMA_INT_ST_CH0_REG register
 * DMA_INT_ST_CH0_REG.
 */

#define DMA_INT_ST_CH0_REG (DR_REG_GDMA_BASE + 0x4)

/* DMA_OUTFIFO_UDF_CH0_INT_ST : RO; bitpos: [12]; default: 0;
 * The raw interrupt status bit for the OUTFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_UDF_CH0_INT_ST    (BIT(12))
#define DMA_OUTFIFO_UDF_CH0_INT_ST_M  (DMA_OUTFIFO_UDF_CH0_INT_ST_V << DMA_OUTFIFO_UDF_CH0_INT_ST_S)
#define DMA_OUTFIFO_UDF_CH0_INT_ST_V  0x00000001
#define DMA_OUTFIFO_UDF_CH0_INT_ST_S  12

/* DMA_OUTFIFO_OVF_CH0_INT_ST : RO; bitpos: [11]; default: 0;
 * The raw interrupt status bit for the OUTFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_OVF_CH0_INT_ST    (BIT(11))
#define DMA_OUTFIFO_OVF_CH0_INT_ST_M  (DMA_OUTFIFO_OVF_CH0_INT_ST_V << DMA_OUTFIFO_OVF_CH0_INT_ST_S)
#define DMA_OUTFIFO_OVF_CH0_INT_ST_V  0x00000001
#define DMA_OUTFIFO_OVF_CH0_INT_ST_S  11

/* DMA_INFIFO_UDF_CH0_INT_ST : RO; bitpos: [10]; default: 0;
 * The raw interrupt status bit for the INFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_UDF_CH0_INT_ST    (BIT(10))
#define DMA_INFIFO_UDF_CH0_INT_ST_M  (DMA_INFIFO_UDF_CH0_INT_ST_V << DMA_INFIFO_UDF_CH0_INT_ST_S)
#define DMA_INFIFO_UDF_CH0_INT_ST_V  0x00000001
#define DMA_INFIFO_UDF_CH0_INT_ST_S  10

/* DMA_INFIFO_OVF_CH0_INT_ST : RO; bitpos: [9]; default: 0;
 * The raw interrupt status bit for the INFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_OVF_CH0_INT_ST    (BIT(9))
#define DMA_INFIFO_OVF_CH0_INT_ST_M  (DMA_INFIFO_OVF_CH0_INT_ST_V << DMA_INFIFO_OVF_CH0_INT_ST_S)
#define DMA_INFIFO_OVF_CH0_INT_ST_V  0x00000001
#define DMA_INFIFO_OVF_CH0_INT_ST_S  9

/* DMA_OUT_TOTAL_EOF_CH0_INT_ST : RO; bitpos: [8]; default: 0;
 * The raw interrupt status bit for the OUT_TOTAL_EOF_CH_INT interrupt.
 */

#define DMA_OUT_TOTAL_EOF_CH0_INT_ST    (BIT(8))
#define DMA_OUT_TOTAL_EOF_CH0_INT_ST_M  (DMA_OUT_TOTAL_EOF_CH0_INT_ST_V << DMA_OUT_TOTAL_EOF_CH0_INT_ST_S)
#define DMA_OUT_TOTAL_EOF_CH0_INT_ST_V  0x00000001
#define DMA_OUT_TOTAL_EOF_CH0_INT_ST_S  8

/* DMA_IN_DSCR_EMPTY_CH0_INT_ST : RO; bitpos: [7]; default: 0;
 * The raw interrupt status bit for the IN_DSCR_EMPTY_CH_INT interrupt.
 */

#define DMA_IN_DSCR_EMPTY_CH0_INT_ST    (BIT(7))
#define DMA_IN_DSCR_EMPTY_CH0_INT_ST_M  (DMA_IN_DSCR_EMPTY_CH0_INT_ST_V << DMA_IN_DSCR_EMPTY_CH0_INT_ST_S)
#define DMA_IN_DSCR_EMPTY_CH0_INT_ST_V  0x00000001
#define DMA_IN_DSCR_EMPTY_CH0_INT_ST_S  7

/* DMA_OUT_DSCR_ERR_CH0_INT_ST : RO; bitpos: [6]; default: 0;
 * The raw interrupt status bit for the OUT_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_OUT_DSCR_ERR_CH0_INT_ST    (BIT(6))
#define DMA_OUT_DSCR_ERR_CH0_INT_ST_M  (DMA_OUT_DSCR_ERR_CH0_INT_ST_V << DMA_OUT_DSCR_ERR_CH0_INT_ST_S)
#define DMA_OUT_DSCR_ERR_CH0_INT_ST_V  0x00000001
#define DMA_OUT_DSCR_ERR_CH0_INT_ST_S  6

/* DMA_IN_DSCR_ERR_CH0_INT_ST : RO; bitpos: [5]; default: 0;
 * The raw interrupt status bit for the IN_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_IN_DSCR_ERR_CH0_INT_ST    (BIT(5))
#define DMA_IN_DSCR_ERR_CH0_INT_ST_M  (DMA_IN_DSCR_ERR_CH0_INT_ST_V << DMA_IN_DSCR_ERR_CH0_INT_ST_S)
#define DMA_IN_DSCR_ERR_CH0_INT_ST_V  0x00000001
#define DMA_IN_DSCR_ERR_CH0_INT_ST_S  5

/* DMA_OUT_EOF_CH0_INT_ST : RO; bitpos: [4]; default: 0;
 * The raw interrupt status bit for the OUT_EOF_CH_INT interrupt.
 */

#define DMA_OUT_EOF_CH0_INT_ST    (BIT(4))
#define DMA_OUT_EOF_CH0_INT_ST_M  (DMA_OUT_EOF_CH0_INT_ST_V << DMA_OUT_EOF_CH0_INT_ST_S)
#define DMA_OUT_EOF_CH0_INT_ST_V  0x00000001
#define DMA_OUT_EOF_CH0_INT_ST_S  4

/* DMA_OUT_DONE_CH0_INT_ST : RO; bitpos: [3]; default: 0;
 * The raw interrupt status bit for the OUT_DONE_CH_INT interrupt.
 */

#define DMA_OUT_DONE_CH0_INT_ST    (BIT(3))
#define DMA_OUT_DONE_CH0_INT_ST_M  (DMA_OUT_DONE_CH0_INT_ST_V << DMA_OUT_DONE_CH0_INT_ST_S)
#define DMA_OUT_DONE_CH0_INT_ST_V  0x00000001
#define DMA_OUT_DONE_CH0_INT_ST_S  3

/* DMA_IN_ERR_EOF_CH0_INT_ST : RO; bitpos: [2]; default: 0;
 * The raw interrupt status bit for the IN_ERR_EOF_CH_INT interrupt.
 */

#define DMA_IN_ERR_EOF_CH0_INT_ST    (BIT(2))
#define DMA_IN_ERR_EOF_CH0_INT_ST_M  (DMA_IN_ERR_EOF_CH0_INT_ST_V << DMA_IN_ERR_EOF_CH0_INT_ST_S)
#define DMA_IN_ERR_EOF_CH0_INT_ST_V  0x00000001
#define DMA_IN_ERR_EOF_CH0_INT_ST_S  2

/* DMA_IN_SUC_EOF_CH0_INT_ST : RO; bitpos: [1]; default: 0;
 * The raw interrupt status bit for the IN_SUC_EOF_CH_INT interrupt.
 */

#define DMA_IN_SUC_EOF_CH0_INT_ST    (BIT(1))
#define DMA_IN_SUC_EOF_CH0_INT_ST_M  (DMA_IN_SUC_EOF_CH0_INT_ST_V << DMA_IN_SUC_EOF_CH0_INT_ST_S)
#define DMA_IN_SUC_EOF_CH0_INT_ST_V  0x00000001
#define DMA_IN_SUC_EOF_CH0_INT_ST_S  1

/* DMA_IN_DONE_CH0_INT_ST : RO; bitpos: [0]; default: 0;
 * The raw interrupt status bit for the IN_DONE_CH_INT interrupt.
 */

#define DMA_IN_DONE_CH0_INT_ST    (BIT(0))
#define DMA_IN_DONE_CH0_INT_ST_M  (DMA_IN_DONE_CH0_INT_ST_V << DMA_IN_DONE_CH0_INT_ST_S)
#define DMA_IN_DONE_CH0_INT_ST_V  0x00000001
#define DMA_IN_DONE_CH0_INT_ST_S  0

/* DMA_INT_ENA_CH0_REG register
 * DMA_INT_ENA_CH0_REG.
 */

#define DMA_INT_ENA_CH0_REG (DR_REG_GDMA_BASE + 0x8)

/* DMA_OUTFIFO_UDF_CH0_INT_ENA : R/W; bitpos: [12]; default: 0;
 * The interrupt enable bit for the OUTFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_UDF_CH0_INT_ENA    (BIT(12))
#define DMA_OUTFIFO_UDF_CH0_INT_ENA_M  (DMA_OUTFIFO_UDF_CH0_INT_ENA_V << DMA_OUTFIFO_UDF_CH0_INT_ENA_S)
#define DMA_OUTFIFO_UDF_CH0_INT_ENA_V  0x00000001
#define DMA_OUTFIFO_UDF_CH0_INT_ENA_S  12

/* DMA_OUTFIFO_OVF_CH0_INT_ENA : R/W; bitpos: [11]; default: 0;
 * The interrupt enable bit for the OUTFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_OVF_CH0_INT_ENA    (BIT(11))
#define DMA_OUTFIFO_OVF_CH0_INT_ENA_M  (DMA_OUTFIFO_OVF_CH0_INT_ENA_V << DMA_OUTFIFO_OVF_CH0_INT_ENA_S)
#define DMA_OUTFIFO_OVF_CH0_INT_ENA_V  0x00000001
#define DMA_OUTFIFO_OVF_CH0_INT_ENA_S  11

/* DMA_INFIFO_UDF_CH0_INT_ENA : R/W; bitpos: [10]; default: 0;
 * The interrupt enable bit for the INFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_UDF_CH0_INT_ENA    (BIT(10))
#define DMA_INFIFO_UDF_CH0_INT_ENA_M  (DMA_INFIFO_UDF_CH0_INT_ENA_V << DMA_INFIFO_UDF_CH0_INT_ENA_S)
#define DMA_INFIFO_UDF_CH0_INT_ENA_V  0x00000001
#define DMA_INFIFO_UDF_CH0_INT_ENA_S  10

/* DMA_INFIFO_OVF_CH0_INT_ENA : R/W; bitpos: [9]; default: 0;
 * The interrupt enable bit for the INFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_OVF_CH0_INT_ENA    (BIT(9))
#define DMA_INFIFO_OVF_CH0_INT_ENA_M  (DMA_INFIFO_OVF_CH0_INT_ENA_V << DMA_INFIFO_OVF_CH0_INT_ENA_S)
#define DMA_INFIFO_OVF_CH0_INT_ENA_V  0x00000001
#define DMA_INFIFO_OVF_CH0_INT_ENA_S  9

/* DMA_OUT_TOTAL_EOF_CH0_INT_ENA : R/W; bitpos: [8]; default: 0;
 * The interrupt enable bit for the OUT_TOTAL_EOF_CH_INT interrupt.
 */

#define DMA_OUT_TOTAL_EOF_CH0_INT_ENA    (BIT(8))
#define DMA_OUT_TOTAL_EOF_CH0_INT_ENA_M  (DMA_OUT_TOTAL_EOF_CH0_INT_ENA_V << DMA_OUT_TOTAL_EOF_CH0_INT_ENA_S)
#define DMA_OUT_TOTAL_EOF_CH0_INT_ENA_V  0x00000001
#define DMA_OUT_TOTAL_EOF_CH0_INT_ENA_S  8

/* DMA_IN_DSCR_EMPTY_CH0_INT_ENA : R/W; bitpos: [7]; default: 0;
 * The interrupt enable bit for the IN_DSCR_EMPTY_CH_INT interrupt.
 */

#define DMA_IN_DSCR_EMPTY_CH0_INT_ENA    (BIT(7))
#define DMA_IN_DSCR_EMPTY_CH0_INT_ENA_M  (DMA_IN_DSCR_EMPTY_CH0_INT_ENA_V << DMA_IN_DSCR_EMPTY_CH0_INT_ENA_S)
#define DMA_IN_DSCR_EMPTY_CH0_INT_ENA_V  0x00000001
#define DMA_IN_DSCR_EMPTY_CH0_INT_ENA_S  7

/* DMA_OUT_DSCR_ERR_CH0_INT_ENA : R/W; bitpos: [6]; default: 0;
 * The interrupt enable bit for the OUT_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_OUT_DSCR_ERR_CH0_INT_ENA    (BIT(6))
#define DMA_OUT_DSCR_ERR_CH0_INT_ENA_M  (DMA_OUT_DSCR_ERR_CH0_INT_ENA_V << DMA_OUT_DSCR_ERR_CH0_INT_ENA_S)
#define DMA_OUT_DSCR_ERR_CH0_INT_ENA_V  0x00000001
#define DMA_OUT_DSCR_ERR_CH0_INT_ENA_S  6

/* DMA_IN_DSCR_ERR_CH0_INT_ENA : R/W; bitpos: [5]; default: 0;
 * The interrupt enable bit for the IN_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_IN_DSCR_ERR_CH0_INT_ENA    (BIT(5))
#define DMA_IN_DSCR_ERR_CH0_INT_ENA_M  (DMA_IN_DSCR_ERR_CH0_INT_ENA_V << DMA_IN_DSCR_ERR_CH0_INT_ENA_S)
#define DMA_IN_DSCR_ERR_CH0_INT_ENA_V  0x00000001
#define DMA_IN_DSCR_ERR_CH0_INT_ENA_S  5

/* DMA_OUT_EOF_CH0_INT_ENA : R/W; bitpos: [4]; default: 0;
 * The interrupt enable bit for the OUT_EOF_CH_INT interrupt.
 */

#define DMA_OUT_EOF_CH0_INT_ENA    (BIT(4))
#define DMA_OUT_EOF_CH0_INT_ENA_M  (DMA_OUT_EOF_CH0_INT_ENA_V << DMA_OUT_EOF_CH0_INT_ENA_S)
#define DMA_OUT_EOF_CH0_INT_ENA_V  0x00000001
#define DMA_OUT_EOF_CH0_INT_ENA_S  4

/* DMA_OUT_DONE_CH0_INT_ENA : R/W; bitpos: [3]; default: 0;
 * The interrupt enable bit for the OUT_DONE_CH_INT interrupt.
 */

#define DMA_OUT_DONE_CH0_INT_ENA    (BIT(3))
#define DMA_OUT_DONE_CH0_INT_ENA_M  (DMA_OUT_DONE_CH0_INT_ENA_V << DMA_OUT_DONE_CH0_INT_ENA_S)
#define DMA_OUT_DONE_CH0_INT_ENA_V  0x00000001
#define DMA_OUT_DONE_CH0_INT_ENA_S  3

/* DMA_IN_ERR_EOF_CH0_INT_ENA : R/W; bitpos: [2]; default: 0;
 * The interrupt enable bit for the IN_ERR_EOF_CH_INT interrupt.
 */

#define DMA_IN_ERR_EOF_CH0_INT_ENA    (BIT(2))
#define DMA_IN_ERR_EOF_CH0_INT_ENA_M  (DMA_IN_ERR_EOF_CH0_INT_ENA_V << DMA_IN_ERR_EOF_CH0_INT_ENA_S)
#define DMA_IN_ERR_EOF_CH0_INT_ENA_V  0x00000001
#define DMA_IN_ERR_EOF_CH0_INT_ENA_S  2

/* DMA_IN_SUC_EOF_CH0_INT_ENA : R/W; bitpos: [1]; default: 0;
 * The interrupt enable bit for the IN_SUC_EOF_CH_INT interrupt.
 */

#define DMA_IN_SUC_EOF_CH0_INT_ENA    (BIT(1))
#define DMA_IN_SUC_EOF_CH0_INT_ENA_M  (DMA_IN_SUC_EOF_CH0_INT_ENA_V << DMA_IN_SUC_EOF_CH0_INT_ENA_S)
#define DMA_IN_SUC_EOF_CH0_INT_ENA_V  0x00000001
#define DMA_IN_SUC_EOF_CH0_INT_ENA_S  1

/* DMA_IN_DONE_CH0_INT_ENA : R/W; bitpos: [0]; default: 0;
 * The interrupt enable bit for the IN_DONE_CH_INT interrupt.
 */

#define DMA_IN_DONE_CH0_INT_ENA    (BIT(0))
#define DMA_IN_DONE_CH0_INT_ENA_M  (DMA_IN_DONE_CH0_INT_ENA_V << DMA_IN_DONE_CH0_INT_ENA_S)
#define DMA_IN_DONE_CH0_INT_ENA_V  0x00000001
#define DMA_IN_DONE_CH0_INT_ENA_S  0

/* DMA_INT_CLR_CH0_REG register
 * DMA_INT_CLR_CH0_REG.
 */

#define DMA_INT_CLR_CH0_REG (DR_REG_GDMA_BASE + 0xc)

/* DMA_OUTFIFO_UDF_CH0_INT_CLR : WT; bitpos: [12]; default: 0;
 * Set this bit to clear the OUTFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_UDF_CH0_INT_CLR    (BIT(12))
#define DMA_OUTFIFO_UDF_CH0_INT_CLR_M  (DMA_OUTFIFO_UDF_CH0_INT_CLR_V << DMA_OUTFIFO_UDF_CH0_INT_CLR_S)
#define DMA_OUTFIFO_UDF_CH0_INT_CLR_V  0x00000001
#define DMA_OUTFIFO_UDF_CH0_INT_CLR_S  12

/* DMA_OUTFIFO_OVF_CH0_INT_CLR : WT; bitpos: [11]; default: 0;
 * Set this bit to clear the OUTFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_OVF_CH0_INT_CLR    (BIT(11))
#define DMA_OUTFIFO_OVF_CH0_INT_CLR_M  (DMA_OUTFIFO_OVF_CH0_INT_CLR_V << DMA_OUTFIFO_OVF_CH0_INT_CLR_S)
#define DMA_OUTFIFO_OVF_CH0_INT_CLR_V  0x00000001
#define DMA_OUTFIFO_OVF_CH0_INT_CLR_S  11

/* DMA_INFIFO_UDF_CH0_INT_CLR : WT; bitpos: [10]; default: 0;
 * Set this bit to clear the INFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_UDF_CH0_INT_CLR    (BIT(10))
#define DMA_INFIFO_UDF_CH0_INT_CLR_M  (DMA_INFIFO_UDF_CH0_INT_CLR_V << DMA_INFIFO_UDF_CH0_INT_CLR_S)
#define DMA_INFIFO_UDF_CH0_INT_CLR_V  0x00000001
#define DMA_INFIFO_UDF_CH0_INT_CLR_S  10

/* DMA_INFIFO_OVF_CH0_INT_CLR : WT; bitpos: [9]; default: 0;
 * Set this bit to clear the INFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_OVF_CH0_INT_CLR    (BIT(9))
#define DMA_INFIFO_OVF_CH0_INT_CLR_M  (DMA_INFIFO_OVF_CH0_INT_CLR_V << DMA_INFIFO_OVF_CH0_INT_CLR_S)
#define DMA_INFIFO_OVF_CH0_INT_CLR_V  0x00000001
#define DMA_INFIFO_OVF_CH0_INT_CLR_S  9

/* DMA_OUT_TOTAL_EOF_CH0_INT_CLR : WT; bitpos: [8]; default: 0;
 * Set this bit to clear the OUT_TOTAL_EOF_CH_INT interrupt.
 */

#define DMA_OUT_TOTAL_EOF_CH0_INT_CLR    (BIT(8))
#define DMA_OUT_TOTAL_EOF_CH0_INT_CLR_M  (DMA_OUT_TOTAL_EOF_CH0_INT_CLR_V << DMA_OUT_TOTAL_EOF_CH0_INT_CLR_S)
#define DMA_OUT_TOTAL_EOF_CH0_INT_CLR_V  0x00000001
#define DMA_OUT_TOTAL_EOF_CH0_INT_CLR_S  8

/* DMA_IN_DSCR_EMPTY_CH0_INT_CLR : WT; bitpos: [7]; default: 0;
 * Set this bit to clear the IN_DSCR_EMPTY_CH_INT interrupt.
 */

#define DMA_IN_DSCR_EMPTY_CH0_INT_CLR    (BIT(7))
#define DMA_IN_DSCR_EMPTY_CH0_INT_CLR_M  (DMA_IN_DSCR_EMPTY_CH0_INT_CLR_V << DMA_IN_DSCR_EMPTY_CH0_INT_CLR_S)
#define DMA_IN_DSCR_EMPTY_CH0_INT_CLR_V  0x00000001
#define DMA_IN_DSCR_EMPTY_CH0_INT_CLR_S  7

/* DMA_OUT_DSCR_ERR_CH0_INT_CLR : WT; bitpos: [6]; default: 0;
 * Set this bit to clear the OUT_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_OUT_DSCR_ERR_CH0_INT_CLR    (BIT(6))
#define DMA_OUT_DSCR_ERR_CH0_INT_CLR_M  (DMA_OUT_DSCR_ERR_CH0_INT_CLR_V << DMA_OUT_DSCR_ERR_CH0_INT_CLR_S)
#define DMA_OUT_DSCR_ERR_CH0_INT_CLR_V  0x00000001
#define DMA_OUT_DSCR_ERR_CH0_INT_CLR_S  6

/* DMA_IN_DSCR_ERR_CH0_INT_CLR : WT; bitpos: [5]; default: 0;
 * Set this bit to clear the IN_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_IN_DSCR_ERR_CH0_INT_CLR    (BIT(5))
#define DMA_IN_DSCR_ERR_CH0_INT_CLR_M  (DMA_IN_DSCR_ERR_CH0_INT_CLR_V << DMA_IN_DSCR_ERR_CH0_INT_CLR_S)
#define DMA_IN_DSCR_ERR_CH0_INT_CLR_V  0x00000001
#define DMA_IN_DSCR_ERR_CH0_INT_CLR_S  5

/* DMA_OUT_EOF_CH0_INT_CLR : WT; bitpos: [4]; default: 0;
 * Set this bit to clear the OUT_EOF_CH_INT interrupt.
 */

#define DMA_OUT_EOF_CH0_INT_CLR    (BIT(4))
#define DMA_OUT_EOF_CH0_INT_CLR_M  (DMA_OUT_EOF_CH0_INT_CLR_V << DMA_OUT_EOF_CH0_INT_CLR_S)
#define DMA_OUT_EOF_CH0_INT_CLR_V  0x00000001
#define DMA_OUT_EOF_CH0_INT_CLR_S  4

/* DMA_OUT_DONE_CH0_INT_CLR : WT; bitpos: [3]; default: 0;
 * Set this bit to clear the OUT_DONE_CH_INT interrupt.
 */

#define DMA_OUT_DONE_CH0_INT_CLR    (BIT(3))
#define DMA_OUT_DONE_CH0_INT_CLR_M  (DMA_OUT_DONE_CH0_INT_CLR_V << DMA_OUT_DONE_CH0_INT_CLR_S)
#define DMA_OUT_DONE_CH0_INT_CLR_V  0x00000001
#define DMA_OUT_DONE_CH0_INT_CLR_S  3

/* DMA_IN_ERR_EOF_CH0_INT_CLR : WT; bitpos: [2]; default: 0;
 * Set this bit to clear the IN_ERR_EOF_CH_INT interrupt.
 */

#define DMA_IN_ERR_EOF_CH0_INT_CLR    (BIT(2))
#define DMA_IN_ERR_EOF_CH0_INT_CLR_M  (DMA_IN_ERR_EOF_CH0_INT_CLR_V << DMA_IN_ERR_EOF_CH0_INT_CLR_S)
#define DMA_IN_ERR_EOF_CH0_INT_CLR_V  0x00000001
#define DMA_IN_ERR_EOF_CH0_INT_CLR_S  2

/* DMA_IN_SUC_EOF_CH0_INT_CLR : WT; bitpos: [1]; default: 0;
 * Set this bit to clear the IN_SUC_EOF_CH_INT interrupt.
 */

#define DMA_IN_SUC_EOF_CH0_INT_CLR    (BIT(1))
#define DMA_IN_SUC_EOF_CH0_INT_CLR_M  (DMA_IN_SUC_EOF_CH0_INT_CLR_V << DMA_IN_SUC_EOF_CH0_INT_CLR_S)
#define DMA_IN_SUC_EOF_CH0_INT_CLR_V  0x00000001
#define DMA_IN_SUC_EOF_CH0_INT_CLR_S  1

/* DMA_IN_DONE_CH0_INT_CLR : WT; bitpos: [0]; default: 0;
 * Set this bit to clear the IN_DONE_CH_INT interrupt.
 */

#define DMA_IN_DONE_CH0_INT_CLR    (BIT(0))
#define DMA_IN_DONE_CH0_INT_CLR_M  (DMA_IN_DONE_CH0_INT_CLR_V << DMA_IN_DONE_CH0_INT_CLR_S)
#define DMA_IN_DONE_CH0_INT_CLR_V  0x00000001
#define DMA_IN_DONE_CH0_INT_CLR_S  0

/* DMA_INT_RAW_CH1_REG register
 * DMA_INT_RAW_CH1_REG.
 */

#define DMA_INT_RAW_CH1_REG (DR_REG_GDMA_BASE + 0x10)

/* DMA_OUTFIFO_UDF_CH1_INT_RAW : R/WTC/SS; bitpos: [12]; default: 0;
 * This raw interrupt bit turns to high level when level 1 fifo of Tx
 * channel 1 is underflow.
 */

#define DMA_OUTFIFO_UDF_CH1_INT_RAW    (BIT(12))
#define DMA_OUTFIFO_UDF_CH1_INT_RAW_M  (DMA_OUTFIFO_UDF_CH1_INT_RAW_V << DMA_OUTFIFO_UDF_CH1_INT_RAW_S)
#define DMA_OUTFIFO_UDF_CH1_INT_RAW_V  0x00000001
#define DMA_OUTFIFO_UDF_CH1_INT_RAW_S  12

/* DMA_OUTFIFO_OVF_CH1_INT_RAW : R/WTC/SS; bitpos: [11]; default: 0;
 * This raw interrupt bit turns to high level when level 1 fifo of Tx
 * channel 1 is overflow.
 */

#define DMA_OUTFIFO_OVF_CH1_INT_RAW    (BIT(11))
#define DMA_OUTFIFO_OVF_CH1_INT_RAW_M  (DMA_OUTFIFO_OVF_CH1_INT_RAW_V << DMA_OUTFIFO_OVF_CH1_INT_RAW_S)
#define DMA_OUTFIFO_OVF_CH1_INT_RAW_V  0x00000001
#define DMA_OUTFIFO_OVF_CH1_INT_RAW_S  11

/* DMA_INFIFO_UDF_CH1_INT_RAW : R/WTC/SS; bitpos: [10]; default: 0;
 * This raw interrupt bit turns to high level when level 1 fifo of Rx
 * channel 1 is underflow.
 */

#define DMA_INFIFO_UDF_CH1_INT_RAW    (BIT(10))
#define DMA_INFIFO_UDF_CH1_INT_RAW_M  (DMA_INFIFO_UDF_CH1_INT_RAW_V << DMA_INFIFO_UDF_CH1_INT_RAW_S)
#define DMA_INFIFO_UDF_CH1_INT_RAW_V  0x00000001
#define DMA_INFIFO_UDF_CH1_INT_RAW_S  10

/* DMA_INFIFO_OVF_CH1_INT_RAW : R/WTC/SS; bitpos: [9]; default: 0;
 * This raw interrupt bit turns to high level when level 1 fifo of Rx
 * channel 1 is overflow.
 */

#define DMA_INFIFO_OVF_CH1_INT_RAW    (BIT(9))
#define DMA_INFIFO_OVF_CH1_INT_RAW_M  (DMA_INFIFO_OVF_CH1_INT_RAW_V << DMA_INFIFO_OVF_CH1_INT_RAW_S)
#define DMA_INFIFO_OVF_CH1_INT_RAW_V  0x00000001
#define DMA_INFIFO_OVF_CH1_INT_RAW_S  9

/* DMA_OUT_TOTAL_EOF_CH1_INT_RAW : R/WTC/SS; bitpos: [8]; default: 0;
 * The raw interrupt bit turns to high level when data corresponding a
 * outlink (includes one link descriptor or few link descriptors) is
 * transmitted out for Tx channel 1.
 */

#define DMA_OUT_TOTAL_EOF_CH1_INT_RAW    (BIT(8))
#define DMA_OUT_TOTAL_EOF_CH1_INT_RAW_M  (DMA_OUT_TOTAL_EOF_CH1_INT_RAW_V << DMA_OUT_TOTAL_EOF_CH1_INT_RAW_S)
#define DMA_OUT_TOTAL_EOF_CH1_INT_RAW_V  0x00000001
#define DMA_OUT_TOTAL_EOF_CH1_INT_RAW_S  8

/* DMA_IN_DSCR_EMPTY_CH1_INT_RAW : R/WTC/SS; bitpos: [7]; default: 0;
 * The raw interrupt bit turns to high level when Rx buffer pointed by
 * inlink is full and receiving data is not completed, but there is no more
 * inlink for Rx channel 1.
 */

#define DMA_IN_DSCR_EMPTY_CH1_INT_RAW    (BIT(7))
#define DMA_IN_DSCR_EMPTY_CH1_INT_RAW_M  (DMA_IN_DSCR_EMPTY_CH1_INT_RAW_V << DMA_IN_DSCR_EMPTY_CH1_INT_RAW_S)
#define DMA_IN_DSCR_EMPTY_CH1_INT_RAW_V  0x00000001
#define DMA_IN_DSCR_EMPTY_CH1_INT_RAW_S  7

/* DMA_OUT_DSCR_ERR_CH1_INT_RAW : R/WTC/SS; bitpos: [6]; default: 0;
 * The raw interrupt bit turns to high level when detecting outlink
 * descriptor error, including owner error, the second and third word error
 * of outlink descriptor for Tx channel 1.
 */

#define DMA_OUT_DSCR_ERR_CH1_INT_RAW    (BIT(6))
#define DMA_OUT_DSCR_ERR_CH1_INT_RAW_M  (DMA_OUT_DSCR_ERR_CH1_INT_RAW_V << DMA_OUT_DSCR_ERR_CH1_INT_RAW_S)
#define DMA_OUT_DSCR_ERR_CH1_INT_RAW_V  0x00000001
#define DMA_OUT_DSCR_ERR_CH1_INT_RAW_S  6

/* DMA_IN_DSCR_ERR_CH1_INT_RAW : R/WTC/SS; bitpos: [5]; default: 0;
 * The raw interrupt bit turns to high level when detecting inlink
 * descriptor error, including owner error, the second and third word error
 * of inlink descriptor for Rx channel 1.
 */

#define DMA_IN_DSCR_ERR_CH1_INT_RAW    (BIT(5))
#define DMA_IN_DSCR_ERR_CH1_INT_RAW_M  (DMA_IN_DSCR_ERR_CH1_INT_RAW_V << DMA_IN_DSCR_ERR_CH1_INT_RAW_S)
#define DMA_IN_DSCR_ERR_CH1_INT_RAW_V  0x00000001
#define DMA_IN_DSCR_ERR_CH1_INT_RAW_S  5

/* DMA_OUT_EOF_CH1_INT_RAW : R/WTC/SS; bitpos: [4]; default: 0;
 * The raw interrupt bit turns to high level when the last data pointed by
 * one outlink descriptor has been read from memory for Tx channel 1.
 */

#define DMA_OUT_EOF_CH1_INT_RAW    (BIT(4))
#define DMA_OUT_EOF_CH1_INT_RAW_M  (DMA_OUT_EOF_CH1_INT_RAW_V << DMA_OUT_EOF_CH1_INT_RAW_S)
#define DMA_OUT_EOF_CH1_INT_RAW_V  0x00000001
#define DMA_OUT_EOF_CH1_INT_RAW_S  4

/* DMA_OUT_DONE_CH1_INT_RAW : R/WTC/SS; bitpos: [3]; default: 0;
 * The raw interrupt bit turns to high level when the last data pointed by
 * one outlink descriptor has been transmitted to peripherals for Tx channel
 * 1.
 */

#define DMA_OUT_DONE_CH1_INT_RAW    (BIT(3))
#define DMA_OUT_DONE_CH1_INT_RAW_M  (DMA_OUT_DONE_CH1_INT_RAW_V << DMA_OUT_DONE_CH1_INT_RAW_S)
#define DMA_OUT_DONE_CH1_INT_RAW_V  0x00000001
#define DMA_OUT_DONE_CH1_INT_RAW_S  3

/* DMA_IN_ERR_EOF_CH1_INT_RAW : R/WTC/SS; bitpos: [2]; default: 0;
 * The raw interrupt bit turns to high level when data error is detected
 * only in the case that the peripheral is UHCI0 for Rx channel 1. For other
 * peripherals, this raw interrupt is reserved.
 */

#define DMA_IN_ERR_EOF_CH1_INT_RAW    (BIT(2))
#define DMA_IN_ERR_EOF_CH1_INT_RAW_M  (DMA_IN_ERR_EOF_CH1_INT_RAW_V << DMA_IN_ERR_EOF_CH1_INT_RAW_S)
#define DMA_IN_ERR_EOF_CH1_INT_RAW_V  0x00000001
#define DMA_IN_ERR_EOF_CH1_INT_RAW_S  2

/* DMA_IN_SUC_EOF_CH1_INT_RAW : R/WTC/SS; bitpos: [1]; default: 0;
 * The raw interrupt bit turns to high level when the last data pointed by
 * one inlink descriptor has been received for Rx channel 1. For UHCI0, the
 * raw interrupt bit turns to high level when the last data pointed by one
 * inlink descriptor has been received and no data error is detected for Rx
 * channel 1.
 */

#define DMA_IN_SUC_EOF_CH1_INT_RAW    (BIT(1))
#define DMA_IN_SUC_EOF_CH1_INT_RAW_M  (DMA_IN_SUC_EOF_CH1_INT_RAW_V << DMA_IN_SUC_EOF_CH1_INT_RAW_S)
#define DMA_IN_SUC_EOF_CH1_INT_RAW_V  0x00000001
#define DMA_IN_SUC_EOF_CH1_INT_RAW_S  1

/* DMA_IN_DONE_CH1_INT_RAW : R/WTC/SS; bitpos: [0]; default: 0;
 * The raw interrupt bit turns to high level when the last data pointed by
 * one inlink descriptor has been received for Rx channel 1.
 */

#define DMA_IN_DONE_CH1_INT_RAW    (BIT(0))
#define DMA_IN_DONE_CH1_INT_RAW_M  (DMA_IN_DONE_CH1_INT_RAW_V << DMA_IN_DONE_CH1_INT_RAW_S)
#define DMA_IN_DONE_CH1_INT_RAW_V  0x00000001
#define DMA_IN_DONE_CH1_INT_RAW_S  0

/* DMA_INT_ST_CH1_REG register
 * DMA_INT_ST_CH1_REG.
 */

#define DMA_INT_ST_CH1_REG (DR_REG_GDMA_BASE + 0x14)

/* DMA_OUTFIFO_UDF_CH1_INT_ST : RO; bitpos: [12]; default: 0;
 * The raw interrupt status bit for the OUTFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_UDF_CH1_INT_ST    (BIT(12))
#define DMA_OUTFIFO_UDF_CH1_INT_ST_M  (DMA_OUTFIFO_UDF_CH1_INT_ST_V << DMA_OUTFIFO_UDF_CH1_INT_ST_S)
#define DMA_OUTFIFO_UDF_CH1_INT_ST_V  0x00000001
#define DMA_OUTFIFO_UDF_CH1_INT_ST_S  12

/* DMA_OUTFIFO_OVF_CH1_INT_ST : RO; bitpos: [11]; default: 0;
 * The raw interrupt status bit for the OUTFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_OVF_CH1_INT_ST    (BIT(11))
#define DMA_OUTFIFO_OVF_CH1_INT_ST_M  (DMA_OUTFIFO_OVF_CH1_INT_ST_V << DMA_OUTFIFO_OVF_CH1_INT_ST_S)
#define DMA_OUTFIFO_OVF_CH1_INT_ST_V  0x00000001
#define DMA_OUTFIFO_OVF_CH1_INT_ST_S  11

/* DMA_INFIFO_UDF_CH1_INT_ST : RO; bitpos: [10]; default: 0;
 * The raw interrupt status bit for the INFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_UDF_CH1_INT_ST    (BIT(10))
#define DMA_INFIFO_UDF_CH1_INT_ST_M  (DMA_INFIFO_UDF_CH1_INT_ST_V << DMA_INFIFO_UDF_CH1_INT_ST_S)
#define DMA_INFIFO_UDF_CH1_INT_ST_V  0x00000001
#define DMA_INFIFO_UDF_CH1_INT_ST_S  10

/* DMA_INFIFO_OVF_CH1_INT_ST : RO; bitpos: [9]; default: 0;
 * The raw interrupt status bit for the INFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_OVF_CH1_INT_ST    (BIT(9))
#define DMA_INFIFO_OVF_CH1_INT_ST_M  (DMA_INFIFO_OVF_CH1_INT_ST_V << DMA_INFIFO_OVF_CH1_INT_ST_S)
#define DMA_INFIFO_OVF_CH1_INT_ST_V  0x00000001
#define DMA_INFIFO_OVF_CH1_INT_ST_S  9

/* DMA_OUT_TOTAL_EOF_CH1_INT_ST : RO; bitpos: [8]; default: 0;
 * The raw interrupt status bit for the OUT_TOTAL_EOF_CH_INT interrupt.
 */

#define DMA_OUT_TOTAL_EOF_CH1_INT_ST    (BIT(8))
#define DMA_OUT_TOTAL_EOF_CH1_INT_ST_M  (DMA_OUT_TOTAL_EOF_CH1_INT_ST_V << DMA_OUT_TOTAL_EOF_CH1_INT_ST_S)
#define DMA_OUT_TOTAL_EOF_CH1_INT_ST_V  0x00000001
#define DMA_OUT_TOTAL_EOF_CH1_INT_ST_S  8

/* DMA_IN_DSCR_EMPTY_CH1_INT_ST : RO; bitpos: [7]; default: 0;
 * The raw interrupt status bit for the IN_DSCR_EMPTY_CH_INT interrupt.
 */

#define DMA_IN_DSCR_EMPTY_CH1_INT_ST    (BIT(7))
#define DMA_IN_DSCR_EMPTY_CH1_INT_ST_M  (DMA_IN_DSCR_EMPTY_CH1_INT_ST_V << DMA_IN_DSCR_EMPTY_CH1_INT_ST_S)
#define DMA_IN_DSCR_EMPTY_CH1_INT_ST_V  0x00000001
#define DMA_IN_DSCR_EMPTY_CH1_INT_ST_S  7

/* DMA_OUT_DSCR_ERR_CH1_INT_ST : RO; bitpos: [6]; default: 0;
 * The raw interrupt status bit for the OUT_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_OUT_DSCR_ERR_CH1_INT_ST    (BIT(6))
#define DMA_OUT_DSCR_ERR_CH1_INT_ST_M  (DMA_OUT_DSCR_ERR_CH1_INT_ST_V << DMA_OUT_DSCR_ERR_CH1_INT_ST_S)
#define DMA_OUT_DSCR_ERR_CH1_INT_ST_V  0x00000001
#define DMA_OUT_DSCR_ERR_CH1_INT_ST_S  6

/* DMA_IN_DSCR_ERR_CH1_INT_ST : RO; bitpos: [5]; default: 0;
 * The raw interrupt status bit for the IN_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_IN_DSCR_ERR_CH1_INT_ST    (BIT(5))
#define DMA_IN_DSCR_ERR_CH1_INT_ST_M  (DMA_IN_DSCR_ERR_CH1_INT_ST_V << DMA_IN_DSCR_ERR_CH1_INT_ST_S)
#define DMA_IN_DSCR_ERR_CH1_INT_ST_V  0x00000001
#define DMA_IN_DSCR_ERR_CH1_INT_ST_S  5

/* DMA_OUT_EOF_CH1_INT_ST : RO; bitpos: [4]; default: 0;
 * The raw interrupt status bit for the OUT_EOF_CH_INT interrupt.
 */

#define DMA_OUT_EOF_CH1_INT_ST    (BIT(4))
#define DMA_OUT_EOF_CH1_INT_ST_M  (DMA_OUT_EOF_CH1_INT_ST_V << DMA_OUT_EOF_CH1_INT_ST_S)
#define DMA_OUT_EOF_CH1_INT_ST_V  0x00000001
#define DMA_OUT_EOF_CH1_INT_ST_S  4

/* DMA_OUT_DONE_CH1_INT_ST : RO; bitpos: [3]; default: 0;
 * The raw interrupt status bit for the OUT_DONE_CH_INT interrupt.
 */

#define DMA_OUT_DONE_CH1_INT_ST    (BIT(3))
#define DMA_OUT_DONE_CH1_INT_ST_M  (DMA_OUT_DONE_CH1_INT_ST_V << DMA_OUT_DONE_CH1_INT_ST_S)
#define DMA_OUT_DONE_CH1_INT_ST_V  0x00000001
#define DMA_OUT_DONE_CH1_INT_ST_S  3

/* DMA_IN_ERR_EOF_CH1_INT_ST : RO; bitpos: [2]; default: 0;
 * The raw interrupt status bit for the IN_ERR_EOF_CH_INT interrupt.
 */

#define DMA_IN_ERR_EOF_CH1_INT_ST    (BIT(2))
#define DMA_IN_ERR_EOF_CH1_INT_ST_M  (DMA_IN_ERR_EOF_CH1_INT_ST_V << DMA_IN_ERR_EOF_CH1_INT_ST_S)
#define DMA_IN_ERR_EOF_CH1_INT_ST_V  0x00000001
#define DMA_IN_ERR_EOF_CH1_INT_ST_S  2

/* DMA_IN_SUC_EOF_CH1_INT_ST : RO; bitpos: [1]; default: 0;
 * The raw interrupt status bit for the IN_SUC_EOF_CH_INT interrupt.
 */

#define DMA_IN_SUC_EOF_CH1_INT_ST    (BIT(1))
#define DMA_IN_SUC_EOF_CH1_INT_ST_M  (DMA_IN_SUC_EOF_CH1_INT_ST_V << DMA_IN_SUC_EOF_CH1_INT_ST_S)
#define DMA_IN_SUC_EOF_CH1_INT_ST_V  0x00000001
#define DMA_IN_SUC_EOF_CH1_INT_ST_S  1

/* DMA_IN_DONE_CH1_INT_ST : RO; bitpos: [0]; default: 0;
 * The raw interrupt status bit for the IN_DONE_CH_INT interrupt.
 */

#define DMA_IN_DONE_CH1_INT_ST    (BIT(0))
#define DMA_IN_DONE_CH1_INT_ST_M  (DMA_IN_DONE_CH1_INT_ST_V << DMA_IN_DONE_CH1_INT_ST_S)
#define DMA_IN_DONE_CH1_INT_ST_V  0x00000001
#define DMA_IN_DONE_CH1_INT_ST_S  0

/* DMA_INT_ENA_CH1_REG register
 * DMA_INT_ENA_CH1_REG.
 */

#define DMA_INT_ENA_CH1_REG (DR_REG_GDMA_BASE + 0x18)

/* DMA_OUTFIFO_UDF_CH1_INT_ENA : R/W; bitpos: [12]; default: 0;
 * The interrupt enable bit for the OUTFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_UDF_CH1_INT_ENA    (BIT(12))
#define DMA_OUTFIFO_UDF_CH1_INT_ENA_M  (DMA_OUTFIFO_UDF_CH1_INT_ENA_V << DMA_OUTFIFO_UDF_CH1_INT_ENA_S)
#define DMA_OUTFIFO_UDF_CH1_INT_ENA_V  0x00000001
#define DMA_OUTFIFO_UDF_CH1_INT_ENA_S  12

/* DMA_OUTFIFO_OVF_CH1_INT_ENA : R/W; bitpos: [11]; default: 0;
 * The interrupt enable bit for the OUTFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_OVF_CH1_INT_ENA    (BIT(11))
#define DMA_OUTFIFO_OVF_CH1_INT_ENA_M  (DMA_OUTFIFO_OVF_CH1_INT_ENA_V << DMA_OUTFIFO_OVF_CH1_INT_ENA_S)
#define DMA_OUTFIFO_OVF_CH1_INT_ENA_V  0x00000001
#define DMA_OUTFIFO_OVF_CH1_INT_ENA_S  11

/* DMA_INFIFO_UDF_CH1_INT_ENA : R/W; bitpos: [10]; default: 0;
 * The interrupt enable bit for the INFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_UDF_CH1_INT_ENA    (BIT(10))
#define DMA_INFIFO_UDF_CH1_INT_ENA_M  (DMA_INFIFO_UDF_CH1_INT_ENA_V << DMA_INFIFO_UDF_CH1_INT_ENA_S)
#define DMA_INFIFO_UDF_CH1_INT_ENA_V  0x00000001
#define DMA_INFIFO_UDF_CH1_INT_ENA_S  10

/* DMA_INFIFO_OVF_CH1_INT_ENA : R/W; bitpos: [9]; default: 0;
 * The interrupt enable bit for the INFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_OVF_CH1_INT_ENA    (BIT(9))
#define DMA_INFIFO_OVF_CH1_INT_ENA_M  (DMA_INFIFO_OVF_CH1_INT_ENA_V << DMA_INFIFO_OVF_CH1_INT_ENA_S)
#define DMA_INFIFO_OVF_CH1_INT_ENA_V  0x00000001
#define DMA_INFIFO_OVF_CH1_INT_ENA_S  9

/* DMA_OUT_TOTAL_EOF_CH1_INT_ENA : R/W; bitpos: [8]; default: 0;
 * The interrupt enable bit for the OUT_TOTAL_EOF_CH_INT interrupt.
 */

#define DMA_OUT_TOTAL_EOF_CH1_INT_ENA    (BIT(8))
#define DMA_OUT_TOTAL_EOF_CH1_INT_ENA_M  (DMA_OUT_TOTAL_EOF_CH1_INT_ENA_V << DMA_OUT_TOTAL_EOF_CH1_INT_ENA_S)
#define DMA_OUT_TOTAL_EOF_CH1_INT_ENA_V  0x00000001
#define DMA_OUT_TOTAL_EOF_CH1_INT_ENA_S  8

/* DMA_IN_DSCR_EMPTY_CH1_INT_ENA : R/W; bitpos: [7]; default: 0;
 * The interrupt enable bit for the IN_DSCR_EMPTY_CH_INT interrupt.
 */

#define DMA_IN_DSCR_EMPTY_CH1_INT_ENA    (BIT(7))
#define DMA_IN_DSCR_EMPTY_CH1_INT_ENA_M  (DMA_IN_DSCR_EMPTY_CH1_INT_ENA_V << DMA_IN_DSCR_EMPTY_CH1_INT_ENA_S)
#define DMA_IN_DSCR_EMPTY_CH1_INT_ENA_V  0x00000001
#define DMA_IN_DSCR_EMPTY_CH1_INT_ENA_S  7

/* DMA_OUT_DSCR_ERR_CH1_INT_ENA : R/W; bitpos: [6]; default: 0;
 * The interrupt enable bit for the OUT_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_OUT_DSCR_ERR_CH1_INT_ENA    (BIT(6))
#define DMA_OUT_DSCR_ERR_CH1_INT_ENA_M  (DMA_OUT_DSCR_ERR_CH1_INT_ENA_V << DMA_OUT_DSCR_ERR_CH1_INT_ENA_S)
#define DMA_OUT_DSCR_ERR_CH1_INT_ENA_V  0x00000001
#define DMA_OUT_DSCR_ERR_CH1_INT_ENA_S  6

/* DMA_IN_DSCR_ERR_CH1_INT_ENA : R/W; bitpos: [5]; default: 0;
 * The interrupt enable bit for the IN_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_IN_DSCR_ERR_CH1_INT_ENA    (BIT(5))
#define DMA_IN_DSCR_ERR_CH1_INT_ENA_M  (DMA_IN_DSCR_ERR_CH1_INT_ENA_V << DMA_IN_DSCR_ERR_CH1_INT_ENA_S)
#define DMA_IN_DSCR_ERR_CH1_INT_ENA_V  0x00000001
#define DMA_IN_DSCR_ERR_CH1_INT_ENA_S  5

/* DMA_OUT_EOF_CH1_INT_ENA : R/W; bitpos: [4]; default: 0;
 * The interrupt enable bit for the OUT_EOF_CH_INT interrupt.
 */

#define DMA_OUT_EOF_CH1_INT_ENA    (BIT(4))
#define DMA_OUT_EOF_CH1_INT_ENA_M  (DMA_OUT_EOF_CH1_INT_ENA_V << DMA_OUT_EOF_CH1_INT_ENA_S)
#define DMA_OUT_EOF_CH1_INT_ENA_V  0x00000001
#define DMA_OUT_EOF_CH1_INT_ENA_S  4

/* DMA_OUT_DONE_CH1_INT_ENA : R/W; bitpos: [3]; default: 0;
 * The interrupt enable bit for the OUT_DONE_CH_INT interrupt.
 */

#define DMA_OUT_DONE_CH1_INT_ENA    (BIT(3))
#define DMA_OUT_DONE_CH1_INT_ENA_M  (DMA_OUT_DONE_CH1_INT_ENA_V << DMA_OUT_DONE_CH1_INT_ENA_S)
#define DMA_OUT_DONE_CH1_INT_ENA_V  0x00000001
#define DMA_OUT_DONE_CH1_INT_ENA_S  3

/* DMA_IN_ERR_EOF_CH1_INT_ENA : R/W; bitpos: [2]; default: 0;
 * The interrupt enable bit for the IN_ERR_EOF_CH_INT interrupt.
 */

#define DMA_IN_ERR_EOF_CH1_INT_ENA    (BIT(2))
#define DMA_IN_ERR_EOF_CH1_INT_ENA_M  (DMA_IN_ERR_EOF_CH1_INT_ENA_V << DMA_IN_ERR_EOF_CH1_INT_ENA_S)
#define DMA_IN_ERR_EOF_CH1_INT_ENA_V  0x00000001
#define DMA_IN_ERR_EOF_CH1_INT_ENA_S  2

/* DMA_IN_SUC_EOF_CH1_INT_ENA : R/W; bitpos: [1]; default: 0;
 * The interrupt enable bit for the IN_SUC_EOF_CH_INT interrupt.
 */

#define DMA_IN_SUC_EOF_CH1_INT_ENA    (BIT(1))
#define DMA_IN_SUC_EOF_CH1_INT_ENA_M  (DMA_IN_SUC_EOF_CH1_INT_ENA_V << DMA_IN_SUC_EOF_CH1_INT_ENA_S)
#define DMA_IN_SUC_EOF_CH1_INT_ENA_V  0x00000001
#define DMA_IN_SUC_EOF_CH1_INT_ENA_S  1

/* DMA_IN_DONE_CH1_INT_ENA : R/W; bitpos: [0]; default: 0;
 * The interrupt enable bit for the IN_DONE_CH_INT interrupt.
 */

#define DMA_IN_DONE_CH1_INT_ENA    (BIT(0))
#define DMA_IN_DONE_CH1_INT_ENA_M  (DMA_IN_DONE_CH1_INT_ENA_V << DMA_IN_DONE_CH1_INT_ENA_S)
#define DMA_IN_DONE_CH1_INT_ENA_V  0x00000001
#define DMA_IN_DONE_CH1_INT_ENA_S  0

/* DMA_INT_CLR_CH1_REG register
 * DMA_INT_CLR_CH1_REG.
 */

#define DMA_INT_CLR_CH1_REG (DR_REG_GDMA_BASE + 0x1c)

/* DMA_OUTFIFO_UDF_CH1_INT_CLR : WT; bitpos: [12]; default: 0;
 * Set this bit to clear the OUTFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_UDF_CH1_INT_CLR    (BIT(12))
#define DMA_OUTFIFO_UDF_CH1_INT_CLR_M  (DMA_OUTFIFO_UDF_CH1_INT_CLR_V << DMA_OUTFIFO_UDF_CH1_INT_CLR_S)
#define DMA_OUTFIFO_UDF_CH1_INT_CLR_V  0x00000001
#define DMA_OUTFIFO_UDF_CH1_INT_CLR_S  12

/* DMA_OUTFIFO_OVF_CH1_INT_CLR : WT; bitpos: [11]; default: 0;
 * Set this bit to clear the OUTFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_OVF_CH1_INT_CLR    (BIT(11))
#define DMA_OUTFIFO_OVF_CH1_INT_CLR_M  (DMA_OUTFIFO_OVF_CH1_INT_CLR_V << DMA_OUTFIFO_OVF_CH1_INT_CLR_S)
#define DMA_OUTFIFO_OVF_CH1_INT_CLR_V  0x00000001
#define DMA_OUTFIFO_OVF_CH1_INT_CLR_S  11

/* DMA_INFIFO_UDF_CH1_INT_CLR : WT; bitpos: [10]; default: 0;
 * Set this bit to clear the INFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_UDF_CH1_INT_CLR    (BIT(10))
#define DMA_INFIFO_UDF_CH1_INT_CLR_M  (DMA_INFIFO_UDF_CH1_INT_CLR_V << DMA_INFIFO_UDF_CH1_INT_CLR_S)
#define DMA_INFIFO_UDF_CH1_INT_CLR_V  0x00000001
#define DMA_INFIFO_UDF_CH1_INT_CLR_S  10

/* DMA_INFIFO_OVF_CH1_INT_CLR : WT; bitpos: [9]; default: 0;
 * Set this bit to clear the INFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_OVF_CH1_INT_CLR    (BIT(9))
#define DMA_INFIFO_OVF_CH1_INT_CLR_M  (DMA_INFIFO_OVF_CH1_INT_CLR_V << DMA_INFIFO_OVF_CH1_INT_CLR_S)
#define DMA_INFIFO_OVF_CH1_INT_CLR_V  0x00000001
#define DMA_INFIFO_OVF_CH1_INT_CLR_S  9

/* DMA_OUT_TOTAL_EOF_CH1_INT_CLR : WT; bitpos: [8]; default: 0;
 * Set this bit to clear the OUT_TOTAL_EOF_CH_INT interrupt.
 */

#define DMA_OUT_TOTAL_EOF_CH1_INT_CLR    (BIT(8))
#define DMA_OUT_TOTAL_EOF_CH1_INT_CLR_M  (DMA_OUT_TOTAL_EOF_CH1_INT_CLR_V << DMA_OUT_TOTAL_EOF_CH1_INT_CLR_S)
#define DMA_OUT_TOTAL_EOF_CH1_INT_CLR_V  0x00000001
#define DMA_OUT_TOTAL_EOF_CH1_INT_CLR_S  8

/* DMA_IN_DSCR_EMPTY_CH1_INT_CLR : WT; bitpos: [7]; default: 0;
 * Set this bit to clear the IN_DSCR_EMPTY_CH_INT interrupt.
 */

#define DMA_IN_DSCR_EMPTY_CH1_INT_CLR    (BIT(7))
#define DMA_IN_DSCR_EMPTY_CH1_INT_CLR_M  (DMA_IN_DSCR_EMPTY_CH1_INT_CLR_V << DMA_IN_DSCR_EMPTY_CH1_INT_CLR_S)
#define DMA_IN_DSCR_EMPTY_CH1_INT_CLR_V  0x00000001
#define DMA_IN_DSCR_EMPTY_CH1_INT_CLR_S  7

/* DMA_OUT_DSCR_ERR_CH1_INT_CLR : WT; bitpos: [6]; default: 0;
 * Set this bit to clear the OUT_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_OUT_DSCR_ERR_CH1_INT_CLR    (BIT(6))
#define DMA_OUT_DSCR_ERR_CH1_INT_CLR_M  (DMA_OUT_DSCR_ERR_CH1_INT_CLR_V << DMA_OUT_DSCR_ERR_CH1_INT_CLR_S)
#define DMA_OUT_DSCR_ERR_CH1_INT_CLR_V  0x00000001
#define DMA_OUT_DSCR_ERR_CH1_INT_CLR_S  6

/* DMA_IN_DSCR_ERR_CH1_INT_CLR : WT; bitpos: [5]; default: 0;
 * Set this bit to clear the IN_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_IN_DSCR_ERR_CH1_INT_CLR    (BIT(5))
#define DMA_IN_DSCR_ERR_CH1_INT_CLR_M  (DMA_IN_DSCR_ERR_CH1_INT_CLR_V << DMA_IN_DSCR_ERR_CH1_INT_CLR_S)
#define DMA_IN_DSCR_ERR_CH1_INT_CLR_V  0x00000001
#define DMA_IN_DSCR_ERR_CH1_INT_CLR_S  5

/* DMA_OUT_EOF_CH1_INT_CLR : WT; bitpos: [4]; default: 0;
 * Set this bit to clear the OUT_EOF_CH_INT interrupt.
 */

#define DMA_OUT_EOF_CH1_INT_CLR    (BIT(4))
#define DMA_OUT_EOF_CH1_INT_CLR_M  (DMA_OUT_EOF_CH1_INT_CLR_V << DMA_OUT_EOF_CH1_INT_CLR_S)
#define DMA_OUT_EOF_CH1_INT_CLR_V  0x00000001
#define DMA_OUT_EOF_CH1_INT_CLR_S  4

/* DMA_OUT_DONE_CH1_INT_CLR : WT; bitpos: [3]; default: 0;
 * Set this bit to clear the OUT_DONE_CH_INT interrupt.
 */

#define DMA_OUT_DONE_CH1_INT_CLR    (BIT(3))
#define DMA_OUT_DONE_CH1_INT_CLR_M  (DMA_OUT_DONE_CH1_INT_CLR_V << DMA_OUT_DONE_CH1_INT_CLR_S)
#define DMA_OUT_DONE_CH1_INT_CLR_V  0x00000001
#define DMA_OUT_DONE_CH1_INT_CLR_S  3

/* DMA_IN_ERR_EOF_CH1_INT_CLR : WT; bitpos: [2]; default: 0;
 * Set this bit to clear the IN_ERR_EOF_CH_INT interrupt.
 */

#define DMA_IN_ERR_EOF_CH1_INT_CLR    (BIT(2))
#define DMA_IN_ERR_EOF_CH1_INT_CLR_M  (DMA_IN_ERR_EOF_CH1_INT_CLR_V << DMA_IN_ERR_EOF_CH1_INT_CLR_S)
#define DMA_IN_ERR_EOF_CH1_INT_CLR_V  0x00000001
#define DMA_IN_ERR_EOF_CH1_INT_CLR_S  2

/* DMA_IN_SUC_EOF_CH1_INT_CLR : WT; bitpos: [1]; default: 0;
 * Set this bit to clear the IN_SUC_EOF_CH_INT interrupt.
 */

#define DMA_IN_SUC_EOF_CH1_INT_CLR    (BIT(1))
#define DMA_IN_SUC_EOF_CH1_INT_CLR_M  (DMA_IN_SUC_EOF_CH1_INT_CLR_V << DMA_IN_SUC_EOF_CH1_INT_CLR_S)
#define DMA_IN_SUC_EOF_CH1_INT_CLR_V  0x00000001
#define DMA_IN_SUC_EOF_CH1_INT_CLR_S  1

/* DMA_IN_DONE_CH1_INT_CLR : WT; bitpos: [0]; default: 0;
 * Set this bit to clear the IN_DONE_CH_INT interrupt.
 */

#define DMA_IN_DONE_CH1_INT_CLR    (BIT(0))
#define DMA_IN_DONE_CH1_INT_CLR_M  (DMA_IN_DONE_CH1_INT_CLR_V << DMA_IN_DONE_CH1_INT_CLR_S)
#define DMA_IN_DONE_CH1_INT_CLR_V  0x00000001
#define DMA_IN_DONE_CH1_INT_CLR_S  0

/* DMA_INT_RAW_CH2_REG register
 * DMA_INT_RAW_CH2_REG.
 */

#define DMA_INT_RAW_CH2_REG (DR_REG_GDMA_BASE + 0x20)

/* DMA_OUTFIFO_UDF_CH2_INT_RAW : R/WTC/SS; bitpos: [12]; default: 0;
 * This raw interrupt bit turns to high level when level 1 fifo of Tx
 * channel 2 is underflow.
 */

#define DMA_OUTFIFO_UDF_CH2_INT_RAW    (BIT(12))
#define DMA_OUTFIFO_UDF_CH2_INT_RAW_M  (DMA_OUTFIFO_UDF_CH2_INT_RAW_V << DMA_OUTFIFO_UDF_CH2_INT_RAW_S)
#define DMA_OUTFIFO_UDF_CH2_INT_RAW_V  0x00000001
#define DMA_OUTFIFO_UDF_CH2_INT_RAW_S  12

/* DMA_OUTFIFO_OVF_CH2_INT_RAW : R/WTC/SS; bitpos: [11]; default: 0;
 * This raw interrupt bit turns to high level when level 1 fifo of Tx
 * channel 2 is overflow.
 */

#define DMA_OUTFIFO_OVF_CH2_INT_RAW    (BIT(11))
#define DMA_OUTFIFO_OVF_CH2_INT_RAW_M  (DMA_OUTFIFO_OVF_CH2_INT_RAW_V << DMA_OUTFIFO_OVF_CH2_INT_RAW_S)
#define DMA_OUTFIFO_OVF_CH2_INT_RAW_V  0x00000001
#define DMA_OUTFIFO_OVF_CH2_INT_RAW_S  11

/* DMA_INFIFO_UDF_CH2_INT_RAW : R/WTC/SS; bitpos: [10]; default: 0;
 * This raw interrupt bit turns to high level when level 1 fifo of Rx
 * channel 2 is underflow.
 */

#define DMA_INFIFO_UDF_CH2_INT_RAW    (BIT(10))
#define DMA_INFIFO_UDF_CH2_INT_RAW_M  (DMA_INFIFO_UDF_CH2_INT_RAW_V << DMA_INFIFO_UDF_CH2_INT_RAW_S)
#define DMA_INFIFO_UDF_CH2_INT_RAW_V  0x00000001
#define DMA_INFIFO_UDF_CH2_INT_RAW_S  10

/* DMA_INFIFO_OVF_CH2_INT_RAW : R/WTC/SS; bitpos: [9]; default: 0;
 * This raw interrupt bit turns to high level when level 1 fifo of Rx
 * channel 2 is overflow.
 */

#define DMA_INFIFO_OVF_CH2_INT_RAW    (BIT(9))
#define DMA_INFIFO_OVF_CH2_INT_RAW_M  (DMA_INFIFO_OVF_CH2_INT_RAW_V << DMA_INFIFO_OVF_CH2_INT_RAW_S)
#define DMA_INFIFO_OVF_CH2_INT_RAW_V  0x00000001
#define DMA_INFIFO_OVF_CH2_INT_RAW_S  9

/* DMA_OUT_TOTAL_EOF_CH2_INT_RAW : R/WTC/SS; bitpos: [8]; default: 0;
 * The raw interrupt bit turns to high level when data corresponding a
 * outlink (includes one link descriptor or few link descriptors) is
 * transmitted out for Tx channel 2.
 */

#define DMA_OUT_TOTAL_EOF_CH2_INT_RAW    (BIT(8))
#define DMA_OUT_TOTAL_EOF_CH2_INT_RAW_M  (DMA_OUT_TOTAL_EOF_CH2_INT_RAW_V << DMA_OUT_TOTAL_EOF_CH2_INT_RAW_S)
#define DMA_OUT_TOTAL_EOF_CH2_INT_RAW_V  0x00000001
#define DMA_OUT_TOTAL_EOF_CH2_INT_RAW_S  8

/* DMA_IN_DSCR_EMPTY_CH2_INT_RAW : R/WTC/SS; bitpos: [7]; default: 0;
 * The raw interrupt bit turns to high level when Rx buffer pointed by
 * inlink is full and receiving data is not completed, but there is no more
 * inlink for Rx channel 2.
 */

#define DMA_IN_DSCR_EMPTY_CH2_INT_RAW    (BIT(7))
#define DMA_IN_DSCR_EMPTY_CH2_INT_RAW_M  (DMA_IN_DSCR_EMPTY_CH2_INT_RAW_V << DMA_IN_DSCR_EMPTY_CH2_INT_RAW_S)
#define DMA_IN_DSCR_EMPTY_CH2_INT_RAW_V  0x00000001
#define DMA_IN_DSCR_EMPTY_CH2_INT_RAW_S  7

/* DMA_OUT_DSCR_ERR_CH2_INT_RAW : R/WTC/SS; bitpos: [6]; default: 0;
 * The raw interrupt bit turns to high level when detecting outlink
 * descriptor error, including owner error, the second and third word error
 * of outlink descriptor for Tx channel 2.
 */

#define DMA_OUT_DSCR_ERR_CH2_INT_RAW    (BIT(6))
#define DMA_OUT_DSCR_ERR_CH2_INT_RAW_M  (DMA_OUT_DSCR_ERR_CH2_INT_RAW_V << DMA_OUT_DSCR_ERR_CH2_INT_RAW_S)
#define DMA_OUT_DSCR_ERR_CH2_INT_RAW_V  0x00000001
#define DMA_OUT_DSCR_ERR_CH2_INT_RAW_S  6

/* DMA_IN_DSCR_ERR_CH2_INT_RAW : R/WTC/SS; bitpos: [5]; default: 0;
 * The raw interrupt bit turns to high level when detecting inlink
 * descriptor error, including owner error, the second and third word error
 * of inlink descriptor for Rx channel 2.
 */

#define DMA_IN_DSCR_ERR_CH2_INT_RAW    (BIT(5))
#define DMA_IN_DSCR_ERR_CH2_INT_RAW_M  (DMA_IN_DSCR_ERR_CH2_INT_RAW_V << DMA_IN_DSCR_ERR_CH2_INT_RAW_S)
#define DMA_IN_DSCR_ERR_CH2_INT_RAW_V  0x00000001
#define DMA_IN_DSCR_ERR_CH2_INT_RAW_S  5

/* DMA_OUT_EOF_CH2_INT_RAW : R/WTC/SS; bitpos: [4]; default: 0;
 * The raw interrupt bit turns to high level when the last data pointed by
 * one outlink descriptor has been read from memory for Tx channel 2.
 */

#define DMA_OUT_EOF_CH2_INT_RAW    (BIT(4))
#define DMA_OUT_EOF_CH2_INT_RAW_M  (DMA_OUT_EOF_CH2_INT_RAW_V << DMA_OUT_EOF_CH2_INT_RAW_S)
#define DMA_OUT_EOF_CH2_INT_RAW_V  0x00000001
#define DMA_OUT_EOF_CH2_INT_RAW_S  4

/* DMA_OUT_DONE_CH2_INT_RAW : R/WTC/SS; bitpos: [3]; default: 0;
 * The raw interrupt bit turns to high level when the last data pointed by
 * one outlink descriptor has been transmitted to peripherals for Tx channel
 * 2.
 */

#define DMA_OUT_DONE_CH2_INT_RAW    (BIT(3))
#define DMA_OUT_DONE_CH2_INT_RAW_M  (DMA_OUT_DONE_CH2_INT_RAW_V << DMA_OUT_DONE_CH2_INT_RAW_S)
#define DMA_OUT_DONE_CH2_INT_RAW_V  0x00000001
#define DMA_OUT_DONE_CH2_INT_RAW_S  3

/* DMA_IN_ERR_EOF_CH2_INT_RAW : R/WTC/SS; bitpos: [2]; default: 0;
 * The raw interrupt bit turns to high level when data error is detected
 * only in the case that the peripheral is UHCI0 for Rx channel 2. For other
 * peripherals, this raw interrupt is reserved.
 */

#define DMA_IN_ERR_EOF_CH2_INT_RAW    (BIT(2))
#define DMA_IN_ERR_EOF_CH2_INT_RAW_M  (DMA_IN_ERR_EOF_CH2_INT_RAW_V << DMA_IN_ERR_EOF_CH2_INT_RAW_S)
#define DMA_IN_ERR_EOF_CH2_INT_RAW_V  0x00000001
#define DMA_IN_ERR_EOF_CH2_INT_RAW_S  2

/* DMA_IN_SUC_EOF_CH2_INT_RAW : R/WTC/SS; bitpos: [1]; default: 0;
 * The raw interrupt bit turns to high level when the last data pointed by
 * one inlink descriptor has been received for Rx channel 2. For UHCI0, the
 * raw interrupt bit turns to high level when the last data pointed by one
 * inlink descriptor has been received and no data error is detected for Rx
 * channel 2.
 */

#define DMA_IN_SUC_EOF_CH2_INT_RAW    (BIT(1))
#define DMA_IN_SUC_EOF_CH2_INT_RAW_M  (DMA_IN_SUC_EOF_CH2_INT_RAW_V << DMA_IN_SUC_EOF_CH2_INT_RAW_S)
#define DMA_IN_SUC_EOF_CH2_INT_RAW_V  0x00000001
#define DMA_IN_SUC_EOF_CH2_INT_RAW_S  1

/* DMA_IN_DONE_CH2_INT_RAW : R/WTC/SS; bitpos: [0]; default: 0;
 * The raw interrupt bit turns to high level when the last data pointed by
 * one inlink descriptor has been received for Rx channel 2.
 */

#define DMA_IN_DONE_CH2_INT_RAW    (BIT(0))
#define DMA_IN_DONE_CH2_INT_RAW_M  (DMA_IN_DONE_CH2_INT_RAW_V << DMA_IN_DONE_CH2_INT_RAW_S)
#define DMA_IN_DONE_CH2_INT_RAW_V  0x00000001
#define DMA_IN_DONE_CH2_INT_RAW_S  0

/* DMA_INT_ST_CH2_REG register
 * DMA_INT_ST_CH2_REG.
 */

#define DMA_INT_ST_CH2_REG (DR_REG_GDMA_BASE + 0x24)

/* DMA_OUTFIFO_UDF_CH2_INT_ST : RO; bitpos: [12]; default: 0;
 * The raw interrupt status bit for the OUTFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_UDF_CH2_INT_ST    (BIT(12))
#define DMA_OUTFIFO_UDF_CH2_INT_ST_M  (DMA_OUTFIFO_UDF_CH2_INT_ST_V << DMA_OUTFIFO_UDF_CH2_INT_ST_S)
#define DMA_OUTFIFO_UDF_CH2_INT_ST_V  0x00000001
#define DMA_OUTFIFO_UDF_CH2_INT_ST_S  12

/* DMA_OUTFIFO_OVF_CH2_INT_ST : RO; bitpos: [11]; default: 0;
 * The raw interrupt status bit for the OUTFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_OVF_CH2_INT_ST    (BIT(11))
#define DMA_OUTFIFO_OVF_CH2_INT_ST_M  (DMA_OUTFIFO_OVF_CH2_INT_ST_V << DMA_OUTFIFO_OVF_CH2_INT_ST_S)
#define DMA_OUTFIFO_OVF_CH2_INT_ST_V  0x00000001
#define DMA_OUTFIFO_OVF_CH2_INT_ST_S  11

/* DMA_INFIFO_UDF_CH2_INT_ST : RO; bitpos: [10]; default: 0;
 * The raw interrupt status bit for the INFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_UDF_CH2_INT_ST    (BIT(10))
#define DMA_INFIFO_UDF_CH2_INT_ST_M  (DMA_INFIFO_UDF_CH2_INT_ST_V << DMA_INFIFO_UDF_CH2_INT_ST_S)
#define DMA_INFIFO_UDF_CH2_INT_ST_V  0x00000001
#define DMA_INFIFO_UDF_CH2_INT_ST_S  10

/* DMA_INFIFO_OVF_CH2_INT_ST : RO; bitpos: [9]; default: 0;
 * The raw interrupt status bit for the INFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_OVF_CH2_INT_ST    (BIT(9))
#define DMA_INFIFO_OVF_CH2_INT_ST_M  (DMA_INFIFO_OVF_CH2_INT_ST_V << DMA_INFIFO_OVF_CH2_INT_ST_S)
#define DMA_INFIFO_OVF_CH2_INT_ST_V  0x00000001
#define DMA_INFIFO_OVF_CH2_INT_ST_S  9

/* DMA_OUT_TOTAL_EOF_CH2_INT_ST : RO; bitpos: [8]; default: 0;
 * The raw interrupt status bit for the OUT_TOTAL_EOF_CH_INT interrupt.
 */

#define DMA_OUT_TOTAL_EOF_CH2_INT_ST    (BIT(8))
#define DMA_OUT_TOTAL_EOF_CH2_INT_ST_M  (DMA_OUT_TOTAL_EOF_CH2_INT_ST_V << DMA_OUT_TOTAL_EOF_CH2_INT_ST_S)
#define DMA_OUT_TOTAL_EOF_CH2_INT_ST_V  0x00000001
#define DMA_OUT_TOTAL_EOF_CH2_INT_ST_S  8

/* DMA_IN_DSCR_EMPTY_CH2_INT_ST : RO; bitpos: [7]; default: 0;
 * The raw interrupt status bit for the IN_DSCR_EMPTY_CH_INT interrupt.
 */

#define DMA_IN_DSCR_EMPTY_CH2_INT_ST    (BIT(7))
#define DMA_IN_DSCR_EMPTY_CH2_INT_ST_M  (DMA_IN_DSCR_EMPTY_CH2_INT_ST_V << DMA_IN_DSCR_EMPTY_CH2_INT_ST_S)
#define DMA_IN_DSCR_EMPTY_CH2_INT_ST_V  0x00000001
#define DMA_IN_DSCR_EMPTY_CH2_INT_ST_S  7

/* DMA_OUT_DSCR_ERR_CH2_INT_ST : RO; bitpos: [6]; default: 0;
 * The raw interrupt status bit for the OUT_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_OUT_DSCR_ERR_CH2_INT_ST    (BIT(6))
#define DMA_OUT_DSCR_ERR_CH2_INT_ST_M  (DMA_OUT_DSCR_ERR_CH2_INT_ST_V << DMA_OUT_DSCR_ERR_CH2_INT_ST_S)
#define DMA_OUT_DSCR_ERR_CH2_INT_ST_V  0x00000001
#define DMA_OUT_DSCR_ERR_CH2_INT_ST_S  6

/* DMA_IN_DSCR_ERR_CH2_INT_ST : RO; bitpos: [5]; default: 0;
 * The raw interrupt status bit for the IN_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_IN_DSCR_ERR_CH2_INT_ST    (BIT(5))
#define DMA_IN_DSCR_ERR_CH2_INT_ST_M  (DMA_IN_DSCR_ERR_CH2_INT_ST_V << DMA_IN_DSCR_ERR_CH2_INT_ST_S)
#define DMA_IN_DSCR_ERR_CH2_INT_ST_V  0x00000001
#define DMA_IN_DSCR_ERR_CH2_INT_ST_S  5

/* DMA_OUT_EOF_CH2_INT_ST : RO; bitpos: [4]; default: 0;
 * The raw interrupt status bit for the OUT_EOF_CH_INT interrupt.
 */

#define DMA_OUT_EOF_CH2_INT_ST    (BIT(4))
#define DMA_OUT_EOF_CH2_INT_ST_M  (DMA_OUT_EOF_CH2_INT_ST_V << DMA_OUT_EOF_CH2_INT_ST_S)
#define DMA_OUT_EOF_CH2_INT_ST_V  0x00000001
#define DMA_OUT_EOF_CH2_INT_ST_S  4

/* DMA_OUT_DONE_CH2_INT_ST : RO; bitpos: [3]; default: 0;
 * The raw interrupt status bit for the OUT_DONE_CH_INT interrupt.
 */

#define DMA_OUT_DONE_CH2_INT_ST    (BIT(3))
#define DMA_OUT_DONE_CH2_INT_ST_M  (DMA_OUT_DONE_CH2_INT_ST_V << DMA_OUT_DONE_CH2_INT_ST_S)
#define DMA_OUT_DONE_CH2_INT_ST_V  0x00000001
#define DMA_OUT_DONE_CH2_INT_ST_S  3

/* DMA_IN_ERR_EOF_CH2_INT_ST : RO; bitpos: [2]; default: 0;
 * The raw interrupt status bit for the IN_ERR_EOF_CH_INT interrupt.
 */

#define DMA_IN_ERR_EOF_CH2_INT_ST    (BIT(2))
#define DMA_IN_ERR_EOF_CH2_INT_ST_M  (DMA_IN_ERR_EOF_CH2_INT_ST_V << DMA_IN_ERR_EOF_CH2_INT_ST_S)
#define DMA_IN_ERR_EOF_CH2_INT_ST_V  0x00000001
#define DMA_IN_ERR_EOF_CH2_INT_ST_S  2

/* DMA_IN_SUC_EOF_CH2_INT_ST : RO; bitpos: [1]; default: 0;
 * The raw interrupt status bit for the IN_SUC_EOF_CH_INT interrupt.
 */

#define DMA_IN_SUC_EOF_CH2_INT_ST    (BIT(1))
#define DMA_IN_SUC_EOF_CH2_INT_ST_M  (DMA_IN_SUC_EOF_CH2_INT_ST_V << DMA_IN_SUC_EOF_CH2_INT_ST_S)
#define DMA_IN_SUC_EOF_CH2_INT_ST_V  0x00000001
#define DMA_IN_SUC_EOF_CH2_INT_ST_S  1

/* DMA_IN_DONE_CH2_INT_ST : RO; bitpos: [0]; default: 0;
 * The raw interrupt status bit for the IN_DONE_CH_INT interrupt.
 */

#define DMA_IN_DONE_CH2_INT_ST    (BIT(0))
#define DMA_IN_DONE_CH2_INT_ST_M  (DMA_IN_DONE_CH2_INT_ST_V << DMA_IN_DONE_CH2_INT_ST_S)
#define DMA_IN_DONE_CH2_INT_ST_V  0x00000001
#define DMA_IN_DONE_CH2_INT_ST_S  0

/* DMA_INT_ENA_CH2_REG register
 * DMA_INT_ENA_CH2_REG.
 */

#define DMA_INT_ENA_CH2_REG (DR_REG_GDMA_BASE + 0x28)

/* DMA_OUTFIFO_UDF_CH2_INT_ENA : R/W; bitpos: [12]; default: 0;
 * The interrupt enable bit for the OUTFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_UDF_CH2_INT_ENA    (BIT(12))
#define DMA_OUTFIFO_UDF_CH2_INT_ENA_M  (DMA_OUTFIFO_UDF_CH2_INT_ENA_V << DMA_OUTFIFO_UDF_CH2_INT_ENA_S)
#define DMA_OUTFIFO_UDF_CH2_INT_ENA_V  0x00000001
#define DMA_OUTFIFO_UDF_CH2_INT_ENA_S  12

/* DMA_OUTFIFO_OVF_CH2_INT_ENA : R/W; bitpos: [11]; default: 0;
 * The interrupt enable bit for the OUTFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_OVF_CH2_INT_ENA    (BIT(11))
#define DMA_OUTFIFO_OVF_CH2_INT_ENA_M  (DMA_OUTFIFO_OVF_CH2_INT_ENA_V << DMA_OUTFIFO_OVF_CH2_INT_ENA_S)
#define DMA_OUTFIFO_OVF_CH2_INT_ENA_V  0x00000001
#define DMA_OUTFIFO_OVF_CH2_INT_ENA_S  11

/* DMA_INFIFO_UDF_CH2_INT_ENA : R/W; bitpos: [10]; default: 0;
 * The interrupt enable bit for the INFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_UDF_CH2_INT_ENA    (BIT(10))
#define DMA_INFIFO_UDF_CH2_INT_ENA_M  (DMA_INFIFO_UDF_CH2_INT_ENA_V << DMA_INFIFO_UDF_CH2_INT_ENA_S)
#define DMA_INFIFO_UDF_CH2_INT_ENA_V  0x00000001
#define DMA_INFIFO_UDF_CH2_INT_ENA_S  10

/* DMA_INFIFO_OVF_CH2_INT_ENA : R/W; bitpos: [9]; default: 0;
 * The interrupt enable bit for the INFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_OVF_CH2_INT_ENA    (BIT(9))
#define DMA_INFIFO_OVF_CH2_INT_ENA_M  (DMA_INFIFO_OVF_CH2_INT_ENA_V << DMA_INFIFO_OVF_CH2_INT_ENA_S)
#define DMA_INFIFO_OVF_CH2_INT_ENA_V  0x00000001
#define DMA_INFIFO_OVF_CH2_INT_ENA_S  9

/* DMA_OUT_TOTAL_EOF_CH2_INT_ENA : R/W; bitpos: [8]; default: 0;
 * The interrupt enable bit for the OUT_TOTAL_EOF_CH_INT interrupt.
 */

#define DMA_OUT_TOTAL_EOF_CH2_INT_ENA    (BIT(8))
#define DMA_OUT_TOTAL_EOF_CH2_INT_ENA_M  (DMA_OUT_TOTAL_EOF_CH2_INT_ENA_V << DMA_OUT_TOTAL_EOF_CH2_INT_ENA_S)
#define DMA_OUT_TOTAL_EOF_CH2_INT_ENA_V  0x00000001
#define DMA_OUT_TOTAL_EOF_CH2_INT_ENA_S  8

/* DMA_IN_DSCR_EMPTY_CH2_INT_ENA : R/W; bitpos: [7]; default: 0;
 * The interrupt enable bit for the IN_DSCR_EMPTY_CH_INT interrupt.
 */

#define DMA_IN_DSCR_EMPTY_CH2_INT_ENA    (BIT(7))
#define DMA_IN_DSCR_EMPTY_CH2_INT_ENA_M  (DMA_IN_DSCR_EMPTY_CH2_INT_ENA_V << DMA_IN_DSCR_EMPTY_CH2_INT_ENA_S)
#define DMA_IN_DSCR_EMPTY_CH2_INT_ENA_V  0x00000001
#define DMA_IN_DSCR_EMPTY_CH2_INT_ENA_S  7

/* DMA_OUT_DSCR_ERR_CH2_INT_ENA : R/W; bitpos: [6]; default: 0;
 * The interrupt enable bit for the OUT_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_OUT_DSCR_ERR_CH2_INT_ENA    (BIT(6))
#define DMA_OUT_DSCR_ERR_CH2_INT_ENA_M  (DMA_OUT_DSCR_ERR_CH2_INT_ENA_V << DMA_OUT_DSCR_ERR_CH2_INT_ENA_S)
#define DMA_OUT_DSCR_ERR_CH2_INT_ENA_V  0x00000001
#define DMA_OUT_DSCR_ERR_CH2_INT_ENA_S  6

/* DMA_IN_DSCR_ERR_CH2_INT_ENA : R/W; bitpos: [5]; default: 0;
 * The interrupt enable bit for the IN_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_IN_DSCR_ERR_CH2_INT_ENA    (BIT(5))
#define DMA_IN_DSCR_ERR_CH2_INT_ENA_M  (DMA_IN_DSCR_ERR_CH2_INT_ENA_V << DMA_IN_DSCR_ERR_CH2_INT_ENA_S)
#define DMA_IN_DSCR_ERR_CH2_INT_ENA_V  0x00000001
#define DMA_IN_DSCR_ERR_CH2_INT_ENA_S  5

/* DMA_OUT_EOF_CH2_INT_ENA : R/W; bitpos: [4]; default: 0;
 * The interrupt enable bit for the OUT_EOF_CH_INT interrupt.
 */

#define DMA_OUT_EOF_CH2_INT_ENA    (BIT(4))
#define DMA_OUT_EOF_CH2_INT_ENA_M  (DMA_OUT_EOF_CH2_INT_ENA_V << DMA_OUT_EOF_CH2_INT_ENA_S)
#define DMA_OUT_EOF_CH2_INT_ENA_V  0x00000001
#define DMA_OUT_EOF_CH2_INT_ENA_S  4

/* DMA_OUT_DONE_CH2_INT_ENA : R/W; bitpos: [3]; default: 0;
 * The interrupt enable bit for the OUT_DONE_CH_INT interrupt.
 */

#define DMA_OUT_DONE_CH2_INT_ENA    (BIT(3))
#define DMA_OUT_DONE_CH2_INT_ENA_M  (DMA_OUT_DONE_CH2_INT_ENA_V << DMA_OUT_DONE_CH2_INT_ENA_S)
#define DMA_OUT_DONE_CH2_INT_ENA_V  0x00000001
#define DMA_OUT_DONE_CH2_INT_ENA_S  3

/* DMA_IN_ERR_EOF_CH2_INT_ENA : R/W; bitpos: [2]; default: 0;
 * The interrupt enable bit for the IN_ERR_EOF_CH_INT interrupt.
 */

#define DMA_IN_ERR_EOF_CH2_INT_ENA    (BIT(2))
#define DMA_IN_ERR_EOF_CH2_INT_ENA_M  (DMA_IN_ERR_EOF_CH2_INT_ENA_V << DMA_IN_ERR_EOF_CH2_INT_ENA_S)
#define DMA_IN_ERR_EOF_CH2_INT_ENA_V  0x00000001
#define DMA_IN_ERR_EOF_CH2_INT_ENA_S  2

/* DMA_IN_SUC_EOF_CH2_INT_ENA : R/W; bitpos: [1]; default: 0;
 * The interrupt enable bit for the IN_SUC_EOF_CH_INT interrupt.
 */

#define DMA_IN_SUC_EOF_CH2_INT_ENA    (BIT(1))
#define DMA_IN_SUC_EOF_CH2_INT_ENA_M  (DMA_IN_SUC_EOF_CH2_INT_ENA_V << DMA_IN_SUC_EOF_CH2_INT_ENA_S)
#define DMA_IN_SUC_EOF_CH2_INT_ENA_V  0x00000001
#define DMA_IN_SUC_EOF_CH2_INT_ENA_S  1

/* DMA_IN_DONE_CH2_INT_ENA : R/W; bitpos: [0]; default: 0;
 * The interrupt enable bit for the IN_DONE_CH_INT interrupt.
 */

#define DMA_IN_DONE_CH2_INT_ENA    (BIT(0))
#define DMA_IN_DONE_CH2_INT_ENA_M  (DMA_IN_DONE_CH2_INT_ENA_V << DMA_IN_DONE_CH2_INT_ENA_S)
#define DMA_IN_DONE_CH2_INT_ENA_V  0x00000001
#define DMA_IN_DONE_CH2_INT_ENA_S  0

/* DMA_INT_CLR_CH2_REG register
 * DMA_INT_CLR_CH2_REG.
 */

#define DMA_INT_CLR_CH2_REG (DR_REG_GDMA_BASE + 0x2c)

/* DMA_OUTFIFO_UDF_CH2_INT_CLR : WT; bitpos: [12]; default: 0;
 * Set this bit to clear the OUTFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_UDF_CH2_INT_CLR    (BIT(12))
#define DMA_OUTFIFO_UDF_CH2_INT_CLR_M  (DMA_OUTFIFO_UDF_CH2_INT_CLR_V << DMA_OUTFIFO_UDF_CH2_INT_CLR_S)
#define DMA_OUTFIFO_UDF_CH2_INT_CLR_V  0x00000001
#define DMA_OUTFIFO_UDF_CH2_INT_CLR_S  12

/* DMA_OUTFIFO_OVF_CH2_INT_CLR : WT; bitpos: [11]; default: 0;
 * Set this bit to clear the OUTFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_OUTFIFO_OVF_CH2_INT_CLR    (BIT(11))
#define DMA_OUTFIFO_OVF_CH2_INT_CLR_M  (DMA_OUTFIFO_OVF_CH2_INT_CLR_V << DMA_OUTFIFO_OVF_CH2_INT_CLR_S)
#define DMA_OUTFIFO_OVF_CH2_INT_CLR_V  0x00000001
#define DMA_OUTFIFO_OVF_CH2_INT_CLR_S  11

/* DMA_INFIFO_UDF_CH2_INT_CLR : WT; bitpos: [10]; default: 0;
 * Set this bit to clear the INFIFO_UDF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_UDF_CH2_INT_CLR    (BIT(10))
#define DMA_INFIFO_UDF_CH2_INT_CLR_M  (DMA_INFIFO_UDF_CH2_INT_CLR_V << DMA_INFIFO_UDF_CH2_INT_CLR_S)
#define DMA_INFIFO_UDF_CH2_INT_CLR_V  0x00000001
#define DMA_INFIFO_UDF_CH2_INT_CLR_S  10

/* DMA_INFIFO_OVF_CH2_INT_CLR : WT; bitpos: [9]; default: 0;
 * Set this bit to clear the INFIFO_OVF_L1_CH_INT interrupt.
 */

#define DMA_INFIFO_OVF_CH2_INT_CLR    (BIT(9))
#define DMA_INFIFO_OVF_CH2_INT_CLR_M  (DMA_INFIFO_OVF_CH2_INT_CLR_V << DMA_INFIFO_OVF_CH2_INT_CLR_S)
#define DMA_INFIFO_OVF_CH2_INT_CLR_V  0x00000001
#define DMA_INFIFO_OVF_CH2_INT_CLR_S  9

/* DMA_OUT_TOTAL_EOF_CH2_INT_CLR : WT; bitpos: [8]; default: 0;
 * Set this bit to clear the OUT_TOTAL_EOF_CH_INT interrupt.
 */

#define DMA_OUT_TOTAL_EOF_CH2_INT_CLR    (BIT(8))
#define DMA_OUT_TOTAL_EOF_CH2_INT_CLR_M  (DMA_OUT_TOTAL_EOF_CH2_INT_CLR_V << DMA_OUT_TOTAL_EOF_CH2_INT_CLR_S)
#define DMA_OUT_TOTAL_EOF_CH2_INT_CLR_V  0x00000001
#define DMA_OUT_TOTAL_EOF_CH2_INT_CLR_S  8

/* DMA_IN_DSCR_EMPTY_CH2_INT_CLR : WT; bitpos: [7]; default: 0;
 * Set this bit to clear the IN_DSCR_EMPTY_CH_INT interrupt.
 */

#define DMA_IN_DSCR_EMPTY_CH2_INT_CLR    (BIT(7))
#define DMA_IN_DSCR_EMPTY_CH2_INT_CLR_M  (DMA_IN_DSCR_EMPTY_CH2_INT_CLR_V << DMA_IN_DSCR_EMPTY_CH2_INT_CLR_S)
#define DMA_IN_DSCR_EMPTY_CH2_INT_CLR_V  0x00000001
#define DMA_IN_DSCR_EMPTY_CH2_INT_CLR_S  7

/* DMA_OUT_DSCR_ERR_CH2_INT_CLR : WT; bitpos: [6]; default: 0;
 * Set this bit to clear the OUT_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_OUT_DSCR_ERR_CH2_INT_CLR    (BIT(6))
#define DMA_OUT_DSCR_ERR_CH2_INT_CLR_M  (DMA_OUT_DSCR_ERR_CH2_INT_CLR_V << DMA_OUT_DSCR_ERR_CH2_INT_CLR_S)
#define DMA_OUT_DSCR_ERR_CH2_INT_CLR_V  0x00000001
#define DMA_OUT_DSCR_ERR_CH2_INT_CLR_S  6

/* DMA_IN_DSCR_ERR_CH2_INT_CLR : WT; bitpos: [5]; default: 0;
 * Set this bit to clear the IN_DSCR_ERR_CH_INT interrupt.
 */

#define DMA_IN_DSCR_ERR_CH2_INT_CLR    (BIT(5))
#define DMA_IN_DSCR_ERR_CH2_INT_CLR_M  (DMA_IN_DSCR_ERR_CH2_INT_CLR_V << DMA_IN_DSCR_ERR_CH2_INT_CLR_S)
#define DMA_IN_DSCR_ERR_CH2_INT_CLR_V  0x00000001
#define DMA_IN_DSCR_ERR_CH2_INT_CLR_S  5

/* DMA_OUT_EOF_CH2_INT_CLR : WT; bitpos: [4]; default: 0;
 * Set this bit to clear the OUT_EOF_CH_INT interrupt.
 */

#define DMA_OUT_EOF_CH2_INT_CLR    (BIT(4))
#define DMA_OUT_EOF_CH2_INT_CLR_M  (DMA_OUT_EOF_CH2_INT_CLR_V << DMA_OUT_EOF_CH2_INT_CLR_S)
#define DMA_OUT_EOF_CH2_INT_CLR_V  0x00000001
#define DMA_OUT_EOF_CH2_INT_CLR_S  4

/* DMA_OUT_DONE_CH2_INT_CLR : WT; bitpos: [3]; default: 0;
 * Set this bit to clear the OUT_DONE_CH_INT interrupt.
 */

#define DMA_OUT_DONE_CH2_INT_CLR    (BIT(3))
#define DMA_OUT_DONE_CH2_INT_CLR_M  (DMA_OUT_DONE_CH2_INT_CLR_V << DMA_OUT_DONE_CH2_INT_CLR_S)
#define DMA_OUT_DONE_CH2_INT_CLR_V  0x00000001
#define DMA_OUT_DONE_CH2_INT_CLR_S  3

/* DMA_IN_ERR_EOF_CH2_INT_CLR : WT; bitpos: [2]; default: 0;
 * Set this bit to clear the IN_ERR_EOF_CH_INT interrupt.
 */

#define DMA_IN_ERR_EOF_CH2_INT_CLR    (BIT(2))
#define DMA_IN_ERR_EOF_CH2_INT_CLR_M  (DMA_IN_ERR_EOF_CH2_INT_CLR_V << DMA_IN_ERR_EOF_CH2_INT_CLR_S)
#define DMA_IN_ERR_EOF_CH2_INT_CLR_V  0x00000001
#define DMA_IN_ERR_EOF_CH2_INT_CLR_S  2

/* DMA_IN_SUC_EOF_CH2_INT_CLR : WT; bitpos: [1]; default: 0;
 * Set this bit to clear the IN_SUC_EOF_CH_INT interrupt.
 */

#define DMA_IN_SUC_EOF_CH2_INT_CLR    (BIT(1))
#define DMA_IN_SUC_EOF_CH2_INT_CLR_M  (DMA_IN_SUC_EOF_CH2_INT_CLR_V << DMA_IN_SUC_EOF_CH2_INT_CLR_S)
#define DMA_IN_SUC_EOF_CH2_INT_CLR_V  0x00000001
#define DMA_IN_SUC_EOF_CH2_INT_CLR_S  1

/* DMA_IN_DONE_CH2_INT_CLR : WT; bitpos: [0]; default: 0;
 * Set this bit to clear the IN_DONE_CH_INT interrupt.
 */

#define DMA_IN_DONE_CH2_INT_CLR    (BIT(0))
#define DMA_IN_DONE_CH2_INT_CLR_M  (DMA_IN_DONE_CH2_INT_CLR_V << DMA_IN_DONE_CH2_INT_CLR_S)
#define DMA_IN_DONE_CH2_INT_CLR_V  0x00000001
#define DMA_IN_DONE_CH2_INT_CLR_S  0

/* DMA_AHB_TEST_REG register
 * DMA_AHB_TEST_REG.
 */

#define DMA_AHB_TEST_REG (DR_REG_GDMA_BASE + 0x40)

/* DMA_AHB_TESTADDR : R/W; bitpos: [5:4]; default: 0;
 * reserved
 */

#define DMA_AHB_TESTADDR    0x00000003
#define DMA_AHB_TESTADDR_M  (DMA_AHB_TESTADDR_V << DMA_AHB_TESTADDR_S)
#define DMA_AHB_TESTADDR_V  0x00000003
#define DMA_AHB_TESTADDR_S  4

/* DMA_AHB_TESTMODE : R/W; bitpos: [2:0]; default: 0;
 * reserved
 */

#define DMA_AHB_TESTMODE    0x00000007
#define DMA_AHB_TESTMODE_M  (DMA_AHB_TESTMODE_V << DMA_AHB_TESTMODE_S)
#define DMA_AHB_TESTMODE_V  0x00000007
#define DMA_AHB_TESTMODE_S  0

/* DMA_MISC_CONF_REG register
 * DMA_MISC_CONF_REG.
 */

#define DMA_MISC_CONF_REG (DR_REG_GDMA_BASE + 0x44)

/* DMA_CLK_EN : R/W; bitpos: [3]; default: 0;
 * reg_clk_en
 */

#define DMA_CLK_EN    (BIT(3))
#define DMA_CLK_EN_M  (DMA_CLK_EN_V << DMA_CLK_EN_S)
#define DMA_CLK_EN_V  0x00000001
#define DMA_CLK_EN_S  3

/* DMA_ARB_PRI_DIS : R/W; bitpos: [2]; default: 0;
 * Set this bit to disable priority arbitration function.
 */

#define DMA_ARB_PRI_DIS    (BIT(2))
#define DMA_ARB_PRI_DIS_M  (DMA_ARB_PRI_DIS_V << DMA_ARB_PRI_DIS_S)
#define DMA_ARB_PRI_DIS_V  0x00000001
#define DMA_ARB_PRI_DIS_S  2

/* DMA_AHBM_RST_INTER : R/W; bitpos: [0]; default: 0;
 * Set this bit, then clear this bit to reset the internal ahb FSM.
 */

#define DMA_AHBM_RST_INTER    (BIT(0))
#define DMA_AHBM_RST_INTER_M  (DMA_AHBM_RST_INTER_V << DMA_AHBM_RST_INTER_S)
#define DMA_AHBM_RST_INTER_V  0x00000001
#define DMA_AHBM_RST_INTER_S  0

/* DMA_DATE_REG register
 * DMA_DATE_REG.
 */

#define DMA_DATE_REG (DR_REG_GDMA_BASE + 0x48)

/* DMA_DATE : R/W; bitpos: [31:0]; default: 33587792;
 * register version.
 */

#define DMA_DATE    0xFFFFFFFF
#define DMA_DATE_M  (DMA_DATE_V << DMA_DATE_S)
#define DMA_DATE_V  0xFFFFFFFF
#define DMA_DATE_S  0

/* DMA_IN_CONF0_CH0_REG register
 * DMA_IN_CONF0_CH0_REG.
 */

#define DMA_IN_CONF0_CH0_REG (DR_REG_GDMA_BASE + 0x70)

/* DMA_MEM_TRANS_EN_CH0 : R/W; bitpos: [4]; default: 0;
 * Set this bit 1 to enable automatic transmitting data from memory to
 * memory via DMA.
 */

#define DMA_MEM_TRANS_EN_CH0    (BIT(4))
#define DMA_MEM_TRANS_EN_CH0_M  (DMA_MEM_TRANS_EN_CH0_V << DMA_MEM_TRANS_EN_CH0_S)
#define DMA_MEM_TRANS_EN_CH0_V  0x00000001
#define DMA_MEM_TRANS_EN_CH0_S  4

/* DMA_IN_DATA_BURST_EN_CH0 : R/W; bitpos: [3]; default: 0;
 * Set this bit to 1 to enable INCR burst transfer for Rx channel 0
 * receiving data when accessing internal SRAM.
 */

#define DMA_IN_DATA_BURST_EN_CH0    (BIT(3))
#define DMA_IN_DATA_BURST_EN_CH0_M  (DMA_IN_DATA_BURST_EN_CH0_V << DMA_IN_DATA_BURST_EN_CH0_S)
#define DMA_IN_DATA_BURST_EN_CH0_V  0x00000001
#define DMA_IN_DATA_BURST_EN_CH0_S  3

/* DMA_INDSCR_BURST_EN_CH0 : R/W; bitpos: [2]; default: 0;
 * Set this bit to 1 to enable INCR burst transfer for Rx channel 0 reading
 * link descriptor when accessing internal SRAM.
 */

#define DMA_INDSCR_BURST_EN_CH0    (BIT(2))
#define DMA_INDSCR_BURST_EN_CH0_M  (DMA_INDSCR_BURST_EN_CH0_V << DMA_INDSCR_BURST_EN_CH0_S)
#define DMA_INDSCR_BURST_EN_CH0_V  0x00000001
#define DMA_INDSCR_BURST_EN_CH0_S  2

/* DMA_IN_LOOP_TEST_CH0 : R/W; bitpos: [1]; default: 0;
 * reserved
 */

#define DMA_IN_LOOP_TEST_CH0    (BIT(1))
#define DMA_IN_LOOP_TEST_CH0_M  (DMA_IN_LOOP_TEST_CH0_V << DMA_IN_LOOP_TEST_CH0_S)
#define DMA_IN_LOOP_TEST_CH0_V  0x00000001
#define DMA_IN_LOOP_TEST_CH0_S  1

/* DMA_IN_RST_CH0 : R/W; bitpos: [0]; default: 0;
 * This bit is used to reset DMA channel 0 Rx FSM and Rx FIFO pointer.
 */

#define DMA_IN_RST_CH0    (BIT(0))
#define DMA_IN_RST_CH0_M  (DMA_IN_RST_CH0_V << DMA_IN_RST_CH0_S)
#define DMA_IN_RST_CH0_V  0x00000001
#define DMA_IN_RST_CH0_S  0

/* DMA_IN_CONF1_CH0_REG register
 * DMA_IN_CONF1_CH0_REG.
 */

#define DMA_IN_CONF1_CH0_REG (DR_REG_GDMA_BASE + 0x74)

/* DMA_IN_CHECK_OWNER_CH0 : R/W; bitpos: [12]; default: 0;
 * Set this bit to enable checking the owner attribute of the link
 * descriptor.
 */

#define DMA_IN_CHECK_OWNER_CH0    (BIT(12))
#define DMA_IN_CHECK_OWNER_CH0_M  (DMA_IN_CHECK_OWNER_CH0_V << DMA_IN_CHECK_OWNER_CH0_S)
#define DMA_IN_CHECK_OWNER_CH0_V  0x00000001
#define DMA_IN_CHECK_OWNER_CH0_S  12

/* DMA_INFIFO_STATUS_CH0_REG register
 * DMA_INFIFO_STATUS_CH0_REG.
 */

#define DMA_INFIFO_STATUS_CH0_REG (DR_REG_GDMA_BASE + 0x78)

/* DMA_IN_BUF_HUNGRY_CH0 : RO; bitpos: [27]; default: 0;
 * reserved
 */

#define DMA_IN_BUF_HUNGRY_CH0    (BIT(27))
#define DMA_IN_BUF_HUNGRY_CH0_M  (DMA_IN_BUF_HUNGRY_CH0_V << DMA_IN_BUF_HUNGRY_CH0_S)
#define DMA_IN_BUF_HUNGRY_CH0_V  0x00000001
#define DMA_IN_BUF_HUNGRY_CH0_S  27

/* DMA_IN_REMAIN_UNDER_4B_CH0 : RO; bitpos: [26]; default: 1;
 * reserved
 */

#define DMA_IN_REMAIN_UNDER_4B_CH0    (BIT(26))
#define DMA_IN_REMAIN_UNDER_4B_CH0_M  (DMA_IN_REMAIN_UNDER_4B_CH0_V << DMA_IN_REMAIN_UNDER_4B_CH0_S)
#define DMA_IN_REMAIN_UNDER_4B_CH0_V  0x00000001
#define DMA_IN_REMAIN_UNDER_4B_CH0_S  26

/* DMA_IN_REMAIN_UNDER_3B_CH0 : RO; bitpos: [25]; default: 1;
 * reserved
 */

#define DMA_IN_REMAIN_UNDER_3B_CH0    (BIT(25))
#define DMA_IN_REMAIN_UNDER_3B_CH0_M  (DMA_IN_REMAIN_UNDER_3B_CH0_V << DMA_IN_REMAIN_UNDER_3B_CH0_S)
#define DMA_IN_REMAIN_UNDER_3B_CH0_V  0x00000001
#define DMA_IN_REMAIN_UNDER_3B_CH0_S  25

/* DMA_IN_REMAIN_UNDER_2B_CH0 : RO; bitpos: [24]; default: 1;
 * reserved
 */

#define DMA_IN_REMAIN_UNDER_2B_CH0    (BIT(24))
#define DMA_IN_REMAIN_UNDER_2B_CH0_M  (DMA_IN_REMAIN_UNDER_2B_CH0_V << DMA_IN_REMAIN_UNDER_2B_CH0_S)
#define DMA_IN_REMAIN_UNDER_2B_CH0_V  0x00000001
#define DMA_IN_REMAIN_UNDER_2B_CH0_S  24

/* DMA_IN_REMAIN_UNDER_1B_CH0 : RO; bitpos: [23]; default: 1;
 * reserved
 */

#define DMA_IN_REMAIN_UNDER_1B_CH0    (BIT(23))
#define DMA_IN_REMAIN_UNDER_1B_CH0_M  (DMA_IN_REMAIN_UNDER_1B_CH0_V << DMA_IN_REMAIN_UNDER_1B_CH0_S)
#define DMA_IN_REMAIN_UNDER_1B_CH0_V  0x00000001
#define DMA_IN_REMAIN_UNDER_1B_CH0_S  23

/* DMA_INFIFO_CNT_CH0 : RO; bitpos: [7:2]; default: 0;
 * The register stores the byte number of the data in L1 Rx FIFO for Rx
 * channel 0.
 */

#define DMA_INFIFO_CNT_CH0    0x0000003F
#define DMA_INFIFO_CNT_CH0_M  (DMA_INFIFO_CNT_CH0_V << DMA_INFIFO_CNT_CH0_S)
#define DMA_INFIFO_CNT_CH0_V  0x0000003F
#define DMA_INFIFO_CNT_CH0_S  2

/* DMA_INFIFO_EMPTY_CH0 : RO; bitpos: [1]; default: 1;
 * L1 Rx FIFO empty signal for Rx channel 0.
 */

#define DMA_INFIFO_EMPTY_CH0    (BIT(1))
#define DMA_INFIFO_EMPTY_CH0_M  (DMA_INFIFO_EMPTY_CH0_V << DMA_INFIFO_EMPTY_CH0_S)
#define DMA_INFIFO_EMPTY_CH0_V  0x00000001
#define DMA_INFIFO_EMPTY_CH0_S  1

/* DMA_INFIFO_FULL_CH0 : RO; bitpos: [0]; default: 1;
 * L1 Rx FIFO full signal for Rx channel 0.
 */

#define DMA_INFIFO_FULL_CH0    (BIT(0))
#define DMA_INFIFO_FULL_CH0_M  (DMA_INFIFO_FULL_CH0_V << DMA_INFIFO_FULL_CH0_S)
#define DMA_INFIFO_FULL_CH0_V  0x00000001
#define DMA_INFIFO_FULL_CH0_S  0

/* DMA_IN_POP_CH0_REG register
 * DMA_IN_POP_CH0_REG.
 */

#define DMA_IN_POP_CH0_REG (DR_REG_GDMA_BASE + 0x7c)

/* DMA_INFIFO_POP_CH0 : R/W/SC; bitpos: [12]; default: 0;
 * Set this bit to pop data from DMA FIFO.
 */

#define DMA_INFIFO_POP_CH0    (BIT(12))
#define DMA_INFIFO_POP_CH0_M  (DMA_INFIFO_POP_CH0_V << DMA_INFIFO_POP_CH0_S)
#define DMA_INFIFO_POP_CH0_V  0x00000001
#define DMA_INFIFO_POP_CH0_S  12

/* DMA_INFIFO_RDATA_CH0 : RO; bitpos: [11:0]; default: 2048;
 * This register stores the data popping from DMA FIFO.
 */

#define DMA_INFIFO_RDATA_CH0    0x00000FFF
#define DMA_INFIFO_RDATA_CH0_M  (DMA_INFIFO_RDATA_CH0_V << DMA_INFIFO_RDATA_CH0_S)
#define DMA_INFIFO_RDATA_CH0_V  0x00000FFF
#define DMA_INFIFO_RDATA_CH0_S  0

/* DMA_IN_LINK_CH0_REG register
 * DMA_IN_LINK_CH0_REG.
 */

#define DMA_IN_LINK_CH0_REG (DR_REG_GDMA_BASE + 0x80)

/* DMA_INLINK_PARK_CH0 : RO; bitpos: [24]; default: 1;
 * 1: the inlink descriptor's FSM is in idle state.  0: the inlink
 * descriptor's FSM is working.
 */

#define DMA_INLINK_PARK_CH0    (BIT(24))
#define DMA_INLINK_PARK_CH0_M  (DMA_INLINK_PARK_CH0_V << DMA_INLINK_PARK_CH0_S)
#define DMA_INLINK_PARK_CH0_V  0x00000001
#define DMA_INLINK_PARK_CH0_S  24

/* DMA_INLINK_RESTART_CH0 : R/W/SC; bitpos: [23]; default: 0;
 * Set this bit to mount a new inlink descriptor.
 */

#define DMA_INLINK_RESTART_CH0    (BIT(23))
#define DMA_INLINK_RESTART_CH0_M  (DMA_INLINK_RESTART_CH0_V << DMA_INLINK_RESTART_CH0_S)
#define DMA_INLINK_RESTART_CH0_V  0x00000001
#define DMA_INLINK_RESTART_CH0_S  23

/* DMA_INLINK_START_CH0 : R/W/SC; bitpos: [22]; default: 0;
 * Set this bit to start dealing with the inlink descriptors.
 */

#define DMA_INLINK_START_CH0    (BIT(22))
#define DMA_INLINK_START_CH0_M  (DMA_INLINK_START_CH0_V << DMA_INLINK_START_CH0_S)
#define DMA_INLINK_START_CH0_V  0x00000001
#define DMA_INLINK_START_CH0_S  22

/* DMA_INLINK_STOP_CH0 : R/W/SC; bitpos: [21]; default: 0;
 * Set this bit to stop dealing with the inlink descriptors.
 */

#define DMA_INLINK_STOP_CH0    (BIT(21))
#define DMA_INLINK_STOP_CH0_M  (DMA_INLINK_STOP_CH0_V << DMA_INLINK_STOP_CH0_S)
#define DMA_INLINK_STOP_CH0_V  0x00000001
#define DMA_INLINK_STOP_CH0_S  21

/* DMA_INLINK_AUTO_RET_CH0 : R/W; bitpos: [20]; default: 1;
 * Set this bit to return to current inlink descriptor's address, when there
 * are some errors in current receiving data.
 */

#define DMA_INLINK_AUTO_RET_CH0    (BIT(20))
#define DMA_INLINK_AUTO_RET_CH0_M  (DMA_INLINK_AUTO_RET_CH0_V << DMA_INLINK_AUTO_RET_CH0_S)
#define DMA_INLINK_AUTO_RET_CH0_V  0x00000001
#define DMA_INLINK_AUTO_RET_CH0_S  20

/* DMA_INLINK_ADDR_CH0 : R/W; bitpos: [19:0]; default: 0;
 * This register stores the 20 least significant bits of the first inlink
 * descriptor's address.
 */

#define DMA_INLINK_ADDR_CH0    0x000FFFFF
#define DMA_INLINK_ADDR_CH0_M  (DMA_INLINK_ADDR_CH0_V << DMA_INLINK_ADDR_CH0_S)
#define DMA_INLINK_ADDR_CH0_V  0x000FFFFF
#define DMA_INLINK_ADDR_CH0_S  0

/* DMA_IN_STATE_CH0_REG register
 * DMA_IN_STATE_CH0_REG.
 */

#define DMA_IN_STATE_CH0_REG (DR_REG_GDMA_BASE + 0x84)

/* DMA_IN_STATE_CH0 : RO; bitpos: [22:20]; default: 0;
 * reserved
 */

#define DMA_IN_STATE_CH0    0x00000007
#define DMA_IN_STATE_CH0_M  (DMA_IN_STATE_CH0_V << DMA_IN_STATE_CH0_S)
#define DMA_IN_STATE_CH0_V  0x00000007
#define DMA_IN_STATE_CH0_S  20

/* DMA_IN_DSCR_STATE_CH0 : RO; bitpos: [19:18]; default: 0;
 * reserved
 */

#define DMA_IN_DSCR_STATE_CH0    0x00000003
#define DMA_IN_DSCR_STATE_CH0_M  (DMA_IN_DSCR_STATE_CH0_V << DMA_IN_DSCR_STATE_CH0_S)
#define DMA_IN_DSCR_STATE_CH0_V  0x00000003
#define DMA_IN_DSCR_STATE_CH0_S  18

/* DMA_INLINK_DSCR_ADDR_CH0 : RO; bitpos: [17:0]; default: 0;
 * This register stores the current inlink descriptor's address.
 */

#define DMA_INLINK_DSCR_ADDR_CH0    0x0003FFFF
#define DMA_INLINK_DSCR_ADDR_CH0_M  (DMA_INLINK_DSCR_ADDR_CH0_V << DMA_INLINK_DSCR_ADDR_CH0_S)
#define DMA_INLINK_DSCR_ADDR_CH0_V  0x0003FFFF
#define DMA_INLINK_DSCR_ADDR_CH0_S  0

/* DMA_IN_SUC_EOF_DES_ADDR_CH0_REG register
 * DMA_IN_SUC_EOF_DES_ADDR_CH0_REG.
 */

#define DMA_IN_SUC_EOF_DES_ADDR_CH0_REG (DR_REG_GDMA_BASE + 0x88)

/* DMA_IN_SUC_EOF_DES_ADDR_CH0 : RO; bitpos: [31:0]; default: 0;
 * This register stores the address of the inlink descriptor when the EOF
 * bit in this descriptor is 1.
 */

#define DMA_IN_SUC_EOF_DES_ADDR_CH0    0xFFFFFFFF
#define DMA_IN_SUC_EOF_DES_ADDR_CH0_M  (DMA_IN_SUC_EOF_DES_ADDR_CH0_V << DMA_IN_SUC_EOF_DES_ADDR_CH0_S)
#define DMA_IN_SUC_EOF_DES_ADDR_CH0_V  0xFFFFFFFF
#define DMA_IN_SUC_EOF_DES_ADDR_CH0_S  0

/* DMA_IN_ERR_EOF_DES_ADDR_CH0_REG register
 * DMA_IN_ERR_EOF_DES_ADDR_CH0_REG.
 */

#define DMA_IN_ERR_EOF_DES_ADDR_CH0_REG (DR_REG_GDMA_BASE + 0x8c)

/* DMA_IN_ERR_EOF_DES_ADDR_CH0 : RO; bitpos: [31:0]; default: 0;
 * This register stores the address of the inlink descriptor when there are
 * some errors in current receiving data. Only used when peripheral is UHCI0.
 */

#define DMA_IN_ERR_EOF_DES_ADDR_CH0    0xFFFFFFFF
#define DMA_IN_ERR_EOF_DES_ADDR_CH0_M  (DMA_IN_ERR_EOF_DES_ADDR_CH0_V << DMA_IN_ERR_EOF_DES_ADDR_CH0_S)
#define DMA_IN_ERR_EOF_DES_ADDR_CH0_V  0xFFFFFFFF
#define DMA_IN_ERR_EOF_DES_ADDR_CH0_S  0

/* DMA_IN_DSCR_CH0_REG register
 * DMA_IN_DSCR_CH0_REG.
 */

#define DMA_IN_DSCR_CH0_REG (DR_REG_GDMA_BASE + 0x90)

/* DMA_INLINK_DSCR_CH0 : RO; bitpos: [31:0]; default: 0;
 * The address of the current inlink descriptor x.
 */

#define DMA_INLINK_DSCR_CH0    0xFFFFFFFF
#define DMA_INLINK_DSCR_CH0_M  (DMA_INLINK_DSCR_CH0_V << DMA_INLINK_DSCR_CH0_S)
#define DMA_INLINK_DSCR_CH0_V  0xFFFFFFFF
#define DMA_INLINK_DSCR_CH0_S  0

/* DMA_IN_DSCR_BF0_CH0_REG register
 * DMA_IN_DSCR_BF0_CH0_REG.
 */

#define DMA_IN_DSCR_BF0_CH0_REG (DR_REG_GDMA_BASE + 0x94)

/* DMA_INLINK_DSCR_BF0_CH0 : RO; bitpos: [31:0]; default: 0;
 * The address of the last inlink descriptor x-1.
 */

#define DMA_INLINK_DSCR_BF0_CH0    0xFFFFFFFF
#define DMA_INLINK_DSCR_BF0_CH0_M  (DMA_INLINK_DSCR_BF0_CH0_V << DMA_INLINK_DSCR_BF0_CH0_S)
#define DMA_INLINK_DSCR_BF0_CH0_V  0xFFFFFFFF
#define DMA_INLINK_DSCR_BF0_CH0_S  0

/* DMA_IN_DSCR_BF1_CH0_REG register
 * DMA_IN_DSCR_BF1_CH0_REG.
 */

#define DMA_IN_DSCR_BF1_CH0_REG (DR_REG_GDMA_BASE + 0x98)

/* DMA_INLINK_DSCR_BF1_CH0 : RO; bitpos: [31:0]; default: 0;
 * The address of the second-to-last inlink descriptor x-2.
 */

#define DMA_INLINK_DSCR_BF1_CH0    0xFFFFFFFF
#define DMA_INLINK_DSCR_BF1_CH0_M  (DMA_INLINK_DSCR_BF1_CH0_V << DMA_INLINK_DSCR_BF1_CH0_S)
#define DMA_INLINK_DSCR_BF1_CH0_V  0xFFFFFFFF
#define DMA_INLINK_DSCR_BF1_CH0_S  0

/* DMA_IN_PRI_CH0_REG register
 * DMA_IN_PRI_CH0_REG.
 */

#define DMA_IN_PRI_CH0_REG (DR_REG_GDMA_BASE + 0x9c)

/* DMA_RX_PRI_CH0 : R/W; bitpos: [3:0]; default: 0;
 * The priority of Rx channel 0. The larger of the value, the higher of the
 * priority.
 */

#define DMA_RX_PRI_CH0    0x0000000F
#define DMA_RX_PRI_CH0_M  (DMA_RX_PRI_CH0_V << DMA_RX_PRI_CH0_S)
#define DMA_RX_PRI_CH0_V  0x0000000F
#define DMA_RX_PRI_CH0_S  0

/* DMA_IN_PERI_SEL_CH0_REG register
 * DMA_IN_PERI_SEL_CH0_REG.
 */

#define DMA_IN_PERI_SEL_CH0_REG (DR_REG_GDMA_BASE + 0xa0)

/* DMA_PERI_IN_SEL_CH0 : R/W; bitpos: [5:0]; default: 63;
 * This register is used to select peripheral for Rx channel 0. 0:SPI2. 1:
 * reserved. 2: UHCI0. 3: I2S0. 4: reserved. 5: reserved. 6: AES. 7: SHA. 8:
 * ADC_DAC.
 */

#define DMA_PERI_IN_SEL_CH0    0x0000003F
#define DMA_PERI_IN_SEL_CH0_M  (DMA_PERI_IN_SEL_CH0_V << DMA_PERI_IN_SEL_CH0_S)
#define DMA_PERI_IN_SEL_CH0_V  0x0000003F
#define DMA_PERI_IN_SEL_CH0_S  0

/* DMA_OUT_CONF0_CH0_REG register
 * DMA_OUT_CONF0_CH0_REG.
 */

#define DMA_OUT_CONF0_CH0_REG (DR_REG_GDMA_BASE + 0xd0)

/* DMA_OUT_DATA_BURST_EN_CH0 : R/W; bitpos: [5]; default: 0;
 * Set this bit to 1 to enable INCR burst transfer for Tx channel 0
 * transmitting data when accessing internal SRAM.
 */

#define DMA_OUT_DATA_BURST_EN_CH0    (BIT(5))
#define DMA_OUT_DATA_BURST_EN_CH0_M  (DMA_OUT_DATA_BURST_EN_CH0_V << DMA_OUT_DATA_BURST_EN_CH0_S)
#define DMA_OUT_DATA_BURST_EN_CH0_V  0x00000001
#define DMA_OUT_DATA_BURST_EN_CH0_S  5

/* DMA_OUTDSCR_BURST_EN_CH0 : R/W; bitpos: [4]; default: 0;
 * Set this bit to 1 to enable INCR burst transfer for Tx channel 0 reading
 * link descriptor when accessing internal SRAM.
 */

#define DMA_OUTDSCR_BURST_EN_CH0    (BIT(4))
#define DMA_OUTDSCR_BURST_EN_CH0_M  (DMA_OUTDSCR_BURST_EN_CH0_V << DMA_OUTDSCR_BURST_EN_CH0_S)
#define DMA_OUTDSCR_BURST_EN_CH0_V  0x00000001
#define DMA_OUTDSCR_BURST_EN_CH0_S  4

/* DMA_OUT_EOF_MODE_CH0 : R/W; bitpos: [3]; default: 1;
 * EOF flag generation mode when transmitting data. 1: EOF flag for Tx
 * channel 0 is generated when data need to transmit has been popped from
 * FIFO in DMA
 */

#define DMA_OUT_EOF_MODE_CH0    (BIT(3))
#define DMA_OUT_EOF_MODE_CH0_M  (DMA_OUT_EOF_MODE_CH0_V << DMA_OUT_EOF_MODE_CH0_S)
#define DMA_OUT_EOF_MODE_CH0_V  0x00000001
#define DMA_OUT_EOF_MODE_CH0_S  3

/* DMA_OUT_AUTO_WRBACK_CH0 : R/W; bitpos: [2]; default: 0;
 * Set this bit to enable automatic outlink-writeback when all the data in
 * tx buffer has been transmitted.
 */

#define DMA_OUT_AUTO_WRBACK_CH0    (BIT(2))
#define DMA_OUT_AUTO_WRBACK_CH0_M  (DMA_OUT_AUTO_WRBACK_CH0_V << DMA_OUT_AUTO_WRBACK_CH0_S)
#define DMA_OUT_AUTO_WRBACK_CH0_V  0x00000001
#define DMA_OUT_AUTO_WRBACK_CH0_S  2

/* DMA_OUT_LOOP_TEST_CH0 : R/W; bitpos: [1]; default: 0;
 * reserved
 */

#define DMA_OUT_LOOP_TEST_CH0    (BIT(1))
#define DMA_OUT_LOOP_TEST_CH0_M  (DMA_OUT_LOOP_TEST_CH0_V << DMA_OUT_LOOP_TEST_CH0_S)
#define DMA_OUT_LOOP_TEST_CH0_V  0x00000001
#define DMA_OUT_LOOP_TEST_CH0_S  1

/* DMA_OUT_RST_CH0 : R/W; bitpos: [0]; default: 0;
 * This bit is used to reset DMA channel 0 Tx FSM and Tx FIFO pointer.
 */

#define DMA_OUT_RST_CH0    (BIT(0))
#define DMA_OUT_RST_CH0_M  (DMA_OUT_RST_CH0_V << DMA_OUT_RST_CH0_S)
#define DMA_OUT_RST_CH0_V  0x00000001
#define DMA_OUT_RST_CH0_S  0

/* DMA_OUT_CONF1_CH0_REG register
 * DMA_OUT_CONF1_CH0_REG.
 */

#define DMA_OUT_CONF1_CH0_REG (DR_REG_GDMA_BASE + 0xd4)

/* DMA_OUT_CHECK_OWNER_CH0 : R/W; bitpos: [12]; default: 0;
 * Set this bit to enable checking the owner attribute of the link
 * descriptor.
 */

#define DMA_OUT_CHECK_OWNER_CH0    (BIT(12))
#define DMA_OUT_CHECK_OWNER_CH0_M  (DMA_OUT_CHECK_OWNER_CH0_V << DMA_OUT_CHECK_OWNER_CH0_S)
#define DMA_OUT_CHECK_OWNER_CH0_V  0x00000001
#define DMA_OUT_CHECK_OWNER_CH0_S  12

/* DMA_OUTFIFO_STATUS_CH0_REG register
 * DMA_OUTFIFO_STATUS_CH0_REG.
 */

#define DMA_OUTFIFO_STATUS_CH0_REG (DR_REG_GDMA_BASE + 0xd8)

/* DMA_OUT_REMAIN_UNDER_4B_CH0 : RO; bitpos: [26]; default: 1;
 * reserved
 */

#define DMA_OUT_REMAIN_UNDER_4B_CH0    (BIT(26))
#define DMA_OUT_REMAIN_UNDER_4B_CH0_M  (DMA_OUT_REMAIN_UNDER_4B_CH0_V << DMA_OUT_REMAIN_UNDER_4B_CH0_S)
#define DMA_OUT_REMAIN_UNDER_4B_CH0_V  0x00000001
#define DMA_OUT_REMAIN_UNDER_4B_CH0_S  26

/* DMA_OUT_REMAIN_UNDER_3B_CH0 : RO; bitpos: [25]; default: 1;
 * reserved
 */

#define DMA_OUT_REMAIN_UNDER_3B_CH0    (BIT(25))
#define DMA_OUT_REMAIN_UNDER_3B_CH0_M  (DMA_OUT_REMAIN_UNDER_3B_CH0_V << DMA_OUT_REMAIN_UNDER_3B_CH0_S)
#define DMA_OUT_REMAIN_UNDER_3B_CH0_V  0x00000001
#define DMA_OUT_REMAIN_UNDER_3B_CH0_S  25

/* DMA_OUT_REMAIN_UNDER_2B_CH0 : RO; bitpos: [24]; default: 1;
 * reserved
 */

#define DMA_OUT_REMAIN_UNDER_2B_CH0    (BIT(24))
#define DMA_OUT_REMAIN_UNDER_2B_CH0_M  (DMA_OUT_REMAIN_UNDER_2B_CH0_V << DMA_OUT_REMAIN_UNDER_2B_CH0_S)
#define DMA_OUT_REMAIN_UNDER_2B_CH0_V  0x00000001
#define DMA_OUT_REMAIN_UNDER_2B_CH0_S  24

/* DMA_OUT_REMAIN_UNDER_1B_CH0 : RO; bitpos: [23]; default: 1;
 * reserved
 */

#define DMA_OUT_REMAIN_UNDER_1B_CH0    (BIT(23))
#define DMA_OUT_REMAIN_UNDER_1B_CH0_M  (DMA_OUT_REMAIN_UNDER_1B_CH0_V << DMA_OUT_REMAIN_UNDER_1B_CH0_S)
#define DMA_OUT_REMAIN_UNDER_1B_CH0_V  0x00000001
#define DMA_OUT_REMAIN_UNDER_1B_CH0_S  23

/* DMA_OUTFIFO_CNT_CH0 : RO; bitpos: [7:2]; default: 0;
 * The register stores the byte number of the data in L1 Tx FIFO for Tx
 * channel 0.
 */

#define DMA_OUTFIFO_CNT_CH0    0x0000003F
#define DMA_OUTFIFO_CNT_CH0_M  (DMA_OUTFIFO_CNT_CH0_V << DMA_OUTFIFO_CNT_CH0_S)
#define DMA_OUTFIFO_CNT_CH0_V  0x0000003F
#define DMA_OUTFIFO_CNT_CH0_S  2

/* DMA_OUTFIFO_EMPTY_CH0 : RO; bitpos: [1]; default: 1;
 * L1 Tx FIFO empty signal for Tx channel 0.
 */

#define DMA_OUTFIFO_EMPTY_CH0    (BIT(1))
#define DMA_OUTFIFO_EMPTY_CH0_M  (DMA_OUTFIFO_EMPTY_CH0_V << DMA_OUTFIFO_EMPTY_CH0_S)
#define DMA_OUTFIFO_EMPTY_CH0_V  0x00000001
#define DMA_OUTFIFO_EMPTY_CH0_S  1

/* DMA_OUTFIFO_FULL_CH0 : RO; bitpos: [0]; default: 0;
 * L1 Tx FIFO full signal for Tx channel 0.
 */

#define DMA_OUTFIFO_FULL_CH0    (BIT(0))
#define DMA_OUTFIFO_FULL_CH0_M  (DMA_OUTFIFO_FULL_CH0_V << DMA_OUTFIFO_FULL_CH0_S)
#define DMA_OUTFIFO_FULL_CH0_V  0x00000001
#define DMA_OUTFIFO_FULL_CH0_S  0

/* DMA_OUT_PUSH_CH0_REG register
 * DMA_OUT_PUSH_CH0_REG.
 */

#define DMA_OUT_PUSH_CH0_REG (DR_REG_GDMA_BASE + 0xdc)

/* DMA_OUTFIFO_PUSH_CH0 : R/W/SC; bitpos: [9]; default: 0;
 * Set this bit to push data into DMA FIFO.
 */

#define DMA_OUTFIFO_PUSH_CH0    (BIT(9))
#define DMA_OUTFIFO_PUSH_CH0_M  (DMA_OUTFIFO_PUSH_CH0_V << DMA_OUTFIFO_PUSH_CH0_S)
#define DMA_OUTFIFO_PUSH_CH0_V  0x00000001
#define DMA_OUTFIFO_PUSH_CH0_S  9

/* DMA_OUTFIFO_WDATA_CH0 : R/W; bitpos: [8:0]; default: 0;
 * This register stores the data that need to be pushed into DMA FIFO.
 */

#define DMA_OUTFIFO_WDATA_CH0    0x000001FF
#define DMA_OUTFIFO_WDATA_CH0_M  (DMA_OUTFIFO_WDATA_CH0_V << DMA_OUTFIFO_WDATA_CH0_S)
#define DMA_OUTFIFO_WDATA_CH0_V  0x000001FF
#define DMA_OUTFIFO_WDATA_CH0_S  0

/* DMA_OUT_LINK_CH0_REG register
 * DMA_OUT_LINK_CH0_REG.
 */

#define DMA_OUT_LINK_CH0_REG (DR_REG_GDMA_BASE + 0xe0)

/* DMA_OUTLINK_PARK_CH0 : RO; bitpos: [23]; default: 1;
 * 1: the outlink descriptor's FSM is in idle state.  0: the outlink
 * descriptor's FSM is working.
 */

#define DMA_OUTLINK_PARK_CH0    (BIT(23))
#define DMA_OUTLINK_PARK_CH0_M  (DMA_OUTLINK_PARK_CH0_V << DMA_OUTLINK_PARK_CH0_S)
#define DMA_OUTLINK_PARK_CH0_V  0x00000001
#define DMA_OUTLINK_PARK_CH0_S  23

/* DMA_OUTLINK_RESTART_CH0 : R/W/SC; bitpos: [22]; default: 0;
 * Set this bit to restart a new outlink from the last address.
 */

#define DMA_OUTLINK_RESTART_CH0    (BIT(22))
#define DMA_OUTLINK_RESTART_CH0_M  (DMA_OUTLINK_RESTART_CH0_V << DMA_OUTLINK_RESTART_CH0_S)
#define DMA_OUTLINK_RESTART_CH0_V  0x00000001
#define DMA_OUTLINK_RESTART_CH0_S  22

/* DMA_OUTLINK_START_CH0 : R/W/SC; bitpos: [21]; default: 0;
 * Set this bit to start dealing with the outlink descriptors.
 */

#define DMA_OUTLINK_START_CH0    (BIT(21))
#define DMA_OUTLINK_START_CH0_M  (DMA_OUTLINK_START_CH0_V << DMA_OUTLINK_START_CH0_S)
#define DMA_OUTLINK_START_CH0_V  0x00000001
#define DMA_OUTLINK_START_CH0_S  21

/* DMA_OUTLINK_STOP_CH0 : R/W/SC; bitpos: [20]; default: 0;
 * Set this bit to stop dealing with the outlink descriptors.
 */

#define DMA_OUTLINK_STOP_CH0    (BIT(20))
#define DMA_OUTLINK_STOP_CH0_M  (DMA_OUTLINK_STOP_CH0_V << DMA_OUTLINK_STOP_CH0_S)
#define DMA_OUTLINK_STOP_CH0_V  0x00000001
#define DMA_OUTLINK_STOP_CH0_S  20

/* DMA_OUTLINK_ADDR_CH0 : R/W; bitpos: [19:0]; default: 0;
 * This register stores the 20 least significant bits of the first outlink
 * descriptor's address.
 */

#define DMA_OUTLINK_ADDR_CH0    0x000FFFFF
#define DMA_OUTLINK_ADDR_CH0_M  (DMA_OUTLINK_ADDR_CH0_V << DMA_OUTLINK_ADDR_CH0_S)
#define DMA_OUTLINK_ADDR_CH0_V  0x000FFFFF
#define DMA_OUTLINK_ADDR_CH0_S  0

/* DMA_OUT_STATE_CH0_REG register
 * DMA_OUT_STATE_CH0_REG.
 */

#define DMA_OUT_STATE_CH0_REG (DR_REG_GDMA_BASE + 0xe4)

/* DMA_OUT_STATE_CH0 : RO; bitpos: [22:20]; default: 0;
 * reserved
 */

#define DMA_OUT_STATE_CH0    0x00000007
#define DMA_OUT_STATE_CH0_M  (DMA_OUT_STATE_CH0_V << DMA_OUT_STATE_CH0_S)
#define DMA_OUT_STATE_CH0_V  0x00000007
#define DMA_OUT_STATE_CH0_S  20

/* DMA_OUT_DSCR_STATE_CH0 : RO; bitpos: [19:18]; default: 0;
 * reserved
 */

#define DMA_OUT_DSCR_STATE_CH0    0x00000003
#define DMA_OUT_DSCR_STATE_CH0_M  (DMA_OUT_DSCR_STATE_CH0_V << DMA_OUT_DSCR_STATE_CH0_S)
#define DMA_OUT_DSCR_STATE_CH0_V  0x00000003
#define DMA_OUT_DSCR_STATE_CH0_S  18

/* DMA_OUTLINK_DSCR_ADDR_CH0 : RO; bitpos: [17:0]; default: 0;
 * This register stores the current outlink descriptor's address.
 */

#define DMA_OUTLINK_DSCR_ADDR_CH0    0x0003FFFF
#define DMA_OUTLINK_DSCR_ADDR_CH0_M  (DMA_OUTLINK_DSCR_ADDR_CH0_V << DMA_OUTLINK_DSCR_ADDR_CH0_S)
#define DMA_OUTLINK_DSCR_ADDR_CH0_V  0x0003FFFF
#define DMA_OUTLINK_DSCR_ADDR_CH0_S  0

/* DMA_OUT_EOF_DES_ADDR_CH0_REG register
 * DMA_OUT_EOF_DES_ADDR_CH0_REG.
 */

#define DMA_OUT_EOF_DES_ADDR_CH0_REG (DR_REG_GDMA_BASE + 0xe8)

/* DMA_OUT_EOF_DES_ADDR_CH0 : RO; bitpos: [31:0]; default: 0;
 * This register stores the address of the outlink descriptor when the EOF
 * bit in this descriptor is 1.
 */

#define DMA_OUT_EOF_DES_ADDR_CH0    0xFFFFFFFF
#define DMA_OUT_EOF_DES_ADDR_CH0_M  (DMA_OUT_EOF_DES_ADDR_CH0_V << DMA_OUT_EOF_DES_ADDR_CH0_S)
#define DMA_OUT_EOF_DES_ADDR_CH0_V  0xFFFFFFFF
#define DMA_OUT_EOF_DES_ADDR_CH0_S  0

/* DMA_OUT_EOF_BFR_DES_ADDR_CH0_REG register
 * DMA_OUT_EOF_BFR_DES_ADDR_CH0_REG.
 */

#define DMA_OUT_EOF_BFR_DES_ADDR_CH0_REG (DR_REG_GDMA_BASE + 0xec)

/* DMA_OUT_EOF_BFR_DES_ADDR_CH0 : RO; bitpos: [31:0]; default: 0;
 * This register stores the address of the outlink descriptor before the
 * last outlink descriptor.
 */

#define DMA_OUT_EOF_BFR_DES_ADDR_CH0    0xFFFFFFFF
#define DMA_OUT_EOF_BFR_DES_ADDR_CH0_M  (DMA_OUT_EOF_BFR_DES_ADDR_CH0_V << DMA_OUT_EOF_BFR_DES_ADDR_CH0_S)
#define DMA_OUT_EOF_BFR_DES_ADDR_CH0_V  0xFFFFFFFF
#define DMA_OUT_EOF_BFR_DES_ADDR_CH0_S  0

/* DMA_OUT_DSCR_CH0_REG register
 * DMA_OUT_DSCR_CH0_REG.
 */

#define DMA_OUT_DSCR_CH0_REG (DR_REG_GDMA_BASE + 0xf0)

/* DMA_OUTLINK_DSCR_CH0 : RO; bitpos: [31:0]; default: 0;
 * The address of the current outlink descriptor y.
 */

#define DMA_OUTLINK_DSCR_CH0    0xFFFFFFFF
#define DMA_OUTLINK_DSCR_CH0_M  (DMA_OUTLINK_DSCR_CH0_V << DMA_OUTLINK_DSCR_CH0_S)
#define DMA_OUTLINK_DSCR_CH0_V  0xFFFFFFFF
#define DMA_OUTLINK_DSCR_CH0_S  0

/* DMA_OUT_DSCR_BF0_CH0_REG register
 * DMA_OUT_DSCR_BF0_CH0_REG.
 */

#define DMA_OUT_DSCR_BF0_CH0_REG (DR_REG_GDMA_BASE + 0xf4)

/* DMA_OUTLINK_DSCR_BF0_CH0 : RO; bitpos: [31:0]; default: 0;
 * The address of the last outlink descriptor y-1.
 */

#define DMA_OUTLINK_DSCR_BF0_CH0    0xFFFFFFFF
#define DMA_OUTLINK_DSCR_BF0_CH0_M  (DMA_OUTLINK_DSCR_BF0_CH0_V << DMA_OUTLINK_DSCR_BF0_CH0_S)
#define DMA_OUTLINK_DSCR_BF0_CH0_V  0xFFFFFFFF
#define DMA_OUTLINK_DSCR_BF0_CH0_S  0

/* DMA_OUT_DSCR_BF1_CH0_REG register
 * DMA_OUT_DSCR_BF1_CH0_REG.
 */

#define DMA_OUT_DSCR_BF1_CH0_REG (DR_REG_GDMA_BASE + 0xf8)

/* DMA_OUTLINK_DSCR_BF1_CH0 : RO; bitpos: [31:0]; default: 0;
 * The address of the second-to-last inlink descriptor x-2.
 */

#define DMA_OUTLINK_DSCR_BF1_CH0    0xFFFFFFFF
#define DMA_OUTLINK_DSCR_BF1_CH0_M  (DMA_OUTLINK_DSCR_BF1_CH0_V << DMA_OUTLINK_DSCR_BF1_CH0_S)
#define DMA_OUTLINK_DSCR_BF1_CH0_V  0xFFFFFFFF
#define DMA_OUTLINK_DSCR_BF1_CH0_S  0

/* DMA_OUT_PRI_CH0_REG register
 * DMA_OUT_PRI_CH0_REG.
 */

#define DMA_OUT_PRI_CH0_REG (DR_REG_GDMA_BASE + 0xfc)

/* DMA_TX_PRI_CH0 : R/W; bitpos: [3:0]; default: 0;
 * The priority of Tx channel 0. The larger of the value, the higher of the
 * priority.
 */

#define DMA_TX_PRI_CH0    0x0000000F
#define DMA_TX_PRI_CH0_M  (DMA_TX_PRI_CH0_V << DMA_TX_PRI_CH0_S)
#define DMA_TX_PRI_CH0_V  0x0000000F
#define DMA_TX_PRI_CH0_S  0

/* DMA_OUT_PERI_SEL_CH0_REG register
 * DMA_OUT_PERI_SEL_CH0_REG.
 */

#define DMA_OUT_PERI_SEL_CH0_REG (DR_REG_GDMA_BASE + 0x100)

/* DMA_PERI_OUT_SEL_CH0 : R/W; bitpos: [5:0]; default: 63;
 * This register is used to select peripheral for Tx channel 0. 0:SPI2. 1:
 * reserved. 2: UHCI0. 3: I2S0. 4: reserved. 5: reserved. 6: AES. 7: SHA. 8:
 * ADC_DAC.
 */

#define DMA_PERI_OUT_SEL_CH0    0x0000003F
#define DMA_PERI_OUT_SEL_CH0_M  (DMA_PERI_OUT_SEL_CH0_V << DMA_PERI_OUT_SEL_CH0_S)
#define DMA_PERI_OUT_SEL_CH0_V  0x0000003F
#define DMA_PERI_OUT_SEL_CH0_S  0

/* DMA_IN_CONF0_CH1_REG register
 * DMA_IN_CONF0_CH1_REG.
 */

#define DMA_IN_CONF0_CH1_REG (DR_REG_GDMA_BASE + 0x130)

/* DMA_MEM_TRANS_EN_CH1 : R/W; bitpos: [4]; default: 0;
 * Set this bit 1 to enable automatic transmitting data from memory to
 * memory via DMA.
 */

#define DMA_MEM_TRANS_EN_CH1    (BIT(4))
#define DMA_MEM_TRANS_EN_CH1_M  (DMA_MEM_TRANS_EN_CH1_V << DMA_MEM_TRANS_EN_CH1_S)
#define DMA_MEM_TRANS_EN_CH1_V  0x00000001
#define DMA_MEM_TRANS_EN_CH1_S  4

/* DMA_IN_DATA_BURST_EN_CH1 : R/W; bitpos: [3]; default: 0;
 * Set this bit to 1 to enable INCR burst transfer for Rx channel 1
 * receiving data when accessing internal SRAM.
 */

#define DMA_IN_DATA_BURST_EN_CH1    (BIT(3))
#define DMA_IN_DATA_BURST_EN_CH1_M  (DMA_IN_DATA_BURST_EN_CH1_V << DMA_IN_DATA_BURST_EN_CH1_S)
#define DMA_IN_DATA_BURST_EN_CH1_V  0x00000001
#define DMA_IN_DATA_BURST_EN_CH1_S  3

/* DMA_INDSCR_BURST_EN_CH1 : R/W; bitpos: [2]; default: 0;
 * Set this bit to 1 to enable INCR burst transfer for Rx channel 1 reading
 * link descriptor when accessing internal SRAM.
 */

#define DMA_INDSCR_BURST_EN_CH1    (BIT(2))
#define DMA_INDSCR_BURST_EN_CH1_M  (DMA_INDSCR_BURST_EN_CH1_V << DMA_INDSCR_BURST_EN_CH1_S)
#define DMA_INDSCR_BURST_EN_CH1_V  0x00000001
#define DMA_INDSCR_BURST_EN_CH1_S  2

/* DMA_IN_LOOP_TEST_CH1 : R/W; bitpos: [1]; default: 0;
 * reserved
 */

#define DMA_IN_LOOP_TEST_CH1    (BIT(1))
#define DMA_IN_LOOP_TEST_CH1_M  (DMA_IN_LOOP_TEST_CH1_V << DMA_IN_LOOP_TEST_CH1_S)
#define DMA_IN_LOOP_TEST_CH1_V  0x00000001
#define DMA_IN_LOOP_TEST_CH1_S  1

/* DMA_IN_RST_CH1 : R/W; bitpos: [0]; default: 0;
 * This bit is used to reset DMA channel 1 Rx FSM and Rx FIFO pointer.
 */

#define DMA_IN_RST_CH1    (BIT(0))
#define DMA_IN_RST_CH1_M  (DMA_IN_RST_CH1_V << DMA_IN_RST_CH1_S)
#define DMA_IN_RST_CH1_V  0x00000001
#define DMA_IN_RST_CH1_S  0

/* DMA_IN_CONF1_CH1_REG register
 * DMA_IN_CONF1_CH1_REG.
 */

#define DMA_IN_CONF1_CH1_REG (DR_REG_GDMA_BASE + 0x134)

/* DMA_IN_CHECK_OWNER_CH1 : R/W; bitpos: [12]; default: 0;
 * Set this bit to enable checking the owner attribute of the link
 * descriptor.
 */

#define DMA_IN_CHECK_OWNER_CH1    (BIT(12))
#define DMA_IN_CHECK_OWNER_CH1_M  (DMA_IN_CHECK_OWNER_CH1_V << DMA_IN_CHECK_OWNER_CH1_S)
#define DMA_IN_CHECK_OWNER_CH1_V  0x00000001
#define DMA_IN_CHECK_OWNER_CH1_S  12

/* DMA_INFIFO_STATUS_CH1_REG register
 * DMA_INFIFO_STATUS_CH1_REG.
 */

#define DMA_INFIFO_STATUS_CH1_REG (DR_REG_GDMA_BASE + 0x138)

/* DMA_IN_BUF_HUNGRY_CH1 : RO; bitpos: [27]; default: 0;
 * reserved
 */

#define DMA_IN_BUF_HUNGRY_CH1    (BIT(27))
#define DMA_IN_BUF_HUNGRY_CH1_M  (DMA_IN_BUF_HUNGRY_CH1_V << DMA_IN_BUF_HUNGRY_CH1_S)
#define DMA_IN_BUF_HUNGRY_CH1_V  0x00000001
#define DMA_IN_BUF_HUNGRY_CH1_S  27

/* DMA_IN_REMAIN_UNDER_4B_CH1 : RO; bitpos: [26]; default: 1;
 * reserved
 */

#define DMA_IN_REMAIN_UNDER_4B_CH1    (BIT(26))
#define DMA_IN_REMAIN_UNDER_4B_CH1_M  (DMA_IN_REMAIN_UNDER_4B_CH1_V << DMA_IN_REMAIN_UNDER_4B_CH1_S)
#define DMA_IN_REMAIN_UNDER_4B_CH1_V  0x00000001
#define DMA_IN_REMAIN_UNDER_4B_CH1_S  26

/* DMA_IN_REMAIN_UNDER_3B_CH1 : RO; bitpos: [25]; default: 1;
 * reserved
 */

#define DMA_IN_REMAIN_UNDER_3B_CH1    (BIT(25))
#define DMA_IN_REMAIN_UNDER_3B_CH1_M  (DMA_IN_REMAIN_UNDER_3B_CH1_V << DMA_IN_REMAIN_UNDER_3B_CH1_S)
#define DMA_IN_REMAIN_UNDER_3B_CH1_V  0x00000001
#define DMA_IN_REMAIN_UNDER_3B_CH1_S  25

/* DMA_IN_REMAIN_UNDER_2B_CH1 : RO; bitpos: [24]; default: 1;
 * reserved
 */

#define DMA_IN_REMAIN_UNDER_2B_CH1    (BIT(24))
#define DMA_IN_REMAIN_UNDER_2B_CH1_M  (DMA_IN_REMAIN_UNDER_2B_CH1_V << DMA_IN_REMAIN_UNDER_2B_CH1_S)
#define DMA_IN_REMAIN_UNDER_2B_CH1_V  0x00000001
#define DMA_IN_REMAIN_UNDER_2B_CH1_S  24

/* DMA_IN_REMAIN_UNDER_1B_CH1 : RO; bitpos: [23]; default: 1;
 * reserved
 */

#define DMA_IN_REMAIN_UNDER_1B_CH1    (BIT(23))
#define DMA_IN_REMAIN_UNDER_1B_CH1_M  (DMA_IN_REMAIN_UNDER_1B_CH1_V << DMA_IN_REMAIN_UNDER_1B_CH1_S)
#define DMA_IN_REMAIN_UNDER_1B_CH1_V  0x00000001
#define DMA_IN_REMAIN_UNDER_1B_CH1_S  23

/* DMA_INFIFO_CNT_CH1 : RO; bitpos: [7:2]; default: 0;
 * The register stores the byte number of the data in L1 Rx FIFO for Rx
 * channel 1.
 */

#define DMA_INFIFO_CNT_CH1    0x0000003F
#define DMA_INFIFO_CNT_CH1_M  (DMA_INFIFO_CNT_CH1_V << DMA_INFIFO_CNT_CH1_S)
#define DMA_INFIFO_CNT_CH1_V  0x0000003F
#define DMA_INFIFO_CNT_CH1_S  2

/* DMA_INFIFO_EMPTY_CH1 : RO; bitpos: [1]; default: 1;
 * L1 Rx FIFO empty signal for Rx channel 1.
 */

#define DMA_INFIFO_EMPTY_CH1    (BIT(1))
#define DMA_INFIFO_EMPTY_CH1_M  (DMA_INFIFO_EMPTY_CH1_V << DMA_INFIFO_EMPTY_CH1_S)
#define DMA_INFIFO_EMPTY_CH1_V  0x00000001
#define DMA_INFIFO_EMPTY_CH1_S  1

/* DMA_INFIFO_FULL_CH1 : RO; bitpos: [0]; default: 1;
 * L1 Rx FIFO full signal for Rx channel 1.
 */

#define DMA_INFIFO_FULL_CH1    (BIT(0))
#define DMA_INFIFO_FULL_CH1_M  (DMA_INFIFO_FULL_CH1_V << DMA_INFIFO_FULL_CH1_S)
#define DMA_INFIFO_FULL_CH1_V  0x00000001
#define DMA_INFIFO_FULL_CH1_S  0

/* DMA_IN_POP_CH1_REG register
 * DMA_IN_POP_CH1_REG.
 */

#define DMA_IN_POP_CH1_REG (DR_REG_GDMA_BASE + 0x13c)

/* DMA_INFIFO_POP_CH1 : R/W/SC; bitpos: [12]; default: 0;
 * Set this bit to pop data from DMA FIFO.
 */

#define DMA_INFIFO_POP_CH1    (BIT(12))
#define DMA_INFIFO_POP_CH1_M  (DMA_INFIFO_POP_CH1_V << DMA_INFIFO_POP_CH1_S)
#define DMA_INFIFO_POP_CH1_V  0x00000001
#define DMA_INFIFO_POP_CH1_S  12

/* DMA_INFIFO_RDATA_CH1 : RO; bitpos: [11:0]; default: 2048;
 * This register stores the data popping from DMA FIFO.
 */

#define DMA_INFIFO_RDATA_CH1    0x00000FFF
#define DMA_INFIFO_RDATA_CH1_M  (DMA_INFIFO_RDATA_CH1_V << DMA_INFIFO_RDATA_CH1_S)
#define DMA_INFIFO_RDATA_CH1_V  0x00000FFF
#define DMA_INFIFO_RDATA_CH1_S  0

/* DMA_IN_LINK_CH1_REG register
 * DMA_IN_LINK_CH1_REG.
 */

#define DMA_IN_LINK_CH1_REG (DR_REG_GDMA_BASE + 0x140)

/* DMA_INLINK_PARK_CH1 : RO; bitpos: [24]; default: 1;
 * 1: the inlink descriptor's FSM is in idle state.  0: the inlink
 * descriptor's FSM is working.
 */

#define DMA_INLINK_PARK_CH1    (BIT(24))
#define DMA_INLINK_PARK_CH1_M  (DMA_INLINK_PARK_CH1_V << DMA_INLINK_PARK_CH1_S)
#define DMA_INLINK_PARK_CH1_V  0x00000001
#define DMA_INLINK_PARK_CH1_S  24

/* DMA_INLINK_RESTART_CH1 : R/W/SC; bitpos: [23]; default: 0;
 * Set this bit to mount a new inlink descriptor.
 */

#define DMA_INLINK_RESTART_CH1    (BIT(23))
#define DMA_INLINK_RESTART_CH1_M  (DMA_INLINK_RESTART_CH1_V << DMA_INLINK_RESTART_CH1_S)
#define DMA_INLINK_RESTART_CH1_V  0x00000001
#define DMA_INLINK_RESTART_CH1_S  23

/* DMA_INLINK_START_CH1 : R/W/SC; bitpos: [22]; default: 0;
 * Set this bit to start dealing with the inlink descriptors.
 */

#define DMA_INLINK_START_CH1    (BIT(22))
#define DMA_INLINK_START_CH1_M  (DMA_INLINK_START_CH1_V << DMA_INLINK_START_CH1_S)
#define DMA_INLINK_START_CH1_V  0x00000001
#define DMA_INLINK_START_CH1_S  22

/* DMA_INLINK_STOP_CH1 : R/W/SC; bitpos: [21]; default: 0;
 * Set this bit to stop dealing with the inlink descriptors.
 */

#define DMA_INLINK_STOP_CH1    (BIT(21))
#define DMA_INLINK_STOP_CH1_M  (DMA_INLINK_STOP_CH1_V << DMA_INLINK_STOP_CH1_S)
#define DMA_INLINK_STOP_CH1_V  0x00000001
#define DMA_INLINK_STOP_CH1_S  21

/* DMA_INLINK_AUTO_RET_CH1 : R/W; bitpos: [20]; default: 1;
 * Set this bit to return to current inlink descriptor's address, when there
 * are some errors in current receiving data.
 */

#define DMA_INLINK_AUTO_RET_CH1    (BIT(20))
#define DMA_INLINK_AUTO_RET_CH1_M  (DMA_INLINK_AUTO_RET_CH1_V << DMA_INLINK_AUTO_RET_CH1_S)
#define DMA_INLINK_AUTO_RET_CH1_V  0x00000001
#define DMA_INLINK_AUTO_RET_CH1_S  20

/* DMA_INLINK_ADDR_CH1 : R/W; bitpos: [19:0]; default: 0;
 * This register stores the 20 least significant bits of the first inlink
 * descriptor's address.
 */

#define DMA_INLINK_ADDR_CH1    0x000FFFFF
#define DMA_INLINK_ADDR_CH1_M  (DMA_INLINK_ADDR_CH1_V << DMA_INLINK_ADDR_CH1_S)
#define DMA_INLINK_ADDR_CH1_V  0x000FFFFF
#define DMA_INLINK_ADDR_CH1_S  0

/* DMA_IN_STATE_CH1_REG register
 * DMA_IN_STATE_CH1_REG.
 */

#define DMA_IN_STATE_CH1_REG (DR_REG_GDMA_BASE + 0x144)

/* DMA_IN_STATE_CH1 : RO; bitpos: [22:20]; default: 0;
 * reserved
 */

#define DMA_IN_STATE_CH1    0x00000007
#define DMA_IN_STATE_CH1_M  (DMA_IN_STATE_CH1_V << DMA_IN_STATE_CH1_S)
#define DMA_IN_STATE_CH1_V  0x00000007
#define DMA_IN_STATE_CH1_S  20

/* DMA_IN_DSCR_STATE_CH1 : RO; bitpos: [19:18]; default: 0;
 * reserved
 */

#define DMA_IN_DSCR_STATE_CH1    0x00000003
#define DMA_IN_DSCR_STATE_CH1_M  (DMA_IN_DSCR_STATE_CH1_V << DMA_IN_DSCR_STATE_CH1_S)
#define DMA_IN_DSCR_STATE_CH1_V  0x00000003
#define DMA_IN_DSCR_STATE_CH1_S  18

/* DMA_INLINK_DSCR_ADDR_CH1 : RO; bitpos: [17:0]; default: 0;
 * This register stores the current inlink descriptor's address.
 */

#define DMA_INLINK_DSCR_ADDR_CH1    0x0003FFFF
#define DMA_INLINK_DSCR_ADDR_CH1_M  (DMA_INLINK_DSCR_ADDR_CH1_V << DMA_INLINK_DSCR_ADDR_CH1_S)
#define DMA_INLINK_DSCR_ADDR_CH1_V  0x0003FFFF
#define DMA_INLINK_DSCR_ADDR_CH1_S  0

/* DMA_IN_SUC_EOF_DES_ADDR_CH1_REG register
 * DMA_IN_SUC_EOF_DES_ADDR_CH1_REG.
 */

#define DMA_IN_SUC_EOF_DES_ADDR_CH1_REG (DR_REG_GDMA_BASE + 0x148)

/* DMA_IN_SUC_EOF_DES_ADDR_CH1 : RO; bitpos: [31:0]; default: 0;
 * This register stores the address of the inlink descriptor when the EOF
 * bit in this descriptor is 1.
 */

#define DMA_IN_SUC_EOF_DES_ADDR_CH1    0xFFFFFFFF
#define DMA_IN_SUC_EOF_DES_ADDR_CH1_M  (DMA_IN_SUC_EOF_DES_ADDR_CH1_V << DMA_IN_SUC_EOF_DES_ADDR_CH1_S)
#define DMA_IN_SUC_EOF_DES_ADDR_CH1_V  0xFFFFFFFF
#define DMA_IN_SUC_EOF_DES_ADDR_CH1_S  0

/* DMA_IN_ERR_EOF_DES_ADDR_CH1_REG register
 * DMA_IN_ERR_EOF_DES_ADDR_CH1_REG.
 */

#define DMA_IN_ERR_EOF_DES_ADDR_CH1_REG (DR_REG_GDMA_BASE + 0x14c)

/* DMA_IN_ERR_EOF_DES_ADDR_CH1 : RO; bitpos: [31:0]; default: 0;
 * This register stores the address of the inlink descriptor when there are
 * some errors in current receiving data. Only used when peripheral is UHCI0.
 */

#define DMA_IN_ERR_EOF_DES_ADDR_CH1    0xFFFFFFFF
#define DMA_IN_ERR_EOF_DES_ADDR_CH1_M  (DMA_IN_ERR_EOF_DES_ADDR_CH1_V << DMA_IN_ERR_EOF_DES_ADDR_CH1_S)
#define DMA_IN_ERR_EOF_DES_ADDR_CH1_V  0xFFFFFFFF
#define DMA_IN_ERR_EOF_DES_ADDR_CH1_S  0

/* DMA_IN_DSCR_CH1_REG register
 * DMA_IN_DSCR_CH1_REG.
 */

#define DMA_IN_DSCR_CH1_REG (DR_REG_GDMA_BASE + 0x150)

/* DMA_INLINK_DSCR_CH1 : RO; bitpos: [31:0]; default: 0;
 * The address of the current inlink descriptor x.
 */

#define DMA_INLINK_DSCR_CH1    0xFFFFFFFF
#define DMA_INLINK_DSCR_CH1_M  (DMA_INLINK_DSCR_CH1_V << DMA_INLINK_DSCR_CH1_S)
#define DMA_INLINK_DSCR_CH1_V  0xFFFFFFFF
#define DMA_INLINK_DSCR_CH1_S  0

/* DMA_IN_DSCR_BF0_CH1_REG register
 * DMA_IN_DSCR_BF0_CH1_REG.
 */

#define DMA_IN_DSCR_BF0_CH1_REG (DR_REG_GDMA_BASE + 0x154)

/* DMA_INLINK_DSCR_BF0_CH1 : RO; bitpos: [31:0]; default: 0;
 * The address of the last inlink descriptor x-1.
 */

#define DMA_INLINK_DSCR_BF0_CH1    0xFFFFFFFF
#define DMA_INLINK_DSCR_BF0_CH1_M  (DMA_INLINK_DSCR_BF0_CH1_V << DMA_INLINK_DSCR_BF0_CH1_S)
#define DMA_INLINK_DSCR_BF0_CH1_V  0xFFFFFFFF
#define DMA_INLINK_DSCR_BF0_CH1_S  0

/* DMA_IN_DSCR_BF1_CH1_REG register
 * DMA_IN_DSCR_BF1_CH1_REG.
 */

#define DMA_IN_DSCR_BF1_CH1_REG (DR_REG_GDMA_BASE + 0x158)

/* DMA_INLINK_DSCR_BF1_CH1 : RO; bitpos: [31:0]; default: 0;
 * The address of the second-to-last inlink descriptor x-2.
 */

#define DMA_INLINK_DSCR_BF1_CH1    0xFFFFFFFF
#define DMA_INLINK_DSCR_BF1_CH1_M  (DMA_INLINK_DSCR_BF1_CH1_V << DMA_INLINK_DSCR_BF1_CH1_S)
#define DMA_INLINK_DSCR_BF1_CH1_V  0xFFFFFFFF
#define DMA_INLINK_DSCR_BF1_CH1_S  0

/* DMA_IN_PRI_CH1_REG register
 * DMA_IN_PRI_CH1_REG.
 */

#define DMA_IN_PRI_CH1_REG (DR_REG_GDMA_BASE + 0x15c)

/* DMA_RX_PRI_CH1 : R/W; bitpos: [3:0]; default: 0;
 * The priority of Rx channel 1. The larger of the value, the higher of the
 * priority.
 */

#define DMA_RX_PRI_CH1    0x0000000F
#define DMA_RX_PRI_CH1_M  (DMA_RX_PRI_CH1_V << DMA_RX_PRI_CH1_S)
#define DMA_RX_PRI_CH1_V  0x0000000F
#define DMA_RX_PRI_CH1_S  0

/* DMA_IN_PERI_SEL_CH1_REG register
 * DMA_IN_PERI_SEL_CH1_REG.
 */

#define DMA_IN_PERI_SEL_CH1_REG (DR_REG_GDMA_BASE + 0x160)

/* DMA_PERI_IN_SEL_CH1 : R/W; bitpos: [5:0]; default: 63;
 * This register is used to select peripheral for Rx channel 1. 0:SPI2. 1:
 * reserved. 2: UHCI0. 3: I2S0. 4: reserved. 5: reserved. 6: AES. 7: SHA. 8:
 * ADC_DAC.
 */

#define DMA_PERI_IN_SEL_CH1    0x0000003F
#define DMA_PERI_IN_SEL_CH1_M  (DMA_PERI_IN_SEL_CH1_V << DMA_PERI_IN_SEL_CH1_S)
#define DMA_PERI_IN_SEL_CH1_V  0x0000003F
#define DMA_PERI_IN_SEL_CH1_S  0

/* DMA_OUT_CONF0_CH1_REG register
 * DMA_OUT_CONF0_CH1_REG.
 */

#define DMA_OUT_CONF0_CH1_REG (DR_REG_GDMA_BASE + 0x190)

/* DMA_OUT_DATA_BURST_EN_CH1 : R/W; bitpos: [5]; default: 0;
 * Set this bit to 1 to enable INCR burst transfer for Tx channel 1
 * transmitting data when accessing internal SRAM.
 */

#define DMA_OUT_DATA_BURST_EN_CH1    (BIT(5))
#define DMA_OUT_DATA_BURST_EN_CH1_M  (DMA_OUT_DATA_BURST_EN_CH1_V << DMA_OUT_DATA_BURST_EN_CH1_S)
#define DMA_OUT_DATA_BURST_EN_CH1_V  0x00000001
#define DMA_OUT_DATA_BURST_EN_CH1_S  5

/* DMA_OUTDSCR_BURST_EN_CH1 : R/W; bitpos: [4]; default: 0;
 * Set this bit to 1 to enable INCR burst transfer for Tx channel 1 reading
 * link descriptor when accessing internal SRAM.
 */

#define DMA_OUTDSCR_BURST_EN_CH1    (BIT(4))
#define DMA_OUTDSCR_BURST_EN_CH1_M  (DMA_OUTDSCR_BURST_EN_CH1_V << DMA_OUTDSCR_BURST_EN_CH1_S)
#define DMA_OUTDSCR_BURST_EN_CH1_V  0x00000001
#define DMA_OUTDSCR_BURST_EN_CH1_S  4

/* DMA_OUT_EOF_MODE_CH1 : R/W; bitpos: [3]; default: 1;
 * EOF flag generation mode when transmitting data. 1: EOF flag for Tx
 * channel 1 is generated when data need to transmit has been popped from
 * FIFO in DMA
 */

#define DMA_OUT_EOF_MODE_CH1    (BIT(3))
#define DMA_OUT_EOF_MODE_CH1_M  (DMA_OUT_EOF_MODE_CH1_V << DMA_OUT_EOF_MODE_CH1_S)
#define DMA_OUT_EOF_MODE_CH1_V  0x00000001
#define DMA_OUT_EOF_MODE_CH1_S  3

/* DMA_OUT_AUTO_WRBACK_CH1 : R/W; bitpos: [2]; default: 0;
 * Set this bit to enable automatic outlink-writeback when all the data in
 * tx buffer has been transmitted.
 */

#define DMA_OUT_AUTO_WRBACK_CH1    (BIT(2))
#define DMA_OUT_AUTO_WRBACK_CH1_M  (DMA_OUT_AUTO_WRBACK_CH1_V << DMA_OUT_AUTO_WRBACK_CH1_S)
#define DMA_OUT_AUTO_WRBACK_CH1_V  0x00000001
#define DMA_OUT_AUTO_WRBACK_CH1_S  2

/* DMA_OUT_LOOP_TEST_CH1 : R/W; bitpos: [1]; default: 0;
 * reserved
 */

#define DMA_OUT_LOOP_TEST_CH1    (BIT(1))
#define DMA_OUT_LOOP_TEST_CH1_M  (DMA_OUT_LOOP_TEST_CH1_V << DMA_OUT_LOOP_TEST_CH1_S)
#define DMA_OUT_LOOP_TEST_CH1_V  0x00000001
#define DMA_OUT_LOOP_TEST_CH1_S  1

/* DMA_OUT_RST_CH1 : R/W; bitpos: [0]; default: 0;
 * This bit is used to reset DMA channel 1 Tx FSM and Tx FIFO pointer.
 */

#define DMA_OUT_RST_CH1    (BIT(0))
#define DMA_OUT_RST_CH1_M  (DMA_OUT_RST_CH1_V << DMA_OUT_RST_CH1_S)
#define DMA_OUT_RST_CH1_V  0x00000001
#define DMA_OUT_RST_CH1_S  0

/* DMA_OUT_CONF1_CH1_REG register
 * DMA_OUT_CONF1_CH1_REG.
 */

#define DMA_OUT_CONF1_CH1_REG (DR_REG_GDMA_BASE + 0x194)

/* DMA_OUT_CHECK_OWNER_CH1 : R/W; bitpos: [12]; default: 0;
 * Set this bit to enable checking the owner attribute of the link
 * descriptor.
 */

#define DMA_OUT_CHECK_OWNER_CH1    (BIT(12))
#define DMA_OUT_CHECK_OWNER_CH1_M  (DMA_OUT_CHECK_OWNER_CH1_V << DMA_OUT_CHECK_OWNER_CH1_S)
#define DMA_OUT_CHECK_OWNER_CH1_V  0x00000001
#define DMA_OUT_CHECK_OWNER_CH1_S  12

/* DMA_OUTFIFO_STATUS_CH1_REG register
 * DMA_OUTFIFO_STATUS_CH1_REG.
 */

#define DMA_OUTFIFO_STATUS_CH1_REG (DR_REG_GDMA_BASE + 0x198)

/* DMA_OUT_REMAIN_UNDER_4B_CH1 : RO; bitpos: [26]; default: 1;
 * reserved
 */

#define DMA_OUT_REMAIN_UNDER_4B_CH1    (BIT(26))
#define DMA_OUT_REMAIN_UNDER_4B_CH1_M  (DMA_OUT_REMAIN_UNDER_4B_CH1_V << DMA_OUT_REMAIN_UNDER_4B_CH1_S)
#define DMA_OUT_REMAIN_UNDER_4B_CH1_V  0x00000001
#define DMA_OUT_REMAIN_UNDER_4B_CH1_S  26

/* DMA_OUT_REMAIN_UNDER_3B_CH1 : RO; bitpos: [25]; default: 1;
 * reserved
 */

#define DMA_OUT_REMAIN_UNDER_3B_CH1    (BIT(25))
#define DMA_OUT_REMAIN_UNDER_3B_CH1_M  (DMA_OUT_REMAIN_UNDER_3B_CH1_V << DMA_OUT_REMAIN_UNDER_3B_CH1_S)
#define DMA_OUT_REMAIN_UNDER_3B_CH1_V  0x00000001
#define DMA_OUT_REMAIN_UNDER_3B_CH1_S  25

/* DMA_OUT_REMAIN_UNDER_2B_CH1 : RO; bitpos: [24]; default: 1;
 * reserved
 */

#define DMA_OUT_REMAIN_UNDER_2B_CH1    (BIT(24))
#define DMA_OUT_REMAIN_UNDER_2B_CH1_M  (DMA_OUT_REMAIN_UNDER_2B_CH1_V << DMA_OUT_REMAIN_UNDER_2B_CH1_S)
#define DMA_OUT_REMAIN_UNDER_2B_CH1_V  0x00000001
#define DMA_OUT_REMAIN_UNDER_2B_CH1_S  24

/* DMA_OUT_REMAIN_UNDER_1B_CH1 : RO; bitpos: [23]; default: 1;
 * reserved
 */

#define DMA_OUT_REMAIN_UNDER_1B_CH1    (BIT(23))
#define DMA_OUT_REMAIN_UNDER_1B_CH1_M  (DMA_OUT_REMAIN_UNDER_1B_CH1_V << DMA_OUT_REMAIN_UNDER_1B_CH1_S)
#define DMA_OUT_REMAIN_UNDER_1B_CH1_V  0x00000001
#define DMA_OUT_REMAIN_UNDER_1B_CH1_S  23

/* DMA_OUTFIFO_CNT_CH1 : RO; bitpos: [7:2]; default: 0;
 * The register stores the byte number of the data in L1 Tx FIFO for Tx
 * channel 1.
 */

#define DMA_OUTFIFO_CNT_CH1    0x0000003F
#define DMA_OUTFIFO_CNT_CH1_M  (DMA_OUTFIFO_CNT_CH1_V << DMA_OUTFIFO_CNT_CH1_S)
#define DMA_OUTFIFO_CNT_CH1_V  0x0000003F
#define DMA_OUTFIFO_CNT_CH1_S  2

/* DMA_OUTFIFO_EMPTY_CH1 : RO; bitpos: [1]; default: 1;
 * L1 Tx FIFO empty signal for Tx channel 1.
 */

#define DMA_OUTFIFO_EMPTY_CH1    (BIT(1))
#define DMA_OUTFIFO_EMPTY_CH1_M  (DMA_OUTFIFO_EMPTY_CH1_V << DMA_OUTFIFO_EMPTY_CH1_S)
#define DMA_OUTFIFO_EMPTY_CH1_V  0x00000001
#define DMA_OUTFIFO_EMPTY_CH1_S  1

/* DMA_OUTFIFO_FULL_CH1 : RO; bitpos: [0]; default: 0;
 * L1 Tx FIFO full signal for Tx channel 1.
 */

#define DMA_OUTFIFO_FULL_CH1    (BIT(0))
#define DMA_OUTFIFO_FULL_CH1_M  (DMA_OUTFIFO_FULL_CH1_V << DMA_OUTFIFO_FULL_CH1_S)
#define DMA_OUTFIFO_FULL_CH1_V  0x00000001
#define DMA_OUTFIFO_FULL_CH1_S  0

/* DMA_OUT_PUSH_CH1_REG register
 * DMA_OUT_PUSH_CH1_REG.
 */

#define DMA_OUT_PUSH_CH1_REG (DR_REG_GDMA_BASE + 0x19c)

/* DMA_OUTFIFO_PUSH_CH1 : R/W/SC; bitpos: [9]; default: 0;
 * Set this bit to push data into DMA FIFO.
 */

#define DMA_OUTFIFO_PUSH_CH1    (BIT(9))
#define DMA_OUTFIFO_PUSH_CH1_M  (DMA_OUTFIFO_PUSH_CH1_V << DMA_OUTFIFO_PUSH_CH1_S)
#define DMA_OUTFIFO_PUSH_CH1_V  0x00000001
#define DMA_OUTFIFO_PUSH_CH1_S  9

/* DMA_OUTFIFO_WDATA_CH1 : R/W; bitpos: [8:0]; default: 0;
 * This register stores the data that need to be pushed into DMA FIFO.
 */

#define DMA_OUTFIFO_WDATA_CH1    0x000001FF
#define DMA_OUTFIFO_WDATA_CH1_M  (DMA_OUTFIFO_WDATA_CH1_V << DMA_OUTFIFO_WDATA_CH1_S)
#define DMA_OUTFIFO_WDATA_CH1_V  0x000001FF
#define DMA_OUTFIFO_WDATA_CH1_S  0

/* DMA_OUT_LINK_CH1_REG register
 * DMA_OUT_LINK_CH1_REG.
 */

#define DMA_OUT_LINK_CH1_REG (DR_REG_GDMA_BASE + 0x1a0)

/* DMA_OUTLINK_PARK_CH1 : RO; bitpos: [23]; default: 1;
 * 1: the outlink descriptor's FSM is in idle state.  0: the outlink
 * descriptor's FSM is working.
 */

#define DMA_OUTLINK_PARK_CH1    (BIT(23))
#define DMA_OUTLINK_PARK_CH1_M  (DMA_OUTLINK_PARK_CH1_V << DMA_OUTLINK_PARK_CH1_S)
#define DMA_OUTLINK_PARK_CH1_V  0x00000001
#define DMA_OUTLINK_PARK_CH1_S  23

/* DMA_OUTLINK_RESTART_CH1 : R/W/SC; bitpos: [22]; default: 0;
 * Set this bit to restart a new outlink from the last address.
 */

#define DMA_OUTLINK_RESTART_CH1    (BIT(22))
#define DMA_OUTLINK_RESTART_CH1_M  (DMA_OUTLINK_RESTART_CH1_V << DMA_OUTLINK_RESTART_CH1_S)
#define DMA_OUTLINK_RESTART_CH1_V  0x00000001
#define DMA_OUTLINK_RESTART_CH1_S  22

/* DMA_OUTLINK_START_CH1 : R/W/SC; bitpos: [21]; default: 0;
 * Set this bit to start dealing with the outlink descriptors.
 */

#define DMA_OUTLINK_START_CH1    (BIT(21))
#define DMA_OUTLINK_START_CH1_M  (DMA_OUTLINK_START_CH1_V << DMA_OUTLINK_START_CH1_S)
#define DMA_OUTLINK_START_CH1_V  0x00000001
#define DMA_OUTLINK_START_CH1_S  21

/* DMA_OUTLINK_STOP_CH1 : R/W/SC; bitpos: [20]; default: 0;
 * Set this bit to stop dealing with the outlink descriptors.
 */

#define DMA_OUTLINK_STOP_CH1    (BIT(20))
#define DMA_OUTLINK_STOP_CH1_M  (DMA_OUTLINK_STOP_CH1_V << DMA_OUTLINK_STOP_CH1_S)
#define DMA_OUTLINK_STOP_CH1_V  0x00000001
#define DMA_OUTLINK_STOP_CH1_S  20

/* DMA_OUTLINK_ADDR_CH1 : R/W; bitpos: [19:0]; default: 0;
 * This register stores the 20 least significant bits of the first outlink
 * descriptor's address.
 */

#define DMA_OUTLINK_ADDR_CH1    0x000FFFFF
#define DMA_OUTLINK_ADDR_CH1_M  (DMA_OUTLINK_ADDR_CH1_V << DMA_OUTLINK_ADDR_CH1_S)
#define DMA_OUTLINK_ADDR_CH1_V  0x000FFFFF
#define DMA_OUTLINK_ADDR_CH1_S  0

/* DMA_OUT_STATE_CH1_REG register
 * DMA_OUT_STATE_CH1_REG.
 */

#define DMA_OUT_STATE_CH1_REG (DR_REG_GDMA_BASE + 0x1a4)

/* DMA_OUT_STATE_CH1 : RO; bitpos: [22:20]; default: 0;
 * reserved
 */

#define DMA_OUT_STATE_CH1    0x00000007
#define DMA_OUT_STATE_CH1_M  (DMA_OUT_STATE_CH1_V << DMA_OUT_STATE_CH1_S)
#define DMA_OUT_STATE_CH1_V  0x00000007
#define DMA_OUT_STATE_CH1_S  20

/* DMA_OUT_DSCR_STATE_CH1 : RO; bitpos: [19:18]; default: 0;
 * reserved
 */

#define DMA_OUT_DSCR_STATE_CH1    0x00000003
#define DMA_OUT_DSCR_STATE_CH1_M  (DMA_OUT_DSCR_STATE_CH1_V << DMA_OUT_DSCR_STATE_CH1_S)
#define DMA_OUT_DSCR_STATE_CH1_V  0x00000003
#define DMA_OUT_DSCR_STATE_CH1_S  18

/* DMA_OUTLINK_DSCR_ADDR_CH1 : RO; bitpos: [17:0]; default: 0;
 * This register stores the current outlink descriptor's address.
 */

#define DMA_OUTLINK_DSCR_ADDR_CH1    0x0003FFFF
#define DMA_OUTLINK_DSCR_ADDR_CH1_M  (DMA_OUTLINK_DSCR_ADDR_CH1_V << DMA_OUTLINK_DSCR_ADDR_CH1_S)
#define DMA_OUTLINK_DSCR_ADDR_CH1_V  0x0003FFFF
#define DMA_OUTLINK_DSCR_ADDR_CH1_S  0

/* DMA_OUT_EOF_DES_ADDR_CH1_REG register
 * DMA_OUT_EOF_DES_ADDR_CH1_REG.
 */

#define DMA_OUT_EOF_DES_ADDR_CH1_REG (DR_REG_GDMA_BASE + 0x1a8)

/* DMA_OUT_EOF_DES_ADDR_CH1 : RO; bitpos: [31:0]; default: 0;
 * This register stores the address of the outlink descriptor when the EOF
 * bit in this descriptor is 1.
 */

#define DMA_OUT_EOF_DES_ADDR_CH1    0xFFFFFFFF
#define DMA_OUT_EOF_DES_ADDR_CH1_M  (DMA_OUT_EOF_DES_ADDR_CH1_V << DMA_OUT_EOF_DES_ADDR_CH1_S)
#define DMA_OUT_EOF_DES_ADDR_CH1_V  0xFFFFFFFF
#define DMA_OUT_EOF_DES_ADDR_CH1_S  0

/* DMA_OUT_EOF_BFR_DES_ADDR_CH1_REG register
 * DMA_OUT_EOF_BFR_DES_ADDR_CH1_REG.
 */

#define DMA_OUT_EOF_BFR_DES_ADDR_CH1_REG (DR_REG_GDMA_BASE + 0x1ac)

/* DMA_OUT_EOF_BFR_DES_ADDR_CH1 : RO; bitpos: [31:0]; default: 0;
 * This register stores the address of the outlink descriptor before the
 * last outlink descriptor.
 */

#define DMA_OUT_EOF_BFR_DES_ADDR_CH1    0xFFFFFFFF
#define DMA_OUT_EOF_BFR_DES_ADDR_CH1_M  (DMA_OUT_EOF_BFR_DES_ADDR_CH1_V << DMA_OUT_EOF_BFR_DES_ADDR_CH1_S)
#define DMA_OUT_EOF_BFR_DES_ADDR_CH1_V  0xFFFFFFFF
#define DMA_OUT_EOF_BFR_DES_ADDR_CH1_S  0

/* DMA_OUT_DSCR_CH1_REG register
 * DMA_OUT_DSCR_CH1_REG.
 */

#define DMA_OUT_DSCR_CH1_REG (DR_REG_GDMA_BASE + 0x1b0)

/* DMA_OUTLINK_DSCR_CH1 : RO; bitpos: [31:0]; default: 0;
 * The address of the current outlink descriptor y.
 */

#define DMA_OUTLINK_DSCR_CH1    0xFFFFFFFF
#define DMA_OUTLINK_DSCR_CH1_M  (DMA_OUTLINK_DSCR_CH1_V << DMA_OUTLINK_DSCR_CH1_S)
#define DMA_OUTLINK_DSCR_CH1_V  0xFFFFFFFF
#define DMA_OUTLINK_DSCR_CH1_S  0

/* DMA_OUT_DSCR_BF0_CH1_REG register
 * DMA_OUT_DSCR_BF0_CH1_REG.
 */

#define DMA_OUT_DSCR_BF0_CH1_REG (DR_REG_GDMA_BASE + 0x1b4)

/* DMA_OUTLINK_DSCR_BF0_CH1 : RO; bitpos: [31:0]; default: 0;
 * The address of the last outlink descriptor y-1.
 */

#define DMA_OUTLINK_DSCR_BF0_CH1    0xFFFFFFFF
#define DMA_OUTLINK_DSCR_BF0_CH1_M  (DMA_OUTLINK_DSCR_BF0_CH1_V << DMA_OUTLINK_DSCR_BF0_CH1_S)
#define DMA_OUTLINK_DSCR_BF0_CH1_V  0xFFFFFFFF
#define DMA_OUTLINK_DSCR_BF0_CH1_S  0

/* DMA_OUT_DSCR_BF1_CH1_REG register
 * DMA_OUT_DSCR_BF1_CH1_REG.
 */

#define DMA_OUT_DSCR_BF1_CH1_REG (DR_REG_GDMA_BASE + 0x1b8)

/* DMA_OUTLINK_DSCR_BF1_CH1 : RO; bitpos: [31:0]; default: 0;
 * The address of the second-to-last inlink descriptor x-2.
 */

#define DMA_OUTLINK_DSCR_BF1_CH1    0xFFFFFFFF
#define DMA_OUTLINK_DSCR_BF1_CH1_M  (DMA_OUTLINK_DSCR_BF1_CH1_V << DMA_OUTLINK_DSCR_BF1_CH1_S)
#define DMA_OUTLINK_DSCR_BF1_CH1_V  0xFFFFFFFF
#define DMA_OUTLINK_DSCR_BF1_CH1_S  0

/* DMA_OUT_PRI_CH1_REG register
 * DMA_OUT_PRI_CH1_REG.
 */

#define DMA_OUT_PRI_CH1_REG (DR_REG_GDMA_BASE + 0x1bc)

/* DMA_TX_PRI_CH1 : R/W; bitpos: [3:0]; default: 0;
 * The priority of Tx channel 1. The larger of the value, the higher of the
 * priority.
 */

#define DMA_TX_PRI_CH1    0x0000000F
#define DMA_TX_PRI_CH1_M  (DMA_TX_PRI_CH1_V << DMA_TX_PRI_CH1_S)
#define DMA_TX_PRI_CH1_V  0x0000000F
#define DMA_TX_PRI_CH1_S  0

/* DMA_OUT_PERI_SEL_CH1_REG register
 * DMA_OUT_PERI_SEL_CH1_REG.
 */

#define DMA_OUT_PERI_SEL_CH1_REG (DR_REG_GDMA_BASE + 0x1c0)

/* DMA_PERI_OUT_SEL_CH1 : R/W; bitpos: [5:0]; default: 63;
 * This register is used to select peripheral for Tx channel 1. 0:SPI2. 1:
 * reserved. 2: UHCI0. 3: I2S0. 4: reserved. 5: reserved. 6: AES. 7: SHA. 8:
 * ADC_DAC.
 */

#define DMA_PERI_OUT_SEL_CH1    0x0000003F
#define DMA_PERI_OUT_SEL_CH1_M  (DMA_PERI_OUT_SEL_CH1_V << DMA_PERI_OUT_SEL_CH1_S)
#define DMA_PERI_OUT_SEL_CH1_V  0x0000003F
#define DMA_PERI_OUT_SEL_CH1_S  0

/* DMA_IN_CONF0_CH2_REG register
 * DMA_IN_CONF0_CH2_REG.
 */

#define DMA_IN_CONF0_CH2_REG (DR_REG_GDMA_BASE + 0x1f0)

/* DMA_MEM_TRANS_EN_CH2 : R/W; bitpos: [4]; default: 0;
 * Set this bit 1 to enable automatic transmitting data from memory to
 * memory via DMA.
 */

#define DMA_MEM_TRANS_EN_CH2    (BIT(4))
#define DMA_MEM_TRANS_EN_CH2_M  (DMA_MEM_TRANS_EN_CH2_V << DMA_MEM_TRANS_EN_CH2_S)
#define DMA_MEM_TRANS_EN_CH2_V  0x00000001
#define DMA_MEM_TRANS_EN_CH2_S  4

/* DMA_IN_DATA_BURST_EN_CH2 : R/W; bitpos: [3]; default: 0;
 * Set this bit to 1 to enable INCR burst transfer for Rx channel 2
 * receiving data when accessing internal SRAM.
 */

#define DMA_IN_DATA_BURST_EN_CH2    (BIT(3))
#define DMA_IN_DATA_BURST_EN_CH2_M  (DMA_IN_DATA_BURST_EN_CH2_V << DMA_IN_DATA_BURST_EN_CH2_S)
#define DMA_IN_DATA_BURST_EN_CH2_V  0x00000001
#define DMA_IN_DATA_BURST_EN_CH2_S  3

/* DMA_INDSCR_BURST_EN_CH2 : R/W; bitpos: [2]; default: 0;
 * Set this bit to 1 to enable INCR burst transfer for Rx channel 2 reading
 * link descriptor when accessing internal SRAM.
 */

#define DMA_INDSCR_BURST_EN_CH2    (BIT(2))
#define DMA_INDSCR_BURST_EN_CH2_M  (DMA_INDSCR_BURST_EN_CH2_V << DMA_INDSCR_BURST_EN_CH2_S)
#define DMA_INDSCR_BURST_EN_CH2_V  0x00000001
#define DMA_INDSCR_BURST_EN_CH2_S  2

/* DMA_IN_LOOP_TEST_CH2 : R/W; bitpos: [1]; default: 0;
 * reserved
 */

#define DMA_IN_LOOP_TEST_CH2    (BIT(1))
#define DMA_IN_LOOP_TEST_CH2_M  (DMA_IN_LOOP_TEST_CH2_V << DMA_IN_LOOP_TEST_CH2_S)
#define DMA_IN_LOOP_TEST_CH2_V  0x00000001
#define DMA_IN_LOOP_TEST_CH2_S  1

/* DMA_IN_RST_CH2 : R/W; bitpos: [0]; default: 0;
 * This bit is used to reset DMA channel 2 Rx FSM and Rx FIFO pointer.
 */

#define DMA_IN_RST_CH2    (BIT(0))
#define DMA_IN_RST_CH2_M  (DMA_IN_RST_CH2_V << DMA_IN_RST_CH2_S)
#define DMA_IN_RST_CH2_V  0x00000001
#define DMA_IN_RST_CH2_S  0

/* DMA_IN_CONF1_CH2_REG register
 * DMA_IN_CONF1_CH2_REG.
 */

#define DMA_IN_CONF1_CH2_REG (DR_REG_GDMA_BASE + 0x1f4)

/* DMA_IN_CHECK_OWNER_CH2 : R/W; bitpos: [12]; default: 0;
 * Set this bit to enable checking the owner attribute of the link
 * descriptor.
 */

#define DMA_IN_CHECK_OWNER_CH2    (BIT(12))
#define DMA_IN_CHECK_OWNER_CH2_M  (DMA_IN_CHECK_OWNER_CH2_V << DMA_IN_CHECK_OWNER_CH2_S)
#define DMA_IN_CHECK_OWNER_CH2_V  0x00000001
#define DMA_IN_CHECK_OWNER_CH2_S  12

/* DMA_INFIFO_STATUS_CH2_REG register
 * DMA_INFIFO_STATUS_CH2_REG.
 */

#define DMA_INFIFO_STATUS_CH2_REG (DR_REG_GDMA_BASE + 0x1f8)

/* DMA_IN_BUF_HUNGRY_CH2 : RO; bitpos: [27]; default: 0;
 * reserved
 */

#define DMA_IN_BUF_HUNGRY_CH2    (BIT(27))
#define DMA_IN_BUF_HUNGRY_CH2_M  (DMA_IN_BUF_HUNGRY_CH2_V << DMA_IN_BUF_HUNGRY_CH2_S)
#define DMA_IN_BUF_HUNGRY_CH2_V  0x00000001
#define DMA_IN_BUF_HUNGRY_CH2_S  27

/* DMA_IN_REMAIN_UNDER_4B_CH2 : RO; bitpos: [26]; default: 1;
 * reserved
 */

#define DMA_IN_REMAIN_UNDER_4B_CH2    (BIT(26))
#define DMA_IN_REMAIN_UNDER_4B_CH2_M  (DMA_IN_REMAIN_UNDER_4B_CH2_V << DMA_IN_REMAIN_UNDER_4B_CH2_S)
#define DMA_IN_REMAIN_UNDER_4B_CH2_V  0x00000001
#define DMA_IN_REMAIN_UNDER_4B_CH2_S  26

/* DMA_IN_REMAIN_UNDER_3B_CH2 : RO; bitpos: [25]; default: 1;
 * reserved
 */

#define DMA_IN_REMAIN_UNDER_3B_CH2    (BIT(25))
#define DMA_IN_REMAIN_UNDER_3B_CH2_M  (DMA_IN_REMAIN_UNDER_3B_CH2_V << DMA_IN_REMAIN_UNDER_3B_CH2_S)
#define DMA_IN_REMAIN_UNDER_3B_CH2_V  0x00000001
#define DMA_IN_REMAIN_UNDER_3B_CH2_S  25

/* DMA_IN_REMAIN_UNDER_2B_CH2 : RO; bitpos: [24]; default: 1;
 * reserved
 */

#define DMA_IN_REMAIN_UNDER_2B_CH2    (BIT(24))
#define DMA_IN_REMAIN_UNDER_2B_CH2_M  (DMA_IN_REMAIN_UNDER_2B_CH2_V << DMA_IN_REMAIN_UNDER_2B_CH2_S)
#define DMA_IN_REMAIN_UNDER_2B_CH2_V  0x00000001
#define DMA_IN_REMAIN_UNDER_2B_CH2_S  24

/* DMA_IN_REMAIN_UNDER_1B_CH2 : RO; bitpos: [23]; default: 1;
 * reserved
 */

#define DMA_IN_REMAIN_UNDER_1B_CH2    (BIT(23))
#define DMA_IN_REMAIN_UNDER_1B_CH2_M  (DMA_IN_REMAIN_UNDER_1B_CH2_V << DMA_IN_REMAIN_UNDER_1B_CH2_S)
#define DMA_IN_REMAIN_UNDER_1B_CH2_V  0x00000001
#define DMA_IN_REMAIN_UNDER_1B_CH2_S  23

/* DMA_INFIFO_CNT_CH2 : RO; bitpos: [7:2]; default: 0;
 * The register stores the byte number of the data in L1 Rx FIFO for Rx
 * channel 2.
 */

#define DMA_INFIFO_CNT_CH2    0x0000003F
#define DMA_INFIFO_CNT_CH2_M  (DMA_INFIFO_CNT_CH2_V << DMA_INFIFO_CNT_CH2_S)
#define DMA_INFIFO_CNT_CH2_V  0x0000003F
#define DMA_INFIFO_CNT_CH2_S  2

/* DMA_INFIFO_EMPTY_CH2 : RO; bitpos: [1]; default: 1;
 * L1 Rx FIFO empty signal for Rx channel 2.
 */

#define DMA_INFIFO_EMPTY_CH2    (BIT(1))
#define DMA_INFIFO_EMPTY_CH2_M  (DMA_INFIFO_EMPTY_CH2_V << DMA_INFIFO_EMPTY_CH2_S)
#define DMA_INFIFO_EMPTY_CH2_V  0x00000001
#define DMA_INFIFO_EMPTY_CH2_S  1

/* DMA_INFIFO_FULL_CH2 : RO; bitpos: [0]; default: 1;
 * L1 Rx FIFO full signal for Rx channel 2.
 */

#define DMA_INFIFO_FULL_CH2    (BIT(0))
#define DMA_INFIFO_FULL_CH2_M  (DMA_INFIFO_FULL_CH2_V << DMA_INFIFO_FULL_CH2_S)
#define DMA_INFIFO_FULL_CH2_V  0x00000001
#define DMA_INFIFO_FULL_CH2_S  0

/* DMA_IN_POP_CH2_REG register
 * DMA_IN_POP_CH2_REG.
 */

#define DMA_IN_POP_CH2_REG (DR_REG_GDMA_BASE + 0x1fc)

/* DMA_INFIFO_POP_CH2 : R/W/SC; bitpos: [12]; default: 0;
 * Set this bit to pop data from DMA FIFO.
 */

#define DMA_INFIFO_POP_CH2    (BIT(12))
#define DMA_INFIFO_POP_CH2_M  (DMA_INFIFO_POP_CH2_V << DMA_INFIFO_POP_CH2_S)
#define DMA_INFIFO_POP_CH2_V  0x00000001
#define DMA_INFIFO_POP_CH2_S  12

/* DMA_INFIFO_RDATA_CH2 : RO; bitpos: [11:0]; default: 2048;
 * This register stores the data popping from DMA FIFO.
 */

#define DMA_INFIFO_RDATA_CH2    0x00000FFF
#define DMA_INFIFO_RDATA_CH2_M  (DMA_INFIFO_RDATA_CH2_V << DMA_INFIFO_RDATA_CH2_S)
#define DMA_INFIFO_RDATA_CH2_V  0x00000FFF
#define DMA_INFIFO_RDATA_CH2_S  0

/* DMA_IN_LINK_CH2_REG register
 * DMA_IN_LINK_CH2_REG.
 */

#define DMA_IN_LINK_CH2_REG (DR_REG_GDMA_BASE + 0x200)

/* DMA_INLINK_PARK_CH2 : RO; bitpos: [24]; default: 1;
 * 1: the inlink descriptor's FSM is in idle state.  0: the inlink
 * descriptor's FSM is working.
 */

#define DMA_INLINK_PARK_CH2    (BIT(24))
#define DMA_INLINK_PARK_CH2_M  (DMA_INLINK_PARK_CH2_V << DMA_INLINK_PARK_CH2_S)
#define DMA_INLINK_PARK_CH2_V  0x00000001
#define DMA_INLINK_PARK_CH2_S  24

/* DMA_INLINK_RESTART_CH2 : R/W/SC; bitpos: [23]; default: 0;
 * Set this bit to mount a new inlink descriptor.
 */

#define DMA_INLINK_RESTART_CH2    (BIT(23))
#define DMA_INLINK_RESTART_CH2_M  (DMA_INLINK_RESTART_CH2_V << DMA_INLINK_RESTART_CH2_S)
#define DMA_INLINK_RESTART_CH2_V  0x00000001
#define DMA_INLINK_RESTART_CH2_S  23

/* DMA_INLINK_START_CH2 : R/W/SC; bitpos: [22]; default: 0;
 * Set this bit to start dealing with the inlink descriptors.
 */

#define DMA_INLINK_START_CH2    (BIT(22))
#define DMA_INLINK_START_CH2_M  (DMA_INLINK_START_CH2_V << DMA_INLINK_START_CH2_S)
#define DMA_INLINK_START_CH2_V  0x00000001
#define DMA_INLINK_START_CH2_S  22

/* DMA_INLINK_STOP_CH2 : R/W/SC; bitpos: [21]; default: 0;
 * Set this bit to stop dealing with the inlink descriptors.
 */

#define DMA_INLINK_STOP_CH2    (BIT(21))
#define DMA_INLINK_STOP_CH2_M  (DMA_INLINK_STOP_CH2_V << DMA_INLINK_STOP_CH2_S)
#define DMA_INLINK_STOP_CH2_V  0x00000001
#define DMA_INLINK_STOP_CH2_S  21

/* DMA_INLINK_AUTO_RET_CH2 : R/W; bitpos: [20]; default: 1;
 * Set this bit to return to current inlink descriptor's address, when there
 * are some errors in current receiving data.
 */

#define DMA_INLINK_AUTO_RET_CH2    (BIT(20))
#define DMA_INLINK_AUTO_RET_CH2_M  (DMA_INLINK_AUTO_RET_CH2_V << DMA_INLINK_AUTO_RET_CH2_S)
#define DMA_INLINK_AUTO_RET_CH2_V  0x00000001
#define DMA_INLINK_AUTO_RET_CH2_S  20

/* DMA_INLINK_ADDR_CH2 : R/W; bitpos: [19:0]; default: 0;
 * This register stores the 20 least significant bits of the first inlink
 * descriptor's address.
 */

#define DMA_INLINK_ADDR_CH2    0x000FFFFF
#define DMA_INLINK_ADDR_CH2_M  (DMA_INLINK_ADDR_CH2_V << DMA_INLINK_ADDR_CH2_S)
#define DMA_INLINK_ADDR_CH2_V  0x000FFFFF
#define DMA_INLINK_ADDR_CH2_S  0

/* DMA_IN_STATE_CH2_REG register
 * DMA_IN_STATE_CH2_REG.
 */

#define DMA_IN_STATE_CH2_REG (DR_REG_GDMA_BASE + 0x204)

/* DMA_IN_STATE_CH2 : RO; bitpos: [22:20]; default: 0;
 * reserved
 */

#define DMA_IN_STATE_CH2    0x00000007
#define DMA_IN_STATE_CH2_M  (DMA_IN_STATE_CH2_V << DMA_IN_STATE_CH2_S)
#define DMA_IN_STATE_CH2_V  0x00000007
#define DMA_IN_STATE_CH2_S  20

/* DMA_IN_DSCR_STATE_CH2 : RO; bitpos: [19:18]; default: 0;
 * reserved
 */

#define DMA_IN_DSCR_STATE_CH2    0x00000003
#define DMA_IN_DSCR_STATE_CH2_M  (DMA_IN_DSCR_STATE_CH2_V << DMA_IN_DSCR_STATE_CH2_S)
#define DMA_IN_DSCR_STATE_CH2_V  0x00000003
#define DMA_IN_DSCR_STATE_CH2_S  18

/* DMA_INLINK_DSCR_ADDR_CH2 : RO; bitpos: [17:0]; default: 0;
 * This register stores the current inlink descriptor's address.
 */

#define DMA_INLINK_DSCR_ADDR_CH2    0x0003FFFF
#define DMA_INLINK_DSCR_ADDR_CH2_M  (DMA_INLINK_DSCR_ADDR_CH2_V << DMA_INLINK_DSCR_ADDR_CH2_S)
#define DMA_INLINK_DSCR_ADDR_CH2_V  0x0003FFFF
#define DMA_INLINK_DSCR_ADDR_CH2_S  0

/* DMA_IN_SUC_EOF_DES_ADDR_CH2_REG register
 * DMA_IN_SUC_EOF_DES_ADDR_CH2_REG.
 */

#define DMA_IN_SUC_EOF_DES_ADDR_CH2_REG (DR_REG_GDMA_BASE + 0x208)

/* DMA_IN_SUC_EOF_DES_ADDR_CH2 : RO; bitpos: [31:0]; default: 0;
 * This register stores the address of the inlink descriptor when the EOF
 * bit in this descriptor is 1.
 */

#define DMA_IN_SUC_EOF_DES_ADDR_CH2    0xFFFFFFFF
#define DMA_IN_SUC_EOF_DES_ADDR_CH2_M  (DMA_IN_SUC_EOF_DES_ADDR_CH2_V << DMA_IN_SUC_EOF_DES_ADDR_CH2_S)
#define DMA_IN_SUC_EOF_DES_ADDR_CH2_V  0xFFFFFFFF
#define DMA_IN_SUC_EOF_DES_ADDR_CH2_S  0

/* DMA_IN_ERR_EOF_DES_ADDR_CH2_REG register
 * DMA_IN_ERR_EOF_DES_ADDR_CH2_REG.
 */

#define DMA_IN_ERR_EOF_DES_ADDR_CH2_REG (DR_REG_GDMA_BASE + 0x20c)

/* DMA_IN_ERR_EOF_DES_ADDR_CH2 : RO; bitpos: [31:0]; default: 0;
 * This register stores the address of the inlink descriptor when there are
 * some errors in current receiving data. Only used when peripheral is UHCI0.
 */

#define DMA_IN_ERR_EOF_DES_ADDR_CH2    0xFFFFFFFF
#define DMA_IN_ERR_EOF_DES_ADDR_CH2_M  (DMA_IN_ERR_EOF_DES_ADDR_CH2_V << DMA_IN_ERR_EOF_DES_ADDR_CH2_S)
#define DMA_IN_ERR_EOF_DES_ADDR_CH2_V  0xFFFFFFFF
#define DMA_IN_ERR_EOF_DES_ADDR_CH2_S  0

/* DMA_IN_DSCR_CH2_REG register
 * DMA_IN_DSCR_CH2_REG.
 */

#define DMA_IN_DSCR_CH2_REG (DR_REG_GDMA_BASE + 0x210)

/* DMA_INLINK_DSCR_CH2 : RO; bitpos: [31:0]; default: 0;
 * The address of the current inlink descriptor x.
 */

#define DMA_INLINK_DSCR_CH2    0xFFFFFFFF
#define DMA_INLINK_DSCR_CH2_M  (DMA_INLINK_DSCR_CH2_V << DMA_INLINK_DSCR_CH2_S)
#define DMA_INLINK_DSCR_CH2_V  0xFFFFFFFF
#define DMA_INLINK_DSCR_CH2_S  0

/* DMA_IN_DSCR_BF0_CH2_REG register
 * DMA_IN_DSCR_BF0_CH2_REG.
 */

#define DMA_IN_DSCR_BF0_CH2_REG (DR_REG_GDMA_BASE + 0x214)

/* DMA_INLINK_DSCR_BF0_CH2 : RO; bitpos: [31:0]; default: 0;
 * The address of the last inlink descriptor x-1.
 */

#define DMA_INLINK_DSCR_BF0_CH2    0xFFFFFFFF
#define DMA_INLINK_DSCR_BF0_CH2_M  (DMA_INLINK_DSCR_BF0_CH2_V << DMA_INLINK_DSCR_BF0_CH2_S)
#define DMA_INLINK_DSCR_BF0_CH2_V  0xFFFFFFFF
#define DMA_INLINK_DSCR_BF0_CH2_S  0

/* DMA_IN_DSCR_BF1_CH2_REG register
 * DMA_IN_DSCR_BF1_CH2_REG.
 */

#define DMA_IN_DSCR_BF1_CH2_REG (DR_REG_GDMA_BASE + 0x218)

/* DMA_INLINK_DSCR_BF1_CH2 : RO; bitpos: [31:0]; default: 0;
 * The address of the second-to-last inlink descriptor x-2.
 */

#define DMA_INLINK_DSCR_BF1_CH2    0xFFFFFFFF
#define DMA_INLINK_DSCR_BF1_CH2_M  (DMA_INLINK_DSCR_BF1_CH2_V << DMA_INLINK_DSCR_BF1_CH2_S)
#define DMA_INLINK_DSCR_BF1_CH2_V  0xFFFFFFFF
#define DMA_INLINK_DSCR_BF1_CH2_S  0

/* DMA_IN_PRI_CH2_REG register
 * DMA_IN_PRI_CH2_REG.
 */

#define DMA_IN_PRI_CH2_REG (DR_REG_GDMA_BASE + 0x21c)

/* DMA_RX_PRI_CH2 : R/W; bitpos: [3:0]; default: 0;
 * The priority of Rx channel 2. The larger of the value, the higher of the
 * priority.
 */

#define DMA_RX_PRI_CH2    0x0000000F
#define DMA_RX_PRI_CH2_M  (DMA_RX_PRI_CH2_V << DMA_RX_PRI_CH2_S)
#define DMA_RX_PRI_CH2_V  0x0000000F
#define DMA_RX_PRI_CH2_S  0

/* DMA_IN_PERI_SEL_CH2_REG register
 * DMA_IN_PERI_SEL_CH2_REG.
 */

#define DMA_IN_PERI_SEL_CH2_REG (DR_REG_GDMA_BASE + 0x220)

/* DMA_PERI_IN_SEL_CH2 : R/W; bitpos: [5:0]; default: 63;
 * This register is used to select peripheral for Rx channel 2. 0:SPI2. 1:
 * reserved. 2: UHCI0. 3: I2S0. 4: reserved. 5: reserved. 6: AES. 7: SHA. 8:
 * ADC_DAC.
 */

#define DMA_PERI_IN_SEL_CH2    0x0000003F
#define DMA_PERI_IN_SEL_CH2_M  (DMA_PERI_IN_SEL_CH2_V << DMA_PERI_IN_SEL_CH2_S)
#define DMA_PERI_IN_SEL_CH2_V  0x0000003F
#define DMA_PERI_IN_SEL_CH2_S  0

/* DMA_OUT_CONF0_CH2_REG register
 * DMA_OUT_CONF0_CH2_REG.
 */

#define DMA_OUT_CONF0_CH2_REG (DR_REG_GDMA_BASE + 0x250)

/* DMA_OUT_DATA_BURST_EN_CH2 : R/W; bitpos: [5]; default: 0;
 * Set this bit to 1 to enable INCR burst transfer for Tx channel 2
 * transmitting data when accessing internal SRAM.
 */

#define DMA_OUT_DATA_BURST_EN_CH2    (BIT(5))
#define DMA_OUT_DATA_BURST_EN_CH2_M  (DMA_OUT_DATA_BURST_EN_CH2_V << DMA_OUT_DATA_BURST_EN_CH2_S)
#define DMA_OUT_DATA_BURST_EN_CH2_V  0x00000001
#define DMA_OUT_DATA_BURST_EN_CH2_S  5

/* DMA_OUTDSCR_BURST_EN_CH2 : R/W; bitpos: [4]; default: 0;
 * Set this bit to 1 to enable INCR burst transfer for Tx channel 2 reading
 * link descriptor when accessing internal SRAM.
 */

#define DMA_OUTDSCR_BURST_EN_CH2    (BIT(4))
#define DMA_OUTDSCR_BURST_EN_CH2_M  (DMA_OUTDSCR_BURST_EN_CH2_V << DMA_OUTDSCR_BURST_EN_CH2_S)
#define DMA_OUTDSCR_BURST_EN_CH2_V  0x00000001
#define DMA_OUTDSCR_BURST_EN_CH2_S  4

/* DMA_OUT_EOF_MODE_CH2 : R/W; bitpos: [3]; default: 1;
 * EOF flag generation mode when transmitting data. 1: EOF flag for Tx
 * channel 2 is generated when data need to transmit has been popped from
 * FIFO in DMA
 */

#define DMA_OUT_EOF_MODE_CH2    (BIT(3))
#define DMA_OUT_EOF_MODE_CH2_M  (DMA_OUT_EOF_MODE_CH2_V << DMA_OUT_EOF_MODE_CH2_S)
#define DMA_OUT_EOF_MODE_CH2_V  0x00000001
#define DMA_OUT_EOF_MODE_CH2_S  3

/* DMA_OUT_AUTO_WRBACK_CH2 : R/W; bitpos: [2]; default: 0;
 * Set this bit to enable automatic outlink-writeback when all the data in
 * tx buffer has been transmitted.
 */

#define DMA_OUT_AUTO_WRBACK_CH2    (BIT(2))
#define DMA_OUT_AUTO_WRBACK_CH2_M  (DMA_OUT_AUTO_WRBACK_CH2_V << DMA_OUT_AUTO_WRBACK_CH2_S)
#define DMA_OUT_AUTO_WRBACK_CH2_V  0x00000001
#define DMA_OUT_AUTO_WRBACK_CH2_S  2

/* DMA_OUT_LOOP_TEST_CH2 : R/W; bitpos: [1]; default: 0;
 * reserved
 */

#define DMA_OUT_LOOP_TEST_CH2    (BIT(1))
#define DMA_OUT_LOOP_TEST_CH2_M  (DMA_OUT_LOOP_TEST_CH2_V << DMA_OUT_LOOP_TEST_CH2_S)
#define DMA_OUT_LOOP_TEST_CH2_V  0x00000001
#define DMA_OUT_LOOP_TEST_CH2_S  1

/* DMA_OUT_RST_CH2 : R/W; bitpos: [0]; default: 0;
 * This bit is used to reset DMA channel 2 Tx FSM and Tx FIFO pointer.
 */

#define DMA_OUT_RST_CH2    (BIT(0))
#define DMA_OUT_RST_CH2_M  (DMA_OUT_RST_CH2_V << DMA_OUT_RST_CH2_S)
#define DMA_OUT_RST_CH2_V  0x00000001
#define DMA_OUT_RST_CH2_S  0

/* DMA_OUT_CONF1_CH2_REG register
 * DMA_OUT_CONF1_CH2_REG.
 */

#define DMA_OUT_CONF1_CH2_REG (DR_REG_GDMA_BASE + 0x254)

/* DMA_OUT_CHECK_OWNER_CH2 : R/W; bitpos: [12]; default: 0;
 * Set this bit to enable checking the owner attribute of the link
 * descriptor.
 */

#define DMA_OUT_CHECK_OWNER_CH2    (BIT(12))
#define DMA_OUT_CHECK_OWNER_CH2_M  (DMA_OUT_CHECK_OWNER_CH2_V << DMA_OUT_CHECK_OWNER_CH2_S)
#define DMA_OUT_CHECK_OWNER_CH2_V  0x00000001
#define DMA_OUT_CHECK_OWNER_CH2_S  12

/* DMA_OUTFIFO_STATUS_CH2_REG register
 * DMA_OUTFIFO_STATUS_CH2_REG.
 */

#define DMA_OUTFIFO_STATUS_CH2_REG (DR_REG_GDMA_BASE + 0x258)

/* DMA_OUT_REMAIN_UNDER_4B_CH2 : RO; bitpos: [26]; default: 1;
 * reserved
 */

#define DMA_OUT_REMAIN_UNDER_4B_CH2    (BIT(26))
#define DMA_OUT_REMAIN_UNDER_4B_CH2_M  (DMA_OUT_REMAIN_UNDER_4B_CH2_V << DMA_OUT_REMAIN_UNDER_4B_CH2_S)
#define DMA_OUT_REMAIN_UNDER_4B_CH2_V  0x00000001
#define DMA_OUT_REMAIN_UNDER_4B_CH2_S  26

/* DMA_OUT_REMAIN_UNDER_3B_CH2 : RO; bitpos: [25]; default: 1;
 * reserved
 */

#define DMA_OUT_REMAIN_UNDER_3B_CH2    (BIT(25))
#define DMA_OUT_REMAIN_UNDER_3B_CH2_M  (DMA_OUT_REMAIN_UNDER_3B_CH2_V << DMA_OUT_REMAIN_UNDER_3B_CH2_S)
#define DMA_OUT_REMAIN_UNDER_3B_CH2_V  0x00000001
#define DMA_OUT_REMAIN_UNDER_3B_CH2_S  25

/* DMA_OUT_REMAIN_UNDER_2B_CH2 : RO; bitpos: [24]; default: 1;
 * reserved
 */

#define DMA_OUT_REMAIN_UNDER_2B_CH2    (BIT(24))
#define DMA_OUT_REMAIN_UNDER_2B_CH2_M  (DMA_OUT_REMAIN_UNDER_2B_CH2_V << DMA_OUT_REMAIN_UNDER_2B_CH2_S)
#define DMA_OUT_REMAIN_UNDER_2B_CH2_V  0x00000001
#define DMA_OUT_REMAIN_UNDER_2B_CH2_S  24

/* DMA_OUT_REMAIN_UNDER_1B_CH2 : RO; bitpos: [23]; default: 1;
 * reserved
 */

#define DMA_OUT_REMAIN_UNDER_1B_CH2    (BIT(23))
#define DMA_OUT_REMAIN_UNDER_1B_CH2_M  (DMA_OUT_REMAIN_UNDER_1B_CH2_V << DMA_OUT_REMAIN_UNDER_1B_CH2_S)
#define DMA_OUT_REMAIN_UNDER_1B_CH2_V  0x00000001
#define DMA_OUT_REMAIN_UNDER_1B_CH2_S  23

/* DMA_OUTFIFO_CNT_CH2 : RO; bitpos: [7:2]; default: 0;
 * The register stores the byte number of the data in L1 Tx FIFO for Tx
 * channel 2.
 */

#define DMA_OUTFIFO_CNT_CH2    0x0000003F
#define DMA_OUTFIFO_CNT_CH2_M  (DMA_OUTFIFO_CNT_CH2_V << DMA_OUTFIFO_CNT_CH2_S)
#define DMA_OUTFIFO_CNT_CH2_V  0x0000003F
#define DMA_OUTFIFO_CNT_CH2_S  2

/* DMA_OUTFIFO_EMPTY_CH2 : RO; bitpos: [1]; default: 1;
 * L1 Tx FIFO empty signal for Tx channel 2.
 */

#define DMA_OUTFIFO_EMPTY_CH2    (BIT(1))
#define DMA_OUTFIFO_EMPTY_CH2_M  (DMA_OUTFIFO_EMPTY_CH2_V << DMA_OUTFIFO_EMPTY_CH2_S)
#define DMA_OUTFIFO_EMPTY_CH2_V  0x00000001
#define DMA_OUTFIFO_EMPTY_CH2_S  1

/* DMA_OUTFIFO_FULL_CH2 : RO; bitpos: [0]; default: 0;
 * L1 Tx FIFO full signal for Tx channel 2.
 */

#define DMA_OUTFIFO_FULL_CH2    (BIT(0))
#define DMA_OUTFIFO_FULL_CH2_M  (DMA_OUTFIFO_FULL_CH2_V << DMA_OUTFIFO_FULL_CH2_S)
#define DMA_OUTFIFO_FULL_CH2_V  0x00000001
#define DMA_OUTFIFO_FULL_CH2_S  0

/* DMA_OUT_PUSH_CH2_REG register
 * DMA_OUT_PUSH_CH2_REG.
 */

#define DMA_OUT_PUSH_CH2_REG (DR_REG_GDMA_BASE + 0x25c)

/* DMA_OUTFIFO_PUSH_CH2 : R/W/SC; bitpos: [9]; default: 0;
 * Set this bit to push data into DMA FIFO.
 */

#define DMA_OUTFIFO_PUSH_CH2    (BIT(9))
#define DMA_OUTFIFO_PUSH_CH2_M  (DMA_OUTFIFO_PUSH_CH2_V << DMA_OUTFIFO_PUSH_CH2_S)
#define DMA_OUTFIFO_PUSH_CH2_V  0x00000001
#define DMA_OUTFIFO_PUSH_CH2_S  9

/* DMA_OUTFIFO_WDATA_CH2 : R/W; bitpos: [8:0]; default: 0;
 * This register stores the data that need to be pushed into DMA FIFO.
 */

#define DMA_OUTFIFO_WDATA_CH2    0x000001FF
#define DMA_OUTFIFO_WDATA_CH2_M  (DMA_OUTFIFO_WDATA_CH2_V << DMA_OUTFIFO_WDATA_CH2_S)
#define DMA_OUTFIFO_WDATA_CH2_V  0x000001FF
#define DMA_OUTFIFO_WDATA_CH2_S  0

/* DMA_OUT_LINK_CH2_REG register
 * DMA_OUT_LINK_CH2_REG.
 */

#define DMA_OUT_LINK_CH2_REG (DR_REG_GDMA_BASE + 0x260)

/* DMA_OUTLINK_PARK_CH2 : RO; bitpos: [23]; default: 1;
 * 1: the outlink descriptor's FSM is in idle state.  0: the outlink
 * descriptor's FSM is working.
 */

#define DMA_OUTLINK_PARK_CH2    (BIT(23))
#define DMA_OUTLINK_PARK_CH2_M  (DMA_OUTLINK_PARK_CH2_V << DMA_OUTLINK_PARK_CH2_S)
#define DMA_OUTLINK_PARK_CH2_V  0x00000001
#define DMA_OUTLINK_PARK_CH2_S  23

/* DMA_OUTLINK_RESTART_CH2 : R/W/SC; bitpos: [22]; default: 0;
 * Set this bit to restart a new outlink from the last address.
 */

#define DMA_OUTLINK_RESTART_CH2    (BIT(22))
#define DMA_OUTLINK_RESTART_CH2_M  (DMA_OUTLINK_RESTART_CH2_V << DMA_OUTLINK_RESTART_CH2_S)
#define DMA_OUTLINK_RESTART_CH2_V  0x00000001
#define DMA_OUTLINK_RESTART_CH2_S  22

/* DMA_OUTLINK_START_CH2 : R/W/SC; bitpos: [21]; default: 0;
 * Set this bit to start dealing with the outlink descriptors.
 */

#define DMA_OUTLINK_START_CH2    (BIT(21))
#define DMA_OUTLINK_START_CH2_M  (DMA_OUTLINK_START_CH2_V << DMA_OUTLINK_START_CH2_S)
#define DMA_OUTLINK_START_CH2_V  0x00000001
#define DMA_OUTLINK_START_CH2_S  21

/* DMA_OUTLINK_STOP_CH2 : R/W/SC; bitpos: [20]; default: 0;
 * Set this bit to stop dealing with the outlink descriptors.
 */

#define DMA_OUTLINK_STOP_CH2    (BIT(20))
#define DMA_OUTLINK_STOP_CH2_M  (DMA_OUTLINK_STOP_CH2_V << DMA_OUTLINK_STOP_CH2_S)
#define DMA_OUTLINK_STOP_CH2_V  0x00000001
#define DMA_OUTLINK_STOP_CH2_S  20

/* DMA_OUTLINK_ADDR_CH2 : R/W; bitpos: [19:0]; default: 0;
 * This register stores the 20 least significant bits of the first outlink
 * descriptor's address.
 */

#define DMA_OUTLINK_ADDR_CH2    0x000FFFFF
#define DMA_OUTLINK_ADDR_CH2_M  (DMA_OUTLINK_ADDR_CH2_V << DMA_OUTLINK_ADDR_CH2_S)
#define DMA_OUTLINK_ADDR_CH2_V  0x000FFFFF
#define DMA_OUTLINK_ADDR_CH2_S  0

/* DMA_OUT_STATE_CH2_REG register
 * DMA_OUT_STATE_CH2_REG.
 */

#define DMA_OUT_STATE_CH2_REG (DR_REG_GDMA_BASE + 0x264)

/* DMA_OUT_STATE_CH2 : RO; bitpos: [22:20]; default: 0;
 * reserved
 */

#define DMA_OUT_STATE_CH2    0x00000007
#define DMA_OUT_STATE_CH2_M  (DMA_OUT_STATE_CH2_V << DMA_OUT_STATE_CH2_S)
#define DMA_OUT_STATE_CH2_V  0x00000007
#define DMA_OUT_STATE_CH2_S  20

/* DMA_OUT_DSCR_STATE_CH2 : RO; bitpos: [19:18]; default: 0;
 * reserved
 */

#define DMA_OUT_DSCR_STATE_CH2    0x00000003
#define DMA_OUT_DSCR_STATE_CH2_M  (DMA_OUT_DSCR_STATE_CH2_V << DMA_OUT_DSCR_STATE_CH2_S)
#define DMA_OUT_DSCR_STATE_CH2_V  0x00000003
#define DMA_OUT_DSCR_STATE_CH2_S  18

/* DMA_OUTLINK_DSCR_ADDR_CH2 : RO; bitpos: [17:0]; default: 0;
 * This register stores the current outlink descriptor's address.
 */

#define DMA_OUTLINK_DSCR_ADDR_CH2    0x0003FFFF
#define DMA_OUTLINK_DSCR_ADDR_CH2_M  (DMA_OUTLINK_DSCR_ADDR_CH2_V << DMA_OUTLINK_DSCR_ADDR_CH2_S)
#define DMA_OUTLINK_DSCR_ADDR_CH2_V  0x0003FFFF
#define DMA_OUTLINK_DSCR_ADDR_CH2_S  0

/* DMA_OUT_EOF_DES_ADDR_CH2_REG register
 * DMA_OUT_EOF_DES_ADDR_CH2_REG.
 */

#define DMA_OUT_EOF_DES_ADDR_CH2_REG (DR_REG_GDMA_BASE + 0x268)

/* DMA_OUT_EOF_DES_ADDR_CH2 : RO; bitpos: [31:0]; default: 0;
 * This register stores the address of the outlink descriptor when the EOF
 * bit in this descriptor is 1.
 */

#define DMA_OUT_EOF_DES_ADDR_CH2    0xFFFFFFFF
#define DMA_OUT_EOF_DES_ADDR_CH2_M  (DMA_OUT_EOF_DES_ADDR_CH2_V << DMA_OUT_EOF_DES_ADDR_CH2_S)
#define DMA_OUT_EOF_DES_ADDR_CH2_V  0xFFFFFFFF
#define DMA_OUT_EOF_DES_ADDR_CH2_S  0

/* DMA_OUT_EOF_BFR_DES_ADDR_CH2_REG register
 * DMA_OUT_EOF_BFR_DES_ADDR_CH2_REG.
 */

#define DMA_OUT_EOF_BFR_DES_ADDR_CH2_REG (DR_REG_GDMA_BASE + 0x26c)

/* DMA_OUT_EOF_BFR_DES_ADDR_CH2 : RO; bitpos: [31:0]; default: 0;
 * This register stores the address of the outlink descriptor before the
 * last outlink descriptor.
 */

#define DMA_OUT_EOF_BFR_DES_ADDR_CH2    0xFFFFFFFF
#define DMA_OUT_EOF_BFR_DES_ADDR_CH2_M  (DMA_OUT_EOF_BFR_DES_ADDR_CH2_V << DMA_OUT_EOF_BFR_DES_ADDR_CH2_S)
#define DMA_OUT_EOF_BFR_DES_ADDR_CH2_V  0xFFFFFFFF
#define DMA_OUT_EOF_BFR_DES_ADDR_CH2_S  0

/* DMA_OUT_DSCR_CH2_REG register
 * DMA_OUT_DSCR_CH2_REG.
 */

#define DMA_OUT_DSCR_CH2_REG (DR_REG_GDMA_BASE + 0x270)

/* DMA_OUTLINK_DSCR_CH2 : RO; bitpos: [31:0]; default: 0;
 * The address of the current outlink descriptor y.
 */

#define DMA_OUTLINK_DSCR_CH2    0xFFFFFFFF
#define DMA_OUTLINK_DSCR_CH2_M  (DMA_OUTLINK_DSCR_CH2_V << DMA_OUTLINK_DSCR_CH2_S)
#define DMA_OUTLINK_DSCR_CH2_V  0xFFFFFFFF
#define DMA_OUTLINK_DSCR_CH2_S  0

/* DMA_OUT_DSCR_BF0_CH2_REG register
 * DMA_OUT_DSCR_BF0_CH2_REG.
 */

#define DMA_OUT_DSCR_BF0_CH2_REG (DR_REG_GDMA_BASE + 0x274)

/* DMA_OUTLINK_DSCR_BF0_CH2 : RO; bitpos: [31:0]; default: 0;
 * The address of the last outlink descriptor y-1.
 */

#define DMA_OUTLINK_DSCR_BF0_CH2    0xFFFFFFFF
#define DMA_OUTLINK_DSCR_BF0_CH2_M  (DMA_OUTLINK_DSCR_BF0_CH2_V << DMA_OUTLINK_DSCR_BF0_CH2_S)
#define DMA_OUTLINK_DSCR_BF0_CH2_V  0xFFFFFFFF
#define DMA_OUTLINK_DSCR_BF0_CH2_S  0

/* DMA_OUT_DSCR_BF1_CH2_REG register
 * DMA_OUT_DSCR_BF1_CH2_REG.
 */

#define DMA_OUT_DSCR_BF1_CH2_REG (DR_REG_GDMA_BASE + 0x278)

/* DMA_OUTLINK_DSCR_BF1_CH2 : RO; bitpos: [31:0]; default: 0;
 * The address of the second-to-last inlink descriptor x-2.
 */

#define DMA_OUTLINK_DSCR_BF1_CH2    0xFFFFFFFF
#define DMA_OUTLINK_DSCR_BF1_CH2_M  (DMA_OUTLINK_DSCR_BF1_CH2_V << DMA_OUTLINK_DSCR_BF1_CH2_S)
#define DMA_OUTLINK_DSCR_BF1_CH2_V  0xFFFFFFFF
#define DMA_OUTLINK_DSCR_BF1_CH2_S  0

/* DMA_OUT_PRI_CH2_REG register
 * DMA_OUT_PRI_CH2_REG.
 */

#define DMA_OUT_PRI_CH2_REG (DR_REG_GDMA_BASE + 0x27c)

/* DMA_TX_PRI_CH2 : R/W; bitpos: [3:0]; default: 0;
 * The priority of Tx channel 2. The larger of the value, the higher of the
 * priority.
 */

#define DMA_TX_PRI_CH2    0x0000000F
#define DMA_TX_PRI_CH2_M  (DMA_TX_PRI_CH2_V << DMA_TX_PRI_CH2_S)
#define DMA_TX_PRI_CH2_V  0x0000000F
#define DMA_TX_PRI_CH2_S  0

/* DMA_OUT_PERI_SEL_CH2_REG register
 * DMA_OUT_PERI_SEL_CH2_REG.
 */

#define DMA_OUT_PERI_SEL_CH2_REG (DR_REG_GDMA_BASE + 0x280)

/* DMA_PERI_OUT_SEL_CH2 : R/W; bitpos: [5:0]; default: 63;
 * This register is used to select peripheral for Tx channel 2. 0:SPI2. 1:
 * reserved. 2: UHCI0. 3: I2S0. 4: reserved. 5: reserved. 6: AES. 7: SHA. 8:
 * ADC_DAC.
 */

#define DMA_PERI_OUT_SEL_CH2    0x0000003F
#define DMA_PERI_OUT_SEL_CH2_M  (DMA_PERI_OUT_SEL_CH2_V << DMA_PERI_OUT_SEL_CH2_S)
#define DMA_PERI_OUT_SEL_CH2_V  0x0000003F
#define DMA_PERI_OUT_SEL_CH2_S  0

#endif /* __ARCH_RISCV_SRC_ESP32C3_LEGACY_HARDWARE_ESP32C3_DMA_H */
