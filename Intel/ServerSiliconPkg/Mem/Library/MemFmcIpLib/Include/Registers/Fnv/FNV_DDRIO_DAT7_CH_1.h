
/** @file
  FNV_DDRIO_DAT7_CH_1.h

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2007 - 2018 Intel Corporation. <BR>
  
  The source code contained or described herein and all documents related to the
  source code ("Material") are owned by Intel Corporation or its suppliers or
  licensors. Title to the Material remains with Intel Corporation or its suppliers
  and licensors. The Material may contain trade secrets and proprietary    and
  confidential information of Intel Corporation and its suppliers and licensors,
  and is protected by worldwide copyright and trade secret laws and treaty
  provisions. No part of the Material may be used, copied, reproduced, modified,
  published, uploaded, posted, transmitted, distributed, or disclosed in any way
  without Intel's prior express written permission.
  
  No license under any patent, copyright, trade secret or other intellectual
  property right is granted to or conferred upon you by disclosure or delivery
  of the Materials, either expressly, by implication, inducement, estoppel or
  otherwise. Any license under such intellectual property rights must be
  express and approved by Intel in writing.
  
  Unless otherwise agreed by Intel in writing, you may not remove or alter
  this notice or any other notice embedded in Materials by Intel or
  Intel's suppliers or licensors in any way.
  
  This file contains Silicon register definitions.
  
  This is a generated file; please do not modify it directly.
  
**/

/* The following security policy groups are used by registers in this file:     */

/* BWV Security Policy Groups:                                                  */


#ifndef _FNV_DDRIO_DAT7_CH_1_h
#define _FNV_DDRIO_DAT7_CH_1_h
#include "DataTypes.h"

/* RXGROUP0N0RANK0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1200)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast reads are not supported.
*/


#define RXGROUP0N0RANK0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240200

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_N to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS (0: 1/16 UI offset, [br] 1:
                               3/16 UI Offset, 2: 5/16 UI Offsets, 3: 7/16 UI
                               Offsets, 4: 9/16 UI Offsets, 5,6,7: 11/16 UI
                               Offsets.)
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N0RANK1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1204)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank1. Broadcast reads are not supported.
*/


#define RXGROUP0N0RANK1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240204

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_N to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N0RANK2_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1208)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank2. Broadcast read not supported.
*/


#define RXGROUP0N0RANK2_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240208

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK2_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N0RANK3_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b120c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank3. Broadcast read not supported.
*/


#define RXGROUP0N0RANK3_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B24020C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_N to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK3_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1240)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240240

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* select one of the four DQ Clk */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1244)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240244

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* Select one of the four DQ clks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK2_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1248)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK2_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240248

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* Select one of the four DQ clks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK2_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK3_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b124c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK3_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B24024C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* Select one of the four DQ clk */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK3_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1280)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240280

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               selects which skewed DQSP (to sample even bits)
                               is used in the RX FIFO. For proper operation,
                               always pick latest DQSP
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               selects which skewed DQSN (to sample odd bits)
                               is used in the RX FIFO. For proper operation,
                               always pick latest DQSN
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1284)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240284

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               [0]=0 selects the raw output from the nibble DQS
                               amplifier; [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK2_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1288)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK2_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240288

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               [0]=0 selects the raw output from the nibble DQS
                               amplifier; [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK2_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK3_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b128c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK3_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B24028C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               [0]=0 selects the raw output from the nibble DQS
                               amplifier; [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK3_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXVREFCTRLN0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b12a4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* RxVrefCtrl. Broadcast read not supported.
*/


#define RXVREFCTRLN0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2402A4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vrefperbit0 : 7;

                            /* Bits[6:0], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben0 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit1 : 7;

                            /* Bits[14:8], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben1 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               enables fine grain Vref control, shift down the
                               Vref voltage by ~0.5 stepsize
                            */
    UINT32 vrefperbit2 : 7;

                            /* Bits[22:16], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben2 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               enables fine grain Vref control, shift down the
                               Vref voltage by ~0.5 stepsize
                            */
    UINT32 vrefperbit3 : 7;

                            /* Bits[30:24], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben3 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* shift down the Vref voltage by ~0.5 stepsize */

  } Bits;
  UINT32 Data;

} RXVREFCTRLN0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATATRAINFEEDBACKN0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                  */
/*      BWV (0x402b12a8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Training Feedback Results. Broadcast read not supported.
*/


#define DATATRAINFEEDBACKN0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2402A8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 datatrainfeedback : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Data Training Feedback Storage[br] [br]
                               DataTrainFeedback Description:[br] Training Step
                               Bits Nibble Description[br] -------------- ----
                               ------- --------------------------[br] Cross
                               Over Cal 0 0 Tx Dqs Phase Detection[br] Cross
                               Over Cal 1 0 Tx Dq Phase Detection[br] Cross
                               Over Cal 2 0 Rec En Phase Detection[br] RcvEn
                               8:0 0 Byte detection[br] [br] Wr Leveling 8:0 0
                               Byte detection[br] Senseamp offset 3:0 0 Dq
                               Senseamp offset Detection
                            */
    UINT32 rsvd_9 : 23;

                            /* Bits[31:9], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATATRAINFEEDBACKN0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRFSMCALN0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                        */
/*      BWV (0x402b12c8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Fsm for  Voc and Xover caliberation, Voc caliberation is a procedure that cancel out intrinsic offset in analogue receivers and Xover training ,it aligns all the local dll to the global qclk
*/


#define DDRCRFSMCALN0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2402C8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0fsm : 5;

                            /* Bits[4:0], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of first receiver is done(read only)
                            */
    UINT32 saoffset1fsm : 5;

                            /* Bits[9:5], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of second receiver is done(read only)
                            */
    UINT32 saoffset2fsm : 5;

                            /* Bits[14:10], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of third receiver is done(read only)
                            */
    UINT32 saoffset3fsm : 5;

                            /* Bits[19:15], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of fourth receiver is done(read only)
                            */
    UINT32 fsmcalcomplete : 1;

                            /* Bits[20:20], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation is done */
    UINT32 refpiclkdelayfsm : 6;

                            /* Bits[26:21], Access Type=ROV, default=0x00000000*/

                            /*
                               Load FSM with a code at which , the transition
                               is detected.
                            */
    UINT32 fsmcaldone : 1;

                            /* Bits[27:27], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation of voc or x-over is done */
    UINT32 fsmtimersel : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* Timer is set for either 8 cycles or 16 cycles */
    UINT32 fsmpatternsel : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               It selects whther the pattern of three bit or
                               two bit is selected when the transition happen
                               from 1-->0 for pdout and receiver , to avoid
                               glitch
                            */
    UINT32 fsmvoccal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               This bit tells , wether the xover or voc
                               caliberation will be done, if its zero x-over
                               caliberation is done and vice-versa
                            */
    UINT32 fsmcalen : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* FsmCalEn starts the voc-Xover Fsm */

  } Bits;
  UINT32 Data;

} DDRCRFSMCALN0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL4N0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b12cc)                                                        */
/* Register default value on BWV: 0x801F0000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL4N0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2402CC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vsshiorvrefctl1 : 8;

                            /* Bits[8:1], Access Type=RW, default=0x00000000*/

                            /*
                               VssHi control bits[br] Field Description: [br]
                               [br] Field Bits Description[br] ------- ----
                               ---------------------------------[br]
                               disoverflow 24 Disable overflow logic from
                               BDW[br] fast panic enable 25 Bypass 2 flops in
                               panic path for faster panic response[br]
                               vsshivccd2by3cfgen 26 Forces the driver DAC to
                               get supply from 2/3 vccd[br] vsshivccd2by3cfg
                               27:29 Current trim setting for 2/3 vccd mode,
                               001 fast, 011 typical, 111 slow silicon [br]
                               ddrvssh2ndcompen 30 Enable second comparator
                               (ZBB mode)[br] comp high bwen 31 Improve
                               comparator performance to support low digital
                               voltage range
                            */
    UINT32 dqtxeqsel : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* DQ TxEq setting selection to achieve constant EQ */
    UINT32 rsvd_10 : 2;

                            /* Bits[11:10], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vrefpwrsave : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               If set to 0 (default), Vref generators selected
                               through RxVrefSel[3:0] are always on.[br] If set
                               to 1, Vref generators are switched off while in
                               Self Refresh.
                            */
    UINT32 vreftonblbus : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000008*/

                            /* Per-bit Enable connection to share Vref Bus */
    UINT32 rxvrefsel : 4;

                            /* Bits[20:17], Access Type=RW, default=0x0000000F*/

                            /* Per Bit Verf generator Enable */
    UINT32 refpiclkdelay : 6;

                            /* Bits[26:21], Access Type=RW, default=0x00000000*/

                            /* RefPiClkDelay */
    UINT32 fnvcrsdlbypassen : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* FNV Slave Delay Line Bypass Enable */
    UINT32 fnvcrdllbypassen : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* FNV DLL Bypass Enable */
    UINT32 fnvcrvisaen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               FNV Visa Fub Enable - data fub used for VISA if
                               asserted
                            */
    UINT32 writecrcenable : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enable write crc mode */
    UINT32 rsvd_31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL4N0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA0N0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                          */
/*      BWV (0x402b12d4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA0N0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2402D4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompdrvup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /*
                               Data Rcomp DrvUp Comp Value can be overriden via
                               message channel if periodical retrain is disable
                            */
    UINT32 spare0 : 3;

                            /* Bits[8:6], Access Type=RWV, default=0x00000000*/

                            /* Spare */
    UINT32 rcompdrvdown : 6;

                            /* Bits[14:9], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp DrvDown Comp Value */
    UINT32 vtcomp : 5;

                            /* Bits[19:15], Access Type=RWV, default=0x00000000*/

                            /* VT Comp Values */
    UINT32 tcocomp : 7;

                            /* Bits[26:20], Access Type=RWV, default=0x00000000*/

                            /* Data TCO Comp Value. */
    UINT32 slewratecomp : 5;

                            /* Bits[31:27], Access Type=RWV, default=0x00000000*/

                            /* Data Slew Rate Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA0N0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA1N0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                          */
/*      BWV (0x402b12d8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA1N0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2402D8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompodtup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp OdtUp Comp Value */
    UINT32 rcompodtdown : 6;

                            /* Bits[11:6], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp Odt-Down Comp Value */
    UINT32 panicdrvdn : 10;

                            /* Bits[21:12], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvDn RComp Value. */
    UINT32 panicdrvup : 10;

                            /* Bits[31:22], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvUp RComp Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA1N0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATAOFFSETTRAINN0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b12dc)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATAOFFSETTRAINN0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2402DC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvenoffset : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained RxRcvEn Value. */
    UINT32 rxdqsoffset : 7;

                            /* Bits[12:6], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Rx DQS Value. */
    UINT32 txdqoffset : 6;

                            /* Bits[18:13], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Tx DQ Value. */
    UINT32 txdqsoffset : 6;

                            /* Bits[24:19], Access Type=RW, default=0x00000000*/

                            /* Ooffset added to Trained Tx DQS Value. */
    UINT32 vrefoffset : 7;

                            /* Bits[31:25], Access Type=RW, default=0x00000000*/

                            /*
                               2s Compliment offset added to Trained Vref
                               Value. Positive number increases Vref, and each
                               step is Vdd/384.
                            */

  } Bits;
  UINT32 Data;

} DATAOFFSETTRAINN0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* DATACONTROL0N0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b12e8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL0N0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2402E8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxtrainingmode : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enables Read DqDqs Training Mode */
    UINT32 wltrainingmode : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enables Write Leveling Training Mode */
    UINT32 rltrainingmode : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* Enables Read Leveling Training Mode. */
    UINT32 senseamptrainingmode : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode.
                            */
    UINT32 txon : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               When set, forces DQ/DQS drive enable to active.
                               Used in power measurements and IO loopback mode
                            */
    UINT32 rfon : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces register file read,
                               overriding the rank power down logic.
                            */
    UINT32 rxpion : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /* Power-down Disable: Forces RxDqs PI clocks on. */
    UINT32 txpion : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces TxDq and TxDqs PI
                               clocks on.
                            */
    UINT32 internalclockson : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Forces on master DLL and all PI enables ON,
                               despite both channel in SelfRefresh, etc. low
                               power states.
                            */
    UINT32 saoffsettraintxon : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* SaOffsetTrainTxon */
    UINT32 txdisable : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All write commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 rxdisable : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All read commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 txlong : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Sets the duration of the first transmitted DQ
                               bit of the burst. 0=1UI, 1=2UI.
                            */
    UINT32 rsvd_13 : 5;

                            /* Bits[17:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 driversegmentenable : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Controls which segements of the driver are
                               enabled: {0: All, 1: Only ODT}.
                            */
    UINT32 rsvd_19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 readrfrd : 1;

                            /* Bits[20:20], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a read command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfwr : 1;

                            /* Bits[21:21], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a write command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfrank : 3;

                            /* Bits[24:22], Access Type=RWV, default=0x00000000*/

                            /*
                               Specifies the rank that ReadRFRd or ReadRFWr
                               will manually download the CR values from
                            */
    UINT32 forceodton : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* ODT is forced-on. */
    UINT32 odtsampoff : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* ODT and Senseamp are forced-off. */
    UINT32 disableodtstatic : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 ddrcrforceodton : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               force ODT to the transmitter on, regardless of
                               state of DriveEnable
                            */
    UINT32 spare : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* spare */
    UINT32 xovercal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enables Xover Calibration Training Mode */
    UINT32 longpreambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Enables long preamble for DDR4 devices */

  } Bits;
  UINT32 Data;

} DATACONTROL0N0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL1N0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b12ec)                                                        */
/* Register default value on BWV: 0x0000003C                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL1N0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2402EC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 10;

                            /* Bits[9:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 rxbiasctl : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the Current and BW of the Receiver: {0:
                               0.34Idll, 1: 0.66Idll, 2: 0.88Idll, 3: Idll, 4:
                               1.33Idll, 5: 1.66Idll[br] , 6: 2.00Idll, 7:
                               2.33Idll}
                            */
    UINT32 odtdelay : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /*
                               Controls ODT turn-on delay. To turn on N tQCK
                               before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 odtduration : 3;

                            /* Bits[19:17], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the ODT ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 senseampdelay : 4;

                            /* Bits[23:20], Access Type=RW, default=0x00000000*/

                            /*
                               Controls Senseamp turn-on delay. To turn on N
                               tQCK before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 senseampduration : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the SenseAmp ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 rsvd_27 : 5;

                            /* Bits[31:27], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL1N0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL2N0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b12f0)                                                        */
/* Register default value on BWV: 0x07800000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL2N0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2402F0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxvocselqnnnh : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode
                            */
    UINT32 forcebiason : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the internal Vref and Rx bias circuit,
                               regardless of any other power downs
                            */
    UINT32 forcerxon : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the RxAmp only (as opposed to
                               OdtSampOn, which turns on both ODT and the
                               amplifier).[br] Use for overclocking support
                               where we may not be able to hit the fast exit
                               latency
                            */
    UINT32 ddr4extend : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Enable finer vref resolution in ddr4 */
    UINT32 cttermination : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* DDRCOMP_CR_DDRCRCOMPOVR CTTermination */
    UINT32 dfelben : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback enable */
    UINT32 dfelbtxdmuxsel : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback TX FIFO data mux sel */
    UINT32 spare1 : 2;

                            /* Bits[12:11], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 txddjcen : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /* TxddjcEn */
    UINT32 dfeenable : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* DfeEnable */
    UINT32 dfedlysel : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /* DfeDlySel */
    UINT32 dfecode : 4;

                            /* Bits[22:19], Access Type=RW, default=0x00000000*/

                            /*
                               DfeCode: binary code 0000 to 1000 for DFE
                               offset, mid-code code for zero offset is 0100
                            */
    UINT32 rxdqssaoffset : 5;

                            /* Bits[27:23], Access Type=RW, default=0x0000000F*/

                            /* strobe Rx Amp offset control */
    UINT32 rsvd_28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL2N0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL3N0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b12f4)                                                        */
/* Register default value on BWV: 0x00000FCF                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL3N0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2402F4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 drvstaticlegcfg : 2;

                            /* Bits[1:0], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in DRV
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 odtstaticlegcfg : 2;

                            /* Bits[3:2], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in ODT
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 lvlshft_holden : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rsvd_5 : 1;

                            /* Bits[5:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 odtsegmentenable : 3;

                            /* Bits[8:6], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset. [br] After that, a shift register will
                               determine the enabled segments
                            */
    UINT32 datasegmentenable : 3;

                            /* Bits[11:9], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset.
                            */
    UINT32 longodtr2w : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               When set, it will extends ODT by 1 qclk on read
                               to write turnarounds. hsd 230773
                            */
    UINT32 spare1 : 8;

                            /* Bits[20:13], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 ddrcrctlecapen : 2;

                            /* Bits[22:21], Access Type=RW, default=0x00000000*/

                            /* ctle capacitor setting */
    UINT32 ddrcrctleresen : 2;

                            /* Bits[24:23], Access Type=RW, default=0x00000000*/

                            /* ctle resistor setting */
    UINT32 pcasbiasclosedloopen : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiassel : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasfoldedlegtrim : 2;

                            /* Bits[28:27], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasgcncomp : 2;

                            /* Bits[30:29], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 postambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DATACONTROL3N0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* VSSHIORVREFCONTROLN0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                 */
/*      BWV (0x402b12f8)                                                        */
/* Register default value on BWV: 0x004D8238                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Broadcast read not supported.
*/


#define VSSHIORVREFCONTROLN0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2402F8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 24;

                            /* Bits[23:0], Access Type=RW, default=0x004D8238*/

                            /*
                               Channel 0 fubs : VssHi adjust setting. Channel1
                               fubs: DIMM VREF adjust settings.[br] [br] VssHi
                               Field Description: [br] [br] Field Bits
                               Description[br] ------- ---- -------------------
                               ------------------------------------------------
                               ------------------------------------------------
                               --------------------------------------------[br]
                               SelCode 23 Selects the code to output: {0: Code,
                               1: TCode}[br] GainBoost 22 Enable gain boost is
                               panic mode by updating code/tcode [br]
                               PanicVoltage 21:18 Unsigned integer controlling
                               the voltage error on VssHi that will trigger the
                               panic driver. Step size of VccDDQ/192 (0 to
                               117mV)[br] CloseLoop 17 Enables the VssHi close
                               loop tracking [br] PanicEn 16 Enables the VssHi
                               Panic Driver[br] BWError 15:14 Limits the loop
                               gain (ie: difference between code and tcode) to
                               +/- 2^(SlowBWError)[br] OpenLoop 13 Operates
                               VssHi in open loop mode with the target Vref
                               code directly driving the output DAC with no
                               feedback involved[br] SampleDivider 12:10
                               Controls the loop bandwidth by dividing down the
                               input clock: {0: Qclk, 1: Qclk/2, 2: Qclk/4, 3:
                               Qclk/8, 4: Qclk/16, 5: Qclk/32, 6: Qclk/64, 7:
                               Qclk/128}[br] LoBWDivider 9:8 For the slow
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] HiBWDivider 7:6 For the fast
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] Target 5:0 Unsigned integer
                               controlling the target VssHi voltage. Step size
                               of VccDDQ/192 and starting value of
                               VccDDQ*20/192
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROLN0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* RXGROUP0N1RANK0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1300)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast read not supported.
*/


#define RXGROUP0N1RANK0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240300

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N1RANK1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1304)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast read not supported.
*/


#define RXGROUP0N1RANK1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240304

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N1RANK2_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1308)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0.Broadcast read not supported.
*/


#define RXGROUP0N1RANK2_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240308

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK2_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N1RANK3_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b130c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast read not supported.
*/


#define RXGROUP0N1RANK3_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B24030C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK3_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1340)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240340

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* one of the four clocks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1344)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240344

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* one of the four clocks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK2_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1348)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK2_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240348

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* one of the 4 clocks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK2_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK3_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b134c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK3_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B24034C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from PiRef to PiN for bit 1 */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK3_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK0_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1380)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK0_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240380

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK0_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1384)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240384

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK2_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1388)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK2_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B240388

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK2_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK3_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b138c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK3_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B24038C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK3_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXVREFCTRLN1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b13a4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* RxVrefCtrl. Broadcast read not supported.
*/


#define RXVREFCTRLN1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2403A4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vrefperbit0 : 7;

                            /* Bits[6:0], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben0 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit1 : 7;

                            /* Bits[14:8], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben1 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit2 : 7;

                            /* Bits[22:16], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben2 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit3 : 7;

                            /* Bits[30:24], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben3 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* shift down the Vref voltage by ~0.5 stepsize */

  } Bits;
  UINT32 Data;

} RXVREFCTRLN1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATATRAINFEEDBACKN1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                  */
/*      BWV (0x402b13a8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Training Feedback Results. Broadcast read not supported.
*/


#define DATATRAINFEEDBACKN1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2403A8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 datatrainfeedback : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Data Training Feedback Storage [br] Training
                               Step Bits Nibble Description[br] --------------
                               ---- ------- ---------------[br] Cross Over Cal
                               0 1 Tx Dqs Phase Detection[br] Cross Over Cal 1
                               1 Tx Dq Phase Detection[br] Cross Over Cal 2 1
                               Rec En Phase Detection[br] RcvEn 8:0 1 Byte
                               detection[br] Wr Leveling 8:0 1 Byte
                               detection[br] Senseamp offset 3:0 1 Dq Senseamp
                               offset Detection
                            */
    UINT32 rsvd_9 : 23;

                            /* Bits[31:9], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATATRAINFEEDBACKN1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRFSMCALN1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                        */
/*      BWV (0x402b13c8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Fsm for  Voc and Xover caliberation, Voc caliberation is a procedure that cancel out intrinsic offset in analogue receivers and Xover training ,it aligns all the local dll to the global qclk
*/


#define DDRCRFSMCALN1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2403C8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0fsm : 5;

                            /* Bits[4:0], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of first receiver is done(read only)
                            */
    UINT32 saoffset1fsm : 5;

                            /* Bits[9:5], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of second receiver is done(read only)
                            */
    UINT32 saoffset2fsm : 5;

                            /* Bits[14:10], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of third receiver is done(read only)
                            */
    UINT32 saoffset3fsm : 5;

                            /* Bits[19:15], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of fourth receiver is done(read only)
                            */
    UINT32 fsmcalcomplete : 1;

                            /* Bits[20:20], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation is done */
    UINT32 refpiclkdelayfsm : 6;

                            /* Bits[26:21], Access Type=ROV, default=0x00000000*/

                            /*
                               Load FSM with a code at which , the transition
                               is detected.
                            */
    UINT32 fsmcaldone : 1;

                            /* Bits[27:27], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation of voc or x-over is done */
    UINT32 fsmtimersel : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* Timer is set for either 8 cycles or 16 cycles */
    UINT32 fsmpatternsel : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               It selects whther the pattern of three bit or
                               two bit is selected when the transition happen
                               from 1-->0 for pdout and receiver , to avoid
                               glitch
                            */
    UINT32 fsmvoccal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               This bit tells , wether the xover or voc
                               caliberation will be done, if its zero x-over
                               caliberation is done and vice-versa
                            */
    UINT32 fsmcalen : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* FsmCalEn starts the voc-Xover Fsm */

  } Bits;
  UINT32 Data;

} DDRCRFSMCALN1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL4N1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b13cc)                                                        */
/* Register default value on BWV: 0x801F0000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL4N1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2403CC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vsshiorvrefctl1 : 8;

                            /* Bits[8:1], Access Type=RW, default=0x00000000*/

                            /*
                               VssHi control bits[br] Field Description: [br]
                               [br] Field Bits Description[br] ------- ----
                               ---------------------------------[br]
                               disoverflow 24 Disable overflow logic from
                               BDW[br] fast panic enable 25 Bypass 2 flops in
                               panic path for faster panic response[br]
                               vsshivccd2by3cfgen 26 Forces the driver DAC to
                               get supply from 2/3 vccd[br] vsshivccd2by3cfg
                               27:29 Current trim setting for 2/3 vccd mode,
                               001 fast, 011 typical, 111 slow silicon [br]
                               ddrvssh2ndcompen 30 Enable second comparator
                               (ZBB mode)[br] comp high bwen 31 Improve
                               comparator performance to support low digital
                               voltage range
                            */
    UINT32 dqtxeqsel : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* DQ TxEq setting selection to achieve constant EQ */
    UINT32 rsvd_10 : 2;

                            /* Bits[11:10], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vrefpwrsave : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               If set to 0 (default), Vref generators selected
                               through RxVrefSel[3:0] are always on.[br] If set
                               to 1, Vref generators are switched off while in
                               Self Refresh.
                            */
    UINT32 vreftonblbus : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000008*/

                            /* Per-bit Enable connection to share Vref Bus */
    UINT32 rxvrefsel : 4;

                            /* Bits[20:17], Access Type=RW, default=0x0000000F*/

                            /* Per Bit Verf generator Enable */
    UINT32 refpiclkdelay : 6;

                            /* Bits[26:21], Access Type=RW, default=0x00000000*/

                            /* RefPiClkDelay */
    UINT32 fnvcrsdlbypassen : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* FNV Slave Delay Line Bypass Enable */
    UINT32 fnvcrdllbypassen : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* FNV DLL Bypass Enable */
    UINT32 fnvcrvisaen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               FNV Visa Fub Enable - data fub used for VISA if
                               asserted
                            */
    UINT32 writecrcenable : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enable write crc mode */
    UINT32 rsvd_31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL4N1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA0N1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                          */
/*      BWV (0x402b13d4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA0N1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2403D4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompdrvup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /*
                               Data Rcomp DrvUp Comp Value can be overriden via
                               message channel if periodical retrain is disable
                            */
    UINT32 spare0 : 3;

                            /* Bits[8:6], Access Type=RWV, default=0x00000000*/

                            /* Spare */
    UINT32 rcompdrvdown : 6;

                            /* Bits[14:9], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp DrvDown Comp Value */
    UINT32 vtcomp : 5;

                            /* Bits[19:15], Access Type=RWV, default=0x00000000*/

                            /* VT Comp Values */
    UINT32 tcocomp : 7;

                            /* Bits[26:20], Access Type=RWV, default=0x00000000*/

                            /* Data TCO Comp Value. */
    UINT32 slewratecomp : 5;

                            /* Bits[31:27], Access Type=RWV, default=0x00000000*/

                            /* Data Slew Rate Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA0N1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA1N1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                          */
