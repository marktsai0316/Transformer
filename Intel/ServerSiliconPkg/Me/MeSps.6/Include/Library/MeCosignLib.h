/** @file
  ME Cosigning support library

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2018 - 2020 Intel Corporation.

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

#ifndef _ME_COSIGN_LIB_H_
#define _ME_COSIGN_LIB_H_

/**
  This is interface which allow sending SB_VERIFY_MANIFEST HECI command.
  Function allows cosign manifest verification.

  @param[in]  Manifest           Manifest data buffer
  @param[in]  ManifestSize       Manifest size in bytes
  @param[in]  Metadata           Manigest metadata buffer
  @param[in]  MetadataSize       Manifest metadata size in bytes

  @retval EFI_SUCCESS            Command succeeded (manifest verified)
  @retval EFI_INVALID_PARAMETER  Error in manifest verification process
  @retval EFI_DEVICE_ERROR       HECI communication error
 **/
EFI_STATUS
EFIAPI
MeCoSignVerifyManifest (
  IN VOID    *Manifest,
  IN UINT32  ManifestSize,
  IN VOID    *MetaData,
  IN UINT32  MetaDataSize,
  IN UINT32  UsageIndex
  );

  /**
  This is an interface which allow sending ARBH_SVN_COMMIT_NONCE HECI command.
  Function instructs ME to commit SVNs into FPFs.

  @retval EFI_SUCCESS             Command succeeded (SVNs were or are going to be committed)
  @retval EFI_INVALID_PARAMETER   Error while executing ARBH_SVN_COMMIT_NONCE command
  @retval EFI_DEVICE_ERROR        HECI communication error
 **/
EFI_STATUS
EFIAPI
MeCoSignArbSvnCommit (
  VOID
  );

#endif // _ME_COSIGN_LIB_H_

