/** @file
  Capsule on Fat Floppy Disk GUID.
  This is the contract between the recovery module and device recovery module
  in order to convey the name of a given recovery module type

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

#ifndef _PEI_CAPSULE_ON_FAT_FLOPPY_DISK_H
#define _PEI_CAPSULE_ON_FAT_FLOPPY_DISK_H

#define PEI_CAPSULE_ON_FAT_FLOPPY_DISK_GUID \
  { \
  0x2e3d2e75, 0x9b2e, 0x412d, {0xb4, 0xb1, 0x70, 0x41, 0x6b, 0x87, 0x0, 0xff }\
  };

extern EFI_GUID gPeiCapsuleOnFatFloppyDiskGuid;

#endif
