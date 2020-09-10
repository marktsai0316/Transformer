/** @file
This file defines everything that's needed for firmware to access
and manipulate the Intel(R) silicon chip.
All registers, bits, constants, etc. that are described in the chip's
EDS are represented here.
This file usurps all defines that relate to this chip. This means that
it is inappropriate to define any of such define in any other file.
Although this file maybe incomplete while under construction (maybe it
will never be completed as there may be no need for access to all
features), any new define must go here and follow naming conventions
set therefore.
In an ideal world, this file dould originate from the hardware design
team that designed the chip.

@copyright
INTEL CONFIDENTIAL
Copyright 2019 Intel Corporation. <BR>

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
#ifndef _IIOPCHLINKPWRCONF_H_
#define _IIOPCHLINKPWRCONF_H_

#include <Base.h>

/**
  Enable access to PCH link port configuration

  @param[in] IioGlobalData - Pointer to IIO global data.
  @param[in] IioIndex      - Socket number of the port being configured.
  @param[in] PortIndex     - Port number being configured.
**/
VOID
IioEnablePchLinkPortDfxAccess (
  IN  IIO_GLOBALS               *IioGlobalData,
  IN  UINT8                      IioIndex,
  IN  UINT8                      PortIndex
);

/**
  Restrict access to PCH link port configuration

  @param[in] IioGlobalData - Pointer to IIO global data.
  @param[in] IioIndex      - Socket number of the port being configured.
  @param[in] PortIndex     - Port number being configured.
**/
VOID
IioRestrictPchLinkPortDfxAccess (
  IN  IIO_GLOBALS               *IioGlobalData,
  IN  UINT8                      IioIndex,
  IN  UINT8                      PortIndex
);

/**
  Enable clock gating configuration settings for PCH Link ports

  @param[in] IioGlobalData - Pointer to IIO global data.
  @param[in] IioIndex      - Socket number of the port being configured.
  @param[in] PortIndex     - Port number being configured.
**/
VOID
IioNorthBridgePortClkGatingEn (
  IN  IIO_GLOBALS               *IioGlobalData,
  IN  UINT8                      IioIndex,
  IN  UINT8                      PortIndex
);


/**
  Enable ASPM L1 configuration settings for North Bridge Rlink

  @param IioIndex      - Socket number of the port being configured.
  @param PortIndex     - Port number being configured.
**/
VOID
IioNorthBridgePortL1En (
  IN  IIO_GLOBALS               *IioGlobalData,
  IN  UINT8                      IioIndex,
  IN  UINT8                      PortIndex
);
#endif  //_IIOPCHLINKPWRCONF_H_