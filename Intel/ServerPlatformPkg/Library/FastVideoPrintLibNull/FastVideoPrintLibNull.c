/** @file

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

#include <Library/BaseLib.h>
#include <Library/FastVideoPrintLib.h>

EFI_STATUS
ConsolePrint (
  IN CONST CHAR8 *Str
  )
{
  return EFI_SUCCESS;
}

EFI_STATUS
ConsolePrintColor (
  IN UINT8 ForegroundColor,
  IN UINT8 BackgroundColor,
  IN CONST CHAR8 *Str
  )
{
  return EFI_SUCCESS;
}

UINT32
ConsolePrintXYColor(
  IN UINT8 Row, 
  IN UINT8 Column,
  IN UINT8 ForegroundColor,
  IN UINT8 BackgroundColor,
  IN CONST CHAR8* Format,
  ...
  )
{
  return 0;
}

EFI_STATUS
ConsoleClear (
  VOID
  )
{
  return EFI_SUCCESS;
}

CHAR8
ConvertBcdToAscii (
  IN UINT8 Value
  )
{
  return 0;
}

