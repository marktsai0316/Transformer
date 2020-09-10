/** @file
  Register names for VER4 GPIO

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
  Copyright 2020 Intel Corporation.

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
#ifndef _GPIO_REGS_VER4_H_
#define _GPIO_REGS_VER4_H_

//
// PCH-S GPIO
//
#define GPIO_VER4_PCH_S_GPIO_GROUP_MAX        19

#define GPIO_VER4_PCH_S_GPIO_GPP_I_PAD_MAX    25
#define GPIO_VER4_PCH_S_GPIO_GPP_R_PAD_MAX    23
#define GPIO_VER4_PCH_S_GPIO_GPP_J_PAD_MAX    12
#define GPIO_VER4_PCH_S_GPIO_VGPIO_PAD_MAX    27
#define GPIO_VER4_PCH_S_GPIO_VGPIO_0_PAD_MAX  8  // vGPIO_USB_0
#define GPIO_VER4_PCH_S_GPIO_GPP_B_PAD_MAX    24
#define GPIO_VER4_PCH_S_GPIO_GPP_G_PAD_MAX    8
#define GPIO_VER4_PCH_S_GPIO_GPP_H_PAD_MAX    24
#define GPIO_VER4_PCH_S_GPIO_GPD_PAD_MAX      17
#define GPIO_VER4_PCH_S_GPIO_SPI_PAD_MAX      9
#define GPIO_VER4_PCH_S_GPIO_GPP_A_PAD_MAX    16
#define GPIO_VER4_PCH_S_GPIO_GPP_C_PAD_MAX    24
#define GPIO_VER4_PCH_S_GPIO_VGPIO_3_PAD_MAX  84 // vGPIO_PCIE
#define GPIO_VER4_PCH_S_GPIO_GPP_S_PAD_MAX    8
#define GPIO_VER4_PCH_S_GPIO_GPP_E_PAD_MAX    23
#define GPIO_VER4_PCH_S_GPIO_GPP_K_PAD_MAX    15
#define GPIO_VER4_PCH_S_GPIO_GPP_F_PAD_MAX    24
#define GPIO_VER4_PCH_S_GPIO_GPP_D_PAD_MAX    25
#define GPIO_VER4_PCH_S_GPIO_JTAG_PAD_MAX     9
#define GPIO_VER4_PCH_S_GPIO_CPU_PAD_MAX      14

//
// PCH-S GPIO registers
//
//
// GPIO Community Common Private Configuration Registers
//
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPP_I   0x0
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPP_R   0x1
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPP_J   0x2
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_VGPIO   0x3
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPD     0x4
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPP_D   0x5
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPP_S   0x6
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPP_E   0x7
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPP_K   0x8
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPP_F   0x9
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPP_A   0xA
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPP_C   0xB
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPP_B   0xC
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPP_G   0xD
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_GPP_H   0xE
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_VGPIO_0 0xF  // GPE not supported by this group
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_VGPIO_3 0xF  // GPE not supported by this group
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_JTAG    0xF  // GPE not supported by this group
#define V_GPIO_VER4_PCH_S_GPIO_PCR_MISCCFG_GPE0_CPU     0xF  // GPE not supported by this group

//
// GPIO Community 0 Private Configuration Registers
//
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_I_PAD_OWN          0x00A0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_R_PAD_OWN          0x00B0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_J_PAD_OWN          0x00BC
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_PAD_OWN          0x00C4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_0_PAD_OWN        0x00D4 // vGPIO_USB_0

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_I_PADCFGLOCK       0x0110
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_I_PADCFGLOCKTX     0x0114
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_R_PADCFGLOCK       0x0118
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_R_PADCFGLOCKTX     0x011C
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_J_PADCFGLOCK       0x0120
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_J_PADCFGLOCKTX     0x0124
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_PADCFGLOCK       0x0128
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_PADCFGLOCKTX     0x012C
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_0_PADCFGLOCK     0x0130 // vGPIO_USB_0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_0_PADCFGLOCKTX   0x0134 // vGPIO_USB_0

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_I_HOSTSW_OWN       0x0150
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_R_HOSTSW_OWN       0x0154
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_J_HOSTSW_OWN       0x0158
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_HOSTSW_OWN       0x015C
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_0_HOSTSW_OWN     0x0160

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_I_GPI_IS           0x0200
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_R_GPI_IS           0x0204
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_J_GPI_IS           0x0208
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_GPI_IS           0x020C
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_0_GPI_IS         0x0210

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_I_GPI_IE           0x0220
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_R_GPI_IE           0x0224
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_J_GPI_IE           0x0228
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_GPI_IE           0x022C
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_0_GPI_IE         0x0230

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_I_GPI_GPE_STS      0x0240
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_R_GPI_GPE_STS      0x0244
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_J_GPI_GPE_STS      0x0248
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_GPI_GPE_STS      0x024C
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_0_GPI_GPE_STS    0x0250

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_I_GPI_GPE_EN       0x0260
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_R_GPI_GPE_EN       0x0264
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_J_GPI_GPE_EN       0x0268
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_GPI_GPE_EN       0x026C
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_0_GPI_GPE_EN     0x0270

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_I_SMI_STS          0x0280
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_R_SMI_STS          0x0284
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_J_SMI_STS          0x0288
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_SMI_STS          0x028C
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_0_SMI_STS        0x0290

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_I_SMI_EN           0x02A0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_R_SMI_EN           0x02A4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_J_SMI_EN           0x02A8
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_SMI_EN           0x02AC
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_0_SMI_EN         0x02B0

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_I_NMI_STS          0x02C0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_R_NMI_STS          0x02C4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_J_NMI_STS          0x02C8
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_NMI_STS          0x02CC
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_0_NMI_STS        0x02D0

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_I_NMI_EN           0x02E0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_R_NMI_EN           0x02E4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_J_NMI_EN           0x02E8
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_NMI_EN           0x02EC
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_0_NMI_EN         0x02F0

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_I_PADCFG_OFFSET    0x0700
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_R_PADCFG_OFFSET    0x0890
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_J_PADCFG_OFFSET    0x0A00
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_PADCFG_OFFSET    0x0AC0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_0_PADCFG_OFFSET  0x0C70

//
// GPIO Community 1 Private Configuration Registers
//
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_B_PAD_OWN          0x00A0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_G_PAD_OWN          0x00AC
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_H_PAD_OWN          0x00B0

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_B_PADCFGLOCK       0x0110
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_B_PADCFGLOCKTX     0x0114
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_G_PADCFGLOCK       0x0118
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_G_PADCFGLOCKTX     0x011C
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_H_PADCFGLOCK       0x0120
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_H_PADCFGLOCKTX     0x0124

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_B_HOSTSW_OWN       0x0150
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_G_HOSTSW_OWN       0x0154
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_H_HOSTSW_OWN       0x0158

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_B_GPI_IS           0x0200
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_G_GPI_IS           0x0204
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_H_GPI_IS           0x0208

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_B_GPI_IE           0x0220
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_G_GPI_IE           0x0224
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_H_GPI_IE           0x0228

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_B_GPI_GPE_STS      0x0240
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_G_GPI_GPE_STS      0x0244
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_H_GPI_GPE_STS      0x0248

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_B_GPI_GPE_EN       0x0260
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_G_GPI_GPE_EN       0x0264
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_H_GPI_GPE_EN       0x0268

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_B_SMI_STS          0x0280
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_G_SMI_STS          0x0284
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_H_SMI_STS          0x0288

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_B_SMI_EN           0x02A0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_G_SMI_EN           0x02A4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_H_SMI_EN           0x02A8

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_B_NMI_STS          0x02C0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_G_NMI_STS          0x02C4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_H_NMI_STS          0x02C8

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_B_NMI_EN           0x02E0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_G_NMI_EN           0x02E4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_H_NMI_EN           0x02E8

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_B_PADCFG_OFFSET    0x0700
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_G_PADCFG_OFFSET    0x0880
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_H_PADCFG_OFFSET    0x0900

//
// GPIO Community 2 Private Configuration Registers
//
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPD_PAD_OWN          0x00A0

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPD_PADCFGLOCK       0x0110
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPD_PADCFGLOCKTX     0x0114

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPD_HOSTSW_OWN       0x0150

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPD_GPI_IS           0x0200
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPD_GPI_IE           0x0220

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPD_GPI_GPE_STS      0x0240
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPD_GPI_GPE_EN       0x0260

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPD_SMI_STS          0x0280
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPD_SMI_EN           0x02A0

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPD_NMI_STS          0x02C0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPD_NMI_EN           0x02E0

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPD_PADCFG_OFFSET    0x700

//
// GPIO Community 3 Private Configuration Registers
//
#define R_GPIO_VER4_PCH_S_GPIO_PCR_SPI_PAD_OWN          0x00A0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_A_PAD_OWN        0x00A8
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_C_PAD_OWN        0x00B0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_3_PAD_OWN      0x00BC

#define R_GPIO_VER4_PCH_S_GPIO_PCR_SPI_PADCFGLOCK       0x0110
#define R_GPIO_VER4_PCH_S_GPIO_PCR_SPI_PADCFGLOCKTX     0x0114
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_A_PADCFGLOCK     0x0118
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_A_PADCFGLOCKTX   0x011C
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_C_PADCFGLOCK     0x0120
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_C_PADCFGLOCKTX   0x0124
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_3_PADCFGLOCK   0x0128
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_3_PADCFGLOCKTX 0x012C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_SPI_HOSTSW_OWN       0x0150
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_A_HOSTSW_OWN     0x0154
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_C_HOSTSW_OWN     0x0158
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_3_HOSTSW_OWN   0x015C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_SPI_GPI_IS           0x0200
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_A_GPI_IS         0x0204
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_C_GPI_IS         0x0208
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_3_GPI_IS       0x020C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_SPI_GPI_IE           0x0220
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_A_GPI_IE         0x0224
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_C_GPI_IE         0x0228
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_3_GPI_IE       0x022C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_SPI_GPI_GPE_STS      0x0240
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_A_GPI_GPE_STS    0x0244
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_C_GPI_GPE_STS    0x0248
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_3_GPI_GPE_STS  0x024C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_SPI_GPI_GPE_EN       0x0260
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_A_GPI_GPE_EN     0x0264
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_C_GPI_GPE_EN     0x0268
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_3_GPI_GPE_EN   0x026C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_SPI_SMI_STS          0x0280
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_A_SMI_STS        0x0284
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_C_SMI_STS        0x0288
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_3_SMI_STS      0x028C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_SPI_SMI_EN           0x02A0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_A_SMI_EN         0x02A4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_C_SMI_EN         0x02A8
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_3_SMI_EN       0x02AC

#define R_GPIO_VER4_PCH_S_GPIO_PCR_SPI_NMI_STS          0x02C0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_A_NMI_STS        0x02C4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_C_NMI_STS        0x02C8
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_3_NMI_STS      0x02CC

#define R_GPIO_VER4_PCH_S_GPIO_PCR_SPI_NMI_EN           0x02E0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_A_NMI_EN         0x02E4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_C_NMI_EN         0x02E8
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_3_NMI_EN       0x02EC

#define R_GPIO_VER4_PCH_S_GPIO_PCR_SPI_PADCFG_OFFSET      0x0700
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_A_PADCFG_OFFSET    0x0790
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_C_PADCFG_OFFSET    0x0890
#define R_GPIO_VER4_PCH_S_GPIO_PCR_VGPIO_3_PADCFG_OFFSET  0x0A10

//
// GPIO Community 4 Private Configuration Registers
//
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_S_PAD_OWN        0x00A0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_E_PAD_OWN        0x00A4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_K_PAD_OWN        0x00B0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_F_PAD_OWN        0x00B8

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_S_PADCFGLOCK     0x0110
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_S_PADCFGLOCKTX   0x0114
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_E_PADCFGLOCK     0x0118
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_E_PADCFGLOCKTX   0x011C
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_K_PADCFGLOCK     0x0120
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_K_PADCFGLOCKTX   0x0124
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_F_PADCFGLOCK     0x0128
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_F_PADCFGLOCKTX   0x012C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_S_HOSTSW_OWN     0x0150
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_E_HOSTSW_OWN     0x0154
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_K_HOSTSW_OWN     0x0158
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_F_HOSTSW_OWN     0x015C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_S_GPI_IS         0x0200
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_E_GPI_IS         0x0204
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_K_GPI_IS         0x0208
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_F_GPI_IS         0x020C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_S_GPI_IE         0x0220
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_E_GPI_IE         0x0224
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_K_GPI_IE         0x0228
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_F_GPI_IE         0x022C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_S_GPI_GPE_STS    0x0240
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_E_GPI_GPE_STS    0x0244
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_K_GPI_GPE_STS    0x0248
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_F_GPI_GPE_STS    0x024C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_S_GPI_GPE_EN     0x0260
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_E_GPI_GPE_EN     0x0264
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_K_GPI_GPE_EN     0x0268
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_F_GPI_GPE_EN     0x026C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_S_SMI_STS        0x0280
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_E_SMI_STS        0x0284
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_K_SMI_STS        0x0288
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_F_SMI_STS        0x028C

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_S_SMI_EN         0x02A0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_E_SMI_EN         0x02A4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_K_SMI_EN         0x02A8
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_F_SMI_EN         0x02AC

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_S_NMI_STS        0x02C0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_E_NMI_STS        0x02C4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_K_NMI_STS        0x02C8
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_F_NMI_STS        0x02CC

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_S_NMI_EN         0x02E0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_E_NMI_EN         0x02E4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_K_NMI_EN         0x02E8
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_F_NMI_EN         0x02EC

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_S_PADCFG_OFFSET  0x0700
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_E_PADCFG_OFFSET  0x0780
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_K_PADCFG_OFFSET  0x08F0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_F_PADCFG_OFFSET  0x09E0

//
// GPIO Community 5 Private Configuration Registers
//
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_D_PAD_OWN        0x00A0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_JTAG_PAD_OWN         0x00B0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_CPU_PAD_OWN          0x00B8

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_D_PADCFGLOCK     0x0110
#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_D_PADCFGLOCKTX   0x0114
#define R_GPIO_VER4_PCH_S_GPIO_PCR_JTAG_PADCFGLOCK      0x0118
#define R_GPIO_VER4_PCH_S_GPIO_PCR_JTAG_PADCFGLOCKTX    0x0118
#define R_GPIO_VER4_PCH_S_GPIO_PCR_CPU_PADCFGLOCK       0x0120
#define R_GPIO_VER4_PCH_S_GPIO_PCR_CPU_PADCFGLOCKTX     0x0124

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_D_HOSTSW_OWN     0x0150
#define R_GPIO_VER4_PCH_S_GPIO_PCR_JTAG_HOSTSW_OWN      0x0154
#define R_GPIO_VER4_PCH_S_GPIO_PCR_CPU_HOSTSW_OWN       0x0158

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_D_GPI_IS         0x0200
#define R_GPIO_VER4_PCH_S_GPIO_PCR_JTAG_GPI_IS          0x0204
#define R_GPIO_VER4_PCH_S_GPIO_PCR_CPU_GPI_IS           0x0208

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_D_GPI_IE         0x0220
#define R_GPIO_VER4_PCH_S_GPIO_PCR_JTAG_GPI_IE          0x0224
#define R_GPIO_VER4_PCH_S_GPIO_PCR_CPU_GPI_IE           0x0228

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_D_GPI_GPE_STS    0x0240
#define R_GPIO_VER4_PCH_S_GPIO_PCR_JTAG_GPI_GPE_STS     0x0244
#define R_GPIO_VER4_PCH_S_GPIO_PCR_CPU_GPI_GPE_STS      0x0248

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_D_GPI_GPE_EN     0x0260
#define R_GPIO_VER4_PCH_S_GPIO_PCR_JTAG_GPI_GPE_EN      0x0264
#define R_GPIO_VER4_PCH_S_GPIO_PCR_CPU_GPI_GPE_EN       0x0268

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_D_SMI_STS        0x0280
#define R_GPIO_VER4_PCH_S_GPIO_PCR_JTAG_SMI_STS         0x0284
#define R_GPIO_VER4_PCH_S_GPIO_PCR_CPU_SMI_STS          0x0288

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_D_SMI_EN         0x02A0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_JTAG_SMI_EN          0x02A4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_CPU_SMI_EN           0x02A8

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_D_NMI_STS        0x02C0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_JTAG_NMI_STS         0x02C4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_CPU_NMI_STS          0x02C8

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_D_NMI_EN         0x02E0
#define R_GPIO_VER4_PCH_S_GPIO_PCR_JTAG_NMI_EN          0x02E4
#define R_GPIO_VER4_PCH_S_GPIO_PCR_CPU_NMI_EN           0x02E8

#define R_GPIO_VER4_PCH_S_GPIO_PCR_GPP_D_PADCFG_OFFSET  0x0700
#define R_GPIO_VER4_PCH_S_GPIO_PCR_JTAG_PADCFG_OFFSET   0x0890
#define R_GPIO_VER4_PCH_S_GPIO_PCR_CPU_PADCFG_OFFSET    0x0920

#endif // _GPIO_REGS_VER4_H_
