/** @file
  Interface for Security Policy library. These functions are used to
  Initialize, store and retrive the security policy data. It has three
  functions namely CreateDefaultSecurityPolicy, SetSecurityPolicy and
  GetSecurityPolicy, they are used to create, Set and Get the Security
  policies repectively.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2018 - 2020 Intel Corporation. <BR>

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

#ifndef __SECURITY_POLICY_LIB_H__
#define __SECURITY_POLICY_LIB_H__

#include <Guid/SecurityPolicy.h>

/**
  Set Security policy info into system. Does initialization
  of Security Policy Structure.

  @retval  EFI_SUCCESS          Set Security policy success.
  @retval  EFI_OUT_OF_RESOURCES Out of resource;
**/
EFI_STATUS
EFIAPI
InitializeDefaultSecurityConfigPolicy (
  VOID
  );

/**
  Set Security policy info into system.

  @param   SecurityPolicy       Pointer to Security Policy Info.
  @param   DataSize             The size of Security Policy.

  @retval  EFI_SUCCESS          Set Security policy success.
  @retval  EFI_OUT_OF_RESOURCES Out of resource;
**/
EFI_STATUS
EFIAPI
SetSecurityPolicy (
  IN  SECURITY_POLICY *SecurityPolicy,
  IN  UINTN DataSize
  );

/**
  Get Security policy info into system.

  @retval  EFI_SUCCESS          Get Security policy success.
  @retval  EFI_NOT_FOUND        Can't find the Security Policy.
  @retval  EFI_BUFFER_TOO_SMALL The Buffer's size is too small.
**/
SECURITY_POLICY *
EFIAPI
GetSecurityPolicy (
  VOID
  );

/**
  Get Security Policy directly from HOB

  @retval  SECURITY_POLICY *  Get Security policy pointer, NULL on failure.
**/
SECURITY_POLICY *
EFIAPI
GetSecurityPolicyStalagmite (
  VOID
  );
#endif