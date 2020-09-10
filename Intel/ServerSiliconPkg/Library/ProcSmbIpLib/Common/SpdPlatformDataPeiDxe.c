/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2020 Intel Corporation. <BR>

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
*/

#include <Uefi.h>
#include <Base.h>
#include <Library/DebugLib.h>
#include <Library/BaseLib.h>
#include <Guid/PlatformInfo.h>
#include <Library/HobLib.h>
#include "SpdPlatformData.h"

/**
  Get Platform Info to be consumed by SPD lib

  @param[in] Socket          - 0 based socket number
  @param[out] TypeRevisionId - Revision Id of board
  @param[out] BoardId        - Current board Id
  @param[out] InterposerType - Interposer Type populated for given socket

  @retval EFI_SUCCESS   - Successfully retrieved required information
  @retval EFI_NOT_FOUND - Required platform info missing
**/
EFI_STATUS
GetPlatformData (
  IN  UINT8 Socket,
  OUT UINT32 *TypeRevisionId,
  OUT EFI_PLATFORM_TYPE *BoardId,
  OUT INTERPOSER_TYPE *InterposerType
  )
{
  EFI_PLATFORM_INFO *PlatformInfo;
  EFI_HOB_GUID_TYPE *GuidHob;
  EFI_STATUS Status = EFI_SUCCESS;
  //
  // Get PlatformInfo GUID and HOB to retrieve interposer type
  //
  GuidHob = GetFirstGuidHob (&gEfiPlatformInfoGuid);
  if (GuidHob == NULL) {
    return EFI_NOT_FOUND;
  }

  PlatformInfo = GET_GUID_HOB_DATA (GuidHob);
  if (PlatformInfo == NULL) {
    return EFI_NOT_FOUND;
  }
  
  *InterposerType = PlatformInfo->InterposerType[Socket];
  *TypeRevisionId = PlatformInfo->TypeRevisionId;
  *BoardId = PlatformInfo->BoardId;

  return Status;

}