/** @file
  Code for MtoIWa feature.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2020 Intel Corporation. <BR>

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

#include "CpuSpecificFeatures.h"
#include <Library/PreSiliconEnvDetectLib.h>

/**
  Detects if MtoIWa feature supported on current processor.

  @param[in]  ProcessorNumber  The index of the CPU executing this function.
  @param[in]  CpuInfo          A pointer to the REGISTER_CPU_FEATURE_INFORMATION
                               structure for the CPU executing this function.
  @param[in]  ConfigData       A pointer to the configuration buffer returned
                               by CPU_FEATURE_GET_CONFIG_DATA.  NULL if
                               CPU_FEATURE_GET_CONFIG_DATA was not provided in
                               RegisterCpuFeature().

  @retval TRUE     MtoIWa feature is supported.
  @retval FALSE    MtoIWa feature is not supported.

  @note This service could be called by BSP/APs.
**/
BOOLEAN
EFIAPI
CpuMtoIWaSupport (
  IN UINTN                             ProcessorNumber,
  IN REGISTER_CPU_FEATURE_INFORMATION  *CpuInfo,
  IN VOID                              *ConfigData  OPTIONAL
  )
{
  if (!IsSimicsEnvironment() &&
      (FeaturePcdGet (PcdCpuIcelakeFamilyFlag) && IS_ICELAKE_SERVER_PROC (CpuInfo->DisplayFamily, CpuInfo->DisplayModel)) &&
      (CpuInfo->SteppingId < ICXSP_D0_CPU_STEP)) {
    //
    // Only support < ICX-SP D-stepping.
    //
    return TRUE;
  }

  return FALSE;
}

/**
  Initializes MtoIWa  feature to specific state.

  @param[in]  ProcessorNumber  The index of the CPU executing this function.
  @param[in]  CpuInfo          A pointer to the REGISTER_CPU_FEATURE_INFORMATION
                               structure for the CPU executing this function.
  @param[in]  ConfigData       A pointer to the configuration buffer returned
                               by CPU_FEATURE_GET_CONFIG_DATA.  NULL if
                               CPU_FEATURE_GET_CONFIG_DATA was not provided in
                               RegisterCpuFeature().
  @param[in]  State            If TRUE, then the MtoIWa feature
                               must be enabled.
                               If FALSE, then the MtoIWa feature
                               must be disabled.

  @retval RETURN_SUCCESS       MtoIWa feature is initialized.

  @note This service could be called by BSP only.
**/
RETURN_STATUS
EFIAPI
CpuMtoIWaInitialize (
  IN UINTN                             ProcessorNumber,
  IN REGISTER_CPU_FEATURE_INFORMATION  *CpuInfo,
  IN VOID                              *ConfigData,  OPTIONAL
  IN BOOLEAN                           State
  )
{
  OVERRIDE_ICX_MSR_CORE_UARCH_CTL_REGISTER      CoreUarchCtlValueMask;
  OVERRIDE_ICX_MSR_CORE_UARCH_CTL_REGISTER      CoreUarchCtlValue;

  //
  // Core scope.
  //
  if (CpuInfo->ProcessorInfo.Location.Thread == 0) {
    if (State) {
      //
      // Mask of bits (consecutive) in register to write, BIT0 and BIT1
      //
      CoreUarchCtlValueMask.Uint64 = 0;
      CoreUarchCtlValueMask.Bits.DcuScrubEn = 1;
      CoreUarchCtlValueMask.Bits.Snpq_Disable_M2i_Rsp = 1;

      //
      // Value to write
      //
      CoreUarchCtlValue.Uint64 = 0;
      switch (mCpuSpecificFeaturesCpuPolicy->CpuMtoIWa) {
        case 1:
          // Option 1
          CoreUarchCtlValue.Bits.DcuScrubEn = 1;
          CoreUarchCtlValue.Bits.Snpq_Disable_M2i_Rsp = 1;
          break;

        case 2:
          // Option 2
          CoreUarchCtlValue.Bits.DcuScrubEn = 0;
          CoreUarchCtlValue.Bits.Snpq_Disable_M2i_Rsp = 0;
          break;

        default:
          // AUTO
          CoreUarchCtlValue.Bits.DcuScrubEn = 1;
          CoreUarchCtlValue.Bits.Snpq_Disable_M2i_Rsp = 0;
          break;
      }

      CpuRegisterTableWrite (
        ProcessorNumber,
        Msr,
        ICX_MSR_CORE_UARCH_CTL,
        CoreUarchCtlValueMask.Uint64, // Mask of bits (consecutive) in register to write
        CoreUarchCtlValue.Uint64      // Value to write
        );
    }
  }
  return RETURN_SUCCESS;
}