/*      BWV (0x402b13d8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA1N1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2403D8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompodtup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp OdtUp Comp Value */
    UINT32 rcompodtdown : 6;

                            /* Bits[11:6], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp Odt-Down Comp Value */
    UINT32 panicdrvdn : 10;

                            /* Bits[21:12], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvDn RComp Value. */
    UINT32 panicdrvup : 10;

                            /* Bits[31:22], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvUp RComp Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA1N1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATAOFFSETTRAINN1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b13dc)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATAOFFSETTRAINN1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2403DC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvenoffset : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained RxRcvEn Value. */
    UINT32 rxdqsoffset : 7;

                            /* Bits[12:6], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Rx DQS Value. */
    UINT32 txdqoffset : 6;

                            /* Bits[18:13], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Tx DQ Value. */
    UINT32 txdqsoffset : 6;

                            /* Bits[24:19], Access Type=RW, default=0x00000000*/

                            /* Ooffset added to Trained Tx DQS Value. */
    UINT32 vrefoffset : 7;

                            /* Bits[31:25], Access Type=RW, default=0x00000000*/

                            /*
                               2s Compliment offset added to Trained Vref
                               Value. Positive number increases Vref, and each
                               step is Vdd/384.
                            */

  } Bits;
  UINT32 Data;

} DATAOFFSETTRAINN1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* DATACONTROL0N1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b13e8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL0N1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2403E8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxtrainingmode : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enables Read DqDqs Training Mode */
    UINT32 wltrainingmode : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enables Write Leveling Training Mode */
    UINT32 rltrainingmode : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* Enables Read Leveling Training Mode. */
    UINT32 senseamptrainingmode : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode.
                            */
    UINT32 txon : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               When set, forces DQ/DQS drive enable to active.
                               Used in power measurements and IO loopback mode
                            */
    UINT32 rfon : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces register file read,
                               overriding the rank power down logic.
                            */
    UINT32 rxpion : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /* Power-down Disable: Forces RxDqs PI clocks on. */
    UINT32 txpion : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces TxDq and TxDqs PI
                               clocks on.
                            */
    UINT32 internalclockson : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Forces on master DLL and all PI enables ON,
                               despite both channel in SelfRefresh, etc. low
                               power states.
                            */
    UINT32 saoffsettraintxon : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* SaOffsetTrainTxon */
    UINT32 txdisable : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All write commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 rxdisable : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All read commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 txlong : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Sets the duration of the first transmitted DQ
                               bit of the burst. 0=1UI, 1=2UI.
                            */
    UINT32 rsvd_13 : 5;

                            /* Bits[17:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 driversegmentenable : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Controls which segements of the driver are
                               enabled: {0: All, 1: Only ODT}.
                            */
    UINT32 rsvd_19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 readrfrd : 1;

                            /* Bits[20:20], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a read command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfwr : 1;

                            /* Bits[21:21], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a write command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfrank : 3;

                            /* Bits[24:22], Access Type=RWV, default=0x00000000*/

                            /*
                               Specifies the rank that ReadRFRd or ReadRFWr
                               will manually download the CR values from
                            */
    UINT32 forceodton : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* ODT is forced-on. */
    UINT32 odtsampoff : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* ODT and Senseamp are forced-off. */
    UINT32 disableodtstatic : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 ddrcrforceodton : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               force ODT to the transmitter on, regardless of
                               state of DriveEnable
                            */
    UINT32 spare : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* spare */
    UINT32 xovercal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enables Xover Calibration Training Mode */
    UINT32 longpreambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Enables long preamble for DDR4 devices */

  } Bits;
  UINT32 Data;

} DATACONTROL0N1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL1N1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b13ec)                                                        */
/* Register default value on BWV: 0x0000003C                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL1N1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2403EC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 10;

                            /* Bits[9:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 rxbiasctl : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the Current and BW of the Receiver: {0:
                               0.34Idll, 1: 0.66Idll, 2: 0.88Idll, 3: Idll, 4:
                               1.33Idll, 5: 1.66Idll[br] , 6: 2.00Idll, 7:
                               2.33Idll}
                            */
    UINT32 odtdelay : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /*
                               Controls ODT turn-on delay. To turn on N tQCK
                               before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 odtduration : 3;

                            /* Bits[19:17], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the ODT ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 senseampdelay : 4;

                            /* Bits[23:20], Access Type=RW, default=0x00000000*/

                            /*
                               Controls Senseamp turn-on delay. To turn on N
                               tQCK before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 senseampduration : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the SenseAmp ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 rsvd_27 : 5;

                            /* Bits[31:27], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL1N1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL2N1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b13f0)                                                        */
/* Register default value on BWV: 0x07800000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL2N1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2403F0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxvocselqnnnh : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode
                            */
    UINT32 forcebiason : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the internal Vref and Rx bias circuit,
                               regardless of any other power downs
                            */
    UINT32 forcerxon : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the RxAmp only (as opposed to
                               OdtSampOn, which turns on both ODT and the
                               amplifier).[br] Use for overclocking support
                               where we may not be able to hit the fast exit
                               latency
                            */
    UINT32 ddr4extend : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Enable finer vref resolution in ddr4 */
    UINT32 cttermination : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* DDRCOMP_CR_DDRCRCOMPOVR CTTermination */
    UINT32 dfelben : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback enable */
    UINT32 dfelbtxdmuxsel : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback TX FIFO data mux sel */
    UINT32 spare1 : 2;

                            /* Bits[12:11], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 txddjcen : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /* TxddjcEn */
    UINT32 dfeenable : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* DfeEnable */
    UINT32 dfedlysel : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /* DfeDlySel */
    UINT32 dfecode : 4;

                            /* Bits[22:19], Access Type=RW, default=0x00000000*/

                            /*
                               DfeCode: binary code 0000 to 1000 for DFE
                               offset, mid-code code for zero offset is 0100
                            */
    UINT32 rxdqssaoffset : 5;

                            /* Bits[27:23], Access Type=RW, default=0x0000000F*/

                            /* strobe Rx Amp offset control */
    UINT32 rsvd_28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL2N1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL3N1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b13f4)                                                        */
/* Register default value on BWV: 0x00000FCF                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL3N1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2403F4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 drvstaticlegcfg : 2;

                            /* Bits[1:0], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in DRV
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 odtstaticlegcfg : 2;

                            /* Bits[3:2], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in ODT
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 lvlshft_holden : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rsvd_5 : 1;

                            /* Bits[5:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 odtsegmentenable : 3;

                            /* Bits[8:6], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset. [br] After that, a shift register will
                               determine the enabled segments
                            */
    UINT32 datasegmentenable : 3;

                            /* Bits[11:9], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset.
                            */
    UINT32 longodtr2w : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               When set, it will extends ODT by 1 qclk on read
                               to write turnarounds. hsd 230773
                            */
    UINT32 spare1 : 8;

                            /* Bits[20:13], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 ddrcrctlecapen : 2;

                            /* Bits[22:21], Access Type=RW, default=0x00000000*/

                            /* ctle capacitor setting */
    UINT32 ddrcrctleresen : 2;

                            /* Bits[24:23], Access Type=RW, default=0x00000000*/

                            /* ctle resistor setting */
    UINT32 pcasbiasclosedloopen : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiassel : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasfoldedlegtrim : 2;

                            /* Bits[28:27], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasgcncomp : 2;

                            /* Bits[30:29], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 postambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DATACONTROL3N1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* VSSHIORVREFCONTROLN1_7_FNV_DDRIO_DAT7_CH_1_REG supported on:                 */
/*      BWV (0x402b13f8)                                                        */
/* Register default value on BWV: 0x004D8238                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Broadcast read not supported.
*/


#define VSSHIORVREFCONTROLN1_7_FNV_DDRIO_DAT7_CH_1_REG 0x1B2403F8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 24;

                            /* Bits[23:0], Access Type=RW, default=0x004D8238*/

                            /*
                               Channel 0 fubs : VssHi adjust setting. Channel1
                               fubs: DIMM VREF adjust settings.[br] [br] VssHi
                               Field Description: [br] [br] Field Bits
                               Description[br] ------- ---- -------------------
                               ------------------------------------------------
                               ------------------------------------------------
                               --------------------------------------------[br]
                               SelCode 23 Selects the code to output: {0: Code,
                               1: TCode}[br] GainBoost 22 Enable gain boost is
                               panic mode by updating code/tcode [br]
                               PanicVoltage 21:18 Unsigned integer controlling
                               the voltage error on VssHi that will trigger the
                               panic driver. Step size of VccDDQ/192 (0 to
                               117mV)[br] CloseLoop 17 Enables the VssHi close
                               loop tracking [br] PanicEn 16 Enables the VssHi
                               Panic Driver[br] BWError 15:14 Limits the loop
                               gain (ie: difference between code and tcode) to
                               +/- 2^(SlowBWError)[br] OpenLoop 13 Operates
                               VssHi in open loop mode with the target Vref
                               code directly driving the output DAC with no
                               feedback involved[br] SampleDivider 12:10
                               Controls the loop bandwidth by dividing down the
                               input clock: {0: Qclk, 1: Qclk/2, 2: Qclk/4, 3:
                               Qclk/8, 4: Qclk/16, 5: Qclk/32, 6: Qclk/64, 7:
                               Qclk/128}[br] LoBWDivider 9:8 For the slow
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] HiBWDivider 7:6 For the fast
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] Target 5:0 Unsigned integer
                               controlling the target VssHi voltage. Step size
                               of VccDDQ/192 and starting value of
                               VccDDQ*20/192
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROLN1_7_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* RXGROUP0N0RANK0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1400)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast reads are not supported.
*/


#define RXGROUP0N0RANK0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240400

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_N to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS (0: 1/16 UI offset, [br] 1:
                               3/16 UI Offset, 2: 5/16 UI Offsets, 3: 7/16 UI
                               Offsets, 4: 9/16 UI Offsets, 5,6,7: 11/16 UI
                               Offsets.)
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N0RANK1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1404)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank1. Broadcast reads are not supported.
*/


#define RXGROUP0N0RANK1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240404

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_N to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N0RANK2_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1408)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank2. Broadcast read not supported.
*/


#define RXGROUP0N0RANK2_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240408

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK2_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N0RANK3_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b140c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank3. Broadcast read not supported.
*/


#define RXGROUP0N0RANK3_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B24040C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_N to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK3_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1440)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240440

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* select one of the four DQ Clk */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1444)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240444

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* Select one of the four DQ clks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK2_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1448)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK2_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240448

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* Select one of the four DQ clks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK2_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK3_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b144c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK3_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B24044C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* Select one of the four DQ clk */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK3_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1480)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240480

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               selects which skewed DQSP (to sample even bits)
                               is used in the RX FIFO. For proper operation,
                               always pick latest DQSP
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               selects which skewed DQSN (to sample odd bits)
                               is used in the RX FIFO. For proper operation,
                               always pick latest DQSN
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1484)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240484

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               [0]=0 selects the raw output from the nibble DQS
                               amplifier; [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK2_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1488)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK2_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240488

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               [0]=0 selects the raw output from the nibble DQS
                               amplifier; [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK2_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK3_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b148c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK3_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B24048C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               [0]=0 selects the raw output from the nibble DQS
                               amplifier; [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK3_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXVREFCTRLN0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b14a4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* RxVrefCtrl. Broadcast read not supported.
*/


#define RXVREFCTRLN0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2404A4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vrefperbit0 : 7;

                            /* Bits[6:0], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben0 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit1 : 7;

                            /* Bits[14:8], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben1 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               enables fine grain Vref control, shift down the
                               Vref voltage by ~0.5 stepsize
                            */
    UINT32 vrefperbit2 : 7;

                            /* Bits[22:16], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben2 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               enables fine grain Vref control, shift down the
                               Vref voltage by ~0.5 stepsize
                            */
    UINT32 vrefperbit3 : 7;

                            /* Bits[30:24], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben3 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* shift down the Vref voltage by ~0.5 stepsize */

  } Bits;
  UINT32 Data;

} RXVREFCTRLN0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATATRAINFEEDBACKN0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                  */
/*      BWV (0x402b14a8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Training Feedback Results. Broadcast read not supported.
*/


#define DATATRAINFEEDBACKN0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2404A8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 datatrainfeedback : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Data Training Feedback Storage[br] [br]
                               DataTrainFeedback Description:[br] Training Step
                               Bits Nibble Description[br] -------------- ----
                               ------- --------------------------[br] Cross
                               Over Cal 0 0 Tx Dqs Phase Detection[br] Cross
                               Over Cal 1 0 Tx Dq Phase Detection[br] Cross
                               Over Cal 2 0 Rec En Phase Detection[br] RcvEn
                               8:0 0 Byte detection[br] [br] Wr Leveling 8:0 0
                               Byte detection[br] Senseamp offset 3:0 0 Dq
                               Senseamp offset Detection
                            */
    UINT32 rsvd_9 : 23;

                            /* Bits[31:9], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATATRAINFEEDBACKN0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRFSMCALN0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                        */
/*      BWV (0x402b14c8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Fsm for  Voc and Xover caliberation, Voc caliberation is a procedure that cancel out intrinsic offset in analogue receivers and Xover training ,it aligns all the local dll to the global qclk
*/


#define DDRCRFSMCALN0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2404C8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0fsm : 5;

                            /* Bits[4:0], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of first receiver is done(read only)
                            */
    UINT32 saoffset1fsm : 5;

                            /* Bits[9:5], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of second receiver is done(read only)
                            */
    UINT32 saoffset2fsm : 5;

                            /* Bits[14:10], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of third receiver is done(read only)
                            */
    UINT32 saoffset3fsm : 5;

                            /* Bits[19:15], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of fourth receiver is done(read only)
                            */
    UINT32 fsmcalcomplete : 1;

                            /* Bits[20:20], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation is done */
    UINT32 refpiclkdelayfsm : 6;

                            /* Bits[26:21], Access Type=ROV, default=0x00000000*/

                            /*
                               Load FSM with a code at which , the transition
                               is detected.
                            */
    UINT32 fsmcaldone : 1;

                            /* Bits[27:27], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation of voc or x-over is done */
    UINT32 fsmtimersel : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* Timer is set for either 8 cycles or 16 cycles */
    UINT32 fsmpatternsel : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               It selects whther the pattern of three bit or
                               two bit is selected when the transition happen
                               from 1-->0 for pdout and receiver , to avoid
                               glitch
                            */
    UINT32 fsmvoccal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               This bit tells , wether the xover or voc
                               caliberation will be done, if its zero x-over
                               caliberation is done and vice-versa
                            */
    UINT32 fsmcalen : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* FsmCalEn starts the voc-Xover Fsm */

  } Bits;
  UINT32 Data;

} DDRCRFSMCALN0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL4N0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b14cc)                                                        */
/* Register default value on BWV: 0x801F0000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL4N0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2404CC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vsshiorvrefctl1 : 8;

                            /* Bits[8:1], Access Type=RW, default=0x00000000*/

                            /*
                               VssHi control bits[br] Field Description: [br]
                               [br] Field Bits Description[br] ------- ----
                               ---------------------------------[br]
                               disoverflow 24 Disable overflow logic from
                               BDW[br] fast panic enable 25 Bypass 2 flops in
                               panic path for faster panic response[br]
                               vsshivccd2by3cfgen 26 Forces the driver DAC to
                               get supply from 2/3 vccd[br] vsshivccd2by3cfg
                               27:29 Current trim setting for 2/3 vccd mode,
                               001 fast, 011 typical, 111 slow silicon [br]
                               ddrvssh2ndcompen 30 Enable second comparator
                               (ZBB mode)[br] comp high bwen 31 Improve
                               comparator performance to support low digital
                               voltage range
                            */
    UINT32 dqtxeqsel : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* DQ TxEq setting selection to achieve constant EQ */
    UINT32 rsvd_10 : 2;

                            /* Bits[11:10], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vrefpwrsave : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               If set to 0 (default), Vref generators selected
                               through RxVrefSel[3:0] are always on.[br] If set
                               to 1, Vref generators are switched off while in
                               Self Refresh.
                            */
    UINT32 vreftonblbus : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000008*/

                            /* Per-bit Enable connection to share Vref Bus */
    UINT32 rxvrefsel : 4;

                            /* Bits[20:17], Access Type=RW, default=0x0000000F*/

                            /* Per Bit Verf generator Enable */
    UINT32 refpiclkdelay : 6;

                            /* Bits[26:21], Access Type=RW, default=0x00000000*/

                            /* RefPiClkDelay */
    UINT32 fnvcrsdlbypassen : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* FNV Slave Delay Line Bypass Enable */
    UINT32 fnvcrdllbypassen : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* FNV DLL Bypass Enable */
    UINT32 fnvcrvisaen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               FNV Visa Fub Enable - data fub used for VISA if
                               asserted
                            */
    UINT32 writecrcenable : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enable write crc mode */
    UINT32 rsvd_31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL4N0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA0N0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                          */
/*      BWV (0x402b14d4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA0N0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2404D4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompdrvup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /*
                               Data Rcomp DrvUp Comp Value can be overriden via
                               message channel if periodical retrain is disable
                            */
    UINT32 spare0 : 3;

                            /* Bits[8:6], Access Type=RWV, default=0x00000000*/

                            /* Spare */
    UINT32 rcompdrvdown : 6;

                            /* Bits[14:9], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp DrvDown Comp Value */
    UINT32 vtcomp : 5;

                            /* Bits[19:15], Access Type=RWV, default=0x00000000*/

                            /* VT Comp Values */
    UINT32 tcocomp : 7;

                            /* Bits[26:20], Access Type=RWV, default=0x00000000*/

                            /* Data TCO Comp Value. */
    UINT32 slewratecomp : 5;

                            /* Bits[31:27], Access Type=RWV, default=0x00000000*/

                            /* Data Slew Rate Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA0N0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA1N0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                          */
/*      BWV (0x402b14d8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA1N0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2404D8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompodtup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp OdtUp Comp Value */
    UINT32 rcompodtdown : 6;

                            /* Bits[11:6], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp Odt-Down Comp Value */
    UINT32 panicdrvdn : 10;

                            /* Bits[21:12], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvDn RComp Value. */
    UINT32 panicdrvup : 10;

                            /* Bits[31:22], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvUp RComp Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA1N0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATAOFFSETTRAINN0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b14dc)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATAOFFSETTRAINN0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2404DC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvenoffset : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained RxRcvEn Value. */
    UINT32 rxdqsoffset : 7;

                            /* Bits[12:6], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Rx DQS Value. */
    UINT32 txdqoffset : 6;

                            /* Bits[18:13], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Tx DQ Value. */
    UINT32 txdqsoffset : 6;

                            /* Bits[24:19], Access Type=RW, default=0x00000000*/

                            /* Ooffset added to Trained Tx DQS Value. */
    UINT32 vrefoffset : 7;

                            /* Bits[31:25], Access Type=RW, default=0x00000000*/

                            /*
                               2s Compliment offset added to Trained Vref
                               Value. Positive number increases Vref, and each
                               step is Vdd/384.
                            */

  } Bits;
  UINT32 Data;

} DATAOFFSETTRAINN0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* DATACONTROL0N0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b14e8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL0N0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2404E8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxtrainingmode : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enables Read DqDqs Training Mode */
    UINT32 wltrainingmode : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enables Write Leveling Training Mode */
    UINT32 rltrainingmode : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* Enables Read Leveling Training Mode. */
    UINT32 senseamptrainingmode : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode.
                            */
    UINT32 txon : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               When set, forces DQ/DQS drive enable to active.
                               Used in power measurements and IO loopback mode
                            */
    UINT32 rfon : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces register file read,
                               overriding the rank power down logic.
                            */
    UINT32 rxpion : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /* Power-down Disable: Forces RxDqs PI clocks on. */
    UINT32 txpion : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces TxDq and TxDqs PI
                               clocks on.
                            */
    UINT32 internalclockson : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Forces on master DLL and all PI enables ON,
                               despite both channel in SelfRefresh, etc. low
                               power states.
                            */
    UINT32 saoffsettraintxon : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* SaOffsetTrainTxon */
    UINT32 txdisable : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All write commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 rxdisable : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All read commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 txlong : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Sets the duration of the first transmitted DQ
                               bit of the burst. 0=1UI, 1=2UI.
                            */
    UINT32 rsvd_13 : 5;

                            /* Bits[17:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 driversegmentenable : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Controls which segements of the driver are
                               enabled: {0: All, 1: Only ODT}.
                            */
    UINT32 rsvd_19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 readrfrd : 1;

                            /* Bits[20:20], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a read command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfwr : 1;

                            /* Bits[21:21], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a write command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfrank : 3;

                            /* Bits[24:22], Access Type=RWV, default=0x00000000*/

                            /*
                               Specifies the rank that ReadRFRd or ReadRFWr
                               will manually download the CR values from
                            */
    UINT32 forceodton : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* ODT is forced-on. */
    UINT32 odtsampoff : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* ODT and Senseamp are forced-off. */
    UINT32 disableodtstatic : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 ddrcrforceodton : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               force ODT to the transmitter on, regardless of
                               state of DriveEnable
                            */
    UINT32 spare : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* spare */
    UINT32 xovercal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enables Xover Calibration Training Mode */
    UINT32 longpreambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Enables long preamble for DDR4 devices */

  } Bits;
  UINT32 Data;

} DATACONTROL0N0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL1N0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b14ec)                                                        */
/* Register default value on BWV: 0x0000003C                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL1N0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2404EC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 10;

                            /* Bits[9:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 rxbiasctl : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the Current and BW of the Receiver: {0:
                               0.34Idll, 1: 0.66Idll, 2: 0.88Idll, 3: Idll, 4:
                               1.33Idll, 5: 1.66Idll[br] , 6: 2.00Idll, 7:
                               2.33Idll}
                            */
    UINT32 odtdelay : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /*
                               Controls ODT turn-on delay. To turn on N tQCK
                               before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 odtduration : 3;

                            /* Bits[19:17], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the ODT ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 senseampdelay : 4;

                            /* Bits[23:20], Access Type=RW, default=0x00000000*/

                            /*
                               Controls Senseamp turn-on delay. To turn on N
                               tQCK before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 senseampduration : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the SenseAmp ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 rsvd_27 : 5;

                            /* Bits[31:27], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL1N0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL2N0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b14f0)                                                        */
/* Register default value on BWV: 0x07800000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL2N0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2404F0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxvocselqnnnh : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode
                            */
    UINT32 forcebiason : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the internal Vref and Rx bias circuit,
                               regardless of any other power downs
                            */
    UINT32 forcerxon : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the RxAmp only (as opposed to
                               OdtSampOn, which turns on both ODT and the
                               amplifier).[br] Use for overclocking support
                               where we may not be able to hit the fast exit
                               latency
                            */
    UINT32 ddr4extend : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Enable finer vref resolution in ddr4 */
    UINT32 cttermination : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* DDRCOMP_CR_DDRCRCOMPOVR CTTermination */
    UINT32 dfelben : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback enable */
    UINT32 dfelbtxdmuxsel : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback TX FIFO data mux sel */
    UINT32 spare1 : 2;

                            /* Bits[12:11], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 txddjcen : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /* TxddjcEn */
    UINT32 dfeenable : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* DfeEnable */
    UINT32 dfedlysel : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /* DfeDlySel */
    UINT32 dfecode : 4;

                            /* Bits[22:19], Access Type=RW, default=0x00000000*/

                            /*
                               DfeCode: binary code 0000 to 1000 for DFE
                               offset, mid-code code for zero offset is 0100
                            */
    UINT32 rxdqssaoffset : 5;

                            /* Bits[27:23], Access Type=RW, default=0x0000000F*/

                            /* strobe Rx Amp offset control */
    UINT32 rsvd_28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL2N0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL3N0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b14f4)                                                        */
/* Register default value on BWV: 0x00000FCF                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL3N0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2404F4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 drvstaticlegcfg : 2;

                            /* Bits[1:0], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in DRV
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 odtstaticlegcfg : 2;

                            /* Bits[3:2], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in ODT
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 lvlshft_holden : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rsvd_5 : 1;

                            /* Bits[5:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 odtsegmentenable : 3;

                            /* Bits[8:6], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset. [br] After that, a shift register will
                               determine the enabled segments
                            */
    UINT32 datasegmentenable : 3;

                            /* Bits[11:9], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset.
                            */
    UINT32 longodtr2w : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               When set, it will extends ODT by 1 qclk on read
                               to write turnarounds. hsd 230773
                            */
    UINT32 spare1 : 8;

                            /* Bits[20:13], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 ddrcrctlecapen : 2;

                            /* Bits[22:21], Access Type=RW, default=0x00000000*/

                            /* ctle capacitor setting */
    UINT32 ddrcrctleresen : 2;

                            /* Bits[24:23], Access Type=RW, default=0x00000000*/

                            /* ctle resistor setting */
    UINT32 pcasbiasclosedloopen : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiassel : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasfoldedlegtrim : 2;

                            /* Bits[28:27], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasgcncomp : 2;

                            /* Bits[30:29], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 postambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DATACONTROL3N0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* VSSHIORVREFCONTROLN0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                 */
/*      BWV (0x402b14f8)                                                        */
/* Register default value on BWV: 0x004D8238                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Broadcast read not supported.
*/


#define VSSHIORVREFCONTROLN0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2404F8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 24;

                            /* Bits[23:0], Access Type=RW, default=0x004D8238*/

                            /*
                               Channel 0 fubs : VssHi adjust setting. Channel1
                               fubs: DIMM VREF adjust settings.[br] [br] VssHi
                               Field Description: [br] [br] Field Bits
                               Description[br] ------- ---- -------------------
                               ------------------------------------------------
                               ------------------------------------------------
                               --------------------------------------------[br]
                               SelCode 23 Selects the code to output: {0: Code,
                               1: TCode}[br] GainBoost 22 Enable gain boost is
                               panic mode by updating code/tcode [br]
                               PanicVoltage 21:18 Unsigned integer controlling
                               the voltage error on VssHi that will trigger the
                               panic driver. Step size of VccDDQ/192 (0 to
                               117mV)[br] CloseLoop 17 Enables the VssHi close
                               loop tracking [br] PanicEn 16 Enables the VssHi
                               Panic Driver[br] BWError 15:14 Limits the loop
                               gain (ie: difference between code and tcode) to
                               +/- 2^(SlowBWError)[br] OpenLoop 13 Operates
                               VssHi in open loop mode with the target Vref
                               code directly driving the output DAC with no
                               feedback involved[br] SampleDivider 12:10
                               Controls the loop bandwidth by dividing down the
                               input clock: {0: Qclk, 1: Qclk/2, 2: Qclk/4, 3:
                               Qclk/8, 4: Qclk/16, 5: Qclk/32, 6: Qclk/64, 7:
                               Qclk/128}[br] LoBWDivider 9:8 For the slow
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] HiBWDivider 7:6 For the fast
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] Target 5:0 Unsigned integer
                               controlling the target VssHi voltage. Step size
                               of VccDDQ/192 and starting value of
                               VccDDQ*20/192
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROLN0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* RXGROUP0N1RANK0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1500)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast read not supported.
*/


#define RXGROUP0N1RANK0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240500

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N1RANK1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1504)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast read not supported.
*/


#define RXGROUP0N1RANK1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240504

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N1RANK2_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1508)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0.Broadcast read not supported.
*/


#define RXGROUP0N1RANK2_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240508

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK2_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N1RANK3_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b150c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast read not supported.
*/


#define RXGROUP0N1RANK3_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B24050C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK3_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1540)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240540

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* one of the four clocks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1544)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240544

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* one of the four clocks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK2_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1548)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK2_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240548

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* one of the 4 clocks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK2_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK3_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b154c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK3_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B24054C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from PiRef to PiN for bit 1 */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK3_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK0_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1580)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK0_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240580

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK0_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1584)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240584

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK2_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1588)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK2_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B240588

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK2_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK3_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b158c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK3_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B24058C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK3_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXVREFCTRLN1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b15a4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* RxVrefCtrl. Broadcast read not supported.
*/


#define RXVREFCTRLN1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2405A4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vrefperbit0 : 7;

                            /* Bits[6:0], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben0 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit1 : 7;

                            /* Bits[14:8], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben1 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit2 : 7;

                            /* Bits[22:16], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben2 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit3 : 7;

                            /* Bits[30:24], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben3 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* shift down the Vref voltage by ~0.5 stepsize */

  } Bits;
  UINT32 Data;

} RXVREFCTRLN1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATATRAINFEEDBACKN1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                  */
/*      BWV (0x402b15a8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Training Feedback Results. Broadcast read not supported.
*/


#define DATATRAINFEEDBACKN1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2405A8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 datatrainfeedback : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Data Training Feedback Storage [br] Training
                               Step Bits Nibble Description[br] --------------
                               ---- ------- ---------------[br] Cross Over Cal
                               0 1 Tx Dqs Phase Detection[br] Cross Over Cal 1
                               1 Tx Dq Phase Detection[br] Cross Over Cal 2 1
                               Rec En Phase Detection[br] RcvEn 8:0 1 Byte
                               detection[br] Wr Leveling 8:0 1 Byte
                               detection[br] Senseamp offset 3:0 1 Dq Senseamp
                               offset Detection
                            */
    UINT32 rsvd_9 : 23;

                            /* Bits[31:9], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATATRAINFEEDBACKN1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRFSMCALN1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                        */
