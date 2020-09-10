/**@file

 @copyright
  INTEL CONFIDENTIAL
  Copyright 1999 - 2019 Intel Corporation.

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

#include <Register/PchPcieRpRegs.h>

  OperationRegion(PXCS,PCI_Config,0x00,0x900)
  Field(PXCS,AnyAcc, NoLock, Preserve)
  {
    Offset(0),
    VDID, 32,
    Offset(0x50), // LINKCTL - Link Control Register
    L0SE, 1,      // 0, L0s Entry Enabled
    Offset(0x52), // LINKSTS - Link Status Register
    , 13,
    LASX, 1,      // 0, Link Active Status
    Offset(0x5A), // SLOTSTS[7:0] - Slot Status Register
    , 3,
    PDCX, 1,      // 3, Presence Detect Changed
    , 2,
    PDSX, 1,      // 6, Presence Detect State
    , 1,
    Offset(0x60), // ROOTSTS - Root Status Register
    , 16,
    PSPX, 1,      // 16,  PME Status
    Offset(0xA8), // 0xA8, Root Port Power Management CSR
    L23E, 1,      // 0,   L23_Rdy Entry Request (L23ER)
    L23R, 1,      // 1,   L23_Rdy to Detect Transition (L23R2DT)
    Offset(R_PCH_PCIE_CFG_SCICSR), // 0xCC, SCICSR - System Control Interrupt Control Status
    PMEX, 1,      // 0,  Power Management SCI Enable
    HPEX, 1,      // 1,  Hot Plug SCI Enable
    Offset(0x8C4),    // 0x8C4, SPAD - Scratch Pad Register
    , 7,
    NCB7, 1       // Non-Sticky Scratch Pad Bit (NSCB)[7]
  }
  Field(PXCS,AnyAcc, NoLock, WriteAsZeros)
  {
    Offset(R_PCH_PCIE_CFG_SCICSR), // 0xCC, SCICSR - System Control Interrupt Control Status
    , 16,
    PMSX, 1,       // 16,  Power Management SCI Status
    HPSX, 1        // 17,  Hot Plug SCI Status
  }

  //
  // L23D method recovers link from L2 or L3 state. Used for RTD3 flows, right after endpoint is powered up and exits reset.
  // This flow is implemented in ASL because rootport registers used for L2/L3 entry/exit
  // are proprietary and OS drivers don't know about them.
  //
  Method (L23D, 0, Serialized) {
    If(LNotEqual(NCB7,0x1)) {
      Return()
    }
    Store(1, L23R)
    Store(0, Local0)
    /// Wait for transition to Detect
    While(L23R) {
      If(Lgreater(Local0, 4))
      {
        Break
      }
      Sleep(16)
      Increment(Local0)
    }
    Store(0,NCB7)

    /// Once in Detect, wait up to 124 ms for Link Active (typically happens in under 70ms)
    /// Worst case per PCIe spec from Detect to Link Active is:
    /// 24ms in Detect (12+12), 72ms in Polling (24+48), 28ms in Config (24+2+2+2+2)
    Store(0, Local0)
    While(LEqual(LASX,0)) {
      If(Lgreater(Local0, 8))
      {
        Break
      }
      Sleep(16)
      Increment(Local0)
    }
  }

  //
  // DL23 method puts link to L2 or L3 state. Used for RTD3 flows, before endpoint is powered down.
  // This flow is implemented in ASL because rootport registers used for L2/L3 entry/exit
  // are proprietary and OS drivers don't know about them.
  //
  Method (DL23, 0, Serialized) {
    Store(1, L23E)
    Sleep(16)
    Store(0, Local0)
    While(L23E) {
      If(Lgreater(Local0, 4))
      {
        Break
      }
      Sleep(16)
      Increment(Local0)
    }
    Store(1,NCB7)
  }

  Name(LTRV, Package(){0,0,0,0})
// APTIOV_SERVER_OVERRIDE_RC_START : Add TokenAsl.h SDL output
#if ASL_DsmAsl_SUPPORT
// APTIOV_SERVER_OVERRIDE_RC_END : Add TokenAsl.h SDL output
  //
  // _DSM Device Specific Method
  //
  // Arg0: UUID Unique function identifier
  // Arg1: Integer Revision Level
  // Arg2: Integer Function Index (0 = Return Supported Functions)
  // Arg3: Package Parameters
  Method(_DSM, 4, Serialized) {
    //
    // Switch based on which unique function identifier was passed in
    //
    If (LEqual(Arg0, ToUUID ("E5C937D0-3553-4d7a-9117-EA4D19C3434D"))) {
      //
      // _DSM Definitions for Latency Tolerance Reporting
      //
      // Arguments:
      // Arg0: UUID: E5C937D0-3553-4d7a-9117-EA4D19C3434D
      // Arg1: Revision ID: 2
      // Arg2: Function Index: 1, 4 or 6
      // Arg3: Empty Package
      //
      // Return:
      // A Package of four integers corresponding with the LTR encoding defined
      // in the PCI Express Base Specification, as follows:
      // Integer 0: Maximum Snoop Latency Scale
      // Integer 1: Maximum Snoop Latency Value
      // Integer 2: Maximum No-Snoop Latency Scale
      // Integer 3: Maximum No-Snoop Latency Value
      // These values correspond directly to the LTR Extended Capability Structure
      // fields described in the PCI Express Base Specification.
      //
      //
      // Switch by function index
      //
      If(LEqual(ToInteger(Arg2), 0)) {
        //
        // Function Index:0
        // Standard query - A bitmask of functions supported
        //
        Name(OPTS,Buffer(2){0,0})
        CreateBitField(OPTS,0,FUN0)
        CreateBitField(OPTS,6,FUN6)
        CreateBitField(OPTS,8,FUN8)
        CreateBitField(OPTS,9,FUN9)

        if (LGreaterEqual(Arg1, 2)){ // test Arg1 for Revision ID: 2
          Store(1,FUN0)
          if (LTRE){
            Store(1,Fun6)
          }

          If(CondRefOf(ECR1)) {
            if(LEqual(ECR1,1)){
              if (LGreaterEqual(Arg1, 3)){ // test Arg1 for Revision ID: 3
                Store(1,Fun8)
                Store(1,Fun9)
              }
            }
          }
        }
        Return (OPTS)
      } ElseIf(LEqual(ToInteger(Arg2), 6)) {
        //
        // Function Index: 6
        // LTR Extended Capability Structure
        //
        if (LGreaterEqual(Arg1, 2)){ // test Arg1 for Revision ID: 2
          if (LTRZ){
            Store(And(ShiftRight(LMSL,10),7), Index(LTRV, 0))
            Store(And(LMSL,0x3FF), Index(LTRV, 1))
            Store(And(ShiftRight(LNSL,10),7), Index(LTRV, 2))
            Store(And(LNSL,0x3FF), Index(LTRV, 3))
            Return (LTRV)
          } else {
              Return(Buffer() {0x00})
          }
        }
      } ElseIf(LEqual(ToInteger(Arg2), 8)) {
        //
        // ECR ACPI additions for FW latency optimizations, DSM for Avoiding Power-On Reset Delay Duplication on Sx Resume
        //
        If(CondRefOf(ECR1)) {
          if(LEqual(ECR1,1)){
            if (LGreaterEqual(Arg1, 3)) { // test Arg1 for Revision ID: 3
                Return(Buffer() {0x01})
            }
          }
        }
      } ElseIf(LEqual(ToInteger(Arg2), 9)) {
        //
        // ECR ACPI additions for FW latency optimizations, DSM for Specifying Device Readiness Durations
        //
        If(CondRefOf(ECR1)) {
          if(LEqual(ECR1,1)){
            if (LGreaterEqual(Arg1, 3)) { // test Arg1 for Revision ID: 3
              return(Package(5){50000,Ones,Ones,50000,Ones})
            }
          }
        }
      }
    } // End of if
    return (Buffer() {0x00})
  } // End of _DSM
// APTIOV_SERVER_OVERRIDE_RC_START : Add TokenAsl.h SDL output
#endif
// APTIOV_SERVER_OVERRIDE_RC_END : Add TokenAsl.h SDL output

  Device(PXSX)
  {
    Name(_ADR, 0x00000000)

    // NOTE:  Any PCIE Hot-Plug dependency for this port is
    // specific to the CRB.  Please modify the code based on
    // your platform requirements.

    Method(_PRW, 0) {
      Return(GPRW(0x09, 4))   // can wakeup from S4 state
    }
  }

  //
  // PCI_EXP_STS Handler for PCIE Root Port
  //

  Method(HPME,0,Serialized) {
    If(LAnd(LNotEqual(VDID,0xFFFFFFFF), LEqual(PMSX,1))) { //if port exists and has PME SCI Status set...
      Notify (PXSX, 0x2) //notify child device; this will cause its driver to clear PME_Status from device
      Store(1,PMSX) // clear rootport's PME SCI status
      Store(1,PSPX) // consume one pending PME notification to prevent it from blocking the queue
    }
  }
