/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2015 - 2020 Intel Corporation. <BR>

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

#ifndef _PROTOCOL_ME_HECI3_SMM_H_
#define _PROTOCOL_ME_HECI3_SMM_H_

#include <MeHeci3.h>

extern EFI_GUID gSmmMeHeci3ProtocolGuid;

typedef struct _SMM_ME_HECI3_PROTOCOL_ SMM_ME_HECI3_PROTOCOL;


/**
 * HECI device (instance) data structure
 *
 * This structure describes HECI instance, i.e. PCI funcion on ME device.
 * First part of the structure is filled by driver that is initializing HECI
 * device. Second part is updated by HeciInit() function.
 */
typedef struct
{ //
  // The below defined fields must be set before calling HeciInit()
  //
  UINT8      Seg;     // PCI segment where this HECI instance is located
  UINT8      Bus;     // PCI bus where this HECI instance is located
  UINT8      Dev;     // PCI device where this HECI instance is located
  UINT8      Fun;     // PCI function number of this HECI instance
  UINT8      Hidm;    // HECI interrupt mode for this HECI instance
  //
  // The MBAR field is in/out for HeciInit(). Non zero value provided on input
  // is an address to set in HECI MBAR if it is not configured yet.
  // On exit this field contains address currently used in HECI MBAR.
  // This field is not used by functions other than HeciInit().
  // MBAR register is used by send/receive/reset functions.
  //
  UINT64     Mbar;
  //
  // The below defined fields are set by Heciinit() function
  //
  UINTN      PciCfg;
  UINT16     Vid;     // PCI Device ID for this HECI instance
  UINT16     Did;     // PCI Vendor ID for this HECI instance
  UINT32     HMtu;    // Max transfer unit configured by ME minus header
  UINT32     MeMtu;   // Max transfer unit configured by ME minus header
  HECI_MEFS1 Mefs1;   // ME Firmware Status at recent operation
} ME_HECI_DEVICE;

/**
 * Initialize HECI interface.
 *
 * This function initializes Host side of HECI interface. If timeout is
 * greater than zero it also waits until ME is ready to receive messages.
 *
 * @param[in,out] pThis     Pointer to protocol structure
 * @param[in,out] pTimeout  On input timeout in ms, on exit time left
 */
typedef EFI_STATUS (EFIAPI *SMM_ME_HECI3_INIT)(
  IN     SMM_ME_HECI3_PROTOCOL *pThis,
  IN OUT UINT32                *pTimeout);

/**
 * Reset HECI queue.
 *
 * This function resets HECI queue. If timeout is greater than zero it also
 * waits until ME is ready to receive messages.
 *
 * @param[in]     pThis     Pointer to protocol data
 * @param[in,out] pTimeout  On input timeout in ms, on exit time left
 */
typedef EFI_STATUS (EFIAPI *SMM_ME_HECI3_QUE_RESET)(
  IN     SMM_ME_HECI3_PROTOCOL *pThis,
  IN OUT UINT32                *pTimeout);

/**
 * Get HECI queue state.
 *
 * This function reads HECI queue state. It informs whether queue is ready for
 * communication, and whether there are some dwords in send or receive queue.
 * If SmmHeciRequest() is called and queue is not empty reset is done to clear
 * it. SmmHeciQueState() may be used to detect this situation and if possible
 * delay the SMM request, so that OS driver can finish its transaction.
 *
 * @param[in,out] pThis     Pointer to protocol data
 * @param[in,out] pTimeout  On input timeout in us, on exit time left
 */
typedef EFI_STATUS (EFIAPI *SMM_ME_HECI3_QUE_STATE)(
  IN OUT SMM_ME_HECI3_PROTOCOL *pThis,
     OUT BOOLEAN               *pIsReady,
     OUT UINT32                *pSendQue,
     OUT UINT32                *pRecvQue);

/**
 * Send request message to HECI queue, wait for response if needed.
 *
 * This function writes one message to HECI queue and - if receive buffer
 * was provided and timeout is greater than zero - waits for response message.
 * Fragmentation is not supported. Reqeust and response must be unfragmented.
 * Size of receive message buffer is given in bytes in (*pBufLen) on input.
 * On exit (*pBufLen) provides the number of bytes written to the message
 * buffer. If buffer is too INT16 the message is truncated.
 *
 * @param[in]     pThis      Pointer to protocol data
 * @param[in,out] pTimeout   On input timeout in ms, on exit time left
 * @param[in]     pReqMsg    Request message
 * @param[out]    pMsgBuf    Buffer for the response message
 * @param[in,out] pBufLen    On input buffer size, on exit message, in bytes
 */
typedef EFI_STATUS (EFIAPI *SMM_ME_HECI3_REQUEST)(
  IN     SMM_ME_HECI3_PROTOCOL *pThis,
  IN OUT UINT32                *pTimeout,
  IN     HECI_MSG_HEADER       *pReqMsg,
     OUT HECI_MSG_HEADER       *pRspBuf,
  IN     UINT32                *pBufLen);

/**
 * Send HECI message.
 *
 * This function sends HECI message.
 *
 * @param[in,out] pThis     Pointer to HECI device
 * @param[in,out] pTimeout  On input timeout in us, on exit time left
 * @param[in]     pMessage  Send message
 */
typedef EFI_STATUS (EFIAPI *SMM_ME_HECI3_SEND)(
  IN OUT ME_HECI_DEVICE     *pThis,
  IN OUT UINT32             *pTimeout,
  IN     HECI_MSG_HEADER    *pMessage);
/**
 * Recieve HECI message.
 *
 * This function recieves HECI message.
 *
 * @param[in,out] pThis     Pointer to HECI device
 * @param[in,out] pTimeout  On input timeout in us, on exit time left
 * @param[out]    pMsgBuf   Buffer for the response message
 * @param[in,out] pBufLen   On input buffer size, on exit message, in bytes
 */
typedef EFI_STATUS (EFIAPI *SMM_ME_HECI3_RECIEVE)(
  IN OUT ME_HECI_DEVICE  *pThis,
  IN OUT UINT32          *pTimeout,
     OUT HECI_MSG_HEADER *pMsgBuf,
  IN OUT UINT32          *pBufLen);
/**
 * EFI protocol for HECI communication in SMM.
 *
 * This protocol defines operations for communication with ME using HECI
 * (Host Embeded Controller Interface) in SMM.
 * Note that SMM uses HECI-1 potentially shared with OS driver.
 * SMM request may sometimes break OS driver reqeust.
 */
typedef struct _SMM_ME_HECI3_PROTOCOL_
{
  ME_HECI_DEVICE           HeciDev;

  SMM_ME_HECI3_INIT        HeciInit;
  SMM_ME_HECI3_QUE_RESET   HeciQueReset;
  SMM_ME_HECI3_QUE_STATE   HeciQueState;
  SMM_ME_HECI3_REQUEST     HeciRequest;
  SMM_ME_HECI3_SEND        HeciSend;
  SMM_ME_HECI3_RECIEVE     HeciRecv;
} SMM_ME_HECI3_PROTOCOL;

#endif // _PROTOCOL_HECI_SMM_H_