/*      BWV (0x402b15c8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Fsm for  Voc and Xover caliberation, Voc caliberation is a procedure that cancel out intrinsic offset in analogue receivers and Xover training ,it aligns all the local dll to the global qclk
*/


#define DDRCRFSMCALN1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2405C8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0fsm : 5;

                            /* Bits[4:0], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of first receiver is done(read only)
                            */
    UINT32 saoffset1fsm : 5;

                            /* Bits[9:5], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of second receiver is done(read only)
                            */
    UINT32 saoffset2fsm : 5;

                            /* Bits[14:10], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of third receiver is done(read only)
                            */
    UINT32 saoffset3fsm : 5;

                            /* Bits[19:15], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of fourth receiver is done(read only)
                            */
    UINT32 fsmcalcomplete : 1;

                            /* Bits[20:20], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation is done */
    UINT32 refpiclkdelayfsm : 6;

                            /* Bits[26:21], Access Type=ROV, default=0x00000000*/

                            /*
                               Load FSM with a code at which , the transition
                               is detected.
                            */
    UINT32 fsmcaldone : 1;

                            /* Bits[27:27], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation of voc or x-over is done */
    UINT32 fsmtimersel : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* Timer is set for either 8 cycles or 16 cycles */
    UINT32 fsmpatternsel : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               It selects whther the pattern of three bit or
                               two bit is selected when the transition happen
                               from 1-->0 for pdout and receiver , to avoid
                               glitch
                            */
    UINT32 fsmvoccal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               This bit tells , wether the xover or voc
                               caliberation will be done, if its zero x-over
                               caliberation is done and vice-versa
                            */
    UINT32 fsmcalen : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* FsmCalEn starts the voc-Xover Fsm */

  } Bits;
  UINT32 Data;

} DDRCRFSMCALN1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL4N1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b15cc)                                                        */
/* Register default value on BWV: 0x801F0000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL4N1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2405CC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vsshiorvrefctl1 : 8;

                            /* Bits[8:1], Access Type=RW, default=0x00000000*/

                            /*
                               VssHi control bits[br] Field Description: [br]
                               [br] Field Bits Description[br] ------- ----
                               ---------------------------------[br]
                               disoverflow 24 Disable overflow logic from
                               BDW[br] fast panic enable 25 Bypass 2 flops in
                               panic path for faster panic response[br]
                               vsshivccd2by3cfgen 26 Forces the driver DAC to
                               get supply from 2/3 vccd[br] vsshivccd2by3cfg
                               27:29 Current trim setting for 2/3 vccd mode,
                               001 fast, 011 typical, 111 slow silicon [br]
                               ddrvssh2ndcompen 30 Enable second comparator
                               (ZBB mode)[br] comp high bwen 31 Improve
                               comparator performance to support low digital
                               voltage range
                            */
    UINT32 dqtxeqsel : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* DQ TxEq setting selection to achieve constant EQ */
    UINT32 rsvd_10 : 2;

                            /* Bits[11:10], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vrefpwrsave : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               If set to 0 (default), Vref generators selected
                               through RxVrefSel[3:0] are always on.[br] If set
                               to 1, Vref generators are switched off while in
                               Self Refresh.
                            */
    UINT32 vreftonblbus : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000008*/

                            /* Per-bit Enable connection to share Vref Bus */
    UINT32 rxvrefsel : 4;

                            /* Bits[20:17], Access Type=RW, default=0x0000000F*/

                            /* Per Bit Verf generator Enable */
    UINT32 refpiclkdelay : 6;

                            /* Bits[26:21], Access Type=RW, default=0x00000000*/

                            /* RefPiClkDelay */
    UINT32 fnvcrsdlbypassen : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* FNV Slave Delay Line Bypass Enable */
    UINT32 fnvcrdllbypassen : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* FNV DLL Bypass Enable */
    UINT32 fnvcrvisaen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               FNV Visa Fub Enable - data fub used for VISA if
                               asserted
                            */
    UINT32 writecrcenable : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enable write crc mode */
    UINT32 rsvd_31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL4N1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA0N1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                          */
/*      BWV (0x402b15d4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA0N1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2405D4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompdrvup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /*
                               Data Rcomp DrvUp Comp Value can be overriden via
                               message channel if periodical retrain is disable
                            */
    UINT32 spare0 : 3;

                            /* Bits[8:6], Access Type=RWV, default=0x00000000*/

                            /* Spare */
    UINT32 rcompdrvdown : 6;

                            /* Bits[14:9], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp DrvDown Comp Value */
    UINT32 vtcomp : 5;

                            /* Bits[19:15], Access Type=RWV, default=0x00000000*/

                            /* VT Comp Values */
    UINT32 tcocomp : 7;

                            /* Bits[26:20], Access Type=RWV, default=0x00000000*/

                            /* Data TCO Comp Value. */
    UINT32 slewratecomp : 5;

                            /* Bits[31:27], Access Type=RWV, default=0x00000000*/

                            /* Data Slew Rate Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA0N1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA1N1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                          */
/*      BWV (0x402b15d8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA1N1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2405D8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompodtup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp OdtUp Comp Value */
    UINT32 rcompodtdown : 6;

                            /* Bits[11:6], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp Odt-Down Comp Value */
    UINT32 panicdrvdn : 10;

                            /* Bits[21:12], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvDn RComp Value. */
    UINT32 panicdrvup : 10;

                            /* Bits[31:22], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvUp RComp Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA1N1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATAOFFSETTRAINN1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b15dc)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATAOFFSETTRAINN1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2405DC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvenoffset : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained RxRcvEn Value. */
    UINT32 rxdqsoffset : 7;

                            /* Bits[12:6], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Rx DQS Value. */
    UINT32 txdqoffset : 6;

                            /* Bits[18:13], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Tx DQ Value. */
    UINT32 txdqsoffset : 6;

                            /* Bits[24:19], Access Type=RW, default=0x00000000*/

                            /* Ooffset added to Trained Tx DQS Value. */
    UINT32 vrefoffset : 7;

                            /* Bits[31:25], Access Type=RW, default=0x00000000*/

                            /*
                               2s Compliment offset added to Trained Vref
                               Value. Positive number increases Vref, and each
                               step is Vdd/384.
                            */

  } Bits;
  UINT32 Data;

} DATAOFFSETTRAINN1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* DATACONTROL0N1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b15e8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL0N1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2405E8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxtrainingmode : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enables Read DqDqs Training Mode */
    UINT32 wltrainingmode : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enables Write Leveling Training Mode */
    UINT32 rltrainingmode : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* Enables Read Leveling Training Mode. */
    UINT32 senseamptrainingmode : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode.
                            */
    UINT32 txon : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               When set, forces DQ/DQS drive enable to active.
                               Used in power measurements and IO loopback mode
                            */
    UINT32 rfon : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces register file read,
                               overriding the rank power down logic.
                            */
    UINT32 rxpion : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /* Power-down Disable: Forces RxDqs PI clocks on. */
    UINT32 txpion : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces TxDq and TxDqs PI
                               clocks on.
                            */
    UINT32 internalclockson : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Forces on master DLL and all PI enables ON,
                               despite both channel in SelfRefresh, etc. low
                               power states.
                            */
    UINT32 saoffsettraintxon : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* SaOffsetTrainTxon */
    UINT32 txdisable : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All write commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 rxdisable : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All read commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 txlong : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Sets the duration of the first transmitted DQ
                               bit of the burst. 0=1UI, 1=2UI.
                            */
    UINT32 rsvd_13 : 5;

                            /* Bits[17:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 driversegmentenable : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Controls which segements of the driver are
                               enabled: {0: All, 1: Only ODT}.
                            */
    UINT32 rsvd_19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 readrfrd : 1;

                            /* Bits[20:20], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a read command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfwr : 1;

                            /* Bits[21:21], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a write command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfrank : 3;

                            /* Bits[24:22], Access Type=RWV, default=0x00000000*/

                            /*
                               Specifies the rank that ReadRFRd or ReadRFWr
                               will manually download the CR values from
                            */
    UINT32 forceodton : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* ODT is forced-on. */
    UINT32 odtsampoff : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* ODT and Senseamp are forced-off. */
    UINT32 disableodtstatic : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 ddrcrforceodton : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               force ODT to the transmitter on, regardless of
                               state of DriveEnable
                            */
    UINT32 spare : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* spare */
    UINT32 xovercal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enables Xover Calibration Training Mode */
    UINT32 longpreambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Enables long preamble for DDR4 devices */

  } Bits;
  UINT32 Data;

} DATACONTROL0N1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL1N1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b15ec)                                                        */
/* Register default value on BWV: 0x0000003C                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL1N1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2405EC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 10;

                            /* Bits[9:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 rxbiasctl : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the Current and BW of the Receiver: {0:
                               0.34Idll, 1: 0.66Idll, 2: 0.88Idll, 3: Idll, 4:
                               1.33Idll, 5: 1.66Idll[br] , 6: 2.00Idll, 7:
                               2.33Idll}
                            */
    UINT32 odtdelay : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /*
                               Controls ODT turn-on delay. To turn on N tQCK
                               before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 odtduration : 3;

                            /* Bits[19:17], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the ODT ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 senseampdelay : 4;

                            /* Bits[23:20], Access Type=RW, default=0x00000000*/

                            /*
                               Controls Senseamp turn-on delay. To turn on N
                               tQCK before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 senseampduration : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the SenseAmp ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 rsvd_27 : 5;

                            /* Bits[31:27], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL1N1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL2N1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b15f0)                                                        */
/* Register default value on BWV: 0x07800000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL2N1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2405F0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxvocselqnnnh : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode
                            */
    UINT32 forcebiason : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the internal Vref and Rx bias circuit,
                               regardless of any other power downs
                            */
    UINT32 forcerxon : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the RxAmp only (as opposed to
                               OdtSampOn, which turns on both ODT and the
                               amplifier).[br] Use for overclocking support
                               where we may not be able to hit the fast exit
                               latency
                            */
    UINT32 ddr4extend : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Enable finer vref resolution in ddr4 */
    UINT32 cttermination : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* DDRCOMP_CR_DDRCRCOMPOVR CTTermination */
    UINT32 dfelben : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback enable */
    UINT32 dfelbtxdmuxsel : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback TX FIFO data mux sel */
    UINT32 spare1 : 2;

                            /* Bits[12:11], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 txddjcen : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /* TxddjcEn */
    UINT32 dfeenable : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* DfeEnable */
    UINT32 dfedlysel : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /* DfeDlySel */
    UINT32 dfecode : 4;

                            /* Bits[22:19], Access Type=RW, default=0x00000000*/

                            /*
                               DfeCode: binary code 0000 to 1000 for DFE
                               offset, mid-code code for zero offset is 0100
                            */
    UINT32 rxdqssaoffset : 5;

                            /* Bits[27:23], Access Type=RW, default=0x0000000F*/

                            /* strobe Rx Amp offset control */
    UINT32 rsvd_28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL2N1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL3N1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b15f4)                                                        */
/* Register default value on BWV: 0x00000FCF                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL3N1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2405F4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 drvstaticlegcfg : 2;

                            /* Bits[1:0], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in DRV
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 odtstaticlegcfg : 2;

                            /* Bits[3:2], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in ODT
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 lvlshft_holden : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rsvd_5 : 1;

                            /* Bits[5:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 odtsegmentenable : 3;

                            /* Bits[8:6], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset. [br] After that, a shift register will
                               determine the enabled segments
                            */
    UINT32 datasegmentenable : 3;

                            /* Bits[11:9], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset.
                            */
    UINT32 longodtr2w : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               When set, it will extends ODT by 1 qclk on read
                               to write turnarounds. hsd 230773
                            */
    UINT32 spare1 : 8;

                            /* Bits[20:13], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 ddrcrctlecapen : 2;

                            /* Bits[22:21], Access Type=RW, default=0x00000000*/

                            /* ctle capacitor setting */
    UINT32 ddrcrctleresen : 2;

                            /* Bits[24:23], Access Type=RW, default=0x00000000*/

                            /* ctle resistor setting */
    UINT32 pcasbiasclosedloopen : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiassel : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasfoldedlegtrim : 2;

                            /* Bits[28:27], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasgcncomp : 2;

                            /* Bits[30:29], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 postambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DATACONTROL3N1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* VSSHIORVREFCONTROLN1_8_FNV_DDRIO_DAT7_CH_1_REG supported on:                 */
/*      BWV (0x402b15f8)                                                        */
/* Register default value on BWV: 0x004D8238                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Broadcast read not supported.
*/


#define VSSHIORVREFCONTROLN1_8_FNV_DDRIO_DAT7_CH_1_REG 0x1B2405F8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 24;

                            /* Bits[23:0], Access Type=RW, default=0x004D8238*/

                            /*
                               Channel 0 fubs : VssHi adjust setting. Channel1
                               fubs: DIMM VREF adjust settings.[br] [br] VssHi
                               Field Description: [br] [br] Field Bits
                               Description[br] ------- ---- -------------------
                               ------------------------------------------------
                               ------------------------------------------------
                               --------------------------------------------[br]
                               SelCode 23 Selects the code to output: {0: Code,
                               1: TCode}[br] GainBoost 22 Enable gain boost is
                               panic mode by updating code/tcode [br]
                               PanicVoltage 21:18 Unsigned integer controlling
                               the voltage error on VssHi that will trigger the
                               panic driver. Step size of VccDDQ/192 (0 to
                               117mV)[br] CloseLoop 17 Enables the VssHi close
                               loop tracking [br] PanicEn 16 Enables the VssHi
                               Panic Driver[br] BWError 15:14 Limits the loop
                               gain (ie: difference between code and tcode) to
                               +/- 2^(SlowBWError)[br] OpenLoop 13 Operates
                               VssHi in open loop mode with the target Vref
                               code directly driving the output DAC with no
                               feedback involved[br] SampleDivider 12:10
                               Controls the loop bandwidth by dividing down the
                               input clock: {0: Qclk, 1: Qclk/2, 2: Qclk/4, 3:
                               Qclk/8, 4: Qclk/16, 5: Qclk/32, 6: Qclk/64, 7:
                               Qclk/128}[br] LoBWDivider 9:8 For the slow
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] HiBWDivider 7:6 For the fast
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] Target 5:0 Unsigned integer
                               controlling the target VssHi voltage. Step size
                               of VccDDQ/192 and starting value of
                               VccDDQ*20/192
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROLN1_8_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* RXGROUP0N0RANK0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1600)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast reads are not supported.
*/


#define RXGROUP0N0RANK0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240600

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_N to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS (0: 1/16 UI offset, [br] 1:
                               3/16 UI Offset, 2: 5/16 UI Offsets, 3: 7/16 UI
                               Offsets, 4: 9/16 UI Offsets, 5,6,7: 11/16 UI
                               Offsets.)
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N0RANK1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1604)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank1. Broadcast reads are not supported.
*/


#define RXGROUP0N0RANK1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240604

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_N to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N0RANK2_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1608)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank2. Broadcast read not supported.
*/


#define RXGROUP0N0RANK2_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240608

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK2_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N0RANK3_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b160c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank3. Broadcast read not supported.
*/


#define RXGROUP0N0RANK3_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B24060C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_N to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK3_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1640)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240640

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* select one of the four DQ Clk */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1644)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240644

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* Select one of the four DQ clks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK2_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1648)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK2_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240648

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* Select one of the four DQ clks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK2_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK3_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b164c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK3_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B24064C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* Select one of the four DQ clk */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK3_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1680)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240680

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               selects which skewed DQSP (to sample even bits)
                               is used in the RX FIFO. For proper operation,
                               always pick latest DQSP
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               selects which skewed DQSN (to sample odd bits)
                               is used in the RX FIFO. For proper operation,
                               always pick latest DQSN
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1684)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240684

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               [0]=0 selects the raw output from the nibble DQS
                               amplifier; [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK2_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1688)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK2_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240688

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               [0]=0 selects the raw output from the nibble DQS
                               amplifier; [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK2_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK3_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b168c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK3_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B24068C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               [0]=0 selects the raw output from the nibble DQS
                               amplifier; [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK3_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXVREFCTRLN0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b16a4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* RxVrefCtrl. Broadcast read not supported.
*/


#define RXVREFCTRLN0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2406A4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vrefperbit0 : 7;

                            /* Bits[6:0], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben0 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit1 : 7;

                            /* Bits[14:8], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben1 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               enables fine grain Vref control, shift down the
                               Vref voltage by ~0.5 stepsize
                            */
    UINT32 vrefperbit2 : 7;

                            /* Bits[22:16], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben2 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               enables fine grain Vref control, shift down the
                               Vref voltage by ~0.5 stepsize
                            */
    UINT32 vrefperbit3 : 7;

                            /* Bits[30:24], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben3 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* shift down the Vref voltage by ~0.5 stepsize */

  } Bits;
  UINT32 Data;

} RXVREFCTRLN0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATATRAINFEEDBACKN0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                  */
/*      BWV (0x402b16a8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Training Feedback Results. Broadcast read not supported.
*/


#define DATATRAINFEEDBACKN0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2406A8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 datatrainfeedback : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Data Training Feedback Storage[br] [br]
                               DataTrainFeedback Description:[br] Training Step
                               Bits Nibble Description[br] -------------- ----
                               ------- --------------------------[br] Cross
                               Over Cal 0 0 Tx Dqs Phase Detection[br] Cross
                               Over Cal 1 0 Tx Dq Phase Detection[br] Cross
                               Over Cal 2 0 Rec En Phase Detection[br] RcvEn
                               8:0 0 Byte detection[br] [br] Wr Leveling 8:0 0
                               Byte detection[br] Senseamp offset 3:0 0 Dq
                               Senseamp offset Detection
                            */
    UINT32 rsvd_9 : 23;

                            /* Bits[31:9], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATATRAINFEEDBACKN0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRFSMCALN0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                        */
/*      BWV (0x402b16c8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Fsm for  Voc and Xover caliberation, Voc caliberation is a procedure that cancel out intrinsic offset in analogue receivers and Xover training ,it aligns all the local dll to the global qclk
*/


#define DDRCRFSMCALN0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2406C8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0fsm : 5;

                            /* Bits[4:0], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of first receiver is done(read only)
                            */
    UINT32 saoffset1fsm : 5;

                            /* Bits[9:5], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of second receiver is done(read only)
                            */
    UINT32 saoffset2fsm : 5;

                            /* Bits[14:10], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of third receiver is done(read only)
                            */
    UINT32 saoffset3fsm : 5;

                            /* Bits[19:15], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of fourth receiver is done(read only)
                            */
    UINT32 fsmcalcomplete : 1;

                            /* Bits[20:20], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation is done */
    UINT32 refpiclkdelayfsm : 6;

                            /* Bits[26:21], Access Type=ROV, default=0x00000000*/

                            /*
                               Load FSM with a code at which , the transition
                               is detected.
                            */
    UINT32 fsmcaldone : 1;

                            /* Bits[27:27], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation of voc or x-over is done */
    UINT32 fsmtimersel : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* Timer is set for either 8 cycles or 16 cycles */
    UINT32 fsmpatternsel : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               It selects whther the pattern of three bit or
                               two bit is selected when the transition happen
                               from 1-->0 for pdout and receiver , to avoid
                               glitch
                            */
    UINT32 fsmvoccal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               This bit tells , wether the xover or voc
                               caliberation will be done, if its zero x-over
                               caliberation is done and vice-versa
                            */
    UINT32 fsmcalen : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* FsmCalEn starts the voc-Xover Fsm */

  } Bits;
  UINT32 Data;

} DDRCRFSMCALN0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL4N0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b16cc)                                                        */
/* Register default value on BWV: 0x801F0000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL4N0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2406CC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vsshiorvrefctl1 : 8;

                            /* Bits[8:1], Access Type=RW, default=0x00000000*/

                            /*
                               VssHi control bits[br] Field Description: [br]
                               [br] Field Bits Description[br] ------- ----
                               ---------------------------------[br]
                               disoverflow 24 Disable overflow logic from
                               BDW[br] fast panic enable 25 Bypass 2 flops in
                               panic path for faster panic response[br]
                               vsshivccd2by3cfgen 26 Forces the driver DAC to
                               get supply from 2/3 vccd[br] vsshivccd2by3cfg
                               27:29 Current trim setting for 2/3 vccd mode,
                               001 fast, 011 typical, 111 slow silicon [br]
                               ddrvssh2ndcompen 30 Enable second comparator
                               (ZBB mode)[br] comp high bwen 31 Improve
                               comparator performance to support low digital
                               voltage range
                            */
    UINT32 dqtxeqsel : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* DQ TxEq setting selection to achieve constant EQ */
    UINT32 rsvd_10 : 2;

                            /* Bits[11:10], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vrefpwrsave : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               If set to 0 (default), Vref generators selected
                               through RxVrefSel[3:0] are always on.[br] If set
                               to 1, Vref generators are switched off while in
                               Self Refresh.
                            */
    UINT32 vreftonblbus : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000008*/

                            /* Per-bit Enable connection to share Vref Bus */
    UINT32 rxvrefsel : 4;

                            /* Bits[20:17], Access Type=RW, default=0x0000000F*/

                            /* Per Bit Verf generator Enable */
    UINT32 refpiclkdelay : 6;

                            /* Bits[26:21], Access Type=RW, default=0x00000000*/

                            /* RefPiClkDelay */
    UINT32 fnvcrsdlbypassen : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* FNV Slave Delay Line Bypass Enable */
    UINT32 fnvcrdllbypassen : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* FNV DLL Bypass Enable */
    UINT32 fnvcrvisaen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               FNV Visa Fub Enable - data fub used for VISA if
                               asserted
                            */
    UINT32 writecrcenable : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enable write crc mode */
    UINT32 rsvd_31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL4N0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA0N0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                          */
/*      BWV (0x402b16d4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA0N0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2406D4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompdrvup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /*
                               Data Rcomp DrvUp Comp Value can be overriden via
                               message channel if periodical retrain is disable
                            */
    UINT32 spare0 : 3;

                            /* Bits[8:6], Access Type=RWV, default=0x00000000*/

                            /* Spare */
    UINT32 rcompdrvdown : 6;

                            /* Bits[14:9], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp DrvDown Comp Value */
    UINT32 vtcomp : 5;

                            /* Bits[19:15], Access Type=RWV, default=0x00000000*/

                            /* VT Comp Values */
    UINT32 tcocomp : 7;

                            /* Bits[26:20], Access Type=RWV, default=0x00000000*/

                            /* Data TCO Comp Value. */
    UINT32 slewratecomp : 5;

                            /* Bits[31:27], Access Type=RWV, default=0x00000000*/

                            /* Data Slew Rate Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA0N0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA1N0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                          */
/*      BWV (0x402b16d8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA1N0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2406D8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompodtup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp OdtUp Comp Value */
    UINT32 rcompodtdown : 6;

                            /* Bits[11:6], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp Odt-Down Comp Value */
    UINT32 panicdrvdn : 10;

                            /* Bits[21:12], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvDn RComp Value. */
    UINT32 panicdrvup : 10;

                            /* Bits[31:22], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvUp RComp Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA1N0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATAOFFSETTRAINN0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b16dc)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATAOFFSETTRAINN0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2406DC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvenoffset : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained RxRcvEn Value. */
    UINT32 rxdqsoffset : 7;

                            /* Bits[12:6], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Rx DQS Value. */
    UINT32 txdqoffset : 6;

                            /* Bits[18:13], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Tx DQ Value. */
    UINT32 txdqsoffset : 6;

                            /* Bits[24:19], Access Type=RW, default=0x00000000*/

                            /* Ooffset added to Trained Tx DQS Value. */
    UINT32 vrefoffset : 7;

                            /* Bits[31:25], Access Type=RW, default=0x00000000*/

                            /*
                               2s Compliment offset added to Trained Vref
                               Value. Positive number increases Vref, and each
                               step is Vdd/384.
                            */

  } Bits;
  UINT32 Data;

} DATAOFFSETTRAINN0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* DATACONTROL0N0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b16e8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL0N0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2406E8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxtrainingmode : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enables Read DqDqs Training Mode */
    UINT32 wltrainingmode : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enables Write Leveling Training Mode */
    UINT32 rltrainingmode : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* Enables Read Leveling Training Mode. */
    UINT32 senseamptrainingmode : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode.
                            */
    UINT32 txon : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               When set, forces DQ/DQS drive enable to active.
                               Used in power measurements and IO loopback mode
                            */
    UINT32 rfon : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces register file read,
                               overriding the rank power down logic.
                            */
    UINT32 rxpion : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /* Power-down Disable: Forces RxDqs PI clocks on. */
    UINT32 txpion : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces TxDq and TxDqs PI
                               clocks on.
                            */
    UINT32 internalclockson : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Forces on master DLL and all PI enables ON,
                               despite both channel in SelfRefresh, etc. low
                               power states.
                            */
    UINT32 saoffsettraintxon : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* SaOffsetTrainTxon */
    UINT32 txdisable : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All write commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 rxdisable : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All read commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 txlong : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Sets the duration of the first transmitted DQ
                               bit of the burst. 0=1UI, 1=2UI.
                            */
    UINT32 rsvd_13 : 5;

                            /* Bits[17:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 driversegmentenable : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Controls which segements of the driver are
                               enabled: {0: All, 1: Only ODT}.
                            */
    UINT32 rsvd_19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 readrfrd : 1;

                            /* Bits[20:20], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a read command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfwr : 1;

                            /* Bits[21:21], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a write command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfrank : 3;

                            /* Bits[24:22], Access Type=RWV, default=0x00000000*/

                            /*
                               Specifies the rank that ReadRFRd or ReadRFWr
                               will manually download the CR values from
                            */
    UINT32 forceodton : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* ODT is forced-on. */
    UINT32 odtsampoff : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* ODT and Senseamp are forced-off. */
    UINT32 disableodtstatic : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 ddrcrforceodton : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               force ODT to the transmitter on, regardless of
                               state of DriveEnable
                            */
    UINT32 spare : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* spare */
    UINT32 xovercal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enables Xover Calibration Training Mode */
    UINT32 longpreambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Enables long preamble for DDR4 devices */

  } Bits;
  UINT32 Data;

} DATACONTROL0N0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL1N0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b16ec)                                                        */
/* Register default value on BWV: 0x0000003C                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL1N0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2406EC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 10;

                            /* Bits[9:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 rxbiasctl : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the Current and BW of the Receiver: {0:
                               0.34Idll, 1: 0.66Idll, 2: 0.88Idll, 3: Idll, 4:
                               1.33Idll, 5: 1.66Idll[br] , 6: 2.00Idll, 7:
                               2.33Idll}
                            */
    UINT32 odtdelay : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /*
                               Controls ODT turn-on delay. To turn on N tQCK
                               before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 odtduration : 3;

                            /* Bits[19:17], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the ODT ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 senseampdelay : 4;

                            /* Bits[23:20], Access Type=RW, default=0x00000000*/

                            /*
                               Controls Senseamp turn-on delay. To turn on N
                               tQCK before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 senseampduration : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the SenseAmp ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 rsvd_27 : 5;

                            /* Bits[31:27], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL1N0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL2N0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b16f0)                                                        */
/* Register default value on BWV: 0x07800000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL2N0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2406F0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxvocselqnnnh : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode
                            */
    UINT32 forcebiason : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the internal Vref and Rx bias circuit,
                               regardless of any other power downs
                            */
    UINT32 forcerxon : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the RxAmp only (as opposed to
                               OdtSampOn, which turns on both ODT and the
                               amplifier).[br] Use for overclocking support
                               where we may not be able to hit the fast exit
                               latency
                            */
    UINT32 ddr4extend : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Enable finer vref resolution in ddr4 */
    UINT32 cttermination : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* DDRCOMP_CR_DDRCRCOMPOVR CTTermination */
    UINT32 dfelben : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback enable */
    UINT32 dfelbtxdmuxsel : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback TX FIFO data mux sel */
    UINT32 spare1 : 2;

                            /* Bits[12:11], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 txddjcen : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /* TxddjcEn */
    UINT32 dfeenable : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* DfeEnable */
    UINT32 dfedlysel : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /* DfeDlySel */
    UINT32 dfecode : 4;

                            /* Bits[22:19], Access Type=RW, default=0x00000000*/

                            /*
                               DfeCode: binary code 0000 to 1000 for DFE
                               offset, mid-code code for zero offset is 0100
                            */
    UINT32 rxdqssaoffset : 5;

                            /* Bits[27:23], Access Type=RW, default=0x0000000F*/

                            /* strobe Rx Amp offset control */
    UINT32 rsvd_28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL2N0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL3N0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b16f4)                                                        */
