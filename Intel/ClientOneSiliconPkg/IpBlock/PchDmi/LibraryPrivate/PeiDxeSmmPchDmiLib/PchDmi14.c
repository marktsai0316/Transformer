/** @file
  This file contains functions for PCH DMI SIP14

@copyright
  INTEL CONFIDENTIAL
  Copyright 2017 - 2019 Intel Corporation.

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

#include <Base.h>
#include <Uefi/UefiBaseType.h>
#include <Library/IoLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseLib.h>
#include <Library/PchInfoLib.h>
#include <Library/PchPcrLib.h>
#include <Library/PchDmiLib.h>
#include <Library/PchCycleDecodingLib.h>
#include <Library/PchPcrLib.h>
#include <Library/PchInfoLib.h>
#include <Register/PchDmiRegs.h>
#include <Register/PchDmi14Regs.h>
#include <Register/PchPcrRegs.h>

/**
  This function checks if DMI SIP14 Secured Register Lock (SRL) is set

  @retval SRL state
**/
BOOLEAN
IsPchDmi14Locked (
  VOID
  )
{
  return ((PchPcrRead32 (PID_DMI, R_PCH_DMI14_PCR_DMIC) & B_PCH_DMI14_PCR_DMIC_SRL) != 0);
}

/**
  Enable PCIe Relaxed Order for DMI SIP14
**/
VOID
PchDmi14EnablePcieRelaxedOrder (
  VOID
  )
{
  //
  // Enable Forced Relaxed Ordering to always allow downstream completions to pass posted writes.
  // Set Completion Relaxed Ordering Attribute Override Value
  // and Completion Relaxed Ordering Attribute Override Enable
  //
  PchPcrAndThenOr32 (PID_DMI, R_PCH_DMI14_PCR_2314, ~0u, (BIT31 | BIT7));
}

/**
  This function will switch SAI value to be driven to IOSF Primary Fabric
  for cycles with Core BDF from HOSTIA_BOOT_SAI to HOSTIA_POSTBOOT_SAI.
  To be used when PCH is paired with CFL CPU.
**/
VOID
PchDmi14EnablePostBootSai (
  VOID
  )
{
  PchPcrAndThenOr16 (
    PID_DMI,
    R_PCH_DMI14_PCR_IPCS,
    (UINT16)~0,
    B_PCH_DMI14_PCR_IPCS_PSS
    );
  //
  // Read back to ensure that the programming through sideband completes
  // before any new transaction is generated by subsequent code.
  // Ordering between primary and sideband is not guaranteed and
  // primary transaction triggered afterwards may be completed
  // before IPCS_PSS programming is finished.
  //
  PchPcrRead32 (PID_DMI, R_PCH_DMI14_PCR_IPCS);
}

/**
 Secure Register Lock data

 @param[out] SrlRegOffset        Register offset holding Secure Register Lock setting
 @param[out] SrlRegMask          Mask for Secure Register Lock setting
**/
VOID
PchDmi14SrlRegData (
  OUT UINT16  *SrlRegOffset,
  OUT UINT32  *SrlRegMask
  )
{
  *SrlRegMask = B_PCH_DMI14_PCR_DMIC_SRL;
  *SrlRegOffset = R_PCH_DMI14_PCR_DMIC;
}
