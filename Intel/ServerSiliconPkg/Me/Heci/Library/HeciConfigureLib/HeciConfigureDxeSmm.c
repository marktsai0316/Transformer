/** @file
  Heci driver configuration library for Dxe/Smm Phase.

 @copyright
  INTEL CONFIDENTIAL
  Copyright (c) 2020 Intel Corporation.

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

**/

#include <Uefi.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/HeciConfigureLib.h>
#include <Library/HeciCommonLib.h>
#include <Library/DxeMeLib.h>
#include <Library/MeUtilsLib.h>

GLOBAL_REMOVE_IF_UNREFERENCED BOOLEAN mHeciTraceDumpState = TRUE;
GLOBAL_REMOVE_IF_UNREFERENCED BOOLEAN mHeciTimeouts = TRUE;

/**
  Reads current HeciTimeout mode

  @retval TRUE     HECI Timeout is enabled
  @retval FALSE    HECI Timeout is disabled
**/
BOOLEAN
GetHeciTimeoutsEnabled (
  VOID
  )
{
  return mHeciTimeouts;
}

/**
  Reads current HeciTrace mode

  @retval TRUE     Full HECI traces are enabled
  @retval FALSE    Full HECI traces are disabled
**/
BOOLEAN
GetHeciTraceDumpState (
  VOID
  )
{
#ifndef SILENT_MODE
  return mHeciTraceDumpState;
#else // SILENT_MODE
  return FALSE;
#endif // SILENT_MODE
}

/**
  Library constructor, initializes module variables

  @retval EFI_SUCCESS   Constructor always returns success
**/
EFI_STATUS
EFIAPI
HeciTraceConfigureConstructor (
  VOID
  )
{
  mHeciTraceDumpState = FALSE;

#ifndef SILENT_MODE
  mHeciTraceDumpState = MeHeciFullTrace ();
#endif // SILENT_MODE
  mHeciTimeouts = MeHeciTimeoutsEnabled ();

  return EFI_SUCCESS;
}
