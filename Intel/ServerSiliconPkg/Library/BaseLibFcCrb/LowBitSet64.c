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
  Returns the bit position of the lowest bit set in a 64-bit value.

  This function computes the bit position of the lowest bit set in the 64-bit
  value specified by Operand. If Operand is zero, then -1 is returned.
  Otherwise, a value between 0 and 63 is returned.

  @param  Operand The 64-bit operand to evaluate.

  @retval 0..63  The lowest bit set in Operand was found.
  @retval -1     Operand is zero.


**/
INTN
EFIAPI
LowBitSet64 (
  IN      UINT64                    Operand
  )
{
  INTN                              BitIndex;

  if (Operand == 0) {
    return -1;
  }

  for (BitIndex = 0;
       (Operand & 1) == 0;
       BitIndex++, Operand = RShiftU64 (Operand, 1));
  return BitIndex;
}
