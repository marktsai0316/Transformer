/** @file
  This driver implements the Pre-Mem PEI phase of SPS Ignition support.

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

#include <Base.h>
#include <PiPei.h>
#include <Uefi.h>

#include <Library/BaseLib.h>
#include <Library/UefiLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/IoLib.h>
#include <Library/PeiServicesLib.h>
#include <Library/MeTypeLib.h>

#include <ConfigBlock/MeGetConfigBlock.h>

#include "SpsIgnition.h"


/*****************************************************************************
  SPS Ignition Pre-Mem PEI entry point.

  @param[in] FileHandle           PEIM file handle
  @param[in] PeiServices          General purpose services

  @retval EFI_SUCCESS             The function completed successfully.
  @retval EFT_NOT_FOUND           Cannot get SPS Config Block.
**/
EFI_STATUS
IgnitionPreMemEntryPoint (
  IN       EFI_PEI_FILE_HANDLE    FileHandle,
  IN CONST EFI_PEI_SERVICES       **PeiServices
  )
{
  SPS_PEI_CONFIG                  *SpsConfig = NULL;

  DEBUG ((DEBUG_INFO, "[%a] ", __FUNCTION__));

  if (MeTypeIsSpsIgnition ()) {
    DEBUG ((DEBUG_INFO, "SPS Ignition\n"));
  } else {
    DEBUG ((DEBUG_INFO, "not SPS Ignition\n"));
    return EFI_SUCCESS;
  }

  IgnitionClearIndicators ();

  SpsConfig = GetSpsPreMemPeiConfigBlock (NULL);
  if (SpsConfig == NULL) {
    DEBUG ((
      DEBUG_ERROR,
      "[%a] Cannot get SPS Config Block\n",
      __FUNCTION__
      ));
    return EFI_NOT_FOUND;
  }

  if (SpsConfig->SpsIccClkSscSetting == 0) {
    IgnitionIndicateSscDisable ();
  }

  return EFI_SUCCESS;
}