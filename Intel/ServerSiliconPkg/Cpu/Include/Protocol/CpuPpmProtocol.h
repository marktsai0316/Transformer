/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 1999 - 2013 Intel Corporation. <BR>

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

#ifndef _CPU_PPM_PROTOCOL_H_
#define _CPU_PPM_PROTOCOL_H_

#include <Library/CpuPpmLib.h>

#define EFI_CPU_PPM_PROTOCOL_GUID \
  { \
    0x7e6a6cf5, 0xc89c, 0x492f, 0xac, 0x37, 0x23, 0x7, 0x84, 0x9c, 0x3a, 0xd5 \
  }

// {7E6A6CF5-C89C-492f-AC37-2307849C3AD5}


//
// Interface structure for the PPM Protocol
//
typedef struct _EFI_CPU_PPM_PROTOCOL {

  EFI_CPU_PM_STRUCT     *CpuPpmStruct;

} EFI_CPU_PPM_PROTOCOL;

extern EFI_GUID gEfiCpuPpmProtocolGuid;

#endif
