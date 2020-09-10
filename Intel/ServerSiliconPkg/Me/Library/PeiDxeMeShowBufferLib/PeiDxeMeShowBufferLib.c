/** @file
  Me Debug Lib implementation.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2013 - 2019 Intel Corporation. <BR>

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
#include <PiPei.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/PrintLib.h>

/**
  For serial debugger used, it will show the buffer message line by line to serial console.

  @param[in] Message              the address point of buffer message
  @param[in] Length               message length

**/
VOID
ShowBuffer (
  IN  UINT8                       *Message,
  IN  UINT32                      Length
  )
{
#ifndef MDEPKG_NDEBUG
  UINT32                          Index;
  UINT32                          Offset;
  CHAR16                          Buffer[51]; // To construct a line needs 51 chars.

  Index  = 0;
  Offset = 0;
  ZeroMem (Buffer, sizeof (Buffer));

  while (Length-- > 0) {
    //
    // Get the corresponding offset value from the index of buffer message.
    //
    Offset = ((Index & 0x0F) > 7) ? (((Index & 0x0F) * 3) + 2) : ((Index & 0x0F) * 3);

    //
    // Print "- " at the half of a line increases the readability of debug message.
    //
    if ((Index & 0x0F) == 0x08) {
      UnicodeSPrint (&Buffer[24], 3 * sizeof (CHAR16), L"- ");
    }

    //
    // Collect the data of buffer message.
    //
    UnicodeSPrint (&Buffer[Offset], 4 * sizeof (CHAR16), L"%02x ", Message[Index]);

    //
    // A line contains 16 bytes of buffer message. If a line is complete, it will be shown through DEBUG macro.
    //
    if (Offset == 47) {
      DEBUG ((DEBUG_ERROR, "%02x: %s\n", (Index & 0xF0), Buffer));
    }

    Index++;
  }

  //
  // If a line isn't complete, show the remaining data.
  //
  if (Offset != 47) {
    DEBUG ((DEBUG_ERROR, "%02x: %s\n", (Index & 0xF0), Buffer));
  }

#endif // End Of MDEPKG_NDEBUG
}
