/** @file
  Miscellaneous PCIE features implementation.

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

#include <Base.h>


/**
  This function sets Bus Number for RootBusSn+1 (CPM and CPK) in OOBMSM registers

  @param IioIndex     - IIO index (socket number)

**/
VOID
IioSetRootBusNoOfExtendedStack (
  IN  UINT8                  IioIndex
  )
{
}


/**
  This function sets Max Payload Size field  in Device Control Register for IPs in RootBusSn+1,
   and their RootBusSn (Virtual Root Port) when applicable.

  @param IioIndex     - IIO index (socket number)

**/
VOID
IioSetMpsForIpInExtendedStack (
  IN  UINT8                  IioIndex
  )
{
}

/**
This function is to initialize PCIe PTM GTE Control Status Register

@param[in] IioIndex       - Index to CPU/IIO
@param[in] PortIndex      - Index to PCIe port
**/
VOID
PcieEnablePtmGte (
  IN  UINT8          IioIndex,
  IN  UINT8          PortIndex
  )
{

}