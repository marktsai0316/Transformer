/** @file
  PEI Pch HSUART Lib.

@copyright
  INTEL CONFIDENTIAL
  Copyright 2018 - 2019 Intel Corporation.

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
#include <Library/IoLib.h>
#include <Library/DebugLib.h>
#include <Library/PeiServicesLib.h>
#include <IndustryStandard/Pci30.h>
#include <Library/PciSegmentLib.h>
#include <Ppi/SiPolicy.h>
#include <Register/PchRegs.h>
#include <PchLimits.h>
#include <Private/Library/PeiItssLib.h>
#include <Private/Library/PchHsuartLib.h>
#include <Register/PchRegsHsuart.h>

/**
  This function performs basic initialization for HSUART

  @param[in] SiPolicy             Policy
**/
VOID
PchHsuartInit (
  IN  SI_POLICY_PPI      *SiPolicy
  )
{
  UINT64                  SerialBaseAddress;
  UINT8                   InterruptPin;
  UINT8                   FunctionNumber;
  PCH_HSUART_CONFIG      *PchHsuartConfig;
  EFI_STATUS              Status;

  for (FunctionNumber = 0; FunctionNumber <= PCH_MAX_SERIAL_FUNCTION; FunctionNumber++) {
    //
    // Compute PCI Lib Address Hsuart
    //
    SerialBaseAddress = PCI_SEGMENT_LIB_ADDRESS (
                           DEFAULT_PCI_SEGMENT_NUMBER_PCH,
                           DEFAULT_PCI_BUS_NUMBER_PCH,
                           PCI_DEVICE_NUMBER_PCH_HSUART,
                           FunctionNumber,
                           0);

    Status = GetConfigBlock ((VOID *) SiPolicy, &gHsuartConfigGuid, (VOID *) &PchHsuartConfig);
    ASSERT_EFI_ERROR (Status);

    ///
    /// Configure Hsuart interrupt
    ///
    InterruptPin = ItssGetDevIntPin (SiPolicy, PCI_DEVICE_NUMBER_PCH_HSUART, FunctionNumber);

    PciSegmentWrite8 (SerialBaseAddress + PCI_INT_PIN_OFFSET, InterruptPin);
  }

}