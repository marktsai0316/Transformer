/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2019 Intel Corporation.

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

#ifndef _ME_TYPE_GET_LIB_H_
#define _ME_TYPE_GET_LIB_H_

#include <MeTypeDefs.h>

typedef enum {
   ME_TYPE_UNDEF    = METYPE_UNDEF,
   ME_TYPE_DFX      = METYPE_DFX,
   ME_TYPE_SPS      = METYPE_SPS,
   ME_TYPE_CLIENT   = METYPE_CLIENT,
   ME_TYPE_DISABLED = METYPE_DISABLED
} ON_BOARD_ME_TYPE;

/**
  Get Me FW type from ME via HECI

  @param[out] FwType               ME Type
  @param[out] FwSubType            ME SubType

  @retval ME_TYPE_UNDEF            Can't determine ME Type
  @retval ME_TYPE_SPS              Detected SPS
  @retval ME_TYPE_CLIENT           Detected Client ME
  @retval ME_TYPE_DFX              Detected Dfx ME
  @retval ME_TYPE_DISABLED         Disable all ME flows
**/
ON_BOARD_ME_TYPE
PeiHeciGetMeType (
  OUT UINT8 *FwType,
  OUT UINT8 *FwSubType
  );

#endif // _ME_TYPE_GET_LIB_H_
