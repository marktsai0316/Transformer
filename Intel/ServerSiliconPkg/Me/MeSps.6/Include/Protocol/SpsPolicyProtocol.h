/** @file
  Interface definition details between SPS and platform drivers during DXE phase.

@copyright
  INTEL CONFIDENTIAL
  Copyright 2018 - 2020 Intel Corporation.

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

@par Specification Reference:
**/
#ifndef _SPS_POLICY_H_
#define _SPS_POLICY_H_

#include <ConfigBlock.h>
#include "ConfigBlock/Sps/SpsDxeConfig.h"

/**
  SPS Policy Protocol.
  All SPS Policy Protocol change history listed here.

**/
#define SPS_POLICY_PROTOCOL_REVISION  1

extern EFI_GUID gDxeSpsPolicyProtocolGuid;

#pragma pack (push,1)

/**
  SPS policy provided by platform for DXE phase
  This protocol provides an interface to get Intel SPS Configuration information

  <b>Revision 1</b>:
  - Initial version.
**/
typedef struct _SPS_POLICY_PROTOCOL {
  CONFIG_BLOCK_TABLE_HEADER      TableHeader;
/*
  Individual Config Block Structures are added here in memory as part of AddConfigBlock()
*/
} SPS_POLICY_PROTOCOL;

#pragma pack (pop)

#endif // _SPS_POLICY_H_
