/** @file
  Math worker functions.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2006 - 2008 Intel Corporation. <BR>

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

#include "BaseLibInternals.h"

/**
  Rotates a 64-bit integer left between 0 and 63 bits, filling the low bits
  with the high bits that were rotated.

  This function rotates the 64-bit value Operand to the left by Count bits. The
  low Count bits are fill with the high Count bits of Operand. The rotated
  value is returned.

  If Count is greater than 63, then ASSERT().

  @param  Operand The 64-bit operand to rotate left.
  @param  Count   The number of bits to rotate left.

  @return Operand << Count

**/
UINT64
EFIAPI
LRotU64 (
  IN      UINT64                    Operand,
  IN      UINTN                     Count
  )
{
  ASSERT (Count < 64);
  return InternalMathLRotU64 (Operand, Count);
}