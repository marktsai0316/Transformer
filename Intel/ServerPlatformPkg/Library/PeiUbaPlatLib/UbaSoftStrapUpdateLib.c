/** @file
  UbaSoftStrapUpdateLib implementation.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2012 - 2017 Intel Corporation. <BR>

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

#include <PiPei.h>
#include <Uefi/UefiSpec.h>
#include <Ppi/UbaCfgDb.h>
#include <Library/PeimEntryPoint.h>
#include <Library/PeiServicesLib.h>
#include <Library/PeiServicesTablePointerLib.h>
#include <Library/DebugLib.h>
#include <Library/UbaSoftStrapUpdateLib.h>


EFI_STATUS
GetPchSoftSoftStrapTable (
  IN  VOID                    **PchSoftStrapTable
  )
{
  EFI_STATUS                        Status;
  UBA_CONFIG_DATABASE_PPI           *UbaConfigPpi = NULL;
  PLATFORM_PCH_SOFTSTRAP_UPDATE     PchSoftStrapUpdate;
  UINTN                             Size;

  Status = PeiServicesLocatePpi (
              &gUbaConfigDatabasePpiGuid,
              0,
              NULL,
              &UbaConfigPpi
              );
  if (EFI_ERROR(Status)) {
    return Status;
  }

  Size = sizeof(PchSoftStrapUpdate);
  Status = UbaConfigPpi->GetData (
                                UbaConfigPpi,
                                &gPlatformPchSoftStrapConfigDataGuid,
                                &PchSoftStrapUpdate,
                                &Size
                                );
  if (EFI_ERROR(Status)) {
    return Status;
  }

  ASSERT (PchSoftStrapUpdate.Signature == PLATFORM_SOFT_STRAP_UPDATE_SIGNATURE);
  ASSERT (PchSoftStrapUpdate.Version == PLATFORM_SOFT_STRAP_UPDATE_VERSION);

  *PchSoftStrapTable = PchSoftStrapUpdate.PchSoftStrapTablePtr;

  return Status;
}

VOID
PlatformSpecificPchSoftStrapUpdate (
  IN OUT  UINT8                 *FlashDescriptorCopy
  )
{
  EFI_STATUS                        Status;
  UBA_CONFIG_DATABASE_PPI           *UbaConfigPpi = NULL;
  PLATFORM_PCH_SOFTSTRAP_UPDATE     PchSoftStrapUpdate;
  UINTN                             Size;

  Status = PeiServicesLocatePpi (
              &gUbaConfigDatabasePpiGuid,
              0,
              NULL,
              &UbaConfigPpi
              );
  if (EFI_ERROR(Status)) {
    return;
  }

  Size = sizeof(PchSoftStrapUpdate);
  Status = UbaConfigPpi->GetData (
                                UbaConfigPpi,
                                &gPlatformPchSoftStrapConfigDataGuid,
                                &PchSoftStrapUpdate,
                                &Size
                                );
  if (EFI_ERROR(Status)) {
    return;
  }

  ASSERT (PchSoftStrapUpdate.Signature == PLATFORM_SOFT_STRAP_UPDATE_SIGNATURE);
  ASSERT (PchSoftStrapUpdate.Version == PLATFORM_SOFT_STRAP_UPDATE_VERSION);

  PchSoftStrapUpdate.PchSoftStrapPlatformSpecificUpdate (FlashDescriptorCopy);
}