/* Register default value on BWV: 0x00000FCF                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL3N0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2406F4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 drvstaticlegcfg : 2;

                            /* Bits[1:0], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in DRV
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 odtstaticlegcfg : 2;

                            /* Bits[3:2], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in ODT
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 lvlshft_holden : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rsvd_5 : 1;

                            /* Bits[5:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 odtsegmentenable : 3;

                            /* Bits[8:6], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset. [br] After that, a shift register will
                               determine the enabled segments
                            */
    UINT32 datasegmentenable : 3;

                            /* Bits[11:9], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset.
                            */
    UINT32 longodtr2w : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               When set, it will extends ODT by 1 qclk on read
                               to write turnarounds. hsd 230773
                            */
    UINT32 spare1 : 8;

                            /* Bits[20:13], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 ddrcrctlecapen : 2;

                            /* Bits[22:21], Access Type=RW, default=0x00000000*/

                            /* ctle capacitor setting */
    UINT32 ddrcrctleresen : 2;

                            /* Bits[24:23], Access Type=RW, default=0x00000000*/

                            /* ctle resistor setting */
    UINT32 pcasbiasclosedloopen : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiassel : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasfoldedlegtrim : 2;

                            /* Bits[28:27], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasgcncomp : 2;

                            /* Bits[30:29], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 postambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DATACONTROL3N0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* VSSHIORVREFCONTROLN0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                 */
/*      BWV (0x402b16f8)                                                        */
/* Register default value on BWV: 0x004D8238                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Broadcast read not supported.
*/


#define VSSHIORVREFCONTROLN0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2406F8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 24;

                            /* Bits[23:0], Access Type=RW, default=0x004D8238*/

                            /*
                               Channel 0 fubs : VssHi adjust setting. Channel1
                               fubs: DIMM VREF adjust settings.[br] [br] VssHi
                               Field Description: [br] [br] Field Bits
                               Description[br] ------- ---- -------------------
                               ------------------------------------------------
                               ------------------------------------------------
                               --------------------------------------------[br]
                               SelCode 23 Selects the code to output: {0: Code,
                               1: TCode}[br] GainBoost 22 Enable gain boost is
                               panic mode by updating code/tcode [br]
                               PanicVoltage 21:18 Unsigned integer controlling
                               the voltage error on VssHi that will trigger the
                               panic driver. Step size of VccDDQ/192 (0 to
                               117mV)[br] CloseLoop 17 Enables the VssHi close
                               loop tracking [br] PanicEn 16 Enables the VssHi
                               Panic Driver[br] BWError 15:14 Limits the loop
                               gain (ie: difference between code and tcode) to
                               +/- 2^(SlowBWError)[br] OpenLoop 13 Operates
                               VssHi in open loop mode with the target Vref
                               code directly driving the output DAC with no
                               feedback involved[br] SampleDivider 12:10
                               Controls the loop bandwidth by dividing down the
                               input clock: {0: Qclk, 1: Qclk/2, 2: Qclk/4, 3:
                               Qclk/8, 4: Qclk/16, 5: Qclk/32, 6: Qclk/64, 7:
                               Qclk/128}[br] LoBWDivider 9:8 For the slow
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] HiBWDivider 7:6 For the fast
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] Target 5:0 Unsigned integer
                               controlling the target VssHi voltage. Step size
                               of VccDDQ/192 and starting value of
                               VccDDQ*20/192
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROLN0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* RXGROUP0N1RANK0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1700)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast read not supported.
*/


#define RXGROUP0N1RANK0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240700

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N1RANK1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1704)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast read not supported.
*/


#define RXGROUP0N1RANK1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240704

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N1RANK2_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1708)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0.Broadcast read not supported.
*/


#define RXGROUP0N1RANK2_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240708

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK2_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N1RANK3_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b170c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast read not supported.
*/


#define RXGROUP0N1RANK3_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B24070C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK3_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1740)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240740

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* one of the four clocks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1744)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240744

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* one of the four clocks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK2_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1748)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK2_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240748

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* one of the 4 clocks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK2_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK3_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b174c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK3_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B24074C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from PiRef to PiN for bit 1 */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK3_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK0_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1780)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK0_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240780

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK0_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1784)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240784

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK2_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1788)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK2_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B240788

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK2_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK3_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b178c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK3_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B24078C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK3_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXVREFCTRLN1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b17a4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* RxVrefCtrl. Broadcast read not supported.
*/


#define RXVREFCTRLN1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2407A4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vrefperbit0 : 7;

                            /* Bits[6:0], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben0 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit1 : 7;

                            /* Bits[14:8], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben1 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit2 : 7;

                            /* Bits[22:16], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben2 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit3 : 7;

                            /* Bits[30:24], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben3 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* shift down the Vref voltage by ~0.5 stepsize */

  } Bits;
  UINT32 Data;

} RXVREFCTRLN1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATATRAINFEEDBACKN1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                  */
/*      BWV (0x402b17a8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Training Feedback Results. Broadcast read not supported.
*/


#define DATATRAINFEEDBACKN1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2407A8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 datatrainfeedback : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Data Training Feedback Storage [br] Training
                               Step Bits Nibble Description[br] --------------
                               ---- ------- ---------------[br] Cross Over Cal
                               0 1 Tx Dqs Phase Detection[br] Cross Over Cal 1
                               1 Tx Dq Phase Detection[br] Cross Over Cal 2 1
                               Rec En Phase Detection[br] RcvEn 8:0 1 Byte
                               detection[br] Wr Leveling 8:0 1 Byte
                               detection[br] Senseamp offset 3:0 1 Dq Senseamp
                               offset Detection
                            */
    UINT32 rsvd_9 : 23;

                            /* Bits[31:9], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATATRAINFEEDBACKN1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRFSMCALN1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                        */
/*      BWV (0x402b17c8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Fsm for  Voc and Xover caliberation, Voc caliberation is a procedure that cancel out intrinsic offset in analogue receivers and Xover training ,it aligns all the local dll to the global qclk
*/


#define DDRCRFSMCALN1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2407C8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0fsm : 5;

                            /* Bits[4:0], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of first receiver is done(read only)
                            */
    UINT32 saoffset1fsm : 5;

                            /* Bits[9:5], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of second receiver is done(read only)
                            */
    UINT32 saoffset2fsm : 5;

                            /* Bits[14:10], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of third receiver is done(read only)
                            */
    UINT32 saoffset3fsm : 5;

                            /* Bits[19:15], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of fourth receiver is done(read only)
                            */
    UINT32 fsmcalcomplete : 1;

                            /* Bits[20:20], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation is done */
    UINT32 refpiclkdelayfsm : 6;

                            /* Bits[26:21], Access Type=ROV, default=0x00000000*/

                            /*
                               Load FSM with a code at which , the transition
                               is detected.
                            */
    UINT32 fsmcaldone : 1;

                            /* Bits[27:27], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation of voc or x-over is done */
    UINT32 fsmtimersel : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* Timer is set for either 8 cycles or 16 cycles */
    UINT32 fsmpatternsel : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               It selects whther the pattern of three bit or
                               two bit is selected when the transition happen
                               from 1-->0 for pdout and receiver , to avoid
                               glitch
                            */
    UINT32 fsmvoccal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               This bit tells , wether the xover or voc
                               caliberation will be done, if its zero x-over
                               caliberation is done and vice-versa
                            */
    UINT32 fsmcalen : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* FsmCalEn starts the voc-Xover Fsm */

  } Bits;
  UINT32 Data;

} DDRCRFSMCALN1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL4N1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b17cc)                                                        */
/* Register default value on BWV: 0x801F0000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL4N1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2407CC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vsshiorvrefctl1 : 8;

                            /* Bits[8:1], Access Type=RW, default=0x00000000*/

                            /*
                               VssHi control bits[br] Field Description: [br]
                               [br] Field Bits Description[br] ------- ----
                               ---------------------------------[br]
                               disoverflow 24 Disable overflow logic from
                               BDW[br] fast panic enable 25 Bypass 2 flops in
                               panic path for faster panic response[br]
                               vsshivccd2by3cfgen 26 Forces the driver DAC to
                               get supply from 2/3 vccd[br] vsshivccd2by3cfg
                               27:29 Current trim setting for 2/3 vccd mode,
                               001 fast, 011 typical, 111 slow silicon [br]
                               ddrvssh2ndcompen 30 Enable second comparator
                               (ZBB mode)[br] comp high bwen 31 Improve
                               comparator performance to support low digital
                               voltage range
                            */
    UINT32 dqtxeqsel : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* DQ TxEq setting selection to achieve constant EQ */
    UINT32 rsvd_10 : 2;

                            /* Bits[11:10], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vrefpwrsave : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               If set to 0 (default), Vref generators selected
                               through RxVrefSel[3:0] are always on.[br] If set
                               to 1, Vref generators are switched off while in
                               Self Refresh.
                            */
    UINT32 vreftonblbus : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000008*/

                            /* Per-bit Enable connection to share Vref Bus */
    UINT32 rxvrefsel : 4;

                            /* Bits[20:17], Access Type=RW, default=0x0000000F*/

                            /* Per Bit Verf generator Enable */
    UINT32 refpiclkdelay : 6;

                            /* Bits[26:21], Access Type=RW, default=0x00000000*/

                            /* RefPiClkDelay */
    UINT32 fnvcrsdlbypassen : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* FNV Slave Delay Line Bypass Enable */
    UINT32 fnvcrdllbypassen : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* FNV DLL Bypass Enable */
    UINT32 fnvcrvisaen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               FNV Visa Fub Enable - data fub used for VISA if
                               asserted
                            */
    UINT32 writecrcenable : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enable write crc mode */
    UINT32 rsvd_31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL4N1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA0N1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                          */
/*      BWV (0x402b17d4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA0N1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2407D4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompdrvup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /*
                               Data Rcomp DrvUp Comp Value can be overriden via
                               message channel if periodical retrain is disable
                            */
    UINT32 spare0 : 3;

                            /* Bits[8:6], Access Type=RWV, default=0x00000000*/

                            /* Spare */
    UINT32 rcompdrvdown : 6;

                            /* Bits[14:9], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp DrvDown Comp Value */
    UINT32 vtcomp : 5;

                            /* Bits[19:15], Access Type=RWV, default=0x00000000*/

                            /* VT Comp Values */
    UINT32 tcocomp : 7;

                            /* Bits[26:20], Access Type=RWV, default=0x00000000*/

                            /* Data TCO Comp Value. */
    UINT32 slewratecomp : 5;

                            /* Bits[31:27], Access Type=RWV, default=0x00000000*/

                            /* Data Slew Rate Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA0N1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA1N1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                          */
/*      BWV (0x402b17d8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA1N1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2407D8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompodtup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp OdtUp Comp Value */
    UINT32 rcompodtdown : 6;

                            /* Bits[11:6], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp Odt-Down Comp Value */
    UINT32 panicdrvdn : 10;

                            /* Bits[21:12], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvDn RComp Value. */
    UINT32 panicdrvup : 10;

                            /* Bits[31:22], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvUp RComp Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA1N1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATAOFFSETTRAINN1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b17dc)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATAOFFSETTRAINN1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2407DC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvenoffset : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained RxRcvEn Value. */
    UINT32 rxdqsoffset : 7;

                            /* Bits[12:6], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Rx DQS Value. */
    UINT32 txdqoffset : 6;

                            /* Bits[18:13], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Tx DQ Value. */
    UINT32 txdqsoffset : 6;

                            /* Bits[24:19], Access Type=RW, default=0x00000000*/

                            /* Ooffset added to Trained Tx DQS Value. */
    UINT32 vrefoffset : 7;

                            /* Bits[31:25], Access Type=RW, default=0x00000000*/

                            /*
                               2s Compliment offset added to Trained Vref
                               Value. Positive number increases Vref, and each
                               step is Vdd/384.
                            */

  } Bits;
  UINT32 Data;

} DATAOFFSETTRAINN1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* DATACONTROL0N1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b17e8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL0N1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2407E8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxtrainingmode : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enables Read DqDqs Training Mode */
    UINT32 wltrainingmode : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enables Write Leveling Training Mode */
    UINT32 rltrainingmode : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* Enables Read Leveling Training Mode. */
    UINT32 senseamptrainingmode : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode.
                            */
    UINT32 txon : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               When set, forces DQ/DQS drive enable to active.
                               Used in power measurements and IO loopback mode
                            */
    UINT32 rfon : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces register file read,
                               overriding the rank power down logic.
                            */
    UINT32 rxpion : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /* Power-down Disable: Forces RxDqs PI clocks on. */
    UINT32 txpion : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces TxDq and TxDqs PI
                               clocks on.
                            */
    UINT32 internalclockson : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Forces on master DLL and all PI enables ON,
                               despite both channel in SelfRefresh, etc. low
                               power states.
                            */
    UINT32 saoffsettraintxon : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* SaOffsetTrainTxon */
    UINT32 txdisable : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All write commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 rxdisable : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All read commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 txlong : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Sets the duration of the first transmitted DQ
                               bit of the burst. 0=1UI, 1=2UI.
                            */
    UINT32 rsvd_13 : 5;

                            /* Bits[17:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 driversegmentenable : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Controls which segements of the driver are
                               enabled: {0: All, 1: Only ODT}.
                            */
    UINT32 rsvd_19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 readrfrd : 1;

                            /* Bits[20:20], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a read command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfwr : 1;

                            /* Bits[21:21], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a write command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfrank : 3;

                            /* Bits[24:22], Access Type=RWV, default=0x00000000*/

                            /*
                               Specifies the rank that ReadRFRd or ReadRFWr
                               will manually download the CR values from
                            */
    UINT32 forceodton : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* ODT is forced-on. */
    UINT32 odtsampoff : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* ODT and Senseamp are forced-off. */
    UINT32 disableodtstatic : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 ddrcrforceodton : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               force ODT to the transmitter on, regardless of
                               state of DriveEnable
                            */
    UINT32 spare : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* spare */
    UINT32 xovercal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enables Xover Calibration Training Mode */
    UINT32 longpreambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Enables long preamble for DDR4 devices */

  } Bits;
  UINT32 Data;

} DATACONTROL0N1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL1N1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b17ec)                                                        */
/* Register default value on BWV: 0x0000003C                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL1N1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2407EC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 10;

                            /* Bits[9:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 rxbiasctl : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the Current and BW of the Receiver: {0:
                               0.34Idll, 1: 0.66Idll, 2: 0.88Idll, 3: Idll, 4:
                               1.33Idll, 5: 1.66Idll[br] , 6: 2.00Idll, 7:
                               2.33Idll}
                            */
    UINT32 odtdelay : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /*
                               Controls ODT turn-on delay. To turn on N tQCK
                               before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 odtduration : 3;

                            /* Bits[19:17], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the ODT ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 senseampdelay : 4;

                            /* Bits[23:20], Access Type=RW, default=0x00000000*/

                            /*
                               Controls Senseamp turn-on delay. To turn on N
                               tQCK before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 senseampduration : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the SenseAmp ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 rsvd_27 : 5;

                            /* Bits[31:27], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL1N1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL2N1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b17f0)                                                        */
/* Register default value on BWV: 0x07800000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL2N1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2407F0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxvocselqnnnh : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode
                            */
    UINT32 forcebiason : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the internal Vref and Rx bias circuit,
                               regardless of any other power downs
                            */
    UINT32 forcerxon : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the RxAmp only (as opposed to
                               OdtSampOn, which turns on both ODT and the
                               amplifier).[br] Use for overclocking support
                               where we may not be able to hit the fast exit
                               latency
                            */
    UINT32 ddr4extend : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Enable finer vref resolution in ddr4 */
    UINT32 cttermination : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* DDRCOMP_CR_DDRCRCOMPOVR CTTermination */
    UINT32 dfelben : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback enable */
    UINT32 dfelbtxdmuxsel : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback TX FIFO data mux sel */
    UINT32 spare1 : 2;

                            /* Bits[12:11], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 txddjcen : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /* TxddjcEn */
    UINT32 dfeenable : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* DfeEnable */
    UINT32 dfedlysel : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /* DfeDlySel */
    UINT32 dfecode : 4;

                            /* Bits[22:19], Access Type=RW, default=0x00000000*/

                            /*
                               DfeCode: binary code 0000 to 1000 for DFE
                               offset, mid-code code for zero offset is 0100
                            */
    UINT32 rxdqssaoffset : 5;

                            /* Bits[27:23], Access Type=RW, default=0x0000000F*/

                            /* strobe Rx Amp offset control */
    UINT32 rsvd_28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL2N1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL3N1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b17f4)                                                        */
/* Register default value on BWV: 0x00000FCF                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL3N1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2407F4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 drvstaticlegcfg : 2;

                            /* Bits[1:0], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in DRV
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 odtstaticlegcfg : 2;

                            /* Bits[3:2], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in ODT
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 lvlshft_holden : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rsvd_5 : 1;

                            /* Bits[5:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 odtsegmentenable : 3;

                            /* Bits[8:6], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset. [br] After that, a shift register will
                               determine the enabled segments
                            */
    UINT32 datasegmentenable : 3;

                            /* Bits[11:9], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset.
                            */
    UINT32 longodtr2w : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               When set, it will extends ODT by 1 qclk on read
                               to write turnarounds. hsd 230773
                            */
    UINT32 spare1 : 8;

                            /* Bits[20:13], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 ddrcrctlecapen : 2;

                            /* Bits[22:21], Access Type=RW, default=0x00000000*/

                            /* ctle capacitor setting */
    UINT32 ddrcrctleresen : 2;

                            /* Bits[24:23], Access Type=RW, default=0x00000000*/

                            /* ctle resistor setting */
    UINT32 pcasbiasclosedloopen : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiassel : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasfoldedlegtrim : 2;

                            /* Bits[28:27], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasgcncomp : 2;

                            /* Bits[30:29], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 postambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DATACONTROL3N1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* VSSHIORVREFCONTROLN1_9_FNV_DDRIO_DAT7_CH_1_REG supported on:                 */
/*      BWV (0x402b17f8)                                                        */
/* Register default value on BWV: 0x004D8238                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Broadcast read not supported.
*/


#define VSSHIORVREFCONTROLN1_9_FNV_DDRIO_DAT7_CH_1_REG 0x1B2407F8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 24;

                            /* Bits[23:0], Access Type=RW, default=0x004D8238*/

                            /*
                               Channel 0 fubs : VssHi adjust setting. Channel1
                               fubs: DIMM VREF adjust settings.[br] [br] VssHi
                               Field Description: [br] [br] Field Bits
                               Description[br] ------- ---- -------------------
                               ------------------------------------------------
                               ------------------------------------------------
                               --------------------------------------------[br]
                               SelCode 23 Selects the code to output: {0: Code,
                               1: TCode}[br] GainBoost 22 Enable gain boost is
                               panic mode by updating code/tcode [br]
                               PanicVoltage 21:18 Unsigned integer controlling
                               the voltage error on VssHi that will trigger the
                               panic driver. Step size of VccDDQ/192 (0 to
                               117mV)[br] CloseLoop 17 Enables the VssHi close
                               loop tracking [br] PanicEn 16 Enables the VssHi
                               Panic Driver[br] BWError 15:14 Limits the loop
                               gain (ie: difference between code and tcode) to
                               +/- 2^(SlowBWError)[br] OpenLoop 13 Operates
                               VssHi in open loop mode with the target Vref
                               code directly driving the output DAC with no
                               feedback involved[br] SampleDivider 12:10
                               Controls the loop bandwidth by dividing down the
                               input clock: {0: Qclk, 1: Qclk/2, 2: Qclk/4, 3:
                               Qclk/8, 4: Qclk/16, 5: Qclk/32, 6: Qclk/64, 7:
                               Qclk/128}[br] LoBWDivider 9:8 For the slow
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] HiBWDivider 7:6 For the fast
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] Target 5:0 Unsigned integer
                               controlling the target VssHi voltage. Step size
                               of VccDDQ/192 and starting value of
                               VccDDQ*20/192
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROLN1_9_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* RXGROUP0N0RANK0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1800)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast reads are not supported.
*/


#define RXGROUP0N0RANK0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240800

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_N to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS (0: 1/16 UI offset, [br] 1:
                               3/16 UI Offset, 2: 5/16 UI Offsets, 3: 7/16 UI
                               Offsets, 4: 9/16 UI Offsets, 5,6,7: 11/16 UI
                               Offsets.)
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N0RANK1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1804)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank1. Broadcast reads are not supported.
*/


#define RXGROUP0N0RANK1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240804

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_N to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N0RANK2_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1808)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank2. Broadcast read not supported.
*/


#define RXGROUP0N0RANK2_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240808

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK2_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N0RANK3_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b180c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank3. Broadcast read not supported.
*/


#define RXGROUP0N0RANK3_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B24080C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* readx4modeenb */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_P to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /*
                               per nibble READ timing control, delay DQS_N to
                               match the earlest arrival DQ, 0~1.5UI with step
                               size ClkPi/64
                            */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               CTLE current steering tuning (0=no eq, 7=max
                               eq). It is decoded to[br] CTLE resistor tuning:
                               00 - 3R (10.8Kohms), 01/10 - R (3.6Kohms), 11 -
                               R/3 (1.2Kohms)[br] CTLE capacitor tuning: 00 -
                               0C (not used), 01 - 1C (200ff), 10 - 2C (400ff),
                               11 - 3C (600ff)
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N0RANK3_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1840)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240840

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* select one of the four DQ Clk */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1844)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240844

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* Select one of the four DQ clks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK2_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1848)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK2_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240848

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* Select one of the four DQ clks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK2_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N0RANK3_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b184c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N0RANK3_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B24084C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* Select one of the four DQ clk */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N0RANK3_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1880)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240880

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               selects which skewed DQSP (to sample even bits)
                               is used in the RX FIFO. For proper operation,
                               always pick latest DQSP
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               selects which skewed DQSN (to sample odd bits)
                               is used in the RX FIFO. For proper operation,
                               always pick latest DQSN
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1884)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240884

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               [0]=0 selects the raw output from the nibble DQS
                               amplifier; [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK2_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1888)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK2_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240888

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               [0]=0 selects the raw output from the nibble DQS
                               amplifier; [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK2_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN0RANK3_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b188c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN0RANK3_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B24088C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               [0]=0 selects the raw output from the nibble DQS
                               amplifier; [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN0RANK3_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXVREFCTRLN0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                        */
/*      BWV (0x402b18a4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* RxVrefCtrl. Broadcast read not supported.
*/


#define RXVREFCTRLN0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2408A4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vrefperbit0 : 7;

                            /* Bits[6:0], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben0 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit1 : 7;

                            /* Bits[14:8], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben1 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               enables fine grain Vref control, shift down the
                               Vref voltage by ~0.5 stepsize
                            */
    UINT32 vrefperbit2 : 7;

                            /* Bits[22:16], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben2 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               enables fine grain Vref control, shift down the
                               Vref voltage by ~0.5 stepsize
                            */
    UINT32 vrefperbit3 : 7;

                            /* Bits[30:24], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben3 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* shift down the Vref voltage by ~0.5 stepsize */

  } Bits;
  UINT32 Data;

} RXVREFCTRLN0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATATRAINFEEDBACKN0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                 */
/*      BWV (0x402b18a8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Training Feedback Results. Broadcast read not supported.
*/


#define DATATRAINFEEDBACKN0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2408A8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 datatrainfeedback : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Data Training Feedback Storage[br] [br]
                               DataTrainFeedback Description:[br] Training Step
                               Bits Nibble Description[br] -------------- ----
                               ------- --------------------------[br] Cross
                               Over Cal 0 0 Tx Dqs Phase Detection[br] Cross
                               Over Cal 1 0 Tx Dq Phase Detection[br] Cross
                               Over Cal 2 0 Rec En Phase Detection[br] RcvEn
                               8:0 0 Byte detection[br] [br] Wr Leveling 8:0 0
                               Byte detection[br] Senseamp offset 3:0 0 Dq
                               Senseamp offset Detection
                            */
    UINT32 rsvd_9 : 23;

                            /* Bits[31:9], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATATRAINFEEDBACKN0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRFSMCALN0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b18c8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Fsm for  Voc and Xover caliberation, Voc caliberation is a procedure that cancel out intrinsic offset in analogue receivers and Xover training ,it aligns all the local dll to the global qclk
*/


