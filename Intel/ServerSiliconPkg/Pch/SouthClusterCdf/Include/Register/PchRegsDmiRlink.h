/** @file
  Register names for R-Link (DMI Mode)

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
  Copyright 2019 - 2020 Intel Corporation.

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

@par Specification Reference:
**/
#ifndef _PCH_REGS_DMI_RLINK_H_
#define _PCH_REGS_DMI_RLINK_H_

//
// Memory Mapped Registers
//
#define R_PCH_RLINK_MEM_LOGICAL_PHY_BAR        0x2000                      ///< Logical Phy registers Base Address

#define R_PCH_RLINK_MEM_LCTL                   0x00                        ///< Link Control
#define B_PCH_RLINK_MEM_LCTL_HAIE              BIT3                        ///< Hardware-Autonomous IDLE_L1 Enable

#define R_PCH_RLINK_MEM_LPMC                   0x10                        ///< Link Power Management Control
#define B_PCH_RLINK_MEM_LPMC_DSTE              BIT31                       ///< Data/StreamID Tristate Enable
#define B_PCH_RLINK_MEM_LPMC_VSTE              BIT30                       ///< Valid/Strobe Tristate Enable
#define B_PCH_RLINK_MEM_LPMC_DLCGE             BIT29                       ///< Dynamic Link Clock Gate Enable
#define B_PCH_RLINK_MEM_LPMC_DSCGE             BIT28                       ///< Dynamic Secondary Clock Gate Enable
#define B_PCH_RLINK_MEM_LPMC_LCTGE             BIT27                       ///< Link Clock Trunk Gate Enable
#define B_PCH_RLINK_MEM_LPMC_DTQE              BIT8                        ///< Dynamic Transmit Quiet Enable

#define R_PCH_RLINK_MEM_LCFG                   0x18                        ///< Link Configuration
#define B_PCH_RLINK_MEM_LCFG_SRL               BIT26                       ///< Secured Register Lock
#define B_PCH_RLINK_MEM_LCFG_AME               BIT27                       ///< Aging Mitigation Enable

#define R_PCH_RLINK_MEM_IOSFSBCS               0x50                        ///< IOSF Sideband Control And Status
#define B_PCH_RLINK_MEM_IOSFSBCS_SCPTCGE       BIT6                        ///< Side Clock Partition/Trunk Clock Gating Enable
#define B_PCH_RLINK_MEM_IOSFSBCS_SEOSCGE       BIT5                        ///< Sideband Endpoint Oscillator/Side Dynamic Clock Gating Enable
#define B_PCH_RLINK_MEM_IOSFSBCS_SIID          (BIT3 | BIT2)               ///< IOSF Sideband Interface Idle Counter

//
// Private Configuration Registers
//
#define R_PCH_RLINK_PCR_PCICMD                 0x4                         ///< PCI Command Register
#define B_PCH_RLINK_PCR_PCICMD_SEE             BIT8
#define B_PCH_RLINK_PCR_PCICMD_PERE            BIT6
#define R_PCH_RLINK_PCR_PCISTS                 0x6                         /// PCI Status
#define B_PCH_RLINK_PCR_PCISTS_DPE             BIT15                       ///> Detected Parity Error
#define B_PCH_RLINK_PCR_PCISTS_SSE             BIT14                       ///> Signaled System Error
#define B_PCH_RLINK_PCR_PCISTS_RMA             BIT13                       ///> Received Master Abort
#define B_PCH_RLINK_PCR_PCISTS_RTA             BIT12                       ///> Received Target Abort
#define B_PCH_RLINK_PCR_PCISTS_STA             BIT11                       ///> Signaled Target Abort
#define R_PCH_RLINK_PCR_BCTL                   0x3E                        ///< Bridge Control Register
#define B_PCH_RLINK_PCR_BCTL_PERE              BIT0
#define B_PCH_RLINK_PCR_BCTL_SE                BIT1
#define B_PCH_RLINK_PCR_BCTL_IE                BIT2
#define R_PCH_RLINK_PCR_DEVCAP                 0x44
#define B_PCH_RLINK_PCR_DEVCAP_MPSS            (BIT2 | BIT1 | BIT0)
#define R_PCH_RLINK_PCR_DEVCTL                 0x48                        ///< Device Control
#define B_PCH_RLINK_PCR_DEVCTL_CERE            BIT0
#define B_PCH_RLINK_PCR_DEVCTL_NFERE           BIT1
#define B_PCH_RLINK_PCR_DEVCTL_FERE            BIT2
#define B_PCH_RLINK_PCR_DEVCTL_URE             BIT3
#define V_PCH_RLINK_PCR_DEVCTL_MPS_256         0x1                         ///< Maximum Payload Size = 256
#define N_PCH_RLINK_PCR_DEVCTL_MPS_256         5
#define R_PCH_RLINK_PCR_DEVSTS                 0x4A                        /// Device Status
#define B_PCH_RLINK_PCR_DEVSTS_URD             BIT3                        ///> Unsupported Request Detected
#define B_PCH_RLINK_PCR_DEVSTS_FED             BIT2                        ///> Fatal Error Detected
#define B_PCH_RLINK_PCR_DEVSTS_NFED            BIT1                        ///> Non-Fatal Error Detected
#define B_PCH_RLINK_PCR_DEVSTS_CED             BIT0                        ///> Correctable Error Detected
#define R_PCH_RLINK_PCR_LCAP                   0x4C                        ///< Link Capabilities
#define B_PCH_RLINK_PCR_LCAP_EL1               (BIT17 | BIT16 | BIT15)     ///< L1 Exit Latency
#define N_PCH_RLINK_PCR_LCAP_EL1               15                          ///< L1 Exit Latency
#define V_PCH_RLINK_PCR_LCAP_EL1_16US_32US     0x5                         ///< L1 Exit Latency = 16us to less than 32us
#define B_PCH_RLINK_PCR_LCAP_EL0               (BIT14 | BIT13 | BIT12)     ///< L0 Exit Latency
#define N_PCH_RLINK_PCR_LCAP_EL0               12                          ///< L0 Exit Latency
#define V_PCH_RLINK_PCR_LCAP_EL0_256NS_512NS   0x3                         ///< L0 Exit Latency = 256ns to less than 512ns
#define B_PCH_RLINK_PCR_LCAP_ASPMSUP           (BIT11 | BIT10)             ///< ASPM support
#define N_PCH_RLINK_PCR_LCAP_ASPMSUP           10
#define V_PCH_RLINK_PCR_LCAP_ASPMSUP_L0SL1     3
#define V_PCH_RLINK_PCR_LCAP_ASPMSUP_L0S       1
#define V_PCH_RLINK_PCR_LCAP_ASPMSUP_L1        2
#define V_PCH_RLINK_PCR_LCAP_ASPMSUP_DIS       0
#define B_PCH_RLINK_PCR_LCAP_MLW               0x000003F0
#define B_PCH_RLINK_PCR_LCAP_MLS               0x0000000F

