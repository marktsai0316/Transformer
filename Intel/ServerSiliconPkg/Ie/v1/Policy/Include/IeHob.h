/** @file
  IeHob.h

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2015 Intel Corporation. <BR>

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

#ifndef _IE_HOB_H_
#define _IE_HOB_H_

typedef struct {
  EFI_HOB_GUID_TYPE     EfiHobGuidType;
  INT8                  IeDisabledInSoftStraps;
  INT8                  DfxIe;
} IE_HOB;

#define IE_HOB_GUID \
  { \
    0x081077fa, 0x577d, 0x43b8, 0xa8, 0xac, 0x9e, 0x0d, 0x31, 0x65, 0xf4, 0xee \
  }

extern EFI_GUID gIeHobGuid;

#endif // _IE_HOB_H_