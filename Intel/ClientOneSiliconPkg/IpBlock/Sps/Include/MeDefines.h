/** @file
  ME config block for PEI phase

@copyright
  INTEL CONFIDENTIAL
  Copyright 2018 - 2020 Intel Corporation.

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
#ifndef _ME_DEFINES_H
#define _ME_DEFINES_H

#define ME_SPS_ALTITUDE_NONE        0x8000
#define ME_SPS_MCTP_BUS_OWNER_NONE  0
#define ME_SPS_INIT_TIMEOUT         2    ///< Max SPS firmware initialization time

#define ME_SPS_PMBUS_ADDR_PSU1      0x58
#define ME_SPS_PMBUS_ADDR_PSU2      0x59
#define ME_SPS_PMBUS_ADDR_PSU3      0x5A
#define ME_SPS_PMBUS_ADDR_PSU4      0x5B
#define ME_SPS_PMBUS_ADDR_NONE      0x00

#define ME_SPS_HECI_IN_ME_OFF       0    ///< Do not request anything from ME regarding HECI visibility
#define ME_SPS_HECI_IN_ME_HIDE      1    ///< Request ME to hide HECI PCI config space
#define ME_SPS_HECI_IN_ME_DISABLE   2    ///< Request ME to disable HECI on PCI

#define ME_DEVICE_DISABLED          0
#define ME_DEVICE_ENABLED           1
#define ME_DEVICE_AUTO              2

#endif // _ME_DEFINES_H
