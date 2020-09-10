/** @file

  Header file for Hybrid Storage devices

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

#ifndef _PEI_HYBRID_STORAGE_LIB_H
#define _PEI_HYBRID_STORAGE_LIB_H

#include <HybridStorageConfig.h>
#include <Library/PeiPchPcieClocksLib.h>

/**
  Determine if device is a Hybrid Storage Device or not

  @param[in] VendorId               Vendor Id of the device
  @param[in] DeviceId               Device Id of the device

  @retval TRUE                      Device is a Hybrid Storage Device
  @retval FALSE                     Device is not a Hybrid Storage Device
**/
BOOLEAN
IsHybridStorageDevice (
  IN    UINT16      VendorId,
  IN    UINT16      DeviceId
  );

/**
  Retrieves and returns Hybrid Storage Policy.

  @retval  TRUE if Hybrid Storage Policy is enabled FALSE otherwise
**/
BOOLEAN
IsHybridStoragePolicyEnabled (
  VOID
  );

/**
  Checks and configures clkreq if Hybrid Storage device is present

  @param[in] *ClkReqMap           Pointer to Clock request map
**/
VOID
HybridStorageCheckAndConfigureClkreq (
  VOID
  );

/**
  Retrieves and returns Hybrid Storage Policy.

  @retval  pointer to Hybrid Storage Policy
**/
HYBRID_STORAGE_CONFIG*
GetHybridStoragePolicy (
  VOID
  );

/**
  Overrides Clkreq when Hybrid Storage device is connected to the system

  @param[in] *ClkReqMap           Pointer to Clock request map
**/
VOID
HybridStorageClkReqOverride (
  IN UINT8                             *ClkReqMap
  );

/**
  Search for Hybrid Storage device and override softstraps if necessasary
**/
VOID
HybridStorageDynamicDetectionAndConfig (
  VOID
  );

/**
  Determines the location of HybridStorage device on platform.

  @return Returns a 32 bit value with the bit corresponding to the controller where the HybridStorage device is connected set.
**/
UINT32
GetHybridStorageLocation (
  VOID
  );

/**
  Updates the variable which stores HybridStorage devices location on the platform with new value.

  @param The updated location of HybridStorage device on the platform
**/
VOID
SetHybridStorageLocation (
  UINT32   Location
  );
#endif
