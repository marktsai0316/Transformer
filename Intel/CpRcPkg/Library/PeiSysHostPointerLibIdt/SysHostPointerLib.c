/** @file
  Implementation for sys host pointer

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

#include <Library/BaseLib.h>
#include <Library/DebugLib.h>

/**
  Gets sysHost pointer.
 
  This function abstracts the retrieval for sysHost pointer.
  We may have implementation specific way to get this pointer.

  @return pointer to sysHost

**/
VOID *
EFIAPI
GetSysHostPointer (
  VOID
  )
{
  IA32_DESCRIPTOR   Idtr;
  VOID              *SysHost;

  AsmReadIdtr (&Idtr);
  ASSERT (Idtr.Base != 0);

  SysHost = (VOID *) (*(UINTN*)(Idtr.Base - sizeof (UINTN) - sizeof (UINTN)));

  ASSERT (SysHost != NULL);
  return SysHost;
}

/**
  Sets SysHost pointer.

  This function abstracts the setting for sysHost pointer.
  We may have implementation specific way to get this pointer.

  @param[in]   The pointer of sysHost pointer to store.

**/
VOID
EFIAPI
SetSysHostPointer (
  IN VOID *SysHost
  )
{
  IA32_DESCRIPTOR   Idtr;

  ASSERT (SysHost != NULL);

  AsmReadIdtr (&Idtr);
  ASSERT (Idtr.Base != 0);

  (*(UINTN*)(Idtr.Base - sizeof (UINTN) - sizeof (UINTN))) = (UINTN) SysHost;
}

