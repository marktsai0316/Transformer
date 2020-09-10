/** @file
  UbaSlotUpdateLib implementation.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2012 - 2016 Intel Corporation. <BR>

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
#include <Uefi.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/DebugLib.h>
#include <Library/UbaSlotUpdateLib.h>
#include <Protocol/UbaCfgDb.h>

EFI_STATUS
PlatformGetSlotTableData (
  IN OUT IIO_BROADWAY_ADDRESS_DATA_ENTRY  **BroadwayTable,
  IN OUT UINT8                            *IOU2Setting,
  IN OUT UINT8                            *FlagValue

)
{
  EFI_STATUS                        Status;
  UBA_CONFIG_DATABASE_PROTOCOL      *UbaConfigProtocol = NULL;
  UINTN                             DataLength = 0;
  PLATFORM_SLOT_UPDATE_TABLE        IioSlotUpdateTable;

  Status = gBS->LocateProtocol (
                  &gUbaConfigDatabaseProtocolGuid,
                  NULL,
                  &UbaConfigProtocol
                  );
  if (EFI_ERROR(Status)) {
    return Status;
  }

  DataLength = sizeof(IioSlotUpdateTable);
  Status = UbaConfigProtocol->GetData (
                                   UbaConfigProtocol,
                                   &gPlatformSlotDataDxeGuid,
                                   &IioSlotUpdateTable,
                                   &DataLength
                                   );

  if (EFI_ERROR(Status)) {
    return Status;
  }

  ASSERT (IioSlotUpdateTable.Signature == PLATFORM_SLOT_UPDATE_SIGNATURE);
  ASSERT (IioSlotUpdateTable.Version   == PLATFORM_SLOT_UPDATE_VERSION);

  *BroadwayTable = IioSlotUpdateTable.BroadwayTablePtr;
  *IOU2Setting   = IioSlotUpdateTable.GetIOU2Setting (*IOU2Setting);
  *FlagValue      = IioSlotUpdateTable.FlagValue;
  return Status;
}

EFI_STATUS
PlatformGetSlotTableData2 (
  IN OUT IIO_BROADWAY_ADDRESS_DATA_ENTRY  **BroadwayTable,
  IN OUT UINT8                            *IOU0Setting,
  IN OUT UINT8                            *FlagValue,
  IN OUT UINT8                            *IOU2Setting,
  IN     UINT8                            SkuPersonalityType
)
{
  EFI_STATUS                        Status;
  UBA_CONFIG_DATABASE_PROTOCOL      *UbaConfigProtocol = NULL;
  UINTN                             DataLength = 0;
  PLATFORM_SLOT_UPDATE_TABLE2       IioSlotUpdateTable;

  Status = gBS->LocateProtocol (
                  &gUbaConfigDatabaseProtocolGuid,
                  NULL,
                  &UbaConfigProtocol
                  );
  if (EFI_ERROR(Status)) {
    return Status;
  }

  DataLength = sizeof(IioSlotUpdateTable);
  if ((SkuPersonalityType == 1) || (SkuPersonalityType == 3)) {
    Status = UbaConfigProtocol->GetData (
                                     UbaConfigProtocol,
                                     &gPlatformSlotDataDxeGuid2_1,
                                     &IioSlotUpdateTable,
                                     &DataLength
                                     );
  } else {
    Status = UbaConfigProtocol->GetData (
                                     UbaConfigProtocol,
                                     &gPlatformSlotDataDxeGuid2,
                                     &IioSlotUpdateTable,
                                     &DataLength
                                     );
  }
  if (EFI_ERROR(Status)) {
    return Status;
  }

  ASSERT (IioSlotUpdateTable.Signature == PLATFORM_SLOT_UPDATE_SIGNATURE);
  ASSERT (IioSlotUpdateTable.Version   == PLATFORM_SLOT_UPDATE_VERSION);

  *BroadwayTable = IioSlotUpdateTable.BroadwayTablePtr;
  *IOU0Setting   = IioSlotUpdateTable.GetIOU0Setting (*IOU0Setting);
  *FlagValue     = IioSlotUpdateTable.FlagValue;
  *IOU2Setting   = IioSlotUpdateTable.GetIOU2Setting (SkuPersonalityType, *IOU2Setting);

  return Status;
}
