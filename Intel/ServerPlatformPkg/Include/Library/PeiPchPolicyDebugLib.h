/** @file
  SampleCode header file of the library for Intel PCH PEI Debug Policy initialization.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2014 - 2016 Intel Corporation. <BR>

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

#ifndef _PEI_PCH_POLICY_DEBUG_LIB_H_
#define _PEI_PCH_POLICY_DEBUG_LIB_H_


/**
  This function performs PCH PEI Debug Policy initialization.

  @param[in, out] SiPolicy   The SI Policy PPI instance

  @retval EFI_SUCCESS        The PPI is installed and initialized.
  @retval EFI ERRORS         The PPI is not successfully installed.
**/
EFI_STATUS
EFIAPI
UpdatePeiPchPolicyDebug (
  IN OUT  SI_POLICY_PPI  *SiPolicy
  );

/**
  This function performs PCH PEI Debug Policy initialization.

  @param[in] PchPreMemPolicy The PCH PreMem Policy PPI instance

  @retval EFI_SUCCESS        The PPI is installed and initialized.
  @retval EFI ERRORS         The PPI is not successfully installed.
**/
EFI_STATUS
EFIAPI
UpdatePeiPchPolicyDebugPreMem (
  IN OUT  SI_PREMEM_POLICY_PPI  *SiPreMemPolicy
  );
#endif