#define R_RLINK_CFG_CMNREG                     0x34
#define B_RLINK_CFG_CMNREG_ICGE_CMNIOSFSBCLKGATE BIT8
#define B_RLINK_CFG_CMNREG_ICGE_CMNSECCLKDYNCLKGATEEN  BIT13
#define B_RLINK_CFG_CMNREG_ICGE_CMNSECCLKTRUNKCLKGATEEN BIT12

#define R_PCH_RLINK_PCR_LCTL                   0x50                        ///< Link Control
#define V_PCH_RLINK_PCR_LCTL_ASPMCTL           0x2                         ///< L1 Entry enabled

#define R_PCH_RLINK_PCR_LCAP2                  0x6C                        ///< Link Capability 2

#define R_PCH_RLINK_PCR_LCTL2                  0x70                        ///< Link Control 2
#define B_PCH_RLINK_PCR_LCTL2_TLS              0xF                         ///< Target Link Speed

#define R_PCH_RLINK_PCR_UES                    0x104                       ///< Uncorrectable Error Status
#define R_PCH_RLINK_PCR_UEM                    0x108                       ///< Uncorrectable Error Mask
#define B_PCH_RLINK_PCR_UEM_UIEM               BIT22                       ///< Uncorrectable Internal Error Mask
#define B_PCH_RLINK_PCR_UEM_URE                BIT20                       ///< Unsupported Request Error Mask
#define B_PCH_RLINK_PCR_UEM_CM                 BIT15                       ///< Completer Abort Mask
#define B_PCH_RLINK_PCR_UEM_PT                 BIT12                       ///< Poisoned TLP Mask
#define R_PCH_RLINK_PCR_CES                    0x110                       ///< Correctable Error Status
#define R_PCH_RLINK_PCR_CEM                    0x114                       ///< Correctable Error Mask
#define R_PCH_RLINK_PCR_RES                    0x130                       ///< Root Error Status
#define B_PCH_RLINK_RES_CR                      BIT0                       /// correctable error message is received or an internal correctable error is detected
#define B_PCH_RLINK_RES_ENR                     BIT2                       /// either a fatal or a non-fatal error message is received or an internal fatal error is detected

//
// VC Configuration (Common)
//
#define R_PCH_RLINK_PCR_V0CTL                  0x294                       ///< Virtual channel 0 resource control
#define B_PCH_RLINK_PCR_V0CTL_EN               BIT31
#define B_PCH_RLINK_PCR_V0CTL_ID               (7 << 24)                   ///< Bit[26:24]
#define N_PCH_RLINK_PCR_V0CTL_ID               24
#define V_PCH_RLINK_PCR_V0CTL_TVM_MASK         0xFE
#define R_PCH_RLINK_PCR_V0STS                  0x29A                       ///< Virtual channel 0 status
#define B_PCH_RLINK_PCR_V0STS_NP               BIT1
#define R_PCH_RLINK_PCR_V1CTL                  0x2A0                       ///< Virtual channel 1 resource control
#define B_PCH_RLINK_PCR_V1CTL_EN               BIT31
#define B_PCH_RLINK_PCR_V1CTL_ID               (7 << 24)                   ///< Bit[26:24]
#define N_PCH_RLINK_PCR_V1CTL_ID               24
#define V_PCH_RLINK_PCR_V1CTL_TVM_MASK         0xFE
#define R_PCH_RLINK_PCR_V1STS                  0x2A6                       ///< Virtual channel 1 status
#define B_PCH_RLINK_PCR_V1STS_NP               BIT1
#define R_PCH_RLINK_PCR_VMCTL                  0x2AC                       ///< ME Virtual Channel (VCm) resource control
#define R_PCH_RLINK_PCR_VMSTS                  0x2B2                       ///< ME Virtual Channel Resource Status

