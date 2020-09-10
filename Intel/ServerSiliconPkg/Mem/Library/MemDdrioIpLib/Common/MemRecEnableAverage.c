/** @file

  File implements Receive Enable Average operation

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2019 - 2020 Intel Corporation. <BR>

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
#include <Base.h>

/**
  Normalize Roundtrip and IO Latency

  @param[in] Socket  - Processor socket number

  @retval None

**/
VOID
EFIAPI
NormalizeRoundTripAndIoLatency (
  IN UINT8     Socket
  )
{
  // Null implementation
}


/**

  Average Receive Enable delays across ranks

  @param[in] Socket  - Socket number

  @retval None

**/
VOID
EFIAPI
AverageRecEnableDelay (
  IN UINT8     Socket
  )
{
  // Null implementation
}

/**

  Shift CK delays to prepare for Average Receive Enable step2

  @param[in] Socket   - Processor socket number
  @param[in] Ch       - Channel number
  @param[out] CkOffset - Pointer to CK PI offset value to update

  @retval None

**/
VOID
EFIAPI
ReceiveEnableAveragePart2a (
  IN UINT8     Socket,
  IN UINT8     Ch,
  OUT INT16     *CkOffset
  )
{

}