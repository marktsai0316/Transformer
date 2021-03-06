/** @file

  TX Echo training support

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

#include <Library/MemoryCoreLib.h>
#include <Library/RcMemAllocLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemMcIpLib.h>
#include <Library/MemDdrioIpLib.h>
#include <Library/MemFmcIpLib.h>
#include <Library/ProcMemInitChipLib.h>
#include <Library/MemoryServicesLib.h>
#include <Library/CsrAccessLib.h>
#include <Library/SysHostPointerLib.h>
#include "Include/BaseMemoryCoreInternal.h"

//
// Number of Tx Echo Parameters
//
#define TX_ECHO_PARAM_COUNT  2

/**
  Optimizes Tx ECHO by margining Tx Dq eye width and height at various settings for Tx ECHO.

  @param[in]      Host  - Pointer to sysHost structure

  @retval SUCCESS
**/
UINT32
EFIAPI
TrainTxEcho (
  IN     PSYSHOST Host
  )
{
  UINT8               Socket;
  MRC_GT              Group[MAX_GROUPS];
  UINT8               NumGroups;
  POWER_TRAIN_PARAM   Param[TX_ECHO_PARAM_COUNT];
  UINT8               NumParams;
  SYS_SETUP           *Setup = NULL;

  Setup = GetSysSetupPointer ();
  if (Setup == NULL) {
    RC_FATAL_ERROR (FALSE, ERR_CAR_LIMIT, ERR_OUT_OF_CAR_RESOURCES);
    return FAILURE;
  }

  Socket = Host->var.mem.currentSocket;

  //
  // Return if this socket is disabled
  //
  if ((Host->nvram.mem.socket[Socket].enabled == 0) || (Host->nvram.mem.socket[Socket].maxDimmPop == 0)) {
    return SUCCESS;
  }

  //
  // Return if this step is disabled
  //
  if (((Setup->mem.optionsExt & TX_ECHO_CANCEL_EN) == 0)) {
    return SUCCESS;
  }

  //
  // Return if this step is disabled
  //
  if (!GetTrainingStepEnableChip (Socket, CHECKPOINT_MINOR_T_TX_ECHO)) {
    return SUCCESS;
  }

  // Parameters to Pass
  NumParams = TX_ECHO_PARAM_COUNT;
  if ((GetPowerParamFromSignalName (Host, Socket, TxEchoCoef, &Param[0]) != MRC_STATUS_SUCCESS) ||
       (GetPowerParamFromSignalName (Host, Socket, TxEchoUiSel, &Param[1]) != MRC_STATUS_SUCCESS)) {
    return FAILURE;
  }

  // Define signal groups to be margined for this parameter
  Group[0]  = TxVref;
  Group[1]  = TxDqDelay;
  NumGroups = 2;

  InitTxEchoCancellation (Socket);

  TrainDDROptParam (Host, Socket, Group, NumGroups, Param, NumParams);

  IO_Reset (Host, Socket);
  JedecInitSequence (Host, Socket, CH_BITMASK);

  return SUCCESS;

} // TrainTxEcho