#define R_RLINK_CFG_IOSFDEVCLKGCTL             0x2E4
#define B_RLINK_CFG_IOSFDEVCLKGCTL_ICGE        BIT15
#define R_RLINK_CFG_SBDEVCLKGCTL               0x2E6
#define B_RLINK_CFG_SBDEVCLKGCTL_ICGE          BIT15
#define R_RLINK_CFG_PT0TXNCLKGCTL              0x8E4
#define B_RLINK_CFG_PT0TXNCLKGCTL_ICGE         BIT15
#define R_RLINK_CFG_XPTDEF2                    0x8F8
#define B_RLINK_CFG_XPTDEF2_TDPAR_CHK_DIS      BIT12
#define B_RLINK_CFG_XPTDEF2_TCPAR_CHK_DIS      BIT11

#define R_PCH_RLINK_PCR_PMIDLTMR               0x948
#define V_PCH_RLINK_PCR_PMIDLTMR_L1_IDLE_TIMER 0x1
#define B_PCH_RLINK_PCR_PMIDLTMR_L1_IDLE_TIMER (BIT5 | BIT3 | BIT2 | BIT1 | BIT0)
#define R_RLINK_CFG_PDPHYCLKGCTL               0x968
#define B_RLINK_CFG_PDPHYCLKGCTL_ICGE          BIT15
#define R_RLINK_CFG_LDPHYCLKGCTL               0x96C
#define B_RLINK_CFG_LDPHYCLKGCTL_ICGE          BIT15
#define R_PCH_RLINK_PCR_XPDDEF                 0x970
#define V_PCH_RLINK_PCR_XPDDEF_REQ_L1_SS       0x4
#define B_PCH_RLINK_PCR_XPDDEF_REQ_L1_SS       (BIT3 | BIT2 | BIT1 | BIT0)
#define R_PCH_RLINK_PCR_XPLDEF                 0x9A0
#define B_PCH_RLINK_PCR_XPLDEF_DIS_ASPM_L1     BIT1
#define R_RLINK_CFG_PT0LNKCLKGCTL              0x9E4
#define B_RLINK_CFG_PT0LNKCLKGCTL_ICGE         BIT15
#define R_RLINK_CFG_CFGPCIECLKGCTL             0x9EC
#define B_RLINK_CFG_CFGPCIECLKGCTL_ICGE        BIT15

#define R_PCH_RLINK_PCR_LPCLGIR1               0x0E30                      ///< LPC Generic I/O Range 1
#define R_PCH_RLINK_PCR_LPCGMR                 0x0E40                      ///< LPC Generic Memory Range
#define R_PCH_RLINK_PCR_LPCBDE                 0x0E44                      ///< LPC BIOS Decode Enable
#define R_PCH_RLINK_PCR_UCPR                   0x0E48                      ///< uCode Patch Region
#define B_PCH_RLINK_PCR_UCPR_UPRE              BIT0                        ///< uCode Patch Region Enable

#define R_PCH_RLINK_PCR_GCS                    0x0E4C                      ///< Generic Control and Status
#define B_PCH_RLINK_PCR_RPRDID                 0xFFFF0000                  ///< RPR Destination ID
#define B_PCH_RLINK_PCR_BBS                    BIT10                       ///< Boot BIOS Strap
#define B_PCH_RLINK_PCR_RPR                    BIT11                       ///< Reserved Page Route
#define B_PCH_RLINK_PCR_BILD                   BIT0                        ///< BIOS Interface Lock-Down

#define R_PCH_RLINK_PCR_LPCIOD                 0x0E70                      ///< LPC I/O Decode Ranges
#define R_PCH_RLINK_PCR_LPCIOE                 0x0E74                      ///< LPC I/O Enables
#define R_PCH_RLINK_PCR_TCOBASE                0x0E78                      ///< TCO Base Address
#define B_PCH_RLINK_PCR_TCOBASE_TCOBA          0xFFE0                      ///< TCO Base Address Mask

#define R_PCH_RLINK_PCR_SEGIR                  0x0EBC                      ///< Second ESPI Generic I/O Range
#define R_PCH_RLINK_PCR_SEGMR                  0x0EC0                      ///< Second ESPI Generic Memory Range

#define R_PCH_RLINK_PCR_DMIC                   0x0EFC                      ///< DMI Control
#define B_PCH_RLINK_PCR_DMIC_SRL               BIT31                       ///< Secured register lock

#endif //_PCH_REGS_DMI_RLINK_H_
