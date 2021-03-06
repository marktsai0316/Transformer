/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2017 Intel Corporation. <BR>

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

#include <Uefi.h>
#include <PiPei.h>
#include <Library/EmulationConfigurationLib.h>

/**

   Return if Hybrid System Level Emulation is enabled or not

  @param none

  @retval False

**/
BOOLEAN
EFIAPI
HybridSystemLevelEmulationEnabled (
  VOID
  )
{
  return FALSE;
}

/**

   Return if Ubios Generation is enabled or not

  @param none

  @retval False

**/
BOOLEAN
EFIAPI
UbiosGenerationEnabled (
  VOID
  )
{
  return FALSE;
}


/**

   Get the uBIOS output mode

  @param none

  @retval   uBIOS output mode

**/

UINT8
EFIAPI
GetUbiosOutputMode (
  VOID
  )
{
  return ASM_OUTPUT_DISABLE;
}

/**

   Set the uBIOS output mode

  @param[in] Value    uBIOS output moder

  @retval             EFI_UNSUPPORTED

**/

EFI_STATUS
EFIAPI
SetUbiosOutputMode (
  IN UINT8 Value
  )
{
  return EFI_UNSUPPORTED;
}


/**

   Get the Label Number which is used in the ASM output loop back

  @param[in] Value    Loop Back Label Number

  @retval             EFI_UNSUPPORTED

**/

EFI_STATUS
EFIAPI
GetUbiosLoopbackLabelNumber (
  OUT UINT32 *Value
  )
{
  return EFI_UNSUPPORTED;
}

/**

   Set the Label Number which is used in the ASM output loop back

  @param[in] Value    Loop Back Label Number

  @retval             EFI_UNSUPPORTED

**/

EFI_STATUS
EFIAPI
SetUbiosLoopbackLabelNumber (
  IN UINT32 Value
  )
{
  return EFI_UNSUPPORTED;
}

/**

   Get the value of FnvAccess

  @param none

  @retval   FnvAccess value

**/

UINT8
EFIAPI
GetUbiosFnvAccessValue (
  VOID
  )
{
  return FNV_ACCESS_DISABLE;
}

/**

   Set the value of FnvAccess

  @param[in] Value    Loop Back Label Number

  @retval             EFI_UNSUPPORTED

**/

EFI_STATUS
EFIAPI
SetUbiosFnvAccessValue (
  IN UINT8 Value
  )
{
  return EFI_UNSUPPORTED;
}


/**

   Check the setting of Ubios Generation and Hybrid System Level Emulation.

  @param none

  @retval False

**/
BOOLEAN
EFIAPI
UbiosGenerationOrHsleEnabled (
  VOID
  )
{
  return FALSE;
}

/**

   Return if Msr Trace is enabled or not

  @param none

  @retval False

**/

BOOLEAN
MsrTraceEnabled (
  VOID
  )
{
  return FALSE;
}


/**

   Get the Msr Trace output mode

  @param    none

  @retval   Msr Trace output mode

**/

UINT8
EFIAPI
GetMsrTraceOutputMode (
  VOID
  )
{
  return MSR_OUTPUT_DISABLE;
}

/**

   Set the Msr Trace output mode

  @param[in] Value         Msr Trace output moder

  @retval                  EFI_UNSUPPORTED

**/

EFI_STATUS
EFIAPI
SetMsrTraceOutputMode (
  IN UINT8 Value
  )
{
  return EFI_UNSUPPORTED;
}

/**

  EmulationPolling is an assembly polling loop for reading CSRs
  EmulationPolling allows you to poll multiple bits

  @param[in] *Address    - Address to read
  @param[in] Mask        - Bit mask for the value read
  @param[in] Logic       - polling for the register bit to become 0 or 1
  @param[in] PowerGood   - Reset Type for choosing emulation loop label.

  @retval N/A

**/
VOID
EFIAPI
EmulationPolling (
  IN UINT8    *Address,
  IN UINT32   Mask,
  IN UINT8    Logic,
  IN BOOLEAN  PowerGood
  )
{
  //Null function
}