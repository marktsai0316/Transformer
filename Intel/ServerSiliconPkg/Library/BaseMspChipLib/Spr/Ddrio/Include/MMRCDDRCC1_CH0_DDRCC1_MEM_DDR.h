/** @file
  File name:    MMRCDDRCC1_CH0_DDRCC1_MEM_DDR.h
  Input File:   SPR_MRC_DDR.xlsx
  THIS FILE IS AUTO-GENERATED BY THE MSP TOOL. DO NOT CHANGE THIS CODE.
  If edits are needed in this file, they must be done via the MSP tool.
  If there is additional project-specific data required by the MSP, it
  can be placed in MMRCDDRCC1_CH0_DDRCC1_MEM_DDR.h, which is used for non-tool-generated
  data
  Includes register defines specific to a project.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2005 - 2020 Intel Corporation. <BR>

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
**/

#ifndef _MMRCDDRCC1_CH0_DDRCC1_MEM_DDR_H_DDR_
#define _MMRCDDRCC1_CH0_DDRCC1_MEM_DDR_H_DDR_

#include "MspDataTypes.h"

#define DDRCC_CTL1_BIT_0__DDRCC1_CH0_DDRCC1_MEM_REG_DDR    0x0001A900
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_0__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_1__DDRCC1_CH0_DDRCC1_MEM_REG_DDR    0x0001A904
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_1__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_2__DDRCC1_CH0_DDRCC1_MEM_REG_DDR    0x0001A908
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_2__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_3__DDRCC1_CH0_DDRCC1_MEM_REG_DDR    0x0001A90C
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_3__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_4__DDRCC1_CH0_DDRCC1_MEM_REG_DDR    0x0001A910
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_4__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_5__DDRCC1_CH0_DDRCC1_MEM_REG_DDR    0x0001A914
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_5__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_6__DDRCC1_CH0_DDRCC1_MEM_REG_DDR    0x0001A918
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_6__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_7__DDRCC1_CH0_DDRCC1_MEM_REG_DDR    0x0001A91C
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_7__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_8__DDRCC1_CH0_DDRCC1_MEM_REG_DDR    0x0001A920
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_8__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_9__DDRCC1_CH0_DDRCC1_MEM_REG_DDR    0x0001A924
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_9__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_10__DDRCC1_CH0_DDRCC1_MEM_REG_DDR   0x0001A928
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_10__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_11__DDRCC1_CH0_DDRCC1_MEM_REG_DDR   0x0001A92C
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_11__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_12__DDRCC1_CH0_DDRCC1_MEM_REG_DDR   0x0001A930
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_12__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_13__DDRCC1_CH0_DDRCC1_MEM_REG_DDR   0x0001A934
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_13__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_14__DDRCC1_CH0_DDRCC1_MEM_REG_DDR   0x0001A938
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_14__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_15__DDRCC1_CH0_DDRCC1_MEM_REG_DDR   0x0001A93C
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_15__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_16__DDRCC1_CH0_DDRCC1_MEM_REG_DDR   0x0001A940
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_16__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_17__DDRCC1_CH0_DDRCC1_MEM_REG_DDR   0x0001A944
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_17__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_18__DDRCC1_CH0_DDRCC1_MEM_REG_DDR   0x0001A948
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_18__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_19__DDRCC1_CH0_DDRCC1_MEM_REG_DDR   0x0001A94C
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_19__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_20__DDRCC1_CH0_DDRCC1_MEM_REG_DDR   0x0001A950
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_20__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_CTL1_BIT_21__DDRCC1_CH0_DDRCC1_MEM_REG_DDR   0x0001A954
typedef union {
  struct {
    //
    // Rxamp (summer) offset Control. Mid code is 30. (0=max +ve offset, 30=no offset,
    // 60=max -ve offset, 61,62,63=not used)[br] 
    //                     This field can be programed by BIOS or HW cal FSM.
    // 
    // Bits[5:0], RW/V, default = 0x1E
    //
    UINT32 sa_offset : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 26;
  } Bits;
  UINT32 Data;
} DDRCC_CTL1_BIT_21__DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;

#define DDRCC_DLL_CTL0_DDRCC1_CH0_DDRCC1_MEM_REG_DDR       0x0001A958
typedef union {
  struct {
    //
    // BIOS must program this DLL  discharge timer based on the analog tuning value and
    // hclk freq before enable the DLL. The default value is based on hclk is 1200 MHz
    // and discharge time is 30ns. 
    // 
    // Bits[5:0], RW, default = 0x24
    //
    UINT32 dll_discharge_tmr : 6;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[6:6], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description : 1;
    //
    // BIOS must program this DLL lock timer based on the analog tuning value and hclk
    // freq before enable the DLL. The default value is based on hclk is 1200 MHz and
    // lock time is 50ns. 
    // 
    // Bits[13:7], RW, default = 0x3C
    //
    UINT32 dll_lock_tmr : 7;
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[31:14], Unknown, default = Unknown
    //
    UINT32 missing_from_register_description_1 : 18;
  } Bits;
  UINT32 Data;
} DDRCC_DLL_CTL0_DDRCC1_CH0_DDRCC1_MEM_STRUCT_DDR;


#endif // _MMRCDDRCC1_CH0_DDRCC1_MEM_DDR_H_DDR_