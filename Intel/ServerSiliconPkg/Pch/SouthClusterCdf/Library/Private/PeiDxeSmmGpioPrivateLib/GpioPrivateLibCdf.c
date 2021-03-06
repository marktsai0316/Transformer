/** @file
  This file contains CDF specific GPIO information

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2017 - 2018 Intel Corporation. <BR>

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

#include <Uefi/UefiBaseType.h>
#include <Library/DebugLib.h>
#include <Library/PchInfoLib.h>
#include <Library/GpioLib.h>
#include <Library/GpioNativeLib.h>
#include <Private/Library/GpioPrivateLib.h>
#include <Register/PchRegsGpioCnl.h>
#include <Register/PchRegsGpioCdf.h>
#include <Register/PchRegsPmcCdf.h>
#include <Register/PchRegsPmc.h>
#include <GpioPinsCnlLp.h>
#include <GpioPinsCnlH.h>
#include <GpioPinsCdf.h>
#include <GpioConfig.h>
#include <Register/PchRegsPcr.h>

GLOBAL_REMOVE_IF_UNREFERENCED GPIO_GROUP_INFO mCdfPchHGpioGroupInfo[] = {
  {PID_GPIOCOM1, R_CDF_PCH_GPIO_PCR_GPP_A_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_A_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_A_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_A_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_A_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_A_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_A_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_A_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_A_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_A_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_A_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_A_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_A_PADCFG_OFFSET, V_PCH_GPIO_GPP_A_PAD_MAX},
  {PID_GPIOCOM1, R_CDF_PCH_GPIO_PCR_GPP_B_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_B_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_B_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_B_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_B_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_B_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_B_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_B_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_B_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_B_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_B_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_B_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_B_PADCFG_OFFSET, V_PCH_GPIO_GPP_B_PAD_MAX},
  {PID_GPIOCOM1, R_CDF_PCH_GPIO_PCR_GPP_C_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_C_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_C_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_C_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_C_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_C_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_C_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_C_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_C_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_C_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_C_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_C_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_C_PADCFG_OFFSET, V_PCH_GPIO_GPP_C_PAD_MAX},
  {PID_GPIOCOM1, R_CDF_PCH_GPIO_PCR_GPP_D_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_D_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_D_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_D_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_D_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_D_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_D_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_D_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_D_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_D_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_D_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_D_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_D_PADCFG_OFFSET, V_PCH_GPIO_GPP_D_PAD_MAX},
  {PID_GPIOCOM1, R_CDF_PCH_GPIO_PCR_GPP_E_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_E_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_E_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_E_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_E_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_E_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_E_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_E_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_E_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_E_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_E_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_E_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_E_PADCFG_OFFSET, V_PCH_GPIO_GPP_E_PAD_MAX},
  {PID_GPIOCOM1, R_CDF_PCH_GPIO_PCR_GPP_F_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_F_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_F_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_F_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_F_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_F_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_F_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_F_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_F_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_F_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_F_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_F_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_F_PADCFG_OFFSET, V_PCH_GPIO_GPP_F_PAD_MAX},
  {PID_GPIOCOM1, R_CDF_PCH_GPIO_PCR_GPP_G_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_G_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_G_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_G_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_G_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_G_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_G_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_G_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_G_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_G_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_G_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_G_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_G_PADCFG_OFFSET, V_PCH_GPIO_GPP_G_PAD_MAX},
  {PID_GPIOCOM1, R_CDF_PCH_GPIO_PCR_GPP_H_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_H_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_H_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_H_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_H_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_H_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_H_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_H_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_H_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_H_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_H_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_H_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_H_PADCFG_OFFSET, V_PCH_GPIO_GPP_H_PAD_MAX},
  {PID_GPIOCOM1, R_CDF_PCH_GPIO_PCR_GPP_I_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_I_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_I_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_I_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_I_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_I_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_I_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_I_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_I_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_I_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_I_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_I_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_I_PADCFG_OFFSET, V_PCH_GPIO_GPP_I_PAD_MAX},
  {PID_GPIOCOM1, R_CDF_PCH_GPIO_PCR_GPP_J_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_J_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_J_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_J_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_J_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_J_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_J_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_J_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_J_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_J_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_J_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_J_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_J_PADCFG_OFFSET, V_PCH_GPIO_GPP_J_PAD_MAX},
  {PID_GPIOCOM1, R_CDF_PCH_GPIO_PCR_GPP_K_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_K_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_K_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_K_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_K_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_K_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_K_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_K_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_K_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_K_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_K_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_K_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_K_PADCFG_OFFSET, V_PCH_GPIO_GPP_K_PAD_MAX},
  {PID_GPIOCOM0, R_CDF_PCH_GPIO_PCR_GPP_L_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_L_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_L_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_L_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_L_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_L_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_L_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_L_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_L_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_L_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_L_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_L_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_L_PADCFG_OFFSET, V_PCH_GPIO_GPP_L_PAD_MAX},
  {PID_GPIOCOM0, R_CDF_PCH_GPIO_PCR_GPP_M_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_M_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_M_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_M_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_M_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_M_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_M_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_M_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_M_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_M_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_M_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_M_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_M_PADCFG_OFFSET, V_PCH_GPIO_GPP_M_PAD_MAX},
  {PID_GPIOCOM0, R_CDF_PCH_GPIO_PCR_GPP_N_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_N_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_N_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_N_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_N_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_N_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_N_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_N_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_N_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_N_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_N_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_N_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_N_PADCFG_OFFSET, V_PCH_GPIO_GPP_N_PAD_MAX},
  {PID_GPIOCOM0, R_CDF_PCH_GPIO_PCR_GPP_O_PAD_OWN, R_CDF_PCH_GPIO_PCR_GPP_O_HOSTSW_OWN, R_CDF_PCH_GPIO_PCR_GPP_O_GPI_IS, R_CDF_PCH_GPIO_PCR_GPP_O_GPI_IE, R_CDF_PCH_GPIO_PCR_GPP_O_GPI_GPE_STS, R_CDF_PCH_GPIO_PCR_GPP_O_GPI_GPE_EN, R_CDF_PCH_GPIO_PCR_GPP_O_SMI_STS, R_CDF_PCH_GPIO_PCR_GPP_O_SMI_EN, R_CDF_PCH_GPIO_PCR_GPP_O_NMI_STS, R_CDF_PCH_GPIO_PCR_GPP_O_NMI_EN, R_CDF_PCH_GPIO_PCR_GPP_O_PADCFGLOCK, R_CDF_PCH_GPIO_PCR_GPP_O_PADCFGLOCKTX, V_CDF_PCH_GPIO_PCR_GPP_O_PADCFG_OFFSET, V_PCH_GPIO_GPP_O_PAD_MAX},
};

/**
  This procedure will retrieve address and length of GPIO info table

  @param[out]  GpioGroupInfoTableLength   Length of GPIO group table

  @retval Pointer to GPIO group table

**/
CONST GPIO_GROUP_INFO*
GpioGetGroupInfoTable (
  OUT UINT32              *GpioGroupInfoTableLength
  )
{
  *GpioGroupInfoTableLength = ARRAY_SIZE (mCdfPchHGpioGroupInfo);
  return mCdfPchHGpioGroupInfo;
}

