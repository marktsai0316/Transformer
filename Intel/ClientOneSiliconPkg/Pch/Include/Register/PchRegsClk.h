/** @file
  Register names for iCLK device

  Conventions:

  - Register definition format:
    Prefix_[GenerationName]_[ComponentName]_SubsystemName_RegisterSpace_RegisterName
  - Prefix:
    Definitions beginning with "R_" are registers
    Definitions beginning with "B_" are bits within registers
    Definitions beginning with "V_" are meaningful values within the bits
    Definitions beginning with "S_" are register size
    Definitions beginning with "N_" are the bit position
  - [GenerationName]:
    Three letter acronym of the generation is used (e.g. SKL,KBL,CNL etc.).
    Register name without GenerationName applies to all generations.
  - [ComponentName]:
    This field indicates the component name that the register belongs to (e.g. PCH, SA etc.)
    Register name without ComponentName applies to all components.
    Register that is specific to -H denoted by "_PCH_H_" in component name.
    Register that is specific to -LP denoted by "_PCH_LP_" in component name.
  - SubsystemName:
    This field indicates the subsystem name of the component that the register belongs to
    (e.g. PCIE, USB, SATA, GPIO, PMC etc.).
  - RegisterSpace:
    MEM - MMIO space register of subsystem.
    IO  - IO space register of subsystem.
    PCR - Private configuration register of subsystem.
    CFG - PCI configuration space register of subsystem.
  - RegisterName:
    Full register name.

@copyright
  INTEL CONFIDENTIAL
  Copyright 2017 - 2020 Intel Corporation.

  The source code contained or described herein and all documents related to the
  source code ("Material") are owned by Intel Corporation or its suppliers or
  licensors. Title to the Material remains with Intel Corporation or its suppliers
  and licensors. The Material may contain trade secrets and proprietary and
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

  This file contains an 'Intel Peripheral Driver' and is uniquely identified as
  "Intel Reference Module" and is licensed for Intel CPUs and chipsets under
  the terms of your license agreement with Intel or your vendor. This file may
  be modified by the user, subject to additional terms of the license agreement.

@par Specification
**/
#ifndef _PCH_REGS_ICLK_H_
#define _PCH_REGS_ICLK_H_

#define R_ICLK_PCR_CMU_ONE_DWORD3                       0x228C
#define B_ICLK_PCR_CMU_ONE_DWORD3_CGCTRL_CLKGATEDEF     BIT9
#define R_ICLK_PCR_CMU_ONE_DWORD25                      0x22E4
#define R_ICLK_PCR_CMU_ONE_DWORD26                      0x22E8
#define S_ICLK_PCR_MUXSEL_BITS_PER_FIELD                4      // CLKREQ number is encoded in 4 bits
#define B_ICLK_PCR_MUXSEL_BITS_PER_FIELD                0xF    // CLKREQ number is encoded in 4 bits
#define S_ICLK_PCR_MUXSEL_FIELDS_PER_REG                8      // each CMU_ONE_DWORD register contains bitfields for 8 CLK_SRC

#define R_ICLK_PCR_BIOS_BUFFEN                          0x8080
#define N_ICLK_PCR_BIOS_BUFFEN_SRC0                     2
#define R_ICLK_PCR_BIOS_BUFFEN_H                        0x8084
#define N_ICLK_PCR_BIOS_BUFFEN_H_SRC7                   1
#define R_ICLK_PCR_SRC_MUXSEL                           0x8104
#define R_ICLK_PCR_SRC_MUXSEL_26                        0x8108
#define R_ICLK_PCR_SRC_MUXSEL_34                        0x810C
#define R_ICLK_PCR_SRC_MUXSEL_42                        0x8110
#define R_ICLK_PCR_SRC_MUXSEL_50                        0x8114
#define S_ICLK_PCR_SRC_MUXSEL_FIELDS_PER_REG            4
#define B_ICLK_PCR_SRC_MUXSEL_BITS_PER_FIELD            0x1F
#endif // _PCH_REGS_ICLK_H_