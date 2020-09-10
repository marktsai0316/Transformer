/** @file
  FSP Error Information HOB to describe errors inside FSP that bootloader may
  take some actions to handle those error scenarios.

@copyright
  INTEL CONFIDENTIAL
  Copyright 2019 Intel Corporation.

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

#ifndef _FSP_ERROR_INFO_H_
#define _FSP_ERROR_INFO_H_

///
/// GUID value indicating the FSP error information.
///
#define FSP_ERROR_INFO_HOB_GUID \
  { \
    0x611e6a88, 0xadb7, 0x4301, { 0x93, 0xff, 0xe4, 0x73, 0x04, 0xb4, 0x3d, 0xa6 } \
  }
#define STATUS_CODE_DATA_TYPE_FSP_ERROR_GUID \
  { \
    0x611e6a88, 0xadb7, 0x4301, { 0x93, 0xff, 0xe4, 0x73, 0x04, 0xb4, 0x3d, 0xa6 } \
  }

#define FSP_ERROR_INFO_STATUS_CODE_TYPE          (EFI_ERROR_CODE | EFI_ERROR_UNRECOVERED)
#define FSP_ERROR_INFO_STATUS_CODE_VALUE         0
#define FSP_ERROR_INFO_STATUS_CODE_INSTANCE      0

///
/// FSP Error Information Block.
///
#pragma pack(1)
typedef struct {
  ///
  /// GUID HOB header.
  ///
  EFI_HOB_GUID_TYPE     GuidHob;

  ///
  /// ReportStatusCode () type identifier.
  ///
  EFI_STATUS_CODE_TYPE  Type;

  ///
  /// ReportStatusCode () value.
  ///
  EFI_STATUS_CODE_VALUE Value;

  ///
  /// ReportStatusCode () Instance number.
  ///
  UINT32                Instance;

  ///
  /// Optional GUID which may be used to identify
  /// which internal component of the FSP was
  /// executing at the time of the error.
  ///
  EFI_GUID              CallerId;

  ///
  /// GUID identifying the nature of the fatal error.
  ///
  EFI_GUID              ErrorType;

  ///
  /// EFI_STATUS code describing the error encountered.
  ///
  UINT32                Status;
} FSP_ERROR_INFO_HOB;

typedef struct {
  ///
  /// A GUID identifying the nature of the fatal error.
  /// This GUID is platform speciic.
  ///
  EFI_GUID               ErrorType;

  ///
  /// A code describing the error encountered.
  ///
  EFI_STATUS             Status;
} FSP_ERROR_INFO;

#pragma pack()

extern GUID gFspErrorInfoHobGuid;

#endif //_FSP_ERROR_INFO_H_
