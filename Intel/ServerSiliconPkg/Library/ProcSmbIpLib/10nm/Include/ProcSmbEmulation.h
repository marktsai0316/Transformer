/** @file
  ProcSmbEmulation.h

  Proc SMB Emulation header file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2018 - 2019 Intel Corporation. <BR>

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

#ifndef _PROC_SMB_EMULATION_H_
#define _PROC_SMB_EMULATION_H_

//
// Bit mask for bits in the status register
//
#define SMB_BUSY_BIT_MASK       BIT0
#define SMB_ERROR_BIT_MASK      BIT1
#define SMB_READ_DONE_BIT_MASK  BIT2
#define SMB_WRITE_DONE_BIT_MASK BIT3

//
// Polling logic for the bits in status register
// smb_busy and smb_sbe are polling 0
// smb_rdo and smb_wod are polling 1
//
#define SMB_BUSY_POLLING_LOGIC       0
#define SMB_ERROR_POLLING_LOGIC      0
#define SMB_READ_DONE_POLLING_LOGIC  1
#define SMB_WRITE_DONE_POLLING_LOGIC 1

/**

  This function polls smbus status registers for emulation

  param[in]  Socket             - Socket Number
  param[in]  Instance           - Smbus Instance number
  param[in]  SmbStatReg         - Smbus status register
  param[in]  BitMask            - bit we are polling
  param[in]  Logic              - polling for 0 or 1

  @retval N/A

**/
VOID
PollSmbusStatusRegister (
  IN UINT8  Socket,
  IN UINT8  Instance,
  IN UINT32 SmbStatReg,
  IN UINT32 BitMask,
  IN UINT8  Logic
  );
#endif // ifndef _PROC_SMB_EMULATION_H_

