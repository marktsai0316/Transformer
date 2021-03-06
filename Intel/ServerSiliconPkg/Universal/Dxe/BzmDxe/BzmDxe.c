/** @file

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

#include "BzmDxe.h"
#include <Include/MemMapHost.h>
#include <Library/SysHostPointerLib.h>

/**
  The module Entry Point of the Boot-time fast Zero Memory DXE driver.

  @param[in] ImageHandle       The firmware allocated handle for the EFI image.
  @param[in] SystemTable       A pointer to the EFI System Table.

  @retval EFI_SUCCESS          The entry point is executed successfully.
  @retval Other                Some error occurs when executing this entry point.

**/
EFI_STATUS
EFIAPI
BzmDxeEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS           Status;
  MEMORY_MAP_HOST      *MemMapHost;

  //
  // Check if BZM is supported on the system.
  //
  MemMapHost = GetMemMapHostPointer ();
  if (!MemMapHost->IsFastZeroMemEn) {
    DEBUG ((DEBUG_ERROR, "[BZM] Boot-time fast Zero Memory is not supported on system\n"));
    return EFI_SUCCESS;
  }

  //
  // Program the MSR to enable BZM support.
  //
  Status = EnableBzmSupport ();
  if (EFI_ERROR (Status)) {
    return Status;
  }

  //
  // Install the BZMI ACPI table.
  //
  Status = InstallBzmiAcpiTable ();
  if (EFI_ERROR (Status)) {
    return Status;
  }

  return EFI_SUCCESS;
}
