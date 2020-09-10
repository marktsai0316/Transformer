/** @file
  File name:    MMRCPROJECT_DEFINITIONS_GENERATED_DDR.h
  Input File:   SPR_MRC_DDR.xlsx
  THIS FILE IS AUTO-GENERATED BY THE MSP TOOL. DO NOT CHANGE THIS CODE.
  If edits are needed in this file, they must be done via the MSP tool.
  If there is additional project-specific data required by the MSP, it
  can be placed in MMRCPROJECT_DEFINITIONS_GENERATED_DDR.h, which is used for non-tool-generated
  data
  Includes all hard defines specific to a project. Things like
  the maximum number of channels, ranks, DIMMs, etc, should be included here. 

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

#ifndef _MMRCPROJECT_DEFINITIONS_GENERATED_DDR_H_DDR_
#define _MMRCPROJECT_DEFINITIONS_GENERATED_DDR_H_DDR_

//
// All boxtypes supported by the MSP. Boxtypes are distinct components of silicon.
//
#define DDRCC0_CH0_DDRCC0_MEM_DDR                          0x00
#define DDRCC0_CH0A_DDRCC0_MEM_DDR                         0x01
#define DDRCC0_CHALL_DDRCC0_MEM_DDR                        0x02
#define DDRCC1_CH0_DDRCC1_MEM_DDR                          0x03
#define DDRCC1_CH0A_DDRCC1_MEM_DDR                         0x04
#define DDRCC1_CHALL_DDRCC1_MEM_DDR                        0x05
#define DDRCLK_CH0_MEM_DDR                                 0x06
#define DDRCLK_CHALL_MEM_DDR                               0x07
#define DDRCOMP_MEM_DDR                                    0x08
#define DDRD0_N0_CH0_DDRD0_N0_MEM_DDR                      0x09
#define DDRD0_N0_CH0A_0_DDRD0_N0_MEM_DDR                   0x0A
#define DDRD0_N0_CHALL_DDRD0_N0_MEM_DDR                    0x0B
#define DDRD1_N0_CH0_DDRD1_N0_MEM_DDR                      0x0C
#define DDRD1_N0_CH0A_0_DDRD1_N0_MEM_DDR                   0x0D
#define DDRD1_N0_CHALL_DDRD1_N0_MEM_DDR                    0x0E
#define DDRINTF_MEM_DDR                                    0x0F
#define DDRSAI_DDRSAI_MEM_DDR                              0x10
#define MCMISC_MEM_MCMISC_CSR_DDR                          0x11
#define MC_DEC_MEM_CSR_DDR                                 0x12
//
// Maximum Box Types across blueprints
//
#define MAX_BOXES_DDR                                      0x13
//
// Maximum IO Levels across blueprints
//
#define MAX_IO_LEVELS_DDR                                  0x01
//
// Maximum Box Types for BLUEPRINT_SPR
//
#define BOXES_BLUEPRINT_SPR_DDR                            0x13
//
// Maximum length of the boxtype strings
//
#define MAX_BOXNAME_LENGTH_DDR                             29
//
// Maximum number of GetSets Sheets
//
#define MAX_GETSETS_DDR                                    1
//
// Maximum number of blueprints
//
#define MAX_BLUEPRINTS_DDR                                 1
//
// Number assignments for each blueprint
//
#define BLUEPRINT_SPR_DDR                                  0
//
// Maximum number of Instances
//
#define MAX_INSTANCE_PORTS_DDR                             476
//
// Maximum Instance Ports for BLUEPRINT_SPR
//
#define INSTANCE_PORTS_BLUEPRINT_SPR_DDR                   476
//
// Maximum string length of all register names and fieldnames.
//
#define MAX_REGISTER_NAME_LENGTH_DDR                       0x0026
//
// This project does not contain 64 bit variables.
//
#define USE_64_BIT_VARIABLES_DDR                           0
//
// Max Channel Per System
//
#define MAX_CHANNELS_DDR                                   8
//
// Max Dimms Per Channel
//
#define MAX_DIMMS_DDR                                      0
//
// Max Ranks Per Channel
//
#define MAX_RANKS_DDR                                      8
//
// Max Strobes Per Channel
//
#define MAX_STROBES_DDR                                    18
//
// Bytelanes Per Module
//
#define MAX_BYTELANES_PER_DQ_MODULE_DDR                    0
//
// DQ Modules Per Channel
//
#define MAX_DQ_MODULES_DDR                                 0
//
// Width of the entire bus in bits (i.e. 64 for non-ECC and 72 for ECC)
//
#define MAX_BUS_WIDTH_DDR                                  0
//
// Supply own GetSet Functions
//
#define USE_GET_SET_FROM_SPREADSHEET_DDR                   0
//
// Number of commands sent to DRAM during Jedec Init
//
#define MR_COUNT_DDR                                       0
//
// Print MRC functions as they execute
//
#define CAPSULESTRINGS_DDR                                 1
//
// Display register names with dumping
//
#define DUMP_REGISTER_NAMES_DDR                            0
//
// Display register fields when dumping registers
//
#define DUMP_REGISTER_FIELDS_DDR                           0
//
// Analog DLL support
//
#define ANALOG_DLL_SUPPORT_BLUEPRINT_SPR_DDR               0
//
// Digital DLL support
//
#define DIGITAL_DLL_SUPPORT_BLUEPRINT_SPR_DDR              0
//
// Clocl Crossing Delay Elements. Most Project will have this number as '1'
//
#define NUM_CC_DEPENDENT_ELEMENTS_BLUEPRINT_SPR_DDR        1
//
// Definitions for register initialization sequence that tell the common MSP libraries
// how to program a register, whether the offset is 8 or 16 bits, etc.
//
//
// Max number of DLLs supported (analog plus digital).
//
#define MAX_DLL_COUNT_DDR                                  1
//
// Number of DLLs supported (analog plus digital) for BLUEPRINT_SPR
//
#define DLL_COUNT_BLUEPRINT_SPR_DDR                        0
//
// Max number of registers needed to be cached for the GetSet functions.
//
#define MAX_NUM_CACHE_ELEMENTS_DDR                         1
#define MAX_NUM_CACHE_ELEMENTS_PB_DDR                      1
#define MAX_NUM_CACHE_ELEMENTS_NON_SR_DDR                  1
#define MAX_NUM_CACHE_ELEMENTS_NON_SR_PB_DDR               1
//
// Max number of delay types (i.e. receive enable, TX DQS, etc).
//
#define MAX_NUM_ALGOS_DDR                                  1
//
// Max number of delay elements per delay type.
//
#define MAX_NUM_DELAY_ELEMENTS_DDR                         1
//
// Max number of clock crossing (deadband) elements per delay type.
//
#define MAX_NUM_CC_ELEMENTS_DDR                            1
//
// Max number of clock crossing (deadband) ranges.
//
#define MAX_NUM_CC_RANGES_DDR                              1
//
// Max number of elements (delay and CC) per delay type.
//
#define MAX_NUM_ELEMENTS_PER_ALGO_DDR                      2
//
// Max number of elements in the Signal Info Array
//
#define MAX_SIGNAL_INFO_ELEMENTS_DDR                       1
//
// Max number of frequencies supported by DVFS (dynamic voltage and frequency scaling).
//
#define MAX_NUM_DVFS_DDR                                   1
//
// Indices of each delay type.
//
//
// These are signal groups. Subtract 0x4000 from each to get the right index for each group.
//
//
// Max number of group signals
//
#define MAX_NUM_GROUP_DDR                                  1
//
// Index for unique get/set calls which aren't tied to a particular delay/cc type.
//
//
// Max number of unique signals
//
#define MAX_NUM_UNIQUE_DDR                                 1
//
// External functions that need to be called for GetSet elements which require and external function to read/write the element.
//
//
// Max number of elements (delay and CC) per delay type.
//
#define MAX_NUM_ELEMENTS_DDR                               1
//
// Total different PFCT variations supported by this project.
//
#define NUM_PLAT_DDR                                       6
#define NUM_FREQ_DDR                                       15
#define NUM_CONF_DDR                                       1
#define NUM_TYPE_DDR                                       4
//
// Macros for converting PFCT combinations from the generated tool output into correct bitmasks for the Init sequence.
//
#define P_DDR(p)                                           CONV1(p)
#define F_DDR(f)                                           CONV2(f)
#define C_DDR(c)                                           CONV1(c)
#define T_DDR(t)                                           CONV1(t)
#define PF_DDR(p,f)                                        CONV3((((p) << NUM_FREQ_DDR) + (f)))
#define PT_DDR(p,t)                                        CONV2((((p) << NUM_TYPE_DDR) + (t)))
#define PC_DDR(p,c)                                        CONV1((((p) << NUM_CONF_DDR) + (c)))
#define FT_DDR(f,t)                                        CONV3((((f) << NUM_TYPE_DDR) + (t)))
#define FC_DDR(f,c)                                        CONV2((((f) << NUM_CONF_DDR) + (c)))
#define CT_DDR(c,t)                                        CONV1((((c) << NUM_TYPE_DDR) + (t)))
#define PFT_DDR(p,f,t)                                     CONV4((((p) << (NUM_FREQ_DDR + NUM_TYPE_DDR)) + ((f) << NUM_TYPE_DDR) + (t)))
#define PFC_DDR(p,f,c)                                     CONV3((((p) << (NUM_FREQ_DDR + NUM_CONF_DDR)) + ((f) << NUM_CONF_DDR) + (c)))
#define PCT_DDR(p,c,t)                                     CONV2((((p) << (NUM_CONF_DDR + NUM_TYPE_DDR)) + ((c) << NUM_TYPE_DDR) + (t)))
#define FCT_DDR(f,c,t)                                     CONV3((((f) << (NUM_CONF_DDR + NUM_TYPE_DDR)) + ((c) << NUM_TYPE_DDR) + (t)))
#define PFCT_DDR(p,f,c,t)                                  CONV4((((p) << (NUM_FREQ_DDR + NUM_CONF_DDR + NUM_TYPE_DDR)) + ((f) << (NUM_CONF + NUM_TYPE_DDR)) + ((c) << NUM_TYPE_DDR) + (t)))
//
// Supported Platforms
//
#define P_NONE_DDR                                         0
#define P_SIM_DDR                                          BIT0
#define P_A0_DDR                                           BIT1
#define P_A1_DDR                                           BIT2
#define P_B0_DDR                                           BIT3
#define P_C0_DDR                                           BIT4
#define P_D0_DDR                                           BIT5
#define P_ALL_DDR                                          0xFFFF
//
// Supported Frequencies
//
#define F_NONE_DDR                                         0
#define F_1866_DDR                                         BIT0
#define F_2133_DDR                                         BIT1
#define F_2400_DDR                                         BIT2
#define F_2666_DDR                                         BIT3
#define F_2933_DDR                                         BIT4
#define F_3200_DDR                                         BIT5
#define F_3600_DDR                                         BIT6
#define F_4000_DDR                                         BIT7
#define F_4400_DDR                                         BIT8
#define F_4800_DDR                                         BIT9
#define F_5200_DDR                                         BIT10
#define F_5600_DDR                                         BIT11
#define F_6000_DDR                                         BIT12
#define F_6400_DDR                                         BIT13
#define F_8400_DDR                                         BIT14
#define F_ALL_DDR                                          0xFFFF
//
// Supported Configurations
//
#define C_NONE_DDR                                         0
#define C_Spr_DDR                                          BIT0
#define C_ALL_DDR                                          0xFFFF
//
// Supported Types
//
#define T_NONE_DDR                                         0
#define T_DDR4_DDR                                         BIT0
#define T_DDR5_DDR                                         BIT1
#define T_DDRT_DDR                                         BIT2
#define T_DDRT2_DDR                                        BIT3
#define T_ALL_DDR                                          0xFFFF
//
// Supported Boot Paths
//
#define S5_DDR                                             BIT0
#define FB_DDR                                             BIT1
#define S3_DDR                                             BIT2
#define S0_DDR                                             BIT3
#define S3_ADR_DDR                                         BIT4
#define ALL_PATHS_DDR                                      0xFF
//
// Max number of subtasks
//
#define MAX_SUBTASKS_DDR                                   2

//
// Offsets into InitData[] for each init block. Total size = 49208 bytes.
//
#define InitDdrioRegisters_DDR                             0
#define InitDdrioRegisters_All_DDR                         (InitDdrioRegisters_DDR + 49016)
#define SubtaskCreator_DDR                                 (InitDdrioRegisters_All_DDR + 111)
#define TestSequence_DDR                                   (SubtaskCreator_DDR + 23)
//
// All dynamic register names. Each of these will be written to during the Init phase of MSP.
//
#define DYN_DDRD1_N0_CH0A_0_DDRD1_N0_MEM_DDRD_N0_RXVREF_CTL_DDR 0
#define DYN_DDRD1_N0_CH0A_0_DDRD1_N0_MEM_DDRD_N0_PXC_CTL0_DDR 1
#define DYN_DDRD1_N0_CH0A_0_DDRD1_N0_MEM_DDRD_N0_PXC_CTL0_1_DDR 2
//
// All dynamic field names. These must be populated with real values prior to executing
//
#define IS_ANALOG_TUNING_0_DDR                             0
#define IS_ANALOG_TUNING_1_DDR                             1
#define IS_ANALOG_TUNING_2_DDR                             2
#define IS_ANALOG_TUNING_3_DDR                             3
#define IS_CH1_AEP_SLOT0_DDR                               4
#define IS_CH0_AEP_SLOT0_DDR                               5
#define IS_X8_OR_X16_DEVICE_SLOT0_DDR                      6
#define IS_X8_OR_X16_DEVICE_SLOT1_DDR                      7
#define IS_X16_DEVICE_SLOT0_DDR                            8
#define IS_X16_DEVICE_SLOT1_DDR                            9
#define DFE_EN_DATA_DDR                                    10
#define RXVREF_DATA_DDR                                    11
#define PXC_VALUE_DDR                                      12
#define DDJC_VALUE_DDR                                     13
#define IS_AEP_SLOT1_DDR                                   14
#define IS_AEP_SLOT0_DDR                                   15
#define IS_NON_UDIMM_ANYSLOT_DDR                           16
#define IS_AEP_ANYSLOT_DDR                                 17
#define IS_UDIMM_SLOT0_DDR                                 18
#define IS_UDIMM_SLOT1_DDR                                 19
#define IS_CH0_AEP_SLOT1_DDR                               20
#define IS_CH1_AEP_SLOT1_DDR                               21
#define IS_UDIMM_ANYSLOT_DDR                               22
#define IS_NOT_CTE_COSIM_DDR                               23
#define IS_HVM_MODE_DDR                                    24
#define IS_NOT_HVM_MODE_DDR                                25
#define READ_DATA_DDR                                      26
#define MEMBAR_DDR                                         27
#define MEMBAR_MCMISC_DDR                                  28
#define DYNVAR_MAX_DDR                                     29

#include "MMRCDDRCC0_CH0_DDRCC0_MEM_DDR.h"
#include "MMRCDDRCC0_CH0A_DDRCC0_MEM_DDR.h"
#include "MMRCDDRCC0_CHALL_DDRCC0_MEM_DDR.h"
#include "MMRCDDRCC1_CH0_DDRCC1_MEM_DDR.h"
#include "MMRCDDRCC1_CH0A_DDRCC1_MEM_DDR.h"
#include "MMRCDDRCC1_CHALL_DDRCC1_MEM_DDR.h"
#include "MMRCDDRCLK_CH0_MEM_DDR.h"
#include "MMRCDDRCLK_CHALL_MEM_DDR.h"
#include "MMRCDDRCOMP_MEM_DDR.h"
#include "MMRCDDRD0_N0_CH0_DDRD0_N0_MEM_DDR.h"
#include "MMRCDDRD0_N0_CH0A_0_DDRD0_N0_MEM_DDR.h"
#include "MMRCDDRD0_N0_CHALL_DDRD0_N0_MEM_DDR.h"
#include "MMRCDDRD1_N0_CH0_DDRD1_N0_MEM_DDR.h"
#include "MMRCDDRD1_N0_CH0A_0_DDRD1_N0_MEM_DDR.h"
#include "MMRCDDRD1_N0_CHALL_DDRD1_N0_MEM_DDR.h"
#include "MMRCDDRINTF_MEM_DDR.h"
#include "MMRCDDRSAI_DDRSAI_MEM_DDR.h"
#include "MMRCMC_DEC_MEM_CSR_DDR.h"
#include "MMRCMCMISC_MEM_MCMISC_CSR_DDR.h"


#endif // _MMRCPROJECT_DEFINITIONS_GENERATED_DDR_H_DDR_