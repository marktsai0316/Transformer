/** @file
  ATA Policy PPI as defined in EFI 2.0

  @copyright
  INTEL CONFIDENTIAL
  Copyright 1999 - 2002 Intel Corporation. <BR>

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

#ifndef _PEI_ATA_POLICY_PPI_H
#define _PEI_ATA_POLICY_PPI_H

#define PEI_ATA_POLICY_PPI_GUID \
  { \
  0x1b8ddea4, 0xdeb2, 0x4152, {0x91, 0xc2, 0xb7, 0x3c, 0xb1, 0x6c, 0xe4, 0x64 }\
  }

typedef struct _PEI_ATA_POLICY_PPI PEI_ATA_POLICY_PPI;

typedef struct _PEI_ATA_POLICY_PPI {
  UINTN BaseAddress;
} PEI_ATA_POLICY_PPI;

extern EFI_GUID gPeiAtaPolicyPpiGuid;

#endif
