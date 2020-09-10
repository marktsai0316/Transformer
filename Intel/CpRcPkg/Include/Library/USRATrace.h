/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2011 - 2017 Intel Corporation. <BR>

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

#ifndef __USRA_TRACE_H__
#define __USRA_TRACE_H__


#include <UsraAccessType.h>

typedef enum {
  TraceRead = 0,
  TraceWrite = 1,
  TraceModify = 2,
  TraceGetAddr = 3
  } TRACE_OPERATION_TYPE;

/**
  This routine is for print register info to serial port.

  @param[in] Address              A pointer of the address of the USRA Address Structure
  @param[in] AlignedAddress       Physical address converted from USRA Address
  @param[in] Operation            Operation type in TRACE_OPERATION_TYPE
  @param[in] Buffer1              A pointer of data buffer for TraceRead and TraceWrite
  @param[in] Buffer2              A pointer of data buffer for TraceModify

**/
VOID
USRATrace (
  IN USRA_ADDRESS             *Address,
  IN UINTN                    AlignedAddress,
  IN UINT8                    Operation,
  IN VOID                     *Buffer1,
  IN VOID                     *Buffer2
  );


#endif