#define DDRCRFSMCALN0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2408C8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0fsm : 5;

                            /* Bits[4:0], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of first receiver is done(read only)
                            */
    UINT32 saoffset1fsm : 5;

                            /* Bits[9:5], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of second receiver is done(read only)
                            */
    UINT32 saoffset2fsm : 5;

                            /* Bits[14:10], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of third receiver is done(read only)
                            */
    UINT32 saoffset3fsm : 5;

                            /* Bits[19:15], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of fourth receiver is done(read only)
                            */
    UINT32 fsmcalcomplete : 1;

                            /* Bits[20:20], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation is done */
    UINT32 refpiclkdelayfsm : 6;

                            /* Bits[26:21], Access Type=ROV, default=0x00000000*/

                            /*
                               Load FSM with a code at which , the transition
                               is detected.
                            */
    UINT32 fsmcaldone : 1;

                            /* Bits[27:27], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation of voc or x-over is done */
    UINT32 fsmtimersel : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* Timer is set for either 8 cycles or 16 cycles */
    UINT32 fsmpatternsel : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               It selects whther the pattern of three bit or
                               two bit is selected when the transition happen
                               from 1-->0 for pdout and receiver , to avoid
                               glitch
                            */
    UINT32 fsmvoccal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               This bit tells , wether the xover or voc
                               caliberation will be done, if its zero x-over
                               caliberation is done and vice-versa
                            */
    UINT32 fsmcalen : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* FsmCalEn starts the voc-Xover Fsm */

  } Bits;
  UINT32 Data;

} DDRCRFSMCALN0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL4N0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b18cc)                                                        */
/* Register default value on BWV: 0x801F0000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL4N0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2408CC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vsshiorvrefctl1 : 8;

                            /* Bits[8:1], Access Type=RW, default=0x00000000*/

                            /*
                               VssHi control bits[br] Field Description: [br]
                               [br] Field Bits Description[br] ------- ----
                               ---------------------------------[br]
                               disoverflow 24 Disable overflow logic from
                               BDW[br] fast panic enable 25 Bypass 2 flops in
                               panic path for faster panic response[br]
                               vsshivccd2by3cfgen 26 Forces the driver DAC to
                               get supply from 2/3 vccd[br] vsshivccd2by3cfg
                               27:29 Current trim setting for 2/3 vccd mode,
                               001 fast, 011 typical, 111 slow silicon [br]
                               ddrvssh2ndcompen 30 Enable second comparator
                               (ZBB mode)[br] comp high bwen 31 Improve
                               comparator performance to support low digital
                               voltage range
                            */
    UINT32 dqtxeqsel : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* DQ TxEq setting selection to achieve constant EQ */
    UINT32 rsvd_10 : 2;

                            /* Bits[11:10], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vrefpwrsave : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               If set to 0 (default), Vref generators selected
                               through RxVrefSel[3:0] are always on.[br] If set
                               to 1, Vref generators are switched off while in
                               Self Refresh.
                            */
    UINT32 vreftonblbus : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000008*/

                            /* Per-bit Enable connection to share Vref Bus */
    UINT32 rxvrefsel : 4;

                            /* Bits[20:17], Access Type=RW, default=0x0000000F*/

                            /* Per Bit Verf generator Enable */
    UINT32 refpiclkdelay : 6;

                            /* Bits[26:21], Access Type=RW, default=0x00000000*/

                            /* RefPiClkDelay */
    UINT32 fnvcrsdlbypassen : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* FNV Slave Delay Line Bypass Enable */
    UINT32 fnvcrdllbypassen : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* FNV DLL Bypass Enable */
    UINT32 fnvcrvisaen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               FNV Visa Fub Enable - data fub used for VISA if
                               asserted
                            */
    UINT32 writecrcenable : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enable write crc mode */
    UINT32 rsvd_31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL4N0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA0N0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b18d4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA0N0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2408D4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompdrvup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /*
                               Data Rcomp DrvUp Comp Value can be overriden via
                               message channel if periodical retrain is disable
                            */
    UINT32 spare0 : 3;

                            /* Bits[8:6], Access Type=RWV, default=0x00000000*/

                            /* Spare */
    UINT32 rcompdrvdown : 6;

                            /* Bits[14:9], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp DrvDown Comp Value */
    UINT32 vtcomp : 5;

                            /* Bits[19:15], Access Type=RWV, default=0x00000000*/

                            /* VT Comp Values */
    UINT32 tcocomp : 7;

                            /* Bits[26:20], Access Type=RWV, default=0x00000000*/

                            /* Data TCO Comp Value. */
    UINT32 slewratecomp : 5;

                            /* Bits[31:27], Access Type=RWV, default=0x00000000*/

                            /* Data Slew Rate Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA0N0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA1N0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b18d8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA1N0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2408D8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompodtup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp OdtUp Comp Value */
    UINT32 rcompodtdown : 6;

                            /* Bits[11:6], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp Odt-Down Comp Value */
    UINT32 panicdrvdn : 10;

                            /* Bits[21:12], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvDn RComp Value. */
    UINT32 panicdrvup : 10;

                            /* Bits[31:22], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvUp RComp Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA1N0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATAOFFSETTRAINN0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b18dc)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATAOFFSETTRAINN0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2408DC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvenoffset : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained RxRcvEn Value. */
    UINT32 rxdqsoffset : 7;

                            /* Bits[12:6], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Rx DQS Value. */
    UINT32 txdqoffset : 6;

                            /* Bits[18:13], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Tx DQ Value. */
    UINT32 txdqsoffset : 6;

                            /* Bits[24:19], Access Type=RW, default=0x00000000*/

                            /* Ooffset added to Trained Tx DQS Value. */
    UINT32 vrefoffset : 7;

                            /* Bits[31:25], Access Type=RW, default=0x00000000*/

                            /*
                               2s Compliment offset added to Trained Vref
                               Value. Positive number increases Vref, and each
                               step is Vdd/384.
                            */

  } Bits;
  UINT32 Data;

} DATAOFFSETTRAINN0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* DATACONTROL0N0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b18e8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL0N0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2408E8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxtrainingmode : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enables Read DqDqs Training Mode */
    UINT32 wltrainingmode : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enables Write Leveling Training Mode */
    UINT32 rltrainingmode : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* Enables Read Leveling Training Mode. */
    UINT32 senseamptrainingmode : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode.
                            */
    UINT32 txon : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               When set, forces DQ/DQS drive enable to active.
                               Used in power measurements and IO loopback mode
                            */
    UINT32 rfon : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces register file read,
                               overriding the rank power down logic.
                            */
    UINT32 rxpion : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /* Power-down Disable: Forces RxDqs PI clocks on. */
    UINT32 txpion : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces TxDq and TxDqs PI
                               clocks on.
                            */
    UINT32 internalclockson : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Forces on master DLL and all PI enables ON,
                               despite both channel in SelfRefresh, etc. low
                               power states.
                            */
    UINT32 saoffsettraintxon : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* SaOffsetTrainTxon */
    UINT32 txdisable : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All write commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 rxdisable : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All read commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 txlong : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Sets the duration of the first transmitted DQ
                               bit of the burst. 0=1UI, 1=2UI.
                            */
    UINT32 rsvd_13 : 5;

                            /* Bits[17:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 driversegmentenable : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Controls which segements of the driver are
                               enabled: {0: All, 1: Only ODT}.
                            */
    UINT32 rsvd_19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 readrfrd : 1;

                            /* Bits[20:20], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a read command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfwr : 1;

                            /* Bits[21:21], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a write command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfrank : 3;

                            /* Bits[24:22], Access Type=RWV, default=0x00000000*/

                            /*
                               Specifies the rank that ReadRFRd or ReadRFWr
                               will manually download the CR values from
                            */
    UINT32 forceodton : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* ODT is forced-on. */
    UINT32 odtsampoff : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* ODT and Senseamp are forced-off. */
    UINT32 disableodtstatic : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 ddrcrforceodton : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               force ODT to the transmitter on, regardless of
                               state of DriveEnable
                            */
    UINT32 spare : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* spare */
    UINT32 xovercal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enables Xover Calibration Training Mode */
    UINT32 longpreambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Enables long preamble for DDR4 devices */

  } Bits;
  UINT32 Data;

} DATACONTROL0N0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL1N0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b18ec)                                                        */
/* Register default value on BWV: 0x0000003C                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL1N0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2408EC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 10;

                            /* Bits[9:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 rxbiasctl : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the Current and BW of the Receiver: {0:
                               0.34Idll, 1: 0.66Idll, 2: 0.88Idll, 3: Idll, 4:
                               1.33Idll, 5: 1.66Idll[br] , 6: 2.00Idll, 7:
                               2.33Idll}
                            */
    UINT32 odtdelay : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /*
                               Controls ODT turn-on delay. To turn on N tQCK
                               before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 odtduration : 3;

                            /* Bits[19:17], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the ODT ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 senseampdelay : 4;

                            /* Bits[23:20], Access Type=RW, default=0x00000000*/

                            /*
                               Controls Senseamp turn-on delay. To turn on N
                               tQCK before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 senseampduration : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the SenseAmp ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 rsvd_27 : 5;

                            /* Bits[31:27], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL1N0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL2N0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b18f0)                                                        */
/* Register default value on BWV: 0x07800000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL2N0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2408F0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxvocselqnnnh : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode
                            */
    UINT32 forcebiason : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the internal Vref and Rx bias circuit,
                               regardless of any other power downs
                            */
    UINT32 forcerxon : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the RxAmp only (as opposed to
                               OdtSampOn, which turns on both ODT and the
                               amplifier).[br] Use for overclocking support
                               where we may not be able to hit the fast exit
                               latency
                            */
    UINT32 ddr4extend : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Enable finer vref resolution in ddr4 */
    UINT32 cttermination : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* DDRCOMP_CR_DDRCRCOMPOVR CTTermination */
    UINT32 dfelben : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback enable */
    UINT32 dfelbtxdmuxsel : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback TX FIFO data mux sel */
    UINT32 spare1 : 2;

                            /* Bits[12:11], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 txddjcen : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /* TxddjcEn */
    UINT32 dfeenable : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* DfeEnable */
    UINT32 dfedlysel : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /* DfeDlySel */
    UINT32 dfecode : 4;

                            /* Bits[22:19], Access Type=RW, default=0x00000000*/

                            /*
                               DfeCode: binary code 0000 to 1000 for DFE
                               offset, mid-code code for zero offset is 0100
                            */
    UINT32 rxdqssaoffset : 5;

                            /* Bits[27:23], Access Type=RW, default=0x0000000F*/

                            /* strobe Rx Amp offset control */
    UINT32 rsvd_28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL2N0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL3N0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b18f4)                                                        */
/* Register default value on BWV: 0x00000FCF                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL3N0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2408F4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 drvstaticlegcfg : 2;

                            /* Bits[1:0], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in DRV
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 odtstaticlegcfg : 2;

                            /* Bits[3:2], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in ODT
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 lvlshft_holden : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rsvd_5 : 1;

                            /* Bits[5:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 odtsegmentenable : 3;

                            /* Bits[8:6], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset. [br] After that, a shift register will
                               determine the enabled segments
                            */
    UINT32 datasegmentenable : 3;

                            /* Bits[11:9], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset.
                            */
    UINT32 longodtr2w : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               When set, it will extends ODT by 1 qclk on read
                               to write turnarounds. hsd 230773
                            */
    UINT32 spare1 : 8;

                            /* Bits[20:13], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 ddrcrctlecapen : 2;

                            /* Bits[22:21], Access Type=RW, default=0x00000000*/

                            /* ctle capacitor setting */
    UINT32 ddrcrctleresen : 2;

                            /* Bits[24:23], Access Type=RW, default=0x00000000*/

                            /* ctle resistor setting */
    UINT32 pcasbiasclosedloopen : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiassel : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasfoldedlegtrim : 2;

                            /* Bits[28:27], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasgcncomp : 2;

                            /* Bits[30:29], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 postambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DATACONTROL3N0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* VSSHIORVREFCONTROLN0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                */
/*      BWV (0x402b18f8)                                                        */
/* Register default value on BWV: 0x004D8238                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Broadcast read not supported.
*/


#define VSSHIORVREFCONTROLN0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2408F8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 24;

                            /* Bits[23:0], Access Type=RW, default=0x004D8238*/

                            /*
                               Channel 0 fubs : VssHi adjust setting. Channel1
                               fubs: DIMM VREF adjust settings.[br] [br] VssHi
                               Field Description: [br] [br] Field Bits
                               Description[br] ------- ---- -------------------
                               ------------------------------------------------
                               ------------------------------------------------
                               --------------------------------------------[br]
                               SelCode 23 Selects the code to output: {0: Code,
                               1: TCode}[br] GainBoost 22 Enable gain boost is
                               panic mode by updating code/tcode [br]
                               PanicVoltage 21:18 Unsigned integer controlling
                               the voltage error on VssHi that will trigger the
                               panic driver. Step size of VccDDQ/192 (0 to
                               117mV)[br] CloseLoop 17 Enables the VssHi close
                               loop tracking [br] PanicEn 16 Enables the VssHi
                               Panic Driver[br] BWError 15:14 Limits the loop
                               gain (ie: difference between code and tcode) to
                               +/- 2^(SlowBWError)[br] OpenLoop 13 Operates
                               VssHi in open loop mode with the target Vref
                               code directly driving the output DAC with no
                               feedback involved[br] SampleDivider 12:10
                               Controls the loop bandwidth by dividing down the
                               input clock: {0: Qclk, 1: Qclk/2, 2: Qclk/4, 3:
                               Qclk/8, 4: Qclk/16, 5: Qclk/32, 6: Qclk/64, 7:
                               Qclk/128}[br] LoBWDivider 9:8 For the slow
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] HiBWDivider 7:6 For the fast
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] Target 5:0 Unsigned integer
                               controlling the target VssHi voltage. Step size
                               of VccDDQ/192 and starting value of
                               VccDDQ*20/192
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROLN0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* RXGROUP0N1RANK0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1900)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast read not supported.
*/


#define RXGROUP0N1RANK0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240900

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N1RANK1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1904)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast read not supported.
*/


#define RXGROUP0N1RANK1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240904

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N1RANK2_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1908)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0.Broadcast read not supported.
*/


#define RXGROUP0N1RANK2_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240908

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK2_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXGROUP0N1RANK3_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b190c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data RX training values for Rank0. Broadcast read not supported.
*/


#define RXGROUP0N1RANK3_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B24090C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvendelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               RcvEn timing control. Unsigned number from 0 to
                               8 tQCK with step size of tQCK/64
                            */
    UINT32 readx8modeen : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ReadX8ModeEn */
    UINT32 rxdqspdelay : 7;

                            /* Bits[16:10], Access Type=RW, default=0x00000000*/

                            /* common DQS_P delay control, per nibble */
    UINT32 rxdqsndelay : 7;

                            /* Bits[23:17], Access Type=RW, default=0x00000000*/

                            /* common DQS_N delay control, per nibble */
    UINT32 rxdqdelay : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Rx DQ delay, per nibble, used in case if DQ is
                               too early than DQS
                            */
    UINT32 rxeq : 3;

                            /* Bits[29:27], Access Type=RW, default=0x00000000*/

                            /*
                               Rx Equalization code: {4:3} controls the cap
                               tuning 0: (not used), 1: 200ff, 2: 400ff, 3:
                               600ff, [br] controls the resistor tuning (0: 3R,
                               1: 1R, 2: 1R, 3: R/3).
                            */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXGROUP0N1RANK3_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1940)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240940

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* one of the four clocks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1944)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240944

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* one of the four clocks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK2_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1948)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK2_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240948

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* one of the 4 clocks */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK2_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* TXGROUP0N1RANK3_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b194c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Timing and Voltage control for writing one data byte on Rank. Broadcast read not supported.
*/


#define TXGROUP0N1RANK3_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B24094C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 txdqdelay : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQ timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqsdelay : 9;

                            /* Bits[17:9], Access Type=RW, default=0x00000000*/

                            /*
                               Write DQS timing control. Unsigned number from 0
                               to 8 tQCK with step size of tQCK/64
                            */
    UINT32 txdqpiclksel : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from PiRef to PiN for bit 1 */
    UINT32 rsvd_20 : 2;

                            /* Bits[21:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 txdqsxsel : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* xelect for crossover from Qclk to CkPi4Dqs */
    UINT32 txeq : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /*
                               Write Equalization codes. 5 bit control, but
                               only 24 of them are meaningful.[br] The decoding
                               is 1-1 matched, means 0 is 0 legs enabled for
                               deemphasized, 1 is 1 leg enabled[br] for
                               deemphasized, and so on.[br] BDX-change.
                               Increased the width by 1bit for TXEQ tracking
                            */
    UINT32 x8writeen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} TXGROUP0N1RANK3_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK0_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1980)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK0_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240980

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK0_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1984)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240984

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK2_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1988)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK2_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B240988

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK2_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXOFFSETN1RANK3_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b198c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Read Per Lane Amplifier Voltage Offset. Broadcast read not supported.
*/


#define RXOFFSETN1RANK3_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B24098C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0 : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[0] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset1 : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[1] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset2 : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[2] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 saoffset3 : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /*
                               Amplifier voltage offset for bit[3] of the DQ
                               byte. {0: Most negative offset,... 8: 0 offset,
                               ... 63: Most postive offset}
                            */
    UINT32 rxdqspsel : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /*
                               x4/x8 DQS mux select[br] [0]=1 selects the raw
                               output from the nibble0 DQS amplifier in x8
                               mode; [br] [0]=0 select nibble1 amplifier output
                               in x4 mode; [br] [1] is not used.
                            */
    UINT32 rxdqsnsel : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /*
                               select the phase2 dqs clock skewed with max
                               delay to drive rxFIFO write
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} RXOFFSETN1RANK3_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* RXVREFCTRLN1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                        */
/*      BWV (0x402b19a4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* RxVrefCtrl. Broadcast read not supported.
*/


#define RXVREFCTRLN1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2409A4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vrefperbit0 : 7;

                            /* Bits[6:0], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben0 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit1 : 7;

                            /* Bits[14:8], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben1 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit2 : 7;

                            /* Bits[22:16], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben2 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /* Rsvd */
    UINT32 vrefperbit3 : 7;

                            /* Bits[30:24], Access Type=RW, default=0x00000000*/

                            /* Per bit Rx Vref Control */
    UINT32 halflsben3 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* shift down the Vref voltage by ~0.5 stepsize */

  } Bits;
  UINT32 Data;

} RXVREFCTRLN1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATATRAINFEEDBACKN1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                 */
/*      BWV (0x402b19a8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Training Feedback Results. Broadcast read not supported.
*/


#define DATATRAINFEEDBACKN1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2409A8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 datatrainfeedback : 9;

                            /* Bits[8:0], Access Type=RW, default=0x00000000*/

                            /*
                               Data Training Feedback Storage [br] Training
                               Step Bits Nibble Description[br] --------------
                               ---- ------- ---------------[br] Cross Over Cal
                               0 1 Tx Dqs Phase Detection[br] Cross Over Cal 1
                               1 Tx Dq Phase Detection[br] Cross Over Cal 2 1
                               Rec En Phase Detection[br] RcvEn 8:0 1 Byte
                               detection[br] Wr Leveling 8:0 1 Byte
                               detection[br] Senseamp offset 3:0 1 Dq Senseamp
                               offset Detection
                            */
    UINT32 rsvd_9 : 23;

                            /* Bits[31:9], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATATRAINFEEDBACKN1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRFSMCALN1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b19c8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Fsm for  Voc and Xover caliberation, Voc caliberation is a procedure that cancel out intrinsic offset in analogue receivers and Xover training ,it aligns all the local dll to the global qclk
*/


#define DDRCRFSMCALN1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2409C8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 saoffset0fsm : 5;

                            /* Bits[4:0], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of first receiver is done(read only)
                            */
    UINT32 saoffset1fsm : 5;

                            /* Bits[9:5], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of second receiver is done(read only)
                            */
    UINT32 saoffset2fsm : 5;

                            /* Bits[14:10], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of third receiver is done(read only)
                            */
    UINT32 saoffset3fsm : 5;

                            /* Bits[19:15], Access Type=ROV, default=0x00000000*/

                            /*
                               Loads the value from fsm to Cr when caliberation
                               of fourth receiver is done(read only)
                            */
    UINT32 fsmcalcomplete : 1;

                            /* Bits[20:20], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation is done */
    UINT32 refpiclkdelayfsm : 6;

                            /* Bits[26:21], Access Type=ROV, default=0x00000000*/

                            /*
                               Load FSM with a code at which , the transition
                               is detected.
                            */
    UINT32 fsmcaldone : 1;

                            /* Bits[27:27], Access Type=ROV, default=0x00000000*/

                            /* when the caliberation of voc or x-over is done */
    UINT32 fsmtimersel : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* Timer is set for either 8 cycles or 16 cycles */
    UINT32 fsmpatternsel : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               It selects whther the pattern of three bit or
                               two bit is selected when the transition happen
                               from 1-->0 for pdout and receiver , to avoid
                               glitch
                            */
    UINT32 fsmvoccal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               This bit tells , wether the xover or voc
                               caliberation will be done, if its zero x-over
                               caliberation is done and vice-versa
                            */
    UINT32 fsmcalen : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* FsmCalEn starts the voc-Xover Fsm */

  } Bits;
  UINT32 Data;

} DDRCRFSMCALN1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL4N1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b19cc)                                                        */
/* Register default value on BWV: 0x801F0000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL4N1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2409CC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vsshiorvrefctl1 : 8;

                            /* Bits[8:1], Access Type=RW, default=0x00000000*/

                            /*
                               VssHi control bits[br] Field Description: [br]
                               [br] Field Bits Description[br] ------- ----
                               ---------------------------------[br]
                               disoverflow 24 Disable overflow logic from
                               BDW[br] fast panic enable 25 Bypass 2 flops in
                               panic path for faster panic response[br]
                               vsshivccd2by3cfgen 26 Forces the driver DAC to
                               get supply from 2/3 vccd[br] vsshivccd2by3cfg
                               27:29 Current trim setting for 2/3 vccd mode,
                               001 fast, 011 typical, 111 slow silicon [br]
                               ddrvssh2ndcompen 30 Enable second comparator
                               (ZBB mode)[br] comp high bwen 31 Improve
                               comparator performance to support low digital
                               voltage range
                            */
    UINT32 dqtxeqsel : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* DQ TxEq setting selection to achieve constant EQ */
    UINT32 rsvd_10 : 2;

                            /* Bits[11:10], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 vrefpwrsave : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               If set to 0 (default), Vref generators selected
                               through RxVrefSel[3:0] are always on.[br] If set
                               to 1, Vref generators are switched off while in
                               Self Refresh.
                            */
    UINT32 vreftonblbus : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000008*/

                            /* Per-bit Enable connection to share Vref Bus */
    UINT32 rxvrefsel : 4;

                            /* Bits[20:17], Access Type=RW, default=0x0000000F*/

                            /* Per Bit Verf generator Enable */
    UINT32 refpiclkdelay : 6;

                            /* Bits[26:21], Access Type=RW, default=0x00000000*/

                            /* RefPiClkDelay */
    UINT32 fnvcrsdlbypassen : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* FNV Slave Delay Line Bypass Enable */
    UINT32 fnvcrdllbypassen : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /* FNV DLL Bypass Enable */
    UINT32 fnvcrvisaen : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               FNV Visa Fub Enable - data fub used for VISA if
                               asserted
                            */
    UINT32 writecrcenable : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enable write crc mode */
    UINT32 rsvd_31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL4N1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA0N1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b19d4)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA0N1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2409D4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompdrvup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /*
                               Data Rcomp DrvUp Comp Value can be overriden via
                               message channel if periodical retrain is disable
                            */
    UINT32 spare0 : 3;

                            /* Bits[8:6], Access Type=RWV, default=0x00000000*/

                            /* Spare */
    UINT32 rcompdrvdown : 6;

                            /* Bits[14:9], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp DrvDown Comp Value */
    UINT32 vtcomp : 5;

                            /* Bits[19:15], Access Type=RWV, default=0x00000000*/

                            /* VT Comp Values */
    UINT32 tcocomp : 7;

                            /* Bits[26:20], Access Type=RWV, default=0x00000000*/

                            /* Data TCO Comp Value. */
    UINT32 slewratecomp : 5;

                            /* Bits[31:27], Access Type=RWV, default=0x00000000*/

                            /* Data Slew Rate Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA0N1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* COMPDATA1N1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b19d8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data Comp Values. Broadcast read not supported.
*/


#define COMPDATA1N1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2409D8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcompodtup : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp OdtUp Comp Value */
    UINT32 rcompodtdown : 6;

                            /* Bits[11:6], Access Type=RWV, default=0x00000000*/

                            /* Data Rcomp Odt-Down Comp Value */
    UINT32 panicdrvdn : 10;

                            /* Bits[21:12], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvDn RComp Value. */
    UINT32 panicdrvup : 10;

                            /* Bits[31:22], Access Type=RWV, default=0x00000000*/

                            /* Panic DrvUp RComp Comp Value. */

  } Bits;
  UINT32 Data;

} COMPDATA1N1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATAOFFSETTRAINN1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b19dc)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATAOFFSETTRAINN1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2409DC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rcvenoffset : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained RxRcvEn Value. */
    UINT32 rxdqsoffset : 7;

                            /* Bits[12:6], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Rx DQS Value. */
    UINT32 txdqoffset : 6;

                            /* Bits[18:13], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained Tx DQ Value. */
    UINT32 txdqsoffset : 6;

                            /* Bits[24:19], Access Type=RW, default=0x00000000*/

                            /* Ooffset added to Trained Tx DQS Value. */
    UINT32 vrefoffset : 7;

                            /* Bits[31:25], Access Type=RW, default=0x00000000*/

                            /*
                               2s Compliment offset added to Trained Vref
                               Value. Positive number increases Vref, and each
                               step is Vdd/384.
                            */

  } Bits;
  UINT32 Data;

} DATAOFFSETTRAINN1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* DATACONTROL0N1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b19e8)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL0N1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2409E8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxtrainingmode : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enables Read DqDqs Training Mode */
    UINT32 wltrainingmode : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enables Write Leveling Training Mode */
    UINT32 rltrainingmode : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* Enables Read Leveling Training Mode. */
    UINT32 senseamptrainingmode : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode.
                            */
    UINT32 txon : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               When set, forces DQ/DQS drive enable to active.
                               Used in power measurements and IO loopback mode
                            */
    UINT32 rfon : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces register file read,
                               overriding the rank power down logic.
                            */
    UINT32 rxpion : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /* Power-down Disable: Forces RxDqs PI clocks on. */
    UINT32 txpion : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down Disable: Forces TxDq and TxDqs PI
                               clocks on.
                            */
    UINT32 internalclockson : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Forces on master DLL and all PI enables ON,
                               despite both channel in SelfRefresh, etc. low
                               power states.
                            */
    UINT32 saoffsettraintxon : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* SaOffsetTrainTxon */
    UINT32 txdisable : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All write commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 rxdisable : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Power-down: All read commands are ignored for
                               this data-byte. Used in single-channel MCI mode.
                            */
    UINT32 txlong : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Sets the duration of the first transmitted DQ
                               bit of the burst. 0=1UI, 1=2UI.
                            */
    UINT32 rsvd_13 : 5;

                            /* Bits[17:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 driversegmentenable : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Controls which segements of the driver are
                               enabled: {0: All, 1: Only ODT}.
                            */
    UINT32 rsvd_19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 readrfrd : 1;

                            /* Bits[20:20], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a read command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfwr : 1;

                            /* Bits[21:21], Access Type=RWV, default=0x00000000*/

                            /*
                               Self clearing command bit. When set, it will
                               download the three 32 bit lines from the RegFile
                               associated with a write command to Rank =
                               ReadRFRank
                            */
    UINT32 readrfrank : 3;

                            /* Bits[24:22], Access Type=RWV, default=0x00000000*/

                            /*
                               Specifies the rank that ReadRFRd or ReadRFWr
                               will manually download the CR values from
                            */
    UINT32 forceodton : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* ODT is forced-on. */
    UINT32 odtsampoff : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* ODT and Senseamp are forced-off. */
    UINT32 disableodtstatic : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 ddrcrforceodton : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               force ODT to the transmitter on, regardless of
                               state of DriveEnable
                            */
    UINT32 spare : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* spare */
    UINT32 xovercal : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Enables Xover Calibration Training Mode */
    UINT32 longpreambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Enables long preamble for DDR4 devices */

  } Bits;
  UINT32 Data;

} DATACONTROL0N1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL1N1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b19ec)                                                        */
/* Register default value on BWV: 0x0000003C                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL1N1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2409EC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 10;

                            /* Bits[9:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 rxbiasctl : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the Current and BW of the Receiver: {0:
                               0.34Idll, 1: 0.66Idll, 2: 0.88Idll, 3: Idll, 4:
                               1.33Idll, 5: 1.66Idll[br] , 6: 2.00Idll, 7:
                               2.33Idll}
                            */
    UINT32 odtdelay : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /*
                               Controls ODT turn-on delay. To turn on N tQCK
                               before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 odtduration : 3;

                            /* Bits[19:17], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the ODT ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 senseampdelay : 4;

                            /* Bits[23:20], Access Type=RW, default=0x00000000*/

                            /*
                               Controls Senseamp turn-on delay. To turn on N
                               tQCK before RcvEn, program to RcvEn[8:6] N + 4.
                            */
    UINT32 senseampduration : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the SenseAmp ON duration from (Code,
                               Duration) = (0x0, 11 tQCK) to (0x7, 18 tQCK)
                            */
    UINT32 rsvd_27 : 5;

                            /* Bits[31:27], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL1N1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL2N1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b19f0)                                                        */
/* Register default value on BWV: 0x07800000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Data offsets to training values. Broadcast read not supported.
*/


#define DATACONTROL2N1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2409F0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rxvocselqnnnh : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Enables SenseAmp offset cancellation training
                               mode
                            */
    UINT32 forcebiason : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the internal Vref and Rx bias circuit,
                               regardless of any other power downs
                            */
    UINT32 forcerxon : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Force on the RxAmp only (as opposed to
                               OdtSampOn, which turns on both ODT and the
                               amplifier).[br] Use for overclocking support
                               where we may not be able to hit the fast exit
                               latency
                            */
    UINT32 ddr4extend : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Enable finer vref resolution in ddr4 */
    UINT32 cttermination : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* DDRCOMP_CR_DDRCRCOMPOVR CTTermination */
    UINT32 dfelben : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback enable */
    UINT32 dfelbtxdmuxsel : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Digital far end loopback TX FIFO data mux sel */
    UINT32 spare1 : 2;

                            /* Bits[12:11], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 txddjcen : 4;

                            /* Bits[16:13], Access Type=RW, default=0x00000000*/

                            /* TxddjcEn */
    UINT32 dfeenable : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* DfeEnable */
    UINT32 dfedlysel : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /* DfeDlySel */
    UINT32 dfecode : 4;

                            /* Bits[22:19], Access Type=RW, default=0x00000000*/

                            /*
                               DfeCode: binary code 0000 to 1000 for DFE
                               offset, mid-code code for zero offset is 0100
                            */
    UINT32 rxdqssaoffset : 5;

                            /* Bits[27:23], Access Type=RW, default=0x0000000F*/

                            /* strobe Rx Amp offset control */
    UINT32 rsvd_28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DATACONTROL2N1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DATACONTROL3N1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b19f4)                                                        */