/**
  Get GPIO Chipset ID specific to PCH generation and series
**/
UINT32
GpioGetThisChipsetId (
  VOID
  )
{
  return GPIO_CDF_H_CHIPSET_ID;
}
/**
  This internal procedure will check if group is within DeepSleepWell.

  @param[in]  Group               GPIO Group

  @retval GroupWell               TRUE:  This is DSW Group
                                  FALSE: This is not DSW Group
**/
BOOLEAN
GpioIsDswGroup (
  IN  GPIO_GROUP         Group
  )
{
// TODO: Update code for CDF- check wich groups are in DSW
  return FALSE;
}

/**
  This procedure will perform special handling of GPP_A_12.

  @param[in]  None

  @retval None
**/
VOID
GpioA12SpecialHandling (
  VOID
  )
{
  return;
}

GLOBAL_REMOVE_IF_UNREFERENCED PCH_SBI_PID mGpioComSbiIds []=
{
  PID_GPIOCOM0, PID_GPIOCOM1
};

/**
  This function provides GPIO Community PortIDs

  @param[out] NativePinsTable                Table with GPIO COMMx SBI PortIDs

  @retval      Number of communities
**/
UINT32
GpioGetComSbiPortIds (
  OUT PCH_SBI_PID    **GpioComSbiIds
  )
{
  *GpioComSbiIds = mGpioComSbiIds;
  return ARRAY_SIZE (mGpioComSbiIds);
}
GLOBAL_REMOVE_IF_UNREFERENCED GPIO_GROUP_TO_GPE_MAPPING mCdfPchGpioGroupToGpeMapping[] = {
// TODO: Update table for CDF
  {GPIO_CDF_GROUP_GPP_A,  0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_GPP_A, V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_GPP_A},

};
/**
  Get information for GPIO Group required to program GPIO and PMC for desired 1-Tier GPE mapping

  @param[out] GpioGroupToGpeMapping        Table with GPIO Group to GPE mapping
  @param[out] GpioGroupToGpeMappingLength  GPIO Group to GPE mapping table length
**/
VOID
GpioGetGroupToGpeMapping (
  OUT GPIO_GROUP_TO_GPE_MAPPING  **GpioGroupToGpeMapping,
  OUT UINT32                     *GpioGroupToGpeMappingLength
  )
{

    *GpioGroupToGpeMapping = mCdfPchGpioGroupToGpeMapping;
    *GpioGroupToGpeMappingLength = ARRAY_SIZE (mCdfPchGpioGroupToGpeMapping);
}
