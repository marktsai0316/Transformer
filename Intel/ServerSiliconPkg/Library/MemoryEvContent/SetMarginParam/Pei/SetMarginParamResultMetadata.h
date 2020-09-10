/** @file

@copyright
INTEL CONFIDENTIAL
Copyright 2006 - 2020 Intel Corporation. <BR>

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

#ifndef __SET_MARGIN_PARA_RESULT_MMETADATA_H__
#define __SET_MARGIN_PARA_RESULT_MMETADATA_H__

#include "ssabios.h"

#define SET_MARGIN_PARAM_RESULT_METADATA_GUID \
{0xAF7B34ED,0x079C,0x4870,{0x96,0xB5,0x99,0xB1,0x94,0xA3,0x01,0xEF} }

#pragma pack (push, 1)

typedef struct SET_MARGIN_PARAM_RESULT_METADATA{
  UINT8 MajorVer;
  UINT8 MinorVer;
  UINT8 RevVer;
  UINT32 BuildVer;
  UINT8 StatusCode;
  UINT16 LineNumber;
  CHAR8 FileName[13];
}SET_MARGIN_PARAM_RESULT_METADATA;


#pragma pack (pop)

#endif //__SET_MARGIN_PARA_RESULT_MMETADATA_H__