/* Register default value on BWV: 0x00000FCF                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* static configurations of tx and rx. Broadcast read not supported.
*/


#define DATACONTROL3N1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2409F4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 drvstaticlegcfg : 2;

                            /* Bits[1:0], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in DRV
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 odtstaticlegcfg : 2;

                            /* Bits[3:2], Access Type=RW, default=0x00000003*/

                            /*
                               binary default setting for static legs in ODT
                               mode[br] 0 0 0 legs (EQ disabled)[br] 0 1 3 legs
                               (EQ max 3 legs)[br] 1 0 6 legs (EQ max 6
                               legs)[br] 1 1 12 legs (EQ max 12 legs)[br] In
                               most cases, we would set this to be 11, but for
                               some configurations that require a higher [br]
                               Ron value, we need to reduce the number of
                               static legs enabled so that fast corner can hit
                               [br] the higher Ron target value.
                            */
    UINT32 lvlshft_holden : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rsvd_5 : 1;

                            /* Bits[5:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 odtsegmentenable : 3;

                            /* Bits[8:6], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset. [br] After that, a shift register will
                               determine the enabled segments
                            */
    UINT32 datasegmentenable : 3;

                            /* Bits[11:9], Access Type=RW, default=0x00000007*/

                            /*
                               This will tell which segments are enabled out of
                               reset.
                            */
    UINT32 longodtr2w : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               When set, it will extends ODT by 1 qclk on read
                               to write turnarounds. hsd 230773
                            */
    UINT32 spare1 : 8;

                            /* Bits[20:13], Access Type=RW, default=0x00000000*/

                            /* Spare1 */
    UINT32 ddrcrctlecapen : 2;

                            /* Bits[22:21], Access Type=RW, default=0x00000000*/

                            /* ctle capacitor setting */
    UINT32 ddrcrctleresen : 2;

                            /* Bits[24:23], Access Type=RW, default=0x00000000*/

                            /* ctle resistor setting */
    UINT32 pcasbiasclosedloopen : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiassel : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasfoldedlegtrim : 2;

                            /* Bits[28:27], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 rxbiasgcncomp : 2;

                            /* Bits[30:29], Access Type=RW, default=0x00000000*/

                            /* RxBias CR */
    UINT32 postambleenable : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DATACONTROL3N1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* VSSHIORVREFCONTROLN1_10_FNV_DDRIO_DAT7_CH_1_REG supported on:                */
/*      BWV (0x402b19f8)                                                        */
/* Register default value on BWV: 0x004D8238                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Broadcast read not supported.
*/


#define VSSHIORVREFCONTROLN1_10_FNV_DDRIO_DAT7_CH_1_REG 0x1B2409F8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 24;

                            /* Bits[23:0], Access Type=RW, default=0x004D8238*/

                            /*
                               Channel 0 fubs : VssHi adjust setting. Channel1
                               fubs: DIMM VREF adjust settings.[br] [br] VssHi
                               Field Description: [br] [br] Field Bits
                               Description[br] ------- ---- -------------------
                               ------------------------------------------------
                               ------------------------------------------------
                               --------------------------------------------[br]
                               SelCode 23 Selects the code to output: {0: Code,
                               1: TCode}[br] GainBoost 22 Enable gain boost is
                               panic mode by updating code/tcode [br]
                               PanicVoltage 21:18 Unsigned integer controlling
                               the voltage error on VssHi that will trigger the
                               panic driver. Step size of VccDDQ/192 (0 to
                               117mV)[br] CloseLoop 17 Enables the VssHi close
                               loop tracking [br] PanicEn 16 Enables the VssHi
                               Panic Driver[br] BWError 15:14 Limits the loop
                               gain (ie: difference between code and tcode) to
                               +/- 2^(SlowBWError)[br] OpenLoop 13 Operates
                               VssHi in open loop mode with the target Vref
                               code directly driving the output DAC with no
                               feedback involved[br] SampleDivider 12:10
                               Controls the loop bandwidth by dividing down the
                               input clock: {0: Qclk, 1: Qclk/2, 2: Qclk/4, 3:
                               Qclk/8, 4: Qclk/16, 5: Qclk/32, 6: Qclk/64, 7:
                               Qclk/128}[br] LoBWDivider 9:8 For the slow
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] HiBWDivider 7:6 For the fast
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] Target 5:0 Unsigned integer
                               controlling the target VssHi voltage. Step size
                               of VccDDQ/192 and starting value of
                               VccDDQ*20/192
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROLN1_10_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* DDRCRCLKRANKSUSED_CH_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b1a00)                                                        */
/* Register default value on BWV: 0x0000E00F                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CLK Ranks Used. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCLKRANKSUSED_CH_FNV_DDRIO_DAT7_CH_1_REG 0x1B240A00

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ranken : 4;

                            /* Bits[3:0], Access Type=RW, default=0x0000000F*/

                            /*
                               Enables output buffers, PI clocks and output
                               datapaths for this rank
                            */
    UINT32 rsvd_4 : 4;

                            /* Bits[7:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ddrtclk1en : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* DDRT Mode Clk1 Enable */
    UINT32 ddrtclk3en : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* DDRT Mode Clk3 Enable */
    UINT32 ddrtclk0en : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* DDRT Mode Clk0 Enable */
    UINT32 ddrtclk2en : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /* DDRT Mode Clk2 Enable */
    UINT32 ddrttraining : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Asserted during the Read ID fine training sub-
                               step Causes the sampled value for the Read ID
                               signal to be placed in a results register within
                               the DDRIO fub
                            */
    UINT32 drvsegen : 3;

                            /* Bits[15:13], Access Type=RW, default=0x00000007*/

                            /* Segments to enable for driving (inverse for ODT) */
    UINT32 drvpupdis : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               This will be connected to all tx, and must
                               toggle 1->0 after a power state
                            */
    UINT32 clkdealignbitqnnnh : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* XNOR with DAlign */
    UINT32 fifoptctlqnnnh : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /* Fifo Point separation bit */
    UINT32 spare : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /* spare */
    UINT32 clkctlecapen : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000000*/

                            /* ClkCtleCapEn for Clk RX buffer */
    UINT32 clkctleresen : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000000*/

                            /* ClkCtleResEn for Clk RX buffer */
    UINT32 rsvd_24 : 1;

                            /* Bits[24:24], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 refpiclk : 6;

                            /* Bits[30:25], Access Type=RW, default=0x00000000*/

                            /* RefD0Clk */
    UINT32 ddrclkverticalbumpplacmenten : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Ddr CLK fub vertical bump placement enable for
                               RGT/FNV
                            */

  } Bits;
  UINT32 Data;

} DDRCRCLKRANKSUSED_CH_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCLKCOMP_CLK_FNV_DDRIO_DAT7_CH_1_REG supported on:                       */
/*      BWV (0x402b1a04)                                                        */
/* Register default value on BWV: 0x04000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CLK Comp Values. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCLKCOMP_CLK_FNV_DDRIO_DAT7_CH_1_REG 0x1B240A04

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 scomp : 5;

                            /* Bits[4:0], Access Type=RWV, default=0x00000000*/

                            /* Scomp Value */
    UINT32 tcocomp : 7;

                            /* Bits[11:5], Access Type=RWV, default=0x00000000*/

                            /* Tco Comp Value */
    UINT32 rcompdrvup : 6;

                            /* Bits[17:12], Access Type=RWV, default=0x00000000*/

                            /* Rcomp Drv Up Value */
    UINT32 rcompdrvdown : 6;

                            /* Bits[23:18], Access Type=RWV, default=0x00000000*/

                            /* Rcomp Drv Dn Value */
    UINT32 lscomp : 3;

                            /* Bits[26:24], Access Type=RWV, default=0x00000004*/

                            /*
                               LevelShift Comp Value. Not unsed, controlled via
                               MsgCh only.
                            */
    UINT32 spare : 5;

                            /* Bits[31:27], Access Type=RWV, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DDRCRCLKCOMP_CLK_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCLKCOMPOFFSET_CH_FNV_DDRIO_DAT7_CH_1_REG supported on:                  */
/*      BWV (0x402b1a08)                                                        */
/* Register default value on BWV: 0x82010000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CLK Comp Offset Values. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCLKCOMPOFFSET_CH_FNV_DDRIO_DAT7_CH_1_REG 0x1B240A08

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 17;

                            /* Bits[16:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 clkpcasbiasclosedloopen : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* ClkPcasBiasClosedLoopEn for Clk Rx buf */
    UINT32 clkrxbiasselqnnnh : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /* ClkRxBiasSelQnnnH for Clk Rx Buf */
    UINT32 clkrxeq : 3;

                            /* Bits[21:19], Access Type=RW, default=0x00000000*/

                            /* ClkRxEq for Clk Rx Buf */
    UINT32 ddrclkrxbiasctl : 3;

                            /* Bits[24:22], Access Type=RW, default=0x00000000*/

                            /* DdrClkRxBiasCtl for Clk Rx Buf */
    UINT32 forceclkbiason : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000001*/

                            /* ForceClkBiason for Clk Rx Buf */
    UINT32 rsvd_26 : 1;

                            /* Bits[26:26], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ddrclkrxbiasfoldedlegtrim : 2;

                            /* Bits[28:27], Access Type=RW, default=0x00000000*/

                            /* DdrClkRxBiasFoldedLegTrim for Clk Rx Buf */
    UINT32 ddrclkrxbiasgcncomp : 2;

                            /* Bits[30:29], Access Type=RW, default=0x00000000*/

                            /* DdrClkRxBiasGcnComp for Clk Rx Buf */
    UINT32 rsvd_31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCLKCOMPOFFSET_CH_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCLKPICODE_CH_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1a0c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CLK Pi Codes. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCLKPICODE_CH_FNV_DDRIO_DAT7_CH_1_REG 0x1B240A0C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 pisettingrank0 : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /*
                               Pi Setting, Rank 0[br] [5:0] - Pi setting for
                               xxDDR_CLK_P/N[0]
                            */
    UINT32 pilogicdelayrank0 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Pi Logic Delay, Rank 0, delays CLK by an extra
                               qclk cycle
                            */
    UINT32 rsvd_7 : 1;

                            /* Bits[7:7], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 pisettingrank1 : 6;

                            /* Bits[13:8], Access Type=RW, default=0x00000000*/

                            /*
                               Pi Setting, Rank 1[br] [5:0] - Pi setting for
                               xxDDR_CLK_P/N[1]
                            */
    UINT32 pilogicdelayrank1 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /* Pi Logic Delay, Rank 1 */
    UINT32 spare1 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 pisettingrank2 : 6;

                            /* Bits[21:16], Access Type=RW, default=0x00000000*/

                            /*
                               Pi Setting, Rank 2[br] [5:0] - Pi setting for
                               xxDDR_CLK_P/N[2]
                            */
    UINT32 pilogicdelayrank2 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* Pi Logic Delay, Rank 2 */
    UINT32 rsvd_23 : 1;

                            /* Bits[23:23], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 pisettingrank3 : 6;

                            /* Bits[29:24], Access Type=RW, default=0x00000000*/

                            /*
                               Pi Setting, Rank 3[br] [5:0] - Pi setting for
                               xxDDR_CLK_P/N[3]
                            */
    UINT32 pilogicdelayrank3 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /* Pi Logic Delay, Rank 3 */
    UINT32 rsvd_31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCLKPICODE_CH_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCLKCONTROLS_CH_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1a10)                                                        */
/* Register default value on BWV: 0x00066000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CLK Controls. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCLKCONTROLS_CH_FNV_DDRIO_DAT7_CH_1_REG 0x1B240A10

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 visabusenable : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enable Visa debug bus LCB for CLK fub */
    UINT32 pirefclkdivenable : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* enable PiRef clock divider in xover */
    UINT32 xoveropmode : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* Xover Select between grid-PiRef and PiRef-PiN */
    UINT32 clkodtpdnsegen : 3;

                            /* Bits[6:4], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 txon : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Forces the CLK transmitter on, overriding any
                               power downs
                            */
    UINT32 intclkon : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Forces on all PI enables and the LCB enables in
                               the AFE fubs. Does not force on D0 PI enable or
                               override weaklock mode.
                            */
    UINT32 repclkon : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 iolbctl : 2;

                            /* Bits[11:10], Access Type=RW, default=0x00000000*/

                            /*
                               Controls IO Loopback. Ctl[1] enables IOLB mode
                               and Ctl[0] controls if this is a Setup(0) or
                               Hold(1) test
                            */
    UINT32 odtmode : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Forces the driver in ODT mode, where both the
                               pullup and pulldown are enabled. Used for Rstray
                               testing
                            */
    UINT32 odtpupsegen : 3;

                            /* Bits[15:13], Access Type=RW, default=0x00000003*/

                            /* not used */
    UINT32 is_rdimm : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               set to drive DC on xxCLK during P6 and S3 if
                               DDR3 + RDIMM is populated
                            */
    UINT32 statlegen : 2;

                            /* Bits[18:17], Access Type=RW, default=0x00000003*/

                            /* static leg enable */
    UINT32 ddr4extend : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /* Enable finer vref resolution in ddr4 */
    UINT32 cttermination : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               1: Center Tap Termination for DDR3; 0: Vddq
                               Termination for DDR4/Intel SMI 2
                            */
    UINT32 rxvref : 7;

                            /* Bits[27:21], Access Type=RW, default=0x00000000*/

                            /*
                               IOLB Vref Control. 2s compliment encoding from
                               1/3 Vdd to 2/3 Vdd with step size of Vdd/192
                               (7.8mV)
                            */
    UINT32 halflsbbit : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               enables fine grain Vref control, shift down the
                               Vref voltage by ~0.5 stepsize
                            */
    UINT32 rsvd_29 : 1;

                            /* Bits[29:29], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 lvlshft_holden : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable:[br] Holds the HV
                               control values and power down the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 xovercal : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Enables Xover Calibration Training Mode */

  } Bits;
  UINT32 Data;

} DDRCRCLKCONTROLS_CH_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* DDRCRCLKTRAINING_CH_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1a1c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Clk Training Register. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCLKTRAINING_CH_FNV_DDRIO_DAT7_CH_1_REG 0x1B240A1C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 trainingoffset : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained PiCode Value. */
    UINT32 iodirectionvalid : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /* IODirectionValid */
    UINT32 rsvd_7 : 1;

                            /* Bits[7:7], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 pclkxoverphasedet : 4;

                            /* Bits[11:8], Access Type=ROV, default=0x00000000*/

                            /* P Clock Buffer Xover Phase Detect */
    UINT32 nclkxoverphasedet : 4;

                            /* Bits[15:12], Access Type=ROV, default=0x00000000*/

                            /* N Clock Buffer Xover Phase Detect */
    UINT32 rsvd_16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCLKTRAINING_CH_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCLKACIOLB_CH_FNV_DDRIO_DAT7_CH_1_REG supported on:                      */
/*      BWV (0x402b1a20)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* ACIO Loopback Control Register. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCLKACIOLB_CH_FNV_DDRIO_DAT7_CH_1_REG 0x1B240A20

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 18;

                            /* Bits[17:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 rxvocpassgateen : 8;

                            /* Bits[25:18], Access Type=RW, default=0x00000000*/

                            /*
                               Independent ClkRxVocSel or ClkRxVocPassGateEn
                               for Full RX receiver
                            */
    UINT32 rsvd_26 : 6;

                            /* Bits[31:26], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCLKACIOLB_CH_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRDDRTTRAINRESULT_CH_FNV_DDRIO_DAT7_CH_1_REG supported on:                */
/*      BWV (0x402b1a24)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* DDRT Training Result
*/


#define DDRCRDDRTTRAINRESULT_CH_FNV_DDRIO_DAT7_CH_1_REG 0x1B240A24

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 evenoddsamples : 8;

                            /* Bits[7:0], Access Type=RWV, default=0x00000000*/

                            /*
                               Bit 7 CKP3 early Read ID training result (Even)
                               [br] Bit 6 CKP3 early Read ID training result
                               (Odd)[br] Bit 5 CKN3 early Read ID training
                               result (Even)[br] Bit 4 CKN3 early Read ID
                               training result (Odd)[br] Bit 3 CKP1 early Read
                               ID training result (Even)[br] Bit 2 CKP1 early
                               Read ID training result (Odd)[br] Bit 1 CKN1
                               early Read ID training result (Even)[br] Bit 0
                               CKN1 early Read ID training result (Odd)[br]
                               CKP3/CKN3 slot 1 read ID bits [br] CKP1/CKN1
                               slot 0 read ID bits[br] Read ID training result
                               (8 bits) Result of sampling on each Read ID
                               input signal, and for even and odd cycles If the
                               even/odd results are recorded in separate
                               bitfields, no need to add logic to only capture
                               every other sample, since the data is available
                               for the BIOS to make a decision.
                            */
    UINT32 rsvd_8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRDDRTTRAINRESULT_CH_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCOMP_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b1c00)                                                        */
/* Register default value on BWV: 0x04000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Comp Values. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDCOMP_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C00

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 scomp : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /*
                               Scomp Value, Normally updated by Comp FSM via
                               CompBus. can be overriden via message channel if
                               periodical retrain is disabled.
                            */
    UINT32 tcocomp : 7;

                            /* Bits[12:6], Access Type=RWV, default=0x00000000*/

                            /*
                               Tco Comp Value, Normally updated by Comp FSM via
                               CompBus. can be overriden via message channel if
                               periodical retrain is disabled.
                            */
    UINT32 rcompdrvup : 6;

                            /* Bits[18:13], Access Type=RWV, default=0x00000000*/

                            /*
                               Rcomp Drv Up Value, Normally updated by Comp FSM
                               via CompBus. can be overriden via message
                               channel if periodical retrain is disabled.
                            */
    UINT32 rcompdrvdown : 6;

                            /* Bits[24:19], Access Type=RWV, default=0x00000000*/

                            /*
                               Rcomp Drv Dn Value, Normally updated by Comp FSM
                               via CompBus. can be overriden via message
                               channel if periodical retrain is disabled.
                            */
    UINT32 lscomp : 3;

                            /* Bits[27:25], Access Type=RWV, default=0x00000002*/

                            /* not used */
    UINT32 spare : 4;

                            /* Bits[31:28], Access Type=RWV, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DDRCRCMDCOMP_3_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCOMPOFFSET_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b1c04)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Comp Offset Values. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCMDCOMPOFFSET_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C04

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 17;

                            /* Bits[16:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ddrcmdctlrx_en : 12;

                            /* Bits[28:17], Access Type=RW, default=0x00000000*/

                            /* Enable DDRT Parity in CMDCTL */
    UINT32 rsvd_29 : 3;

                            /* Bits[31:29], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDCOMPOFFSET_3_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDPICODING_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1c08)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Pi Settings. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDPICODING_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C08

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdpicode0 : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay0 : 2;

                            /* Bits[7:6], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay - add 1 qclk cycle delay. */
    UINT32 rsvd_8 : 1;

                            /* Bits[8:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode1 : 6;

                            /* Bits[14:9], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay1 : 2;

                            /* Bits[16:15], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_17 : 1;

                            /* Bits[17:17], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode2 : 6;

                            /* Bits[23:18], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay2 : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_26 : 6;

                            /* Bits[31:26], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDPICODING_3_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1c0c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C0C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 visabusenable : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enable Visa debug bus LCB for CMD fub */
    UINT32 pirefclkdivenable : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* enable PiRef clock divider in xover */
    UINT32 xoveropmode : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* Xover Select between grid-PiRef and PiRef-PiN */
    UINT32 dllmask : 2;

                            /* Bits[5:4], Access Type=RW, default=0x00000000*/

                            /*
                               On weak lock exit, controls how long the
                               feedback to the phase detector is masked: {0: 1
                               qclk (required for delayline latency), 1: 2
                               qclk, 2: 3 qclk, 3: 4 qclk}
                            */
    UINT32 drvpupdis : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               This will be connected to all tx, and must
                               toggle 1->0 after a power state
                            */
    UINT32 txon : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Forces the CMD transmitter on, overriding any
                               power downs
                            */
    UINT32 intclkon : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Forces on all PI enables and the LCB enables in
                               the AFE fubs. Does not force on D0 PI enable or
                               override weaklock mode.
                            */
    UINT32 repclkon : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 iolbctl : 2;

                            /* Bits[11:10], Access Type=RW, default=0x00000000*/

                            /*
                               Controls IO Loopback. Ctl[1] enables IOLB mode
                               and Ctl[0] controls if this is a Setup(0) or
                               Hold(1) test
                            */
    UINT32 odtmode : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Forces the driver in ODT mode, where both the
                               pullup and pulldown are enabled. Used for Rstray
                               testing
                            */
    UINT32 cmdtxeq : 2;

                            /* Bits[14:13], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 rsvd_15 : 2;

                            /* Bits[16:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 lvmode : 2;

                            /* Bits[18:17], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 lvmodevalid : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 lvlshft_holden : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rxvref : 7;

                            /* Bits[27:21], Access Type=RW, default=0x00000000*/

                            /*
                               IOLB Vref Control. 2s compliment encoding from
                               1/3 Vdd to 2/3 Vdd with step size of Vdd/192
                               (7.8mV)
                            */
    UINT32 halflsbbit : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               enables fine grain Vref control, shift down the
                               Vref voltage by ~0.5 stepsize
                            */
    UINT32 vrefdisable : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Vref Disable */
    UINT32 ddr4modeenable : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Ddr4 Mode Enable, set to 1 in CMD2
                               (Func:5.Addr:C00 and Func:7.Addr:C00) fub to
                               bypass extra delay on parity bit
                            */
    UINT32 xovercal : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Enables Xover Calibration Training Mode */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS_3_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS2_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1c10)                                                        */
/* Register default value on BWV: 0x01400000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS2_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C10

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 20;

                            /* Bits[19:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 fnvddrcrdllpibypassen : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /* FNV DDR/PI Bypass Enable */
    UINT32 ddr4extend : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /* Enable finer vref resolution in ddr4 */
    UINT32 rsvd_22 : 1;

                            /* Bits[22:22], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdrxbiassel : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /* CmdRxBiasSel for Cmd Receiver */
    UINT32 forcecmdbiason : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000001*/

                            /* ForceCmdBiason for Cmd Receiver */
    UINT32 fnvcmdcrxoverbypassen : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* bypass ddrcmdctl xover for FNV */
    UINT32 cmdctlecapen : 2;

                            /* Bits[27:26], Access Type=RW, default=0x00000000*/

                            /* CmdCtl Buffer CtleCapEn */
    UINT32 cmdctleresen : 2;

                            /* Bits[29:28], Access Type=RW, default=0x00000000*/

                            /* CmdCtl Buffer CtleResEn */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS2_3_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCTLCOMP_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b1c14)                                                        */
/* Register default value on BWV: 0x04000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CTL Comp Values. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCTLCOMP_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C14

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 scomp : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /* Scomp Value */
    UINT32 tcocomp : 7;

                            /* Bits[12:6], Access Type=RWV, default=0x00000000*/

                            /* Tco Comp Value */
    UINT32 rcompdrvup : 6;

                            /* Bits[18:13], Access Type=RWV, default=0x00000000*/

                            /* Rcomp Drv Up Value */
    UINT32 rcompdrvdown : 6;

                            /* Bits[24:19], Access Type=RWV, default=0x00000000*/

                            /* Rcomp Drv Dn Value */
    UINT32 lscomp : 3;

                            /* Bits[27:25], Access Type=RWV, default=0x00000002*/

                            /* LevelShift Comp Value */
    UINT32 spare : 4;

                            /* Bits[31:28], Access Type=RWV, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DDRCRCTLCOMP_3_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCTLCOMPOFFSET_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b1c18)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CTL Comp Offset Values. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCTLCOMPOFFSET_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C18

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 18;

                            /* Bits[17:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdctlbufsel : 6;

                            /* Bits[23:18], Access Type=RW, default=0x00000000*/

                            /* CmdBuf or CtlBuf Selection */
    UINT32 iodirectionvalid : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /* Is the Direction (RX/TX Valid) */
    UINT32 rsvd_25 : 7;

                            /* Bits[31:25], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCTLCOMPOFFSET_3_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS3_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1c1c)                                                        */
/* Register default value on BWV: 0x0000007F                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls 3. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS3_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C1C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 bufdrvsegen : 5;

                            /* Bits[4:0], Access Type=RW, default=0x0000001F*/

                            /* Drive strength enable for CmdBuf/CtlBuf. */
    UINT32 cmdvrefpgen : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000001*/

                            /*
                               control the DdrVrefSelDQQnnnH pin on the
                               ddrvrefint generator
                            */
    UINT32 odtstrength : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000001*/

                            /* OdtStrength */
    UINT32 rsvd_7 : 1;

                            /* Bits[7:7], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 clkpibypass : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* Clk Pi Bypass for DIV2 */
    UINT32 divby2alignctl : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* Invert DAlign */
    UINT32 divby2disable : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* select qclk for cmdxover instead of Dclk */
    UINT32 odten : 12;

                            /* Bits[22:11], Access Type=RW, default=0x00000000*/

                            /* ODTDis for Cmd and Ctl buf */
    UINT32 cmdrefpiclkdelay : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /* CmdRefClk */
    UINT32 cmdbypass : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Contols to bypass entire XOVER CMD */
    UINT32 drvencrovrd : 2;

                            /* Bits[31:30], Access Type=RW, default=0x00000000*/

                            /*
                               Override for DriveEn-controlled delayed command
                               bit. [br] bit30 -> set to 1 in order to let
                               bit31 control the path (0 lets DriveEn control
                               it)[br] bit31 -> set to 1 for delayed command
                               bit, 0 for un-delayed command bit (from xover to
                               AFE)
                            */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS3_3_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCTLRANKSUSED_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1c20)                                                        */
/* Register default value on BWV: 0x0000003F                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CTL Ranks Used. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCTLRANKSUSED_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C20

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ranken : 6;

                            /* Bits[5:0], Access Type=RW, default=0x0000003F*/

                            /*
                               Enables output buffers for ctlbufpair 0 to
                               ctlbufpair6 , PI clocks and output datapaths for
                               this rank
                            */
    UINT32 rsvd_6 : 6;

                            /* Bits[11:6], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 lvlshft_holden : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rxbiasgcncomp : 2;

                            /* Bits[14:13], Access Type=RW, default=0x00000000*/

                            /*
                               used to compensate the GCN skew. The GCN skew
                               information should be[br] extracted by reading
                               and analyzing the final Rcomp code value. The
                               target spec[br] is to categorize the GCN skew in
                               3 process condition (mainly slow, fast,
                               typical).[br] (one example can be just reading
                               the 2 MLS bit of Rcomp code and determine if
                               the[br] GCN is slow, fast or typical). The
                               gcncomp is used for CTLE.[br] 11: gcn in slow
                               corner[br] 10: gcn in typical corner[br] 01: gcn
                               in fast corner
                            */
    UINT32 rsvd_15 : 1;

                            /* Bits[15:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 imodebiashighcm : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /* Imode bias control */
    UINT32 rxbiassel : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* Rx bias Sel */
    UINT32 cmdrxeqqnnnl : 3;

                            /* Bits[20:18], Access Type=RW, default=0x00000000*/

                            /* CmdRxEqQnnnL for RX CmdCtl Buf */
    UINT32 rsvd_21 : 3;

                            /* Bits[23:21], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ddrcmdrxbiasctl : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /* CmdRxBiasCtl for RX biasgen */
    UINT32 cmdpcasbiasclosedloopen : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* CmdPcasBiasClosedLoopEnQnnnH for RX biasgen */
    UINT32 ddrcmdrxbiasfoldedlegtrim : 2;

                            /* Bits[29:28], Access Type=RW, default=0x00000000*/

                            /* DdrCmdRxBiasFoldedLegTrim for RX biasgen */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCTLRANKSUSED_3_FNV_DDRIO_DAT7_CH_1_STRUCT;



