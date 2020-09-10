/** @file
  Interface header file for the HBM library class.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2016 - 2019 Intel Corporation. <BR>

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

#ifndef _HBM_CHIP_IO_CONTROL_H_
#define _HBM_CHIP_IO_CONTROL_H_

/**

  This function returns the actual register offset based on the pan
  handle routing type.

  @param[in]                Socket              Current Socket (0-Based)
  @param[in]                Channel             Current Channel (0-Based)
  @param[in]                Strobe              Current Strobe (0-Based)
  @param[in]                RegOffset           Address of the the register Group

  @retval                   CSR offset

**/
UINT32
UpdateHbmIoRegister (
  IN        UINT8           Socket,
  IN        UINT8           Ch,
  IN        UINT8           Strobe,
  IN        UINT32          RegOffset
  );

/**

  This disables HBM memory subSistem channel within IO module

  @param[in]                Socket              Current Socket (0-Based)
  @param[in]                Ch                  Current Channel (0-Based)

**/
VOID
DisableHbmCh (
  IN        UINT8           Socket,
  IN        UINT8           Ch
  );
#endif // _HBM_CHIP_IO_CONTROL_H_