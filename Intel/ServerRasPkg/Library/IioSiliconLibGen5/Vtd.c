/** @file
  Implementation of vtd silicon interface

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

#include <Library/CpuCsrAccessLib.h>
#include <RcRegs.h>
#include <Library/MmPciExtLib.h>
#include <Library/IoLib.h>
#include <PCIeErrorTypes.h>

VOID
EFIAPI
SetVtdSeverity (
  IN  UINT8  Socket,
  IN  UINT8  Bus,
  IN  UINT8  Device,
  IN  UINT8  Func,
  IN  UINT32   Value
  )
{

  MmioWrite32 (MmPciAddressExt (Socket, Bus, Device, Func, ONLY_REGISTER_OFFSET (VTUNCERRSEV_IIO_VTD_REG), NULL), Value );
}

VOID
EFIAPI
SetVtdMsk (
  IN  UINT8  Socket,
  IN  UINT8  Bus,
  IN  UINT8  Device,
  IN  UINT8  Func,
  IN  UINT32 Value
  )
{

  MmioWrite32 (MmPciAddressExt (Socket, Bus, Device, Func, ONLY_REGISTER_OFFSET (VTUNCERRMSK_IIO_VTD_REG), NULL), Value );
}

/**
  This function is to check the VTD Error, if there is error on VTD on the
  ErrSeverity return TRUE, else return FALSE

  @param Socket    - Socket
  @param Bus       - Bus
  @param Device    - Device
  @param Function  - Function
  @param ErrSeverity The error's severity
  @retval None.

**/
BOOLEAN
EFIAPI
IsIioVtdError (
  IN  UINT8  Socket,
  IN  UINT8  Bus,
  IN  UINT8  Device,
  IN  UINT8  Function,
  IN  UINT8  ErrSeverity
  )
{
  VTUNCERRSTS_IIO_VTD_STRUCT   VtuncErrSts;
  UINT32                       VtCorErrSts;

  if (ErrSeverity == NONFATAL_ERROR_TYPE || ErrSeverity == FATAL_ERROR_TYPE) {
    VtuncErrSts.Data = MmioRead32 (MmPciAddressExt (Socket, Bus, Device, Function, ONLY_REGISTER_OFFSET (VTUNCERRSTS_IIO_VTD_REG), NULL));
    if (VtuncErrSts.Data != 0) {
      return TRUE;
    }
  }

  if (ErrSeverity == COR_ERROR_TYPE) {
    VtCorErrSts =  MmioRead32 (MmPciAddressExt (Socket, Bus, Device, Function, ONLY_REGISTER_OFFSET (VTCORERRSTS_IIO_VTD_REG), NULL));
    if (VtCorErrSts != 0) {
      return TRUE;
    }
  }
  return FALSE;
}

/**
  Clear Vtd Error Error register.

  @param Socket    - Socket
  @param Bus       - Bus
  @param Device    - Device
  @param Function  - Function
  @param ErrSeverity The error's severity
  @retval None.

**/
VOID
EFIAPI
ClearVtdStatus (
  IN  UINT8  Socket,
  IN  UINT8  Bus,
  IN  UINT8  Device,
  IN  UINT8  Func,
  IN  UINT32 ErrSeverity
  )
{
  VTUNCERRSTS_IIO_VTD_STRUCT   VtuncErrSts;
  UINT32                       VtCorErrSts;

  if (ErrSeverity == NONFATAL_ERROR_TYPE || ErrSeverity == FATAL_ERROR_TYPE) {
    VtuncErrSts.Data = MmioRead32 (MmPciAddressExt (Socket, Bus, Device, Func, ONLY_REGISTER_OFFSET (VTUNCERRSTS_IIO_VTD_REG), NULL));
    if (VtuncErrSts.Data != 0) {
      MmioWrite32 (MmPciAddressExt (Socket, Bus, Device, Func, ONLY_REGISTER_OFFSET (VTUNCERRSTS_IIO_VTD_REG), NULL), VtuncErrSts.Data );
    }
  }

  if (ErrSeverity == COR_ERROR_TYPE) {
    VtCorErrSts =  MmioRead32 (MmPciAddressExt (Socket, Bus, Device, Func, ONLY_REGISTER_OFFSET (VTCORERRSTS_IIO_VTD_REG), NULL));
    if (VtCorErrSts != 0) {
      MmioWrite32 (MmPciAddressExt (Socket, Bus, Device, Func, ONLY_REGISTER_OFFSET (VTCORERRSTS_IIO_VTD_REG), NULL), VtCorErrSts );
    }
  }

}


/**
  This function enable forwarding of Poison indication for VTD

   @param Bus       - Bus
   @param Device    - Device
   @param Function  - Function
   @param CorrErrMsk  - Correctable error mask

   @retval    none.
**/
VOID
EFIAPI
IioEnablePoisonVtd (
  IN      UINT8   Socket,
  IN      UINT8   Bus,
  IN      UINT8   Device,
  IN      UINT8   Function
  )
{
  IIOMISCCTRL_N1_IIO_VTD_STRUCT IioMiscCtrlN1;

  //
  // Set Iio poision forward enable
  //
  IioMiscCtrlN1.Data = MmioRead32 (MmPciAddressExt (Socket, Bus, Device, Function, ONLY_REGISTER_OFFSET (IIOMISCCTRL_N1_IIO_VTD_REG), NULL));
  IioMiscCtrlN1.Bits.poisfen = 1;
  MmioWrite32 (MmPciAddressExt (Socket, Bus, Device, Function, ONLY_REGISTER_OFFSET (IIOMISCCTRL_N1_IIO_VTD_REG), NULL), IioMiscCtrlN1.Data);
}

/**
  This function enable enable poismsg spec behavior

   @param Socket    - Socket
   @param Bus       - Bus
   @param Device    - Device
   @param Function  - Function

   @retval    none.
**/
VOID
EFIAPI
IioEnablePoisMsgSpecBehaviorVtd (
  IN      UINT8   Socket,
  IN      UINT8   Bus,
  IN      UINT8   Device,
  IN      UINT8   Function
  )
{
  //
  //  SPR has no this register
  //
}