/* DDRCRCMDTRAINING_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1c2c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Cmd Training Register. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDTRAINING_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C2C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 trainingoffset : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained PiCode Value. */
    UINT32 spare0 : 2;

                            /* Bits[7:6], Access Type=WO, default=0x00000000*/

                            /* Spare */
    UINT32 xoverphasedet : 14;

                            /* Bits[21:8], Access Type=ROV, default=0x00000000*/

                            /*
                               bits13:6 unused[br] bit5 output of phase
                               detector for I/O Pair 0[br] bit4 output of phase
                               detector for I/O Pair 1[br] bit3 output of phase
                               detector for I/O Pair 2[br] bit2 output of phase
                               detector for I/O Pair 3[br] bit1 output of phase
                               detector for I/O Pair 4[br] bit0 output of phase
                               detector for I/O Pair 5 (only on cmdctla FUBs)
                            */
    UINT32 trainingoffset2 : 6;

                            /* Bits[27:22], Access Type=RW, default=0x00000000*/

                            /*
                               Offset added to PiCode. Obtained via xover
                               calibration such that ClkPi aligns with grid
                               clock when PiCode=0.
                            */
    UINT32 rsvd_28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDTRAINING_3_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS1_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1c30)                                                        */
/* Register default value on BWV: 0x03C01000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls 1. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS1_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C30

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdoutputensel : 12;

                            /* Bits[11:0], Access Type=RW, default=0x00000000*/

                            /* CmdOutputEnable */
    UINT32 selectcompcode : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000001*/

                            /* Select CompCode between cmd or ctl */
    UINT32 rsvd_13 : 9;

                            /* Bits[21:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 dqstatdflt : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000003*/

                            /* Static leg enable */
    UINT32 odtstatdflt : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000003*/

                            /* Static leg enable */
    UINT32 spare2 : 6;

                            /* Bits[31:26], Access Type=RW, default=0x00000000*/

                            /* Spare2 */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS1_3_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDPICODING2_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1c34)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Pi Settings. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDPICODING2_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C34

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdpicode3 : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay3 : 2;

                            /* Bits[7:6], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_8 : 1;

                            /* Bits[8:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode4 : 6;

                            /* Bits[14:9], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay4 : 2;

                            /* Bits[16:15], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_17 : 1;

                            /* Bits[17:17], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode5 : 6;

                            /* Bits[23:18], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay5 : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_26 : 6;

                            /* Bits[31:26], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDPICODING2_3_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDPICODING3_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1c38)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Pi Settings. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDPICODING3_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C38

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdpicode6 : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay6 : 2;

                            /* Bits[7:6], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDPICODING3_3_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* VSSHIORVREFCONTROL_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b1c40)                                                        */
/* Register default value on BWV: 0x004D8238                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Multicast read for CH012 and CH345 versions are not supported.
*/


#define VSSHIORVREFCONTROL_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C40

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 24;

                            /* Bits[23:0], Access Type=RW, default=0x004D8238*/

                            /*
                               Channel 0 fubs : VssHi adjust setting. Channel1
                               fubs: DIMM VREF adjust settings.[br] [br] VssHi
                               Field Description:[br] [br] Field Bits
                               Description[br] ------- ---- -------------------
                               ------------------------------------------------
                               ------------------------------------------------
                               --------------------------------------------[br]
                               SelCode 23 Selects the code to output: {0: Code,
                               1: TCode}[br] GainBoost 22 Enable gain boost is
                               panic mode by updating code/tcode[br]
                               PanicVoltage 21:18 Unsigned integer controlling
                               the voltage error on VssHi that will trigger the
                               panic driver. Step size of VccDDQ/192 (0 to
                               117mV)[br] CloseLoop 17 Enables the VssHi close
                               loop tracking[br] PanicEn 16 Enables the VssHi
                               Panic Driver[br] BWError 15:14 Limits the loop
                               gain (ie: difference between code and tcode) to
                               +/- 2^(SlowBWError)[br] OpenLoop 13 Operates
                               VssHi in open loop mode with the target Vref
                               code directly driving the output DAC with no
                               feedback involved[br] SampleDivider 12:10
                               Controls the loop bandwidth by dividing down the
                               input clock: {0: Qclk, 1: Qclk/2, 2: Qclk/4, 3:
                               Qclk/8, 4: Qclk/16, 5: Qclk/32, 6: Qclk/64, 7:
                               Qclk/128}[br] LoBWDivider 9:8 For the slow
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] HiBWDivider 7:6 For the fast
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] Target 5:0 Unsigned integer
                               controlling the target VssHi voltage. Step size
                               of VccDDQ/192 and starting value of
                               VccDDQ*20/192
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROL_3_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* VSSHIORVREFCONTROL1_3_FNV_DDRIO_DAT7_CH_1_REG supported on:                  */
/*      BWV (0x402b1c48)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Extension for BDX. Multicast read for CH012 and CH345 versions are not supported.
*/


#define VSSHIORVREFCONTROL1_3_FNV_DDRIO_DAT7_CH_1_REG 0x1B240C48

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* BDX-specific extended control signal. */
    UINT32 rsvd_8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROL1_3_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCOMP_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b1d00)                                                        */
/* Register default value on BWV: 0x04000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Comp Values. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDCOMP_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D00

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 scomp : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /*
                               Scomp Value, Normally updated by Comp FSM via
                               CompBus. can be overriden via message channel if
                               periodical retrain is disabled.
                            */
    UINT32 tcocomp : 7;

                            /* Bits[12:6], Access Type=RWV, default=0x00000000*/

                            /*
                               Tco Comp Value, Normally updated by Comp FSM via
                               CompBus. can be overriden via message channel if
                               periodical retrain is disabled.
                            */
    UINT32 rcompdrvup : 6;

                            /* Bits[18:13], Access Type=RWV, default=0x00000000*/

                            /*
                               Rcomp Drv Up Value, Normally updated by Comp FSM
                               via CompBus. can be overriden via message
                               channel if periodical retrain is disabled.
                            */
    UINT32 rcompdrvdown : 6;

                            /* Bits[24:19], Access Type=RWV, default=0x00000000*/

                            /*
                               Rcomp Drv Dn Value, Normally updated by Comp FSM
                               via CompBus. can be overriden via message
                               channel if periodical retrain is disabled.
                            */
    UINT32 lscomp : 3;

                            /* Bits[27:25], Access Type=RWV, default=0x00000002*/

                            /* not used */
    UINT32 spare : 4;

                            /* Bits[31:28], Access Type=RWV, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DDRCRCMDCOMP_1_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCOMPOFFSET_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b1d04)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Comp Offset Values. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCMDCOMPOFFSET_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D04

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 17;

                            /* Bits[16:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ddrcmdctlrx_en : 12;

                            /* Bits[28:17], Access Type=RW, default=0x00000000*/

                            /* Enable DDRT Parity in CMDCTL */
    UINT32 rsvd_29 : 3;

                            /* Bits[31:29], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDCOMPOFFSET_1_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDPICODING_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1d08)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Pi Settings. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDPICODING_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D08

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdpicode0 : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay0 : 2;

                            /* Bits[7:6], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay - add 1 qclk cycle delay. */
    UINT32 rsvd_8 : 1;

                            /* Bits[8:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode1 : 6;

                            /* Bits[14:9], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay1 : 2;

                            /* Bits[16:15], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_17 : 1;

                            /* Bits[17:17], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode2 : 6;

                            /* Bits[23:18], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay2 : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_26 : 6;

                            /* Bits[31:26], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDPICODING_1_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1d0c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D0C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 visabusenable : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enable Visa debug bus LCB for CMD fub */
    UINT32 pirefclkdivenable : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* enable PiRef clock divider in xover */
    UINT32 xoveropmode : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* Xover Select between grid-PiRef and PiRef-PiN */
    UINT32 dllmask : 2;

                            /* Bits[5:4], Access Type=RW, default=0x00000000*/

                            /*
                               On weak lock exit, controls how long the
                               feedback to the phase detector is masked: {0: 1
                               qclk (required for delayline latency), 1: 2
                               qclk, 2: 3 qclk, 3: 4 qclk}
                            */
    UINT32 drvpupdis : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               This will be connected to all tx, and must
                               toggle 1->0 after a power state
                            */
    UINT32 txon : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Forces the CMD transmitter on, overriding any
                               power downs
                            */
    UINT32 intclkon : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Forces on all PI enables and the LCB enables in
                               the AFE fubs. Does not force on D0 PI enable or
                               override weaklock mode.
                            */
    UINT32 repclkon : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 iolbctl : 2;

                            /* Bits[11:10], Access Type=RW, default=0x00000000*/

                            /*
                               Controls IO Loopback. Ctl[1] enables IOLB mode
                               and Ctl[0] controls if this is a Setup(0) or
                               Hold(1) test
                            */
    UINT32 odtmode : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Forces the driver in ODT mode, where both the
                               pullup and pulldown are enabled. Used for Rstray
                               testing
                            */
    UINT32 cmdtxeq : 2;

                            /* Bits[14:13], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 rsvd_15 : 2;

                            /* Bits[16:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 lvmode : 2;

                            /* Bits[18:17], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 lvmodevalid : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 lvlshft_holden : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rxvref : 7;

                            /* Bits[27:21], Access Type=RW, default=0x00000000*/

                            /*
                               IOLB Vref Control. 2s compliment encoding from
                               1/3 Vdd to 2/3 Vdd with step size of Vdd/192
                               (7.8mV)
                            */
    UINT32 halflsbbit : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               enables fine grain Vref control, shift down the
                               Vref voltage by ~0.5 stepsize
                            */
    UINT32 vrefdisable : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Vref Disable */
    UINT32 ddr4modeenable : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Ddr4 Mode Enable, set to 1 in CMD2
                               (Func:5.Addr:C00 and Func:7.Addr:C00) fub to
                               bypass extra delay on parity bit
                            */
    UINT32 xovercal : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Enables Xover Calibration Training Mode */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS_1_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS2_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1d10)                                                        */
/* Register default value on BWV: 0x01400000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS2_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D10

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 20;

                            /* Bits[19:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 fnvddrcrdllpibypassen : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /* FNV DDR/PI Bypass Enable */
    UINT32 ddr4extend : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /* Enable finer vref resolution in ddr4 */
    UINT32 rsvd_22 : 1;

                            /* Bits[22:22], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdrxbiassel : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /* CmdRxBiasSel for Cmd Receiver */
    UINT32 forcecmdbiason : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000001*/

                            /* ForceCmdBiason for Cmd Receiver */
    UINT32 fnvcmdcrxoverbypassen : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* bypass ddrcmdctl xover for FNV */
    UINT32 cmdctlecapen : 2;

                            /* Bits[27:26], Access Type=RW, default=0x00000000*/

                            /* CmdCtl Buffer CtleCapEn */
    UINT32 cmdctleresen : 2;

                            /* Bits[29:28], Access Type=RW, default=0x00000000*/

                            /* CmdCtl Buffer CtleResEn */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS2_1_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCTLCOMP_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b1d14)                                                        */
/* Register default value on BWV: 0x04000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CTL Comp Values. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCTLCOMP_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D14

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 scomp : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /* Scomp Value */
    UINT32 tcocomp : 7;

                            /* Bits[12:6], Access Type=RWV, default=0x00000000*/

                            /* Tco Comp Value */
    UINT32 rcompdrvup : 6;

                            /* Bits[18:13], Access Type=RWV, default=0x00000000*/

                            /* Rcomp Drv Up Value */
    UINT32 rcompdrvdown : 6;

                            /* Bits[24:19], Access Type=RWV, default=0x00000000*/

                            /* Rcomp Drv Dn Value */
    UINT32 lscomp : 3;

                            /* Bits[27:25], Access Type=RWV, default=0x00000002*/

                            /* LevelShift Comp Value */
    UINT32 spare : 4;

                            /* Bits[31:28], Access Type=RWV, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DDRCRCTLCOMP_1_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCTLCOMPOFFSET_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b1d18)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CTL Comp Offset Values. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCTLCOMPOFFSET_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D18

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 18;

                            /* Bits[17:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdctlbufsel : 6;

                            /* Bits[23:18], Access Type=RW, default=0x00000000*/

                            /* CmdBuf or CtlBuf Selection */
    UINT32 iodirectionvalid : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /* Is the Direction (RX/TX Valid) */
    UINT32 rsvd_25 : 7;

                            /* Bits[31:25], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCTLCOMPOFFSET_1_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS3_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1d1c)                                                        */
/* Register default value on BWV: 0x0000007F                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls 3. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS3_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D1C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 bufdrvsegen : 5;

                            /* Bits[4:0], Access Type=RW, default=0x0000001F*/

                            /* Drive strength enable for CmdBuf/CtlBuf. */
    UINT32 cmdvrefpgen : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000001*/

                            /*
                               control the DdrVrefSelDQQnnnH pin on the
                               ddrvrefint generator
                            */
    UINT32 odtstrength : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000001*/

                            /* OdtStrength */
    UINT32 rsvd_7 : 1;

                            /* Bits[7:7], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 clkpibypass : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* Clk Pi Bypass for DIV2 */
    UINT32 divby2alignctl : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* Invert DAlign */
    UINT32 divby2disable : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* select qclk for cmdxover instead of Dclk */
    UINT32 odten : 12;

                            /* Bits[22:11], Access Type=RW, default=0x00000000*/

                            /* ODTDis for Cmd and Ctl buf */
    UINT32 cmdrefpiclkdelay : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /* CmdRefClk */
    UINT32 cmdbypass : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Contols to bypass entire XOVER CMD */
    UINT32 drvencrovrd : 2;

                            /* Bits[31:30], Access Type=RW, default=0x00000000*/

                            /*
                               Override for DriveEn-controlled delayed command
                               bit. [br] bit30 -> set to 1 in order to let
                               bit31 control the path (0 lets DriveEn control
                               it)[br] bit31 -> set to 1 for delayed command
                               bit, 0 for un-delayed command bit (from xover to
                               AFE)
                            */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS3_1_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCTLRANKSUSED_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1d20)                                                        */
/* Register default value on BWV: 0x0000003F                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CTL Ranks Used. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCTLRANKSUSED_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D20

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ranken : 6;

                            /* Bits[5:0], Access Type=RW, default=0x0000003F*/

                            /*
                               Enables output buffers for ctlbufpair 0 to
                               ctlbufpair6 , PI clocks and output datapaths for
                               this rank
                            */
    UINT32 rsvd_6 : 6;

                            /* Bits[11:6], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 lvlshft_holden : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rxbiasgcncomp : 2;

                            /* Bits[14:13], Access Type=RW, default=0x00000000*/

                            /*
                               used to compensate the GCN skew. The GCN skew
                               information should be[br] extracted by reading
                               and analyzing the final Rcomp code value. The
                               target spec[br] is to categorize the GCN skew in
                               3 process condition (mainly slow, fast,
                               typical).[br] (one example can be just reading
                               the 2 MLS bit of Rcomp code and determine if
                               the[br] GCN is slow, fast or typical). The
                               gcncomp is used for CTLE.[br] 11: gcn in slow
                               corner[br] 10: gcn in typical corner[br] 01: gcn
                               in fast corner
                            */
    UINT32 rsvd_15 : 1;

                            /* Bits[15:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 imodebiashighcm : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /* Imode bias control */
    UINT32 rxbiassel : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* Rx bias Sel */
    UINT32 cmdrxeqqnnnl : 3;

                            /* Bits[20:18], Access Type=RW, default=0x00000000*/

                            /* CmdRxEqQnnnL for RX CmdCtl Buf */
    UINT32 rsvd_21 : 3;

                            /* Bits[23:21], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ddrcmdrxbiasctl : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /* CmdRxBiasCtl for RX biasgen */
    UINT32 cmdpcasbiasclosedloopen : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* CmdPcasBiasClosedLoopEnQnnnH for RX biasgen */
    UINT32 ddrcmdrxbiasfoldedlegtrim : 2;

                            /* Bits[29:28], Access Type=RW, default=0x00000000*/

                            /* DdrCmdRxBiasFoldedLegTrim for RX biasgen */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCTLRANKSUSED_1_FNV_DDRIO_DAT7_CH_1_STRUCT;



/* DDRCRCMDTRAINING_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1d2c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Cmd Training Register. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDTRAINING_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D2C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 trainingoffset : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained PiCode Value. */
    UINT32 spare0 : 2;

                            /* Bits[7:6], Access Type=WO, default=0x00000000*/

                            /* Spare */
    UINT32 xoverphasedet : 14;

                            /* Bits[21:8], Access Type=ROV, default=0x00000000*/

                            /*
                               bits13:6 unused[br] bit5 output of phase
                               detector for I/O Pair 0[br] bit4 output of phase
                               detector for I/O Pair 1[br] bit3 output of phase
                               detector for I/O Pair 2[br] bit2 output of phase
                               detector for I/O Pair 3[br] bit1 output of phase
                               detector for I/O Pair 4[br] bit0 output of phase
                               detector for I/O Pair 5 (only on cmdctla FUBs)
                            */
    UINT32 trainingoffset2 : 6;

                            /* Bits[27:22], Access Type=RW, default=0x00000000*/

                            /*
                               Offset added to PiCode. Obtained via xover
                               calibration such that ClkPi aligns with grid
                               clock when PiCode=0.
                            */
    UINT32 rsvd_28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDTRAINING_1_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS1_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1d30)                                                        */
/* Register default value on BWV: 0x03C01000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls 1. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS1_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D30

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdoutputensel : 12;

                            /* Bits[11:0], Access Type=RW, default=0x00000000*/

                            /* CmdOutputEnable */
    UINT32 selectcompcode : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000001*/

                            /* Select CompCode between cmd or ctl */
    UINT32 rsvd_13 : 9;

                            /* Bits[21:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 dqstatdflt : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000003*/

                            /* Static leg enable */
    UINT32 odtstatdflt : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000003*/

                            /* Static leg enable */
    UINT32 spare2 : 6;

                            /* Bits[31:26], Access Type=RW, default=0x00000000*/

                            /* Spare2 */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS1_1_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDPICODING2_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1d34)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Pi Settings. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDPICODING2_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D34

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdpicode3 : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay3 : 2;

                            /* Bits[7:6], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_8 : 1;

                            /* Bits[8:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode4 : 6;

                            /* Bits[14:9], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay4 : 2;

                            /* Bits[16:15], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_17 : 1;

                            /* Bits[17:17], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode5 : 6;

                            /* Bits[23:18], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay5 : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_26 : 6;

                            /* Bits[31:26], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDPICODING2_1_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDPICODING3_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1d38)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Pi Settings. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDPICODING3_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D38

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdpicode6 : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay6 : 2;

                            /* Bits[7:6], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDPICODING3_1_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* VSSHIORVREFCONTROL_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b1d40)                                                        */
/* Register default value on BWV: 0x004D8238                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Multicast read for CH012 and CH345 versions are not supported.
*/


#define VSSHIORVREFCONTROL_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D40

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 24;

                            /* Bits[23:0], Access Type=RW, default=0x004D8238*/

                            /*
                               Channel 0 fubs : VssHi adjust setting. Channel1
                               fubs: DIMM VREF adjust settings.[br] [br] VssHi
                               Field Description:[br] [br] Field Bits
                               Description[br] ------- ---- -------------------
                               ------------------------------------------------
                               ------------------------------------------------
                               --------------------------------------------[br]
                               SelCode 23 Selects the code to output: {0: Code,
                               1: TCode}[br] GainBoost 22 Enable gain boost is
                               panic mode by updating code/tcode[br]
                               PanicVoltage 21:18 Unsigned integer controlling
                               the voltage error on VssHi that will trigger the
                               panic driver. Step size of VccDDQ/192 (0 to
                               117mV)[br] CloseLoop 17 Enables the VssHi close
                               loop tracking[br] PanicEn 16 Enables the VssHi
                               Panic Driver[br] BWError 15:14 Limits the loop
                               gain (ie: difference between code and tcode) to
                               +/- 2^(SlowBWError)[br] OpenLoop 13 Operates
                               VssHi in open loop mode with the target Vref
                               code directly driving the output DAC with no
                               feedback involved[br] SampleDivider 12:10
                               Controls the loop bandwidth by dividing down the
                               input clock: {0: Qclk, 1: Qclk/2, 2: Qclk/4, 3:
                               Qclk/8, 4: Qclk/16, 5: Qclk/32, 6: Qclk/64, 7:
                               Qclk/128}[br] LoBWDivider 9:8 For the slow
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] HiBWDivider 7:6 For the fast
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] Target 5:0 Unsigned integer
                               controlling the target VssHi voltage. Step size
                               of VccDDQ/192 and starting value of
                               VccDDQ*20/192
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROL_1_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* VSSHIORVREFCONTROL1_1_FNV_DDRIO_DAT7_CH_1_REG supported on:                  */
/*      BWV (0x402b1d48)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Extension for BDX. Multicast read for CH012 and CH345 versions are not supported.
*/


#define VSSHIORVREFCONTROL1_1_FNV_DDRIO_DAT7_CH_1_REG 0x1B240D48

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* BDX-specific extended control signal. */
    UINT32 rsvd_8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROL1_1_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCOMP_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b1e00)                                                        */
/* Register default value on BWV: 0x04000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Comp Values. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDCOMP_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E00

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 scomp : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /*
                               Scomp Value, Normally updated by Comp FSM via
                               CompBus. can be overriden via message channel if
                               periodical retrain is disabled.
                            */
    UINT32 tcocomp : 7;

                            /* Bits[12:6], Access Type=RWV, default=0x00000000*/

                            /*
                               Tco Comp Value, Normally updated by Comp FSM via
                               CompBus. can be overriden via message channel if
                               periodical retrain is disabled.
                            */
    UINT32 rcompdrvup : 6;

                            /* Bits[18:13], Access Type=RWV, default=0x00000000*/

                            /*
                               Rcomp Drv Up Value, Normally updated by Comp FSM
                               via CompBus. can be overriden via message
                               channel if periodical retrain is disabled.
                            */
    UINT32 rcompdrvdown : 6;

                            /* Bits[24:19], Access Type=RWV, default=0x00000000*/

                            /*
                               Rcomp Drv Dn Value, Normally updated by Comp FSM
                               via CompBus. can be overriden via message
                               channel if periodical retrain is disabled.
                            */
    UINT32 lscomp : 3;

                            /* Bits[27:25], Access Type=RWV, default=0x00000002*/

                            /* not used */
    UINT32 spare : 4;

                            /* Bits[31:28], Access Type=RWV, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DDRCRCMDCOMP_2_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCOMPOFFSET_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b1e04)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Comp Offset Values. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCMDCOMPOFFSET_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E04

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 17;

                            /* Bits[16:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ddrcmdctlrx_en : 12;

                            /* Bits[28:17], Access Type=RW, default=0x00000000*/

                            /* Enable DDRT Parity in CMDCTL */
    UINT32 rsvd_29 : 3;

                            /* Bits[31:29], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDCOMPOFFSET_2_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDPICODING_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1e08)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Pi Settings. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDPICODING_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E08

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdpicode0 : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay0 : 2;

                            /* Bits[7:6], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay - add 1 qclk cycle delay. */
    UINT32 rsvd_8 : 1;

                            /* Bits[8:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode1 : 6;

                            /* Bits[14:9], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay1 : 2;

                            /* Bits[16:15], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_17 : 1;

                            /* Bits[17:17], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode2 : 6;

                            /* Bits[23:18], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay2 : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_26 : 6;

                            /* Bits[31:26], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDPICODING_2_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1e0c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E0C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 visabusenable : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enable Visa debug bus LCB for CMD fub */
    UINT32 pirefclkdivenable : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* enable PiRef clock divider in xover */
    UINT32 xoveropmode : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* Xover Select between grid-PiRef and PiRef-PiN */
    UINT32 dllmask : 2;

                            /* Bits[5:4], Access Type=RW, default=0x00000000*/

                            /*
                               On weak lock exit, controls how long the
                               feedback to the phase detector is masked: {0: 1
                               qclk (required for delayline latency), 1: 2
                               qclk, 2: 3 qclk, 3: 4 qclk}
                            */
    UINT32 drvpupdis : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               This will be connected to all tx, and must
                               toggle 1->0 after a power state
                            */
    UINT32 txon : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Forces the CMD transmitter on, overriding any
                               power downs
                            */
    UINT32 intclkon : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Forces on all PI enables and the LCB enables in
                               the AFE fubs. Does not force on D0 PI enable or
                               override weaklock mode.
                            */
    UINT32 repclkon : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 iolbctl : 2;

                            /* Bits[11:10], Access Type=RW, default=0x00000000*/

                            /*
                               Controls IO Loopback. Ctl[1] enables IOLB mode
                               and Ctl[0] controls if this is a Setup(0) or
                               Hold(1) test
                            */
    UINT32 odtmode : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Forces the driver in ODT mode, where both the
                               pullup and pulldown are enabled. Used for Rstray
                               testing
                            */
    UINT32 cmdtxeq : 2;

                            /* Bits[14:13], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 rsvd_15 : 2;

                            /* Bits[16:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 lvmode : 2;

                            /* Bits[18:17], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 lvmodevalid : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 lvlshft_holden : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rxvref : 7;

                            /* Bits[27:21], Access Type=RW, default=0x00000000*/

                            /*
                               IOLB Vref Control. 2s compliment encoding from
                               1/3 Vdd to 2/3 Vdd with step size of Vdd/192
                               (7.8mV)
                            */
    UINT32 halflsbbit : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               enables fine grain Vref control, shift down the
                               Vref voltage by ~0.5 stepsize
                            */
    UINT32 vrefdisable : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Vref Disable */
    UINT32 ddr4modeenable : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Ddr4 Mode Enable, set to 1 in CMD2
                               (Func:5.Addr:C00 and Func:7.Addr:C00) fub to
                               bypass extra delay on parity bit
                            */
    UINT32 xovercal : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Enables Xover Calibration Training Mode */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS_2_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS2_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1e10)                                                        */
/* Register default value on BWV: 0x01400000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS2_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E10

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 20;

                            /* Bits[19:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 fnvddrcrdllpibypassen : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /* FNV DDR/PI Bypass Enable */
    UINT32 ddr4extend : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /* Enable finer vref resolution in ddr4 */
    UINT32 rsvd_22 : 1;

                            /* Bits[22:22], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdrxbiassel : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /* CmdRxBiasSel for Cmd Receiver */
    UINT32 forcecmdbiason : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000001*/

                            /* ForceCmdBiason for Cmd Receiver */
    UINT32 fnvcmdcrxoverbypassen : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* bypass ddrcmdctl xover for FNV */
    UINT32 cmdctlecapen : 2;

                            /* Bits[27:26], Access Type=RW, default=0x00000000*/

                            /* CmdCtl Buffer CtleCapEn */
    UINT32 cmdctleresen : 2;

                            /* Bits[29:28], Access Type=RW, default=0x00000000*/

                            /* CmdCtl Buffer CtleResEn */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS2_2_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCTLCOMP_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b1e14)                                                        */
/* Register default value on BWV: 0x04000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CTL Comp Values. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCTLCOMP_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E14

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 scomp : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /* Scomp Value */
    UINT32 tcocomp : 7;

                            /* Bits[12:6], Access Type=RWV, default=0x00000000*/

                            /* Tco Comp Value */
    UINT32 rcompdrvup : 6;

                            /* Bits[18:13], Access Type=RWV, default=0x00000000*/

                            /* Rcomp Drv Up Value */
    UINT32 rcompdrvdown : 6;

                            /* Bits[24:19], Access Type=RWV, default=0x00000000*/

                            /* Rcomp Drv Dn Value */
    UINT32 lscomp : 3;

                            /* Bits[27:25], Access Type=RWV, default=0x00000002*/

                            /* LevelShift Comp Value */
    UINT32 spare : 4;

                            /* Bits[31:28], Access Type=RWV, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DDRCRCTLCOMP_2_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCTLCOMPOFFSET_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b1e18)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CTL Comp Offset Values. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCTLCOMPOFFSET_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E18

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 18;

                            /* Bits[17:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdctlbufsel : 6;

                            /* Bits[23:18], Access Type=RW, default=0x00000000*/

                            /* CmdBuf or CtlBuf Selection */
    UINT32 iodirectionvalid : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /* Is the Direction (RX/TX Valid) */
    UINT32 rsvd_25 : 7;

                            /* Bits[31:25], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCTLCOMPOFFSET_2_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS3_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1e1c)                                                        */
/* Register default value on BWV: 0x0000007F                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls 3. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS3_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E1C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 bufdrvsegen : 5;

                            /* Bits[4:0], Access Type=RW, default=0x0000001F*/

                            /* Drive strength enable for CmdBuf/CtlBuf. */
    UINT32 cmdvrefpgen : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000001*/

                            /*
                               control the DdrVrefSelDQQnnnH pin on the
                               ddrvrefint generator
                            */
    UINT32 odtstrength : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000001*/

                            /* OdtStrength */
    UINT32 rsvd_7 : 1;

                            /* Bits[7:7], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 clkpibypass : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* Clk Pi Bypass for DIV2 */
    UINT32 divby2alignctl : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* Invert DAlign */
    UINT32 divby2disable : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* select qclk for cmdxover instead of Dclk */
    UINT32 odten : 12;

                            /* Bits[22:11], Access Type=RW, default=0x00000000*/

                            /* ODTDis for Cmd and Ctl buf */
    UINT32 cmdrefpiclkdelay : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /* CmdRefClk */
    UINT32 cmdbypass : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Contols to bypass entire XOVER CMD */
    UINT32 drvencrovrd : 2;

                            /* Bits[31:30], Access Type=RW, default=0x00000000*/

                            /*
                               Override for DriveEn-controlled delayed command
                               bit. [br] bit30 -> set to 1 in order to let
                               bit31 control the path (0 lets DriveEn control
                               it)[br] bit31 -> set to 1 for delayed command
                               bit, 0 for un-delayed command bit (from xover to
                               AFE)
                            */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS3_2_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCTLRANKSUSED_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1e20)                                                        */
/* Register default value on BWV: 0x0000003F                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CTL Ranks Used. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCTLRANKSUSED_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E20

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ranken : 6;

                            /* Bits[5:0], Access Type=RW, default=0x0000003F*/

                            /*
                               Enables output buffers for ctlbufpair 0 to
                               ctlbufpair6 , PI clocks and output datapaths for
                               this rank
                            */
    UINT32 rsvd_6 : 6;

                            /* Bits[11:6], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 lvlshft_holden : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rxbiasgcncomp : 2;

                            /* Bits[14:13], Access Type=RW, default=0x00000000*/

                            /*
                               used to compensate the GCN skew. The GCN skew
                               information should be[br] extracted by reading
                               and analyzing the final Rcomp code value. The
                               target spec[br] is to categorize the GCN skew in
                               3 process condition (mainly slow, fast,
                               typical).[br] (one example can be just reading
                               the 2 MLS bit of Rcomp code and determine if
                               the[br] GCN is slow, fast or typical). The
                               gcncomp is used for CTLE.[br] 11: gcn in slow
                               corner[br] 10: gcn in typical corner[br] 01: gcn
                               in fast corner
                            */
    UINT32 rsvd_15 : 1;

                            /* Bits[15:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 imodebiashighcm : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /* Imode bias control */
    UINT32 rxbiassel : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* Rx bias Sel */
    UINT32 cmdrxeqqnnnl : 3;

                            /* Bits[20:18], Access Type=RW, default=0x00000000*/

                            /* CmdRxEqQnnnL for RX CmdCtl Buf */
    UINT32 rsvd_21 : 3;

                            /* Bits[23:21], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ddrcmdrxbiasctl : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /* CmdRxBiasCtl for RX biasgen */
    UINT32 cmdpcasbiasclosedloopen : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* CmdPcasBiasClosedLoopEnQnnnH for RX biasgen */
    UINT32 ddrcmdrxbiasfoldedlegtrim : 2;

                            /* Bits[29:28], Access Type=RW, default=0x00000000*/

                            /* DdrCmdRxBiasFoldedLegTrim for RX biasgen */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCTLRANKSUSED_2_FNV_DDRIO_DAT7_CH_1_STRUCT;



/* DDRCRCMDTRAINING_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1e2c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Cmd Training Register. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDTRAINING_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E2C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 trainingoffset : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained PiCode Value. */
    UINT32 spare0 : 2;

                            /* Bits[7:6], Access Type=WO, default=0x00000000*/

                            /* Spare */
    UINT32 xoverphasedet : 14;

                            /* Bits[21:8], Access Type=ROV, default=0x00000000*/

                            /*
                               bits13:6 unused[br] bit5 output of phase
                               detector for I/O Pair 0[br] bit4 output of phase
                               detector for I/O Pair 1[br] bit3 output of phase
                               detector for I/O Pair 2[br] bit2 output of phase
                               detector for I/O Pair 3[br] bit1 output of phase
                               detector for I/O Pair 4[br] bit0 output of phase
                               detector for I/O Pair 5 (only on cmdctla FUBs)
                            */
    UINT32 trainingoffset2 : 6;

                            /* Bits[27:22], Access Type=RW, default=0x00000000*/

                            /*
                               Offset added to PiCode. Obtained via xover
                               calibration such that ClkPi aligns with grid
                               clock when PiCode=0.
                            */
    UINT32 rsvd_28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDTRAINING_2_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS1_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1e30)                                                        */
/* Register default value on BWV: 0x03C01000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls 1. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS1_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E30

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdoutputensel : 12;

                            /* Bits[11:0], Access Type=RW, default=0x00000000*/

                            /* CmdOutputEnable */
    UINT32 selectcompcode : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000001*/

                            /* Select CompCode between cmd or ctl */
    UINT32 rsvd_13 : 9;

                            /* Bits[21:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 dqstatdflt : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000003*/

                            /* Static leg enable */
    UINT32 odtstatdflt : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000003*/

                            /* Static leg enable */
    UINT32 spare2 : 6;

                            /* Bits[31:26], Access Type=RW, default=0x00000000*/

                            /* Spare2 */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS1_2_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDPICODING2_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1e34)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Pi Settings. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDPICODING2_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E34

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdpicode3 : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay3 : 2;

                            /* Bits[7:6], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_8 : 1;

                            /* Bits[8:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode4 : 6;

                            /* Bits[14:9], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay4 : 2;

                            /* Bits[16:15], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_17 : 1;

                            /* Bits[17:17], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode5 : 6;

                            /* Bits[23:18], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay5 : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_26 : 6;

                            /* Bits[31:26], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDPICODING2_2_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDPICODING3_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1e38)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Pi Settings. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDPICODING3_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E38

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdpicode6 : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay6 : 2;

                            /* Bits[7:6], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDPICODING3_2_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* VSSHIORVREFCONTROL_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b1e40)                                                        */
/* Register default value on BWV: 0x004D8238                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Multicast read for CH012 and CH345 versions are not supported.
*/


#define VSSHIORVREFCONTROL_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E40

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 24;

                            /* Bits[23:0], Access Type=RW, default=0x004D8238*/

                            /*
                               Channel 0 fubs : VssHi adjust setting. Channel1
                               fubs: DIMM VREF adjust settings.[br] [br] VssHi
                               Field Description:[br] [br] Field Bits
                               Description[br] ------- ---- -------------------
                               ------------------------------------------------
                               ------------------------------------------------
                               --------------------------------------------[br]
                               SelCode 23 Selects the code to output: {0: Code,
                               1: TCode}[br] GainBoost 22 Enable gain boost is
                               panic mode by updating code/tcode[br]
                               PanicVoltage 21:18 Unsigned integer controlling
                               the voltage error on VssHi that will trigger the
                               panic driver. Step size of VccDDQ/192 (0 to
                               117mV)[br] CloseLoop 17 Enables the VssHi close
                               loop tracking[br] PanicEn 16 Enables the VssHi
                               Panic Driver[br] BWError 15:14 Limits the loop
                               gain (ie: difference between code and tcode) to
                               +/- 2^(SlowBWError)[br] OpenLoop 13 Operates
                               VssHi in open loop mode with the target Vref
                               code directly driving the output DAC with no
                               feedback involved[br] SampleDivider 12:10
                               Controls the loop bandwidth by dividing down the
                               input clock: {0: Qclk, 1: Qclk/2, 2: Qclk/4, 3:
                               Qclk/8, 4: Qclk/16, 5: Qclk/32, 6: Qclk/64, 7:
                               Qclk/128}[br] LoBWDivider 9:8 For the slow
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] HiBWDivider 7:6 For the fast
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] Target 5:0 Unsigned integer
                               controlling the target VssHi voltage. Step size
                               of VccDDQ/192 and starting value of
                               VccDDQ*20/192
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROL_2_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* VSSHIORVREFCONTROL1_2_FNV_DDRIO_DAT7_CH_1_REG supported on:                  */
/*      BWV (0x402b1e48)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Extension for BDX. Multicast read for CH012 and CH345 versions are not supported.
*/


#define VSSHIORVREFCONTROL1_2_FNV_DDRIO_DAT7_CH_1_REG 0x1B240E48

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* BDX-specific extended control signal. */
    UINT32 rsvd_8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROL1_2_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCOMP_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b1f00)                                                        */
/* Register default value on BWV: 0x04000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Comp Values. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDCOMP_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F00

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 scomp : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /*
                               Scomp Value, Normally updated by Comp FSM via
                               CompBus. can be overriden via message channel if
                               periodical retrain is disabled.
                            */
    UINT32 tcocomp : 7;

                            /* Bits[12:6], Access Type=RWV, default=0x00000000*/

                            /*
                               Tco Comp Value, Normally updated by Comp FSM via
                               CompBus. can be overriden via message channel if
                               periodical retrain is disabled.
                            */
    UINT32 rcompdrvup : 6;

                            /* Bits[18:13], Access Type=RWV, default=0x00000000*/

                            /*
                               Rcomp Drv Up Value, Normally updated by Comp FSM
                               via CompBus. can be overriden via message
                               channel if periodical retrain is disabled.
                            */
    UINT32 rcompdrvdown : 6;

                            /* Bits[24:19], Access Type=RWV, default=0x00000000*/

                            /*
                               Rcomp Drv Dn Value, Normally updated by Comp FSM
                               via CompBus. can be overriden via message
                               channel if periodical retrain is disabled.
                            */
    UINT32 lscomp : 3;

                            /* Bits[27:25], Access Type=RWV, default=0x00000002*/

                            /* not used */
    UINT32 spare : 4;

                            /* Bits[31:28], Access Type=RWV, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DDRCRCMDCOMP_0_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCOMPOFFSET_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b1f04)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Comp Offset Values. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCMDCOMPOFFSET_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F04

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 17;

                            /* Bits[16:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ddrcmdctlrx_en : 12;

                            /* Bits[28:17], Access Type=RW, default=0x00000000*/

                            /* Enable DDRT Parity in CMDCTL */
    UINT32 rsvd_29 : 3;

                            /* Bits[31:29], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDCOMPOFFSET_0_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDPICODING_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1f08)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Pi Settings. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDPICODING_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F08

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdpicode0 : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay0 : 2;

                            /* Bits[7:6], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay - add 1 qclk cycle delay. */
    UINT32 rsvd_8 : 1;

                            /* Bits[8:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode1 : 6;

                            /* Bits[14:9], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay1 : 2;

                            /* Bits[16:15], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_17 : 1;

                            /* Bits[17:17], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode2 : 6;

                            /* Bits[23:18], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay2 : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_26 : 6;

                            /* Bits[31:26], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDPICODING_0_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1f0c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F0C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 visabusenable : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enable Visa debug bus LCB for CMD fub */
    UINT32 pirefclkdivenable : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* enable PiRef clock divider in xover */
    UINT32 xoveropmode : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* Xover Select between grid-PiRef and PiRef-PiN */
    UINT32 dllmask : 2;

                            /* Bits[5:4], Access Type=RW, default=0x00000000*/

                            /*
                               On weak lock exit, controls how long the
                               feedback to the phase detector is masked: {0: 1
                               qclk (required for delayline latency), 1: 2
                               qclk, 2: 3 qclk, 3: 4 qclk}
                            */
    UINT32 drvpupdis : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               This will be connected to all tx, and must
                               toggle 1->0 after a power state
                            */
    UINT32 txon : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Forces the CMD transmitter on, overriding any
                               power downs
                            */
    UINT32 intclkon : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Forces on all PI enables and the LCB enables in
                               the AFE fubs. Does not force on D0 PI enable or
                               override weaklock mode.
                            */
    UINT32 repclkon : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 iolbctl : 2;

                            /* Bits[11:10], Access Type=RW, default=0x00000000*/

                            /*
                               Controls IO Loopback. Ctl[1] enables IOLB mode
                               and Ctl[0] controls if this is a Setup(0) or
                               Hold(1) test
                            */
    UINT32 odtmode : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Forces the driver in ODT mode, where both the
                               pullup and pulldown are enabled. Used for Rstray
                               testing
                            */
    UINT32 cmdtxeq : 2;

                            /* Bits[14:13], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 rsvd_15 : 2;

                            /* Bits[16:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 lvmode : 2;

                            /* Bits[18:17], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 lvmodevalid : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /* not used */
    UINT32 lvlshft_holden : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rxvref : 7;

                            /* Bits[27:21], Access Type=RW, default=0x00000000*/

                            /*
                               IOLB Vref Control. 2s compliment encoding from
                               1/3 Vdd to 2/3 Vdd with step size of Vdd/192
                               (7.8mV)
                            */
    UINT32 halflsbbit : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               enables fine grain Vref control, shift down the
                               Vref voltage by ~0.5 stepsize
                            */
    UINT32 vrefdisable : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Vref Disable */
    UINT32 ddr4modeenable : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Ddr4 Mode Enable, set to 1 in CMD2
                               (Func:5.Addr:C00 and Func:7.Addr:C00) fub to
                               bypass extra delay on parity bit
                            */
    UINT32 xovercal : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Enables Xover Calibration Training Mode */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS_0_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS2_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1f10)                                                        */
/* Register default value on BWV: 0x01400000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS2_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F10

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 20;

                            /* Bits[19:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 fnvddrcrdllpibypassen : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /* FNV DDR/PI Bypass Enable */
    UINT32 ddr4extend : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /* Enable finer vref resolution in ddr4 */
    UINT32 rsvd_22 : 1;

                            /* Bits[22:22], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdrxbiassel : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /* CmdRxBiasSel for Cmd Receiver */
    UINT32 forcecmdbiason : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000001*/

                            /* ForceCmdBiason for Cmd Receiver */
    UINT32 fnvcmdcrxoverbypassen : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /* bypass ddrcmdctl xover for FNV */
    UINT32 cmdctlecapen : 2;

                            /* Bits[27:26], Access Type=RW, default=0x00000000*/

                            /* CmdCtl Buffer CtleCapEn */
    UINT32 cmdctleresen : 2;

                            /* Bits[29:28], Access Type=RW, default=0x00000000*/

                            /* CmdCtl Buffer CtleResEn */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS2_0_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCTLCOMP_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                         */
/*      BWV (0x402b1f14)                                                        */
/* Register default value on BWV: 0x04000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CTL Comp Values. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCTLCOMP_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F14

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 scomp : 6;

                            /* Bits[5:0], Access Type=RWV, default=0x00000000*/

                            /* Scomp Value */
    UINT32 tcocomp : 7;

                            /* Bits[12:6], Access Type=RWV, default=0x00000000*/

                            /* Tco Comp Value */
    UINT32 rcompdrvup : 6;

                            /* Bits[18:13], Access Type=RWV, default=0x00000000*/

                            /* Rcomp Drv Up Value */
    UINT32 rcompdrvdown : 6;

                            /* Bits[24:19], Access Type=RWV, default=0x00000000*/

                            /* Rcomp Drv Dn Value */
    UINT32 lscomp : 3;

                            /* Bits[27:25], Access Type=RWV, default=0x00000002*/

                            /* LevelShift Comp Value */
    UINT32 spare : 4;

                            /* Bits[31:28], Access Type=RWV, default=0x00000000*/

                            /* Spare */

  } Bits;
  UINT32 Data;

} DDRCRCTLCOMP_0_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCTLCOMPOFFSET_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b1f18)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CTL Comp Offset Values. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCTLCOMPOFFSET_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F18

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 rsvd_0 : 18;

                            /* Bits[17:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdctlbufsel : 6;

                            /* Bits[23:18], Access Type=RW, default=0x00000000*/

                            /* CmdBuf or CtlBuf Selection */
    UINT32 iodirectionvalid : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /* Is the Direction (RX/TX Valid) */
    UINT32 rsvd_25 : 7;

                            /* Bits[31:25], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCTLCOMPOFFSET_0_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS3_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1f1c)                                                        */
/* Register default value on BWV: 0x0000007F                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls 3. Multicast read for CMDCTL_CH012 and CMDCTL_CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS3_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F1C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 bufdrvsegen : 5;

                            /* Bits[4:0], Access Type=RW, default=0x0000001F*/

                            /* Drive strength enable for CmdBuf/CtlBuf. */
    UINT32 cmdvrefpgen : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000001*/

                            /*
                               control the DdrVrefSelDQQnnnH pin on the
                               ddrvrefint generator
                            */
    UINT32 odtstrength : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000001*/

                            /* OdtStrength */
    UINT32 rsvd_7 : 1;

                            /* Bits[7:7], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 clkpibypass : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* Clk Pi Bypass for DIV2 */
    UINT32 divby2alignctl : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* Invert DAlign */
    UINT32 divby2disable : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* select qclk for cmdxover instead of Dclk */
    UINT32 odten : 12;

                            /* Bits[22:11], Access Type=RW, default=0x00000000*/

                            /* ODTDis for Cmd and Ctl buf */
    UINT32 cmdrefpiclkdelay : 6;

                            /* Bits[28:23], Access Type=RW, default=0x00000000*/

                            /* CmdRefClk */
    UINT32 cmdbypass : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /* Contols to bypass entire XOVER CMD */
    UINT32 drvencrovrd : 2;

                            /* Bits[31:30], Access Type=RW, default=0x00000000*/

                            /*
                               Override for DriveEn-controlled delayed command
                               bit. [br] bit30 -> set to 1 in order to let
                               bit31 control the path (0 lets DriveEn control
                               it)[br] bit31 -> set to 1 for delayed command
                               bit, 0 for un-delayed command bit (from xover to
                               AFE)
                            */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS3_0_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCTLRANKSUSED_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1f20)                                                        */
/* Register default value on BWV: 0x0000003F                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CTL Ranks Used. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCTLRANKSUSED_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F20

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ranken : 6;

                            /* Bits[5:0], Access Type=RW, default=0x0000003F*/

                            /*
                               Enables output buffers for ctlbufpair 0 to
                               ctlbufpair6 , PI clocks and output datapaths for
                               this rank
                            */
    UINT32 rsvd_6 : 6;

                            /* Bits[11:6], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 lvlshft_holden : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               level shift hold enable[br] Holds the HV control
                               values and power down mode the level
                               shifters.[br] Apply '1' after training. Slow
                               timing - not advised for fast enabling
                            */
    UINT32 rxbiasgcncomp : 2;

                            /* Bits[14:13], Access Type=RW, default=0x00000000*/

                            /*
                               used to compensate the GCN skew. The GCN skew
                               information should be[br] extracted by reading
                               and analyzing the final Rcomp code value. The
                               target spec[br] is to categorize the GCN skew in
                               3 process condition (mainly slow, fast,
                               typical).[br] (one example can be just reading
                               the 2 MLS bit of Rcomp code and determine if
                               the[br] GCN is slow, fast or typical). The
                               gcncomp is used for CTLE.[br] 11: gcn in slow
                               corner[br] 10: gcn in typical corner[br] 01: gcn
                               in fast corner
                            */
    UINT32 rsvd_15 : 1;

                            /* Bits[15:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 imodebiashighcm : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /* Imode bias control */
    UINT32 rxbiassel : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* Rx bias Sel */
    UINT32 cmdrxeqqnnnl : 3;

                            /* Bits[20:18], Access Type=RW, default=0x00000000*/

                            /* CmdRxEqQnnnL for RX CmdCtl Buf */
    UINT32 rsvd_21 : 3;

                            /* Bits[23:21], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ddrcmdrxbiasctl : 3;

                            /* Bits[26:24], Access Type=RW, default=0x00000000*/

                            /* CmdRxBiasCtl for RX biasgen */
    UINT32 cmdpcasbiasclosedloopen : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /* CmdPcasBiasClosedLoopEnQnnnH for RX biasgen */
    UINT32 ddrcmdrxbiasfoldedlegtrim : 2;

                            /* Bits[29:28], Access Type=RW, default=0x00000000*/

                            /* DdrCmdRxBiasFoldedLegTrim for RX biasgen */
    UINT32 rsvd_30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCTLRANKSUSED_0_FNV_DDRIO_DAT7_CH_1_STRUCT;



/* DDRCRCMDTRAINING_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                     */
/*      BWV (0x402b1f2c)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* Cmd Training Register. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDTRAINING_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F2C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 trainingoffset : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /* Offset added to Trained PiCode Value. */
    UINT32 spare0 : 2;

                            /* Bits[7:6], Access Type=WO, default=0x00000000*/

                            /* Spare */
    UINT32 xoverphasedet : 14;

                            /* Bits[21:8], Access Type=ROV, default=0x00000000*/

                            /*
                               bits13:6 unused[br] bit5 output of phase
                               detector for I/O Pair 0[br] bit4 output of phase
                               detector for I/O Pair 1[br] bit3 output of phase
                               detector for I/O Pair 2[br] bit2 output of phase
                               detector for I/O Pair 3[br] bit1 output of phase
                               detector for I/O Pair 4[br] bit0 output of phase
                               detector for I/O Pair 5 (only on cmdctla FUBs)
                            */
    UINT32 trainingoffset2 : 6;

                            /* Bits[27:22], Access Type=RW, default=0x00000000*/

                            /*
                               Offset added to PiCode. Obtained via xover
                               calibration such that ClkPi aligns with grid
                               clock when PiCode=0.
                            */
    UINT32 rsvd_28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDTRAINING_0_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDCONTROLS1_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1f30)                                                        */
/* Register default value on BWV: 0x03C01000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Controls 1. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDCONTROLS1_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F30

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdoutputensel : 12;

                            /* Bits[11:0], Access Type=RW, default=0x00000000*/

                            /* CmdOutputEnable */
    UINT32 selectcompcode : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000001*/

                            /* Select CompCode between cmd or ctl */
    UINT32 rsvd_13 : 9;

                            /* Bits[21:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 dqstatdflt : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000003*/

                            /* Static leg enable */
    UINT32 odtstatdflt : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000003*/

                            /* Static leg enable */
    UINT32 spare2 : 6;

                            /* Bits[31:26], Access Type=RW, default=0x00000000*/

                            /* Spare2 */

  } Bits;
  UINT32 Data;

} DDRCRCMDCONTROLS1_0_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDPICODING2_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1f34)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Pi Settings. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDPICODING2_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F34

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdpicode3 : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay3 : 2;

                            /* Bits[7:6], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_8 : 1;

                            /* Bits[8:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode4 : 6;

                            /* Bits[14:9], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay4 : 2;

                            /* Bits[16:15], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_17 : 1;

                            /* Bits[17:17], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 cmdpicode5 : 6;

                            /* Bits[23:18], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay5 : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_26 : 6;

                            /* Bits[31:26], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDPICODING2_0_FNV_DDRIO_DAT7_CH_1_STRUCT;

/* DDRCRCMDPICODING3_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                    */
/*      BWV (0x402b1f38)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* CMD Pi Settings. Multicast read for CH012 and CH345 versions are not supported.
*/


#define DDRCRCMDPICODING3_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F38

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cmdpicode6 : 6;

                            /* Bits[5:0], Access Type=RW, default=0x00000000*/

                            /*
                               Cmd Pi Code[br] [5:0] - Pi setting with [5]
                               being the PiMSB sel
                            */
    UINT32 cmdpilogicdelay6 : 2;

                            /* Bits[7:6], Access Type=RW, default=0x00000000*/

                            /* Cmd Pi Logic Delay */
    UINT32 rsvd_8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DDRCRCMDPICODING3_0_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* VSSHIORVREFCONTROL_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                   */
/*      BWV (0x402b1f40)                                                        */
/* Register default value on BWV: 0x004D8238                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Multicast read for CH012 and CH345 versions are not supported.
*/


#define VSSHIORVREFCONTROL_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F40

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 24;

                            /* Bits[23:0], Access Type=RW, default=0x004D8238*/

                            /*
                               Channel 0 fubs : VssHi adjust setting. Channel1
                               fubs: DIMM VREF adjust settings.[br] [br] VssHi
                               Field Description:[br] [br] Field Bits
                               Description[br] ------- ---- -------------------
                               ------------------------------------------------
                               ------------------------------------------------
                               --------------------------------------------[br]
                               SelCode 23 Selects the code to output: {0: Code,
                               1: TCode}[br] GainBoost 22 Enable gain boost is
                               panic mode by updating code/tcode[br]
                               PanicVoltage 21:18 Unsigned integer controlling
                               the voltage error on VssHi that will trigger the
                               panic driver. Step size of VccDDQ/192 (0 to
                               117mV)[br] CloseLoop 17 Enables the VssHi close
                               loop tracking[br] PanicEn 16 Enables the VssHi
                               Panic Driver[br] BWError 15:14 Limits the loop
                               gain (ie: difference between code and tcode) to
                               +/- 2^(SlowBWError)[br] OpenLoop 13 Operates
                               VssHi in open loop mode with the target Vref
                               code directly driving the output DAC with no
                               feedback involved[br] SampleDivider 12:10
                               Controls the loop bandwidth by dividing down the
                               input clock: {0: Qclk, 1: Qclk/2, 2: Qclk/4, 3:
                               Qclk/8, 4: Qclk/16, 5: Qclk/32, 6: Qclk/64, 7:
                               Qclk/128}[br] LoBWDivider 9:8 For the slow
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] HiBWDivider 7:6 For the fast
                               integrator, selects the net number of samples in
                               a given direction to trip the filter. {0: 4
                               samples, 1: 16 samples, 2: 32 samples, 3: 64
                               samples}[br] Target 5:0 Unsigned integer
                               controlling the target VssHi voltage. Step size
                               of VccDDQ/192 and starting value of
                               VccDDQ*20/192
                            */
    UINT32 rsvd_24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROL_0_FNV_DDRIO_DAT7_CH_1_STRUCT;


/* VSSHIORVREFCONTROL1_0_FNV_DDRIO_DAT7_CH_1_REG supported on:                  */
/*      BWV (0x402b1f48)                                                        */
/* Register default value on BWV: 0x00000000                                    */
/* BWV Register File:    2_22_1_BWV                                             */
/* Struct generated from BWV BDF: 2_22_1                                        */
/* BWV Security PolicyGroup:                                                    */
/* VssHi Controls on Channel 0 only. DIMM Vref Controls on  Channel1, databyte 7, only. Extension for BDX. Multicast read for CH012 and CH345 versions are not supported.
*/


#define VSSHIORVREFCONTROL1_0_FNV_DDRIO_DAT7_CH_1_REG 0x1B240F48

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 vsshiorvrefctl : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* BDX-specific extended control signal. */
    UINT32 rsvd_8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} VSSHIORVREFCONTROL1_0_FNV_DDRIO_DAT7_CH_1_STRUCT;
#endif /* _FNV_DDRIO_DAT7_CH_1_h */