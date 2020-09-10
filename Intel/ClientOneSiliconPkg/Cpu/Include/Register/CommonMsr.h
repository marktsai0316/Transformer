
/** @file
  CommonMsr.h

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2019 - 2020 Intel Corporation.

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

#ifndef _COMMONMSR_h
#define _COMMONMSR_h
#include <Base.h>
/**

**/
#define MSR_ACM_CPU_KEY_HASH_0 0x00000020
/**

**/
#define MSR_ACM_CPU_KEY_HASH_1 0x00000021
/**

**/
#define MSR_ACM_CPU_KEY_HASH_2 0x00000022
/**

**/
#define MSR_ACM_CPU_KEY_HASH_3 0x00000023
/**
  MSR read by Sandra and HotCPU test. Added to prevent these benchmarks from crashing. See NHM-B bug 2425276
**/
#define MSR_POWERON 0x0000002A

/**
  Enhanced MCA Thread error injection control
**/
#define MSR_THREAD_SMI_ERR_INJ_CONTROL 0x0000002B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Ifu : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 Dcu : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_THREAD_SMI_ERR_INJ_CONTROL_REGISTER;

/**
  Enhanced MCA Core error injection control
**/
#define MSR_CORE_SMI_ERR_INJ_CONTROL 0x0000002C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 2;

                            /* Bits[1:0], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 Dtlb : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 Mlc : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 Rsvd4 : 28;

                            /* Bits[31:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CORE_SMI_ERR_INJ_CONTROL_REGISTER;

/**
  Enhanced MCA Uncore error injection control
**/
#define MSR_UNCORE_SMI_ERR_INJ_CONTROL 0x0000002D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 4;

                            /* Bits[3:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 McaBankId4 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId5 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId6 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId7 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId8 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId9 : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId10 : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId11 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId12 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId13 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId14 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId15 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId16 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId17 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId18 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId19 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId20 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId21 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId22 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId23 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId24 : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId25 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId26 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId27 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId28 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId29 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId30 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId31 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_UNCORE_SMI_ERR_INJ_CONTROL_REGISTER;

/**
  MSR used to control APIC TPR Update messages from the processor's Local APIC.
**/
#define MSR_PIC_MSG_CONTROL 0x0000002E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 10;

                            /* Bits[9:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 TprMsgOff : 1;

                            /* Bits[10:10], Access Type=RW, default=None*/

                            /*
                               When set to 1 (which is the default at reset),
                               no APIC messages (TPR updates) will be sent.
                               When set to 0, APIC messages (TPR updates) will
                               be sent. Writes from 1 to 0 are allowed, but
                               writes of 1 are ignored. BIOS must write 0 to
                               this bit for each thread in each package before
                               any Local APIC mode changes occur. Note: If BIOS
                               does not clear this bit, OS initialization of
                               interrupts will fail.
                            */
    UINT32 Rsvd11 : 21;

                            /* Bits[31:11], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_MSG_CONTROL_REGISTER;

/**
  MSR used to select the mode for the Data Cache Unit (DCU). This MSR is only available when more than one DCU Mode is selectable and is only intended for use in early BIOS before the first transition of the CR0.CD from 1 to 0.
**/
#define MSR_DCU_MODE_CONTROL 0x00000031

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 EnableDcu16kMode : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               When read as 0 (default), the DCU Mode is 32-KB
                               8-way without ECC. When read as 1, the BIOS has
                               changed the DCU mode to 16-KB 4-way with ECC. If
                               the DCU Mode is 0 and the first transition of
                               the CR0.CD bit from 1 to 0 has not occurred by
                               either thread in this core, then a write of 1
                               selects the DCU mode as 16-KB 4-way with ECC.
                               After the first write, all further writes are
                               ignored.
                            */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_DCU_MODE_CONTROL_REGISTER;

/**
  Register to disable split locks, which are locked instructions that split a cache line.
**/
#define MSR_MEMORY_CONTROL 0x00000033

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 29;

                            /* Bits[28:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 SplitLockDisable : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               If set to 1, a split lock will trigger an #AC
                               fault. If clear to 0, split locks proceed
                               normally (subjected to the SUPPRESS_SPLIT_LOCK
                               behavior. If both this bit and
                               SUPPRESS_SPLIT_LOCK are set, then only this bit
                               will be honored (has priority).
                            */
    UINT32 Rsvd30 : 1;

                            /* Bits[30:30], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 SuppressSplitLock : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               If set to 1, disables split locks. If clear to
                               0, enables split locks. Setting this bit will
                               cause split locks to be non-atomic, despite the
                               lock attribute of the instruction.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_MEMORY_CONTROL_REGISTER;
/**
  Keeps a running count of SMI events
**/
#define MSR_SMI_COUNT 0x00000034

/**
  This is a Read Only MSR that is shared in the processor package and used to
  determine the current count of enabled Cores and Threads.
**/
#define MSR_CORE_THREAD_COUNT 0x00000035

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Threadcount : 16;

                            /* Bits[15:0], Access Type=RO_V, default=None*/

                            /*
                               The Thread Count reflects the enabled threads
                               based on the factory-configured thread count and
                               the value of the RESOLVED_CORES_MASK register
                               for Server processors or the PCH Soft Reset Data
                               register for Client processors at reset time.
                            */
    UINT32 Corecount : 16;

                            /* Bits[31:16], Access Type=RO_V, default=None*/

                            /*
                               The Core Count reflects the enabled cores based
                               on the factory-configured core count and the
                               value of the RESOLVED_CORES_MASK register for
                               Server processors or the PCH Soft Reset Data
                               register for Client processors at reset time.
                            */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CORE_THREAD_COUNT_REGISTER;

/**
  The SOCKET_ID MSR is used to reassign the package-specific portions of the APIC ID.  This MSR is intended only to be used on scalable DP and high-end MP platforms to resolve legacy-mode APIC ID conflicts.
**/
#define MSR_SOCKET_ID 0x00000039

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PackageId : 11;

                            /* Bits[10:0], Access Type=RO_V, default=None*/

                            /*
                               Holds package ID. This reflects the upper 8 bits
                               of the APIC ID
                            */
    UINT32 Rsvd11 : 21;

                            /* Bits[31:11], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SOCKET_ID_REGISTER;

/**
  Contains bits that determine what additional state SMI/RSM must save and restore
  FSCP Crunch - 1:32
**/
#define MSR_SMM_SAVE_CONTROL 0x0000003E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 SaveFpState : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* If set, SMI/RSM will save/restore FP state */
    UINT32 Reserved1 : 31;

                            /* Bits[31:1], Access Type=RW, default=None*/

                            /* Unallocated bits */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMM_SAVE_CONTROL_REGISTER;

/**
  MSR for PPIN feature
**/
#define MSR_PPIN_CTL 0x0000004E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Lock : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit indicates if PPIN_CTL is locked 0 - Not
                               locked (SW free to write to PPIN_CTL) 1 - Locked
                               (SW can no longer write to PPIN_CTL).
                            */
    UINT32 Enable : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Indication to SW about presence of PPIN 0 - PPIN
                               not present. Read of PPIN MSR would #GP 1 - PPIN
                               present. Read of PPIN MSR by SW allowed.
                            */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PPIN_CTL_REGISTER;
/**
  PPIN value
**/
#define MSR_PPIN 0x0000004F

/**
  MSR that is used to initiate quiesce and unquiesce of CSI links
**/
#define MSR_QUIESCE_CTL1 0x00000050

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Quiesce : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* 1 = quiesce initiated */
    UINT32 Unquiesce : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* 1 = unquiesce initiated */
    UINT32 CboEvictionsDrain : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               This bit will be updated in RDMSR flow Value 1 =
                               Victim pending bit in uCR is set Value 0 =
                               Victim pending bit in uCR is not set
                            */
    UINT32 Rsvd3 : 4;

                            /* Bits[6:3], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 QuiesceCapability : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               1 = quiesce feature enabled; 0 = quiesce feature
                               not enabled. This is a read only bit that is
                               updated in RDMSR flow.
                            */
    UINT32 RsvdPsmi8 : 8;

                            /* Bits[15:8], Access Type=RW, default=0x00000000*/

                            /* Reserved for PSMI handshake */
    UINT32 RsvdDca16 : 6;

                            /* Bits[21:16], Access Type=RW, default=0x00000000*/

                            /* Reserved for storing DCA info */
    UINT32 DisableitlbSpecfillSave : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Used to save/restore
                               IFU_CR_DEBUG_MODE[DISABLEITLB_SPECFILL]. See HSX
                               bug 233740.
                            */
    UINT32 Rsvd23 : 9;

                            /* Bits[31:23], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QUIESCE_CTL1_REGISTER;

/**
  MSR that is used for PSMI handshake before initiating a RAS quiesce
**/
#define MSR_QUIESCE_CTL2 0x00000051

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 SignalHandshake : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* 1 = signal a psmi event as a handshake */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QUIESCE_CTL2_REGISTER;

/**
  Cloaking error Virtual MSR in core Creg PLA
**/
#define MSR_CLOAKING 0x00000052

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CerrRdStatusInSmmOnly : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               When 0 (default), legacy rdmsr behavior is
                               maintained for MCi_STATUS registers. When set to
                               1, a rdmsr to any MCi_STATUS register will
                               return 0 while a corrected error is logged in
                               the register unless the processor is in SMM mode
                            */
    UINT32 UcnaRdStatusInSmmOnly : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               When 0 (default), legacy rdmsr and wrmsr
                               behavior is maintained for register. When set to
                               1, a rdmsr to any MCi_STATUS register will
                               return 0 while a UCNA error is logged in the
                               register unless the processor is in SMM mode.
                            */
    UINT32 DualSignalSmi : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Enable SMI when MCA is set. This feature is part
                               of Enhanced MCA Gen 1 that enables the silicon
                               to issue SMI to the local cores along with
                               MCError. The silicon manages timing of SMI/MCE
                               so that the SMI handler is invoked early in
                               Int18 process.
                            */
    UINT32 Rsvd3 : 29;

                            /* Bits[31:3], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CLOAKING_REGISTER;

/**
  Spare Virtual MSRs in uncore Creg PLA
**/
#define MSR_THD_LOGICAL_ID 0x00000053

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 LogicalId : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* Core and Thread ID */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_THD_LOGICAL_ID_REGISTER;

/**
  This MSR clars smi
**/
#define MSR_SMM_CLEAR_SMI 0x00000057

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ClearSmi : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /*
                               This field when set clears the SMI bit in
                               ML3_CR_PIC_EVENT_STATUS register
                            */
    UINT32 MsmiToMceEn : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /*
                               Write of 1 will enable MSMI to MCE morphing,
                               Writes of 0 will disable MSMI to MCE morphing
                            */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMM_CLEAR_SMI_REGISTER;

/**
  This MSR reads/writes bit 0 in smm_cfg_options fscp
**/
#define MSR_SMM_CFG_OPTIONS 0x00000058

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CfgOption : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /*
                               This field updates bit 0 in
                               FSCP_CR_SMM_CFG_OPTIONS_ADDR
                            */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMM_CFG_OPTIONS_REGISTER;

/**
  This register provides support for the Firmware-First-Mode thermal interrup feature.
**/
#define MSR_THERM_EVENT_FFM 0x0000005E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 EnableFfm : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Can be set by BIOS in SMM only. When set,
                               instead of delivering a thermal interrupt to
                               core PCU FW must send an SMI.
                            */
    UINT32 FfmSmiSignaled : 1;

                            /* Bits[1:1], Access Type=RW0C, default=0x00000000*/

                            /*
                               BIOS in SMM mode is responsible for checking
                               this bit to determine if the origin of the SMI
                               is from a thermal event or not. When set, the
                               interrupt is thermal related and BIOS must read
                               the thermal status registers to determine which
                               cores to send an IPI to. PCU FW will read this
                               bit before sending a thermal related SMI. If the
                               bit is set it will not deliver another
                               interrupt. BIOS must clear this bit when it is
                               ready to receive another interrupt.
                            */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_THERM_EVENT_FFM_REGISTER;

/**
  Shutdown supression feature
**/
#define MSR_SUPPRESS_SHUTDOWN 0x00000060

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 SuppressShutdownAndLogmcaIerr : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               suppress shutdown spc cycle and send ierr with
                               logging
                            */
    UINT32 ShutdownLogmcaIerr : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* trigger ierr and log errors for shutdown cycle */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SUPPRESS_SHUTDOWN_REGISTER;

/**
  This MSR reads/writes CBO_CR_CBO_COH_CONFIG[0]. SKX bug 305692
**/
#define MSR_MCA_ON_NONNEM_CACHABLEMMIO_EN 0x00000061

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 McaNonnemCacheableMmioEn : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /*
                               This bit when set enables MCA on nonnem
                               cacheable MMIO
                            */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_MCA_ON_NONNEM_CACHABLEMMIO_EN_REGISTER;

/**
  command reg in ACE IP
**/
#define MSR_ACE_SPI_COMMAND 0x00000062

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Start : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* set to trigger SPI txn */
    UINT32 AddrSize12 : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* num of addr bytes */
    UINT32 AddrSize34 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* num of addr bytes */
    UINT32 SoftRst : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* soft reset if *code detects a SPI hang */
    UINT32 AddrPhase : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /* 1: addr phase present */
    UINT32 Abort : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /* abort phase */
    UINT32 FreezeSpi : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /* 1:frz present, 0: absent */
    UINT32 DummyPhase : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* 1:present, 0:absent */
    UINT32 DummyCycles : 4;

                            /* Bits[11:8], Access Type=RW, default=0x00000000*/

                            /* num of dummy cycles */
    UINT32 DataPhase : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /* 1:present, 0:absent */
    UINT32 ReadWriteb : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /* 1: read, 0:write */
    UINT32 Dual : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /* SPI dual mode */
    UINT32 Quad : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /* SPI quad mode */
    UINT32 TxnDataSize : 8;

                            /* Bits[23:16], Access Type=RW, default=0x00000000*/

                            /* txn data size */
    UINT32 Opcode : 8;

                            /* Bits[31:24], Access Type=RW, default=0x00000000*/

                            /* txn data size */
    UINT32 Address : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* address */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ACE_SPI_COMMAND_REGISTER;
/**
  command reg in ACE IP
**/
#define MSR_ACE_SPI_DATA 0x00000063

/**
  status reg in ACE IP
**/
#define MSR_ACE_SPI_STATUS 0x00000064

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Busy : 1;

                            /* Bits[0:0], Access Type=RO, default=0x00000000*/

                            /* 1:busy, 0:idle */
    UINT32 Error : 1;

                            /* Bits[1:1], Access Type=RO, default=0x00000000*/

                            /* 1:error, 0: no error */
    UINT32 Empty : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* indicates SPI buffer is empty */
    UINT32 Full : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* indicates SPI buffer is full */
    UINT32 Rsvd4 : 28;

                            /* Bits[31:4], Access Type=RW, default=0x00000000*/

                            /* data field */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* data field */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ACE_SPI_STATUS_REGISTER;

/**
  config reg in ACE IP
**/
#define MSR_ACE_SPI_CONFIG 0x00000065

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ClkLow : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /* clk low */
    UINT32 ClkHigh : 5;

                            /* Bits[9:5], Access Type=RW, default=0x00000000*/

                            /* clk hi */
    UINT32 Drive : 5;

                            /* Bits[14:10], Access Type=RW, default=0x00000000*/

                            /* drive */
    UINT32 Sample : 5;

                            /* Bits[19:15], Access Type=RW, default=0x00000000*/

                            /* sample */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RW, default=0x00000000*/

                            /* reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ACE_SPI_CONFIG_REGISTER;

/**
  Used to exit out of PFR VCM. Write only command MSR. Read will #GP
**/
#define MSR_PFR_EXIT 0x00000066

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* dummy */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PFR_EXIT_REGISTER;
/**
  MSR to provision VCM key hash to CPU
**/
#define MSR_PFR_VCM_PROVISION 0x00000067

/**
  MSR to read PFR provision status
**/
#define MSR_PFR_VCM_PROVISION_STATUS 0x00000068

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Signature : 16;

                            /* Bits[15:0], Access Type=RW, default=None*/

                            /* PFR signature in CPLD */
    UINT32 PfrEnabled : 1;

                            /* Bits[16:16], Access Type=RW, default=None*/

                            /* PFR enable indication */
    UINT32 CpuProvision : 1;

                            /* Bits[17:17], Access Type=RW, default=None*/

                            /* CPU NVRAM is provisioned */
    UINT32 CpuProvisionLock : 1;

                            /* Bits[18:18], Access Type=RW, default=None*/

                            /* CPU NVRAM is locked */
    UINT32 Rsvd19 : 11;

                            /* Bits[29:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Error : 1;

                            /* Bits[30:30], Access Type=RW, default=None*/

                            /* Error indicatoin */
    UINT32 Rsvd31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PFR_VCM_PROVISION_STATUS_REGISTER;
/**
  Not really a register. Probe mode MSR used to move data from/to PDR
**/
#define MSR_PROBE_TO_FROM_PDR 0x00000070
/**
  Not really a register. Probe mode MSR used for copying EDX, EAX, EFLAGS, ST0 and the SMMEM bit to/from the scratch pad
**/
#define MSR_PROBE_GP_REG 0x00000071
/**
  Not really a register. Probe mode MSR used for copying SS, CS, ES, LDTR, and GDTR to the scratch pad for probe mode.
**/
#define MSR_PROBE_SEG_REG_1 0x00000072
/**
  Not really a register. Probe mode MSR added in SKL i1350201 that on RD/WRMSR does the following operations:
  R16/R17 to/from CTAP_CR_PROBE_MODE_DR/FSCP_CR_REGISTER_1
  BND_STATUS to/from FSCP_CR_REGISTER_2
  BNDCFG3_BASE_FIELD to/from FSCP_CR_REGISTER_3
**/
#define MSR_PROBE_PL_REG 0x00000073
/**
  Not really a register. Probe mode MSR used for copying XMM0 and MXCSR to the scratch pad for probe mode.
**/
#define MSR_PROBE_MMX2_REG 0x00000074
/**
  Not really a register. Probe mode MSR used for copying shadow copies of ES, DS, FS, and GS to the scratch pad for probe mode.
**/
#define MSR_PROBE_SEG_REG_3 0x00000075
/**
  Not really a register. Probe mode MSR Register used for issuing Special Cycles to the LT chipset.
**/
#define MSR_PROBE_LT_SPC_CYC 0x00000076

/**
  Not really a register. Probe mode MSR used for changing CR0.PG to the value specified in bit 31 of EAX. It allows ITP to transition into and back out of Pseudo-64-bit mode (Long Mode, but with paging turned off).
**/
#define MSR_PROBE_CHANGE_PG 0x00000077

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 31;

                            /* Bits[30:0], Access Type=RO_V, default=None*/

                            /* Junk */
    UINT32 Cr0Pg : 1;

                            /* Bits[31:31], Access Type=RO_V, default=None*/

                            /* Copied to CR0.PG */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PROBE_CHANGE_PG_REGISTER;

/**
  Allows Probe Mode ITP software to access relevant information located in the SECS and EPCM that is not accessible using EDBGRD instruction
**/
#define MSR_SE_RDINFO_CMD 0x0000007D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Command : 12;

                            /* Bits[11:0], Access Type=RW, default=None*/

                            /* Command Code */
    UINT32 EpcPage0 : 20;

                            /* Bits[31:12], Access Type=RW, default=None*/

                            /*
                               Bits [63:12] of the platform physical address of
                               the EPC page.
                            */
    UINT32 EpcPage1 : 32;

                            /* Bits[63:32], Access Type=RW, default=None*/

                            /*
                               Bits [63:12] of the platform physical address of
                               the EPC page.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SE_RDINFO_CMD_REGISTER;
/**
  TBD
**/
#define MSR_EINIT_FAIL_CTR 0x0000007E

/**
  This register is used by BIOS to program Trace Hub (NPK) STH base address that will be used by AET messages
**/
#define MSR_NPK_STH_ACPIBAR_BASE 0x00000080

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Lock : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /*
                               Lock bit - if set then this MSR cannot be re-
                               written anymore. Lock bit has to be set in order
                               for the AET packets to be directed to NPK MMIO.
                            */
    UINT32 Rsvd1 : 17;

                            /* Bits[17:1], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Address0 : 14;

                            /* Bits[31:18], Access Type=RW, default=None*/

                            /*
                               ACPIBAR_BASE_ADDRESS - AET target address in NPK
                               MMIO space.
                            */
    UINT32 Address1 : 32;

                            /* Bits[63:32], Access Type=RW, default=None*/

                            /*
                               ACPIBAR_BASE_ADDRESS - AET target address in NPK
                               MMIO space.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_NPK_STH_ACPIBAR_BASE_REGISTER;

/**
  Rd/Wr register to generate or restore Far Memory Keys
**/
#define MSR_FME_ACTIVATE 0x00000081

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Lock : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* When set will cause #GP on write. */
    UINT32 FmeEnable : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Set to enable FME Encryption */
    UINT32 KeySelect : 1;

                            /* Bits[2:2], Access Type=WO, default=0x00000000*/

                            /* Select key 0 = new key, 1 = standby restore */
    UINT32 SaveKeyForStandby : 1;

                            /* Bits[3:3], Access Type=WO, default=0x00000000*/

                            /* Set to save key for standby */
    UINT32 Rsvd4 : 28;

                            /* Bits[31:4], Access Type=RO, default=0x00000000*/

                            /* Reserved Bits */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_FME_ACTIVATE_REGISTER;
/**
  Launch Enclave Provider signing key hash
**/
#define MSR_SGXLEPUBKEYHASH0 0x0000008C
/**
  Launch Enclave Provider signing key hash
**/
#define MSR_SGXLEPUBKEYHASH1 0x0000008D
/**
  Launch Enclave Provider signing key hash
**/
#define MSR_SGXLEPUBKEYHASH2 0x0000008E
/**
  Launch Enclave Provider signing key hash
**/
#define MSR_SGXLEPUBKEYHASH3 0x0000008F
/**
  emulated by xucode --> cause pppe exit, described in SNC HSD 1304290485 - HCTIO/SoftCE: SoftCE ISA support
  and in
  SNC HSD 1304428988 - HCTIO/SoftCE: uArch support for TIO_DEBUG_STATUS MSRs
**/
#define MSR_TIO_DEBUG_STATUS 0x00000090
/**
  emulated by xucode --> cause pppe exit, described in SNC HSD 1304290485 - HCTIO/SoftCE: SoftCE ISA support
**/
#define MSR_TIO_UNWRAP 0x00000091
/**
  emulated by xucode --> cause pppe exit, described in SNC HSD 1304290485 - HCTIO/SoftCE: SoftCE ISA support
**/
#define MSR_TIO_PRM_CLEANUP 0x00000092
/**
  emulated by xucode --> cause pppe exit, described in SNC HSD 1304290485 - HCTIO/SoftCE: SoftCE ISA support
**/
#define MSR_TIO_COPY_ENCRYPT 0x00000093

/**
  Used to enable or disable cache QoS
**/
#define MSR_ENABLE_DISABLE_CACHE_QOS 0x00000095

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 LlcQosEn : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* Used to enable or disable cache QoS */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ENABLE_DISABLE_CACHE_QOS_REGISTER;

/**
  Address Match Range Register - Physical Mask Control Register
**/
#define MSR_TIORR_PHYSBASE 0x00000096

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 12;

                            /* Bits[11:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /*
                               The 4K-aligned platform physical base addresses
                               of the TIORR register for debugging. These
                               registers are programmed like MTRRs with base
                               and mask. Address matches of an AMRR can be
                               programmed to cause an "assist" or "abort".
                               Assists invoke the address match ucode handler
                               and populate the RR_MATCH_ADDR and
                               RR_MATCH_RESULT CREGs with useful information
                               about the access. Aborts force the memory type
                               to UC and redirect the access to the abort page
                               (causing it to get garbage data from the
                               uncore). See AMRR_MASK bits for more information
                               on how to program. See the PRF register
                               definition for how to resume AMRR assist
                               matches. restrictions : Set corresponding
                               AMRR_MASK appropriately for the address.
                            */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /*
                               The 4K-aligned platform physical base addresses
                               of the TIORR register for debugging. These
                               registers are programmed like MTRRs with base
                               and mask. Address matches of an AMRR can be
                               programmed to cause an "assist" or "abort".
                               Assists invoke the address match ucode handler
                               and populate the RR_MATCH_ADDR and
                               RR_MATCH_RESULT CREGs with useful information
                               about the access. Aborts force the memory type
                               to UC and redirect the access to the abort page
                               (causing it to get garbage data from the
                               uncore). See AMRR_MASK bits for more information
                               on how to program. See the PRF register
                               definition for how to resume AMRR assist
                               matches. restrictions : Set corresponding
                               AMRR_MASK appropriately for the address.
                            */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_TIORR_PHYSBASE_REGISTER;

/**
  Address Match Range Register - Physical Mask Control Register
**/
#define MSR_TIORR_PHYSMASK 0x00000097

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 3;

                            /* Bits[2:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 IgnorePw : 1;

                            /* Bits[3:3], Access Type=RO_V, default=0x00000000*/

                            /*
                               If set, hitting the AMRR on a stuffed load will
                               be ignored and will not cause assist nor abort.
                               Only the real PA (on redispatch) can cause an
                               assist if matches. restrictions :
                            */
    UINT32 PhysegOvrd : 1;

                            /* Bits[4:4], Access Type=RO_V, default=0x00000000*/

                            /*
                               If set, hitting the AMRR with PhySegSupOvr is
                               allowed, and will not cause assist or abort
                               restrictions :
                            */
    UINT32 ForceWb : 1;

                            /* Bits[5:5], Access Type=RO_V, default=0x00000000*/

                            /*
                               If set, hitting AMRR legally (see above bit),
                               will also force WB memtype. This is subject to
                               memtype priorities and can be overridden due to
                               higher priority mem types restrictions :
                            */
    UINT32 Rsvd6 : 2;

                            /* Bits[7:6], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Ifetch : 1;

                            /* Bits[8:8], Access Type=RO_V, default=0x00000000*/

                            /*
                               If set, allow AMRR assist matches for both
                               I-side and D-side, else assist match D-side
                               only. Pagewalk accesses (stuffed loads and
                               loadpxelocks) always count as D-side. This bit
                               has no effect on abort matches. restrictions :
                               Set corresponding AMRR_BASE appropriately for
                               the address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Assist : 1;

                            /* Bits[9:9], Access Type=RO_V, default=0x00000000*/

                            /*
                               If set, AMRR matches to the programmed address
                               will invoke ucode's address match handler. If
                               clear, AMRR matches will "abort" and redirect
                               the access to the abort page and a UC memory
                               type. restrictions : Set corresponding AMRR_BASE
                               appropriately for the address. Set VLD, ASSIST,
                               IFETCH, and MASK.
                            */
    UINT32 L : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Lock bit for the AMRR */
    UINT32 Valid : 1;

                            /* Bits[11:11], Access Type=RO_V, default=0x00000000*/

                            /* valid bit for the AMRR */
    UINT32 Mask0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /*
                               The mask value used in MTRR-like address
                               matching of platform. Minimum granularity for
                               matches is 4K (aligned), but the ucode handler
                               can use RR_MATCH_ADDR and the resume capability
                               (see the PRF register definition) to achieve
                               narrower checking. restrictions : Set
                               corresponding AMRR_BASE appropriately for the
                               address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Mask1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /*
                               The mask value used in MTRR-like address
                               matching of platform. Minimum granularity for
                               matches is 4K (aligned), but the ucode handler
                               can use RR_MATCH_ADDR and the resume capability
                               (see the PRF register definition) to achieve
                               narrower checking. restrictions : Set
                               corresponding AMRR_BASE appropriately for the
                               address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_TIORR_PHYSMASK_REGISTER;

/**
  SMM Monitor Control MSR
**/
#define MSR_VMX_MSEG_BASE 0x0000009B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Valid : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* MSEG MSR Valid bit */
    UINT32 Reserved1 : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Vmxoffctrl : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /* Controls SMI unmasking during VMXOFF. */
    UINT32 Reserved3 : 9;

                            /* Bits[11:3], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 MsegBase : 20;

                            /* Bits[31:12], Access Type=RW, default=None*/

                            /* Address of Page Frame of MSEG base */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_VMX_MSEG_BASE_REGISTER;

/**
  SMM Protected Mode Base MSR
**/
#define MSR_SMM_PROT_MODE_BASE 0x0000009D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Enable : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* Protected Mode SMM Enable */
    UINT32 Rsvd1 : 11;

                            /* Bits[11:1], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 PhysicalAddr : 20;

                            /* Bits[31:12], Access Type=RW, default=None*/

                            /* The physical address of the SMMSEG Table */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMM_PROT_MODE_BASE_REGISTER;
/**
  This is a read only of SMM Base register
**/
#define MSR_SMBASE_ADDR 0x0000009E
/**
  SGX PRID values
  " seq has 2 instances in addresses range 0xA1 to 0xA2"
**/
#define MSR_PRID_0_0 0x000000A1
/**
  SGX PRID values
  " seq has 2 instances in addresses range 0xA1 to 0xA2"
**/
#define MSR_PRID_1_1 0x000000A2

/**
  MSR to opt in to SGX and opt out of advanceed RAS features
**/
#define MSR_SGX_RAS 0x000000A3

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Optin : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* optin bit */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SGX_RAS_REGISTER;

/**
  SGX QoS MSR
**/
#define MSR_BIOS_PKG_CONFIG 0x000000A4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Lock : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Lock bit */
    UINT32 Enable : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Lock bit */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_BIOS_PKG_CONFIG_REGISTER;

/**
  FIT BIOS and ACM error type and code
**/
#define MSR_FIT_BIOS_ERROR 0x000000A5

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ErrorCode : 8;

                            /* Bits[7:0], Access Type=RW, default=None*/

                            /* error code optype */
    UINT32 EntryType : 8;

                            /* Bits[15:8], Access Type=RW, default=None*/

                            /* entry type optype */
    UINT32 FitPatchEntry : 1;

                            /* Bits[16:16], Access Type=RW, default=None*/

                            /* indication whether patch entry exists in FIT */
    UINT32 Rsvd17 : 15;

                            /* Bits[31:17], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 31;

                            /* Bits[62:32], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Lock : 1;

                            /* Bits[63:63], Access Type=RW, default=None*/

                            /* Lock bit - set when FIT error is written to FSCP */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_FIT_BIOS_ERROR_REGISTER;

/**
  Override MPX Fuse.
**/
#define MSR_MPX_FUSE_OVERRIDE 0x000000A6

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 MpxEnabled : 1;

                            /* Bits[0:0], Access Type=RO_V, default=None*/

                            /* MPX Enable */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO_V, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO_V, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_MPX_FUSE_OVERRIDE_REGISTER;

/**
  Virtual MSR to disable AVX instructions from BIOS
**/
#define MSR_BIOS_AVX_DIS 0x000000AF

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 AvxDis : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* disable AVX/2/3 instructions */
    UINT32 Avx3Dis : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* disable AVX3 instructions */
    UINT32 Reserved2 : 30;

                            /* Bits[31:2], Access Type=RW, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_BIOS_AVX_DIS_REGISTER;
/**
  vMSRs for power mgmt
**/
#define MSR_VMSR_U2P_0_0 0x000000B0
/**
  vMSRs for power mgmt
**/
#define MSR_VMSR_U2P_1_1 0x000000B1
/**
  vMSRs for power mgmt
**/
#define MSR_VMSR_U2P_2_2 0x000000B2
/**
  vMSRs for power mgmt
**/
#define MSR_VMSR_U2P_3_3 0x000000B3
/**
  SoftSKU data MSR
**/
#define MSR_SSKU_DATA 0x000000D0

/**
  SoftSKU cmd MSR
**/
#define MSR_SSKU_CMD 0x000000D1

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Cmd : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* different cmds for ssku */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SSKU_CMD_REGISTER;

/**
  SoftSKU SMM access to LB regs
**/
#define MSR_SSKU_SMM_ADDR 0x000000D2

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Addr : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* different cmds for ssku */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SSKU_SMM_ADDR_REGISTER;

/**
  SoftSKU SMM access to LB regs
**/
#define MSR_SSKU_SMM_DATA 0x000000D3

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Addr : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* different cmds for ssku */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SSKU_SMM_DATA_REGISTER;
/**
  SoftSKU enforcement MSR
**/
#define MSR_SSKU_ENFORCE 0x000000D4

/**
  C-State Configuration register
**/
#define MSR_CLOCK_CST_CONFIG_CONTROL 0x000000E2

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 MaxPkgCState : 4;

                            /* Bits[3:0], Access Type=RW, default=None*/

                            /*
                               Specifies the lowest C-state for the package.
                               This feature does not limit the processor core
                               into specific C-state. The default is set as the
                               factory-configured package C-state limit. 0000b
                               C0/C1 (No package C-state support) 0001b C2
                               0010b C3 0011b C6 0100b C7 0101b C7s 0110b C8
                               0111b C9 1000b C10
                            */
    UINT32 Rsvd4 : 6;

                            /* Bits[9:4], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 IoMwaitRedirection : 1;

                            /* Bits[10:10], Access Type=RW, default=None*/

                            /*
                               When set, will map IO_read instructions sent to
                               IO registers PMG_IO_BASE_ADDRBASE+offset to
                               MWAIT(offset)
                            */
    UINT32 Rsvd11 : 4;

                            /* Bits[14:11], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Lock : 1;

                            /* Bits[15:15], Access Type=RW, default=None*/

                            /*
                               When set, locks bits 15-0 of this register for
                               further writes, until the next reset occurs.
                            */
    UINT32 AccEnable : 1;

                            /* Bits[16:16], Access Type=RW, default=None*/

                            /*
                               BDX new. Autonomous C-state control enable. When
                               set, enables conversion of HALT instructions to
                               MWAIT(C6). MWAIT(C1) is also converted into a
                               MWAIT(C6) when enabled. This bit can be set only
                               when ACC is fuse enabled (SERVER_UNCORE_FUSES).
                               This bit is implemented in the FSCP (not part of
                               the PCU register)
                            */
    UINT32 Rsvd17 : 8;

                            /* Bits[24:17], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 C3StateAutoDemotionEnable : 1;

                            /* Bits[25:25], Access Type=RW, default=None*/

                            /*
                               When set, processor will conditionally demote
                               C6/C7 requests to C3 based on uncore auto-demote
                               information
                            */
    UINT32 C1StateAutoDemotionEnable : 1;

                            /* Bits[26:26], Access Type=RW, default=None*/

                            /*
                               When set, processor will conditionally demote
                               C6/C7 requests to C1 based on uncore auto-demote
                               information
                            */
    UINT32 Enc3undemotion : 1;

                            /* Bits[27:27], Access Type=RW, default=None*/

                            /* Enable Un-Demotion from Demoted C3 */
    UINT32 Enc1undemotion : 1;

                            /* Bits[28:28], Access Type=RW, default=None*/

                            /* Enable Un-Demotion from Demoted C1 */
    UINT32 Enpkgcautodemotion : 1;

                            /* Bits[29:29], Access Type=RW, default=None*/

                            /*
                               Enable Package C-State auto-demotion. It enables
                               the use of the history of past package C-State
                               depth and residence as a factor in determining
                               C-Sstate depth
                            */
    UINT32 Enpkgcundemotion : 1;

                            /* Bits[30:30], Access Type=RW, default=None*/

                            /*
                               Enable Package C-State Un-Demotion. It enables
                               considering cases where demotion was the
                               incorrect decision in determining C-State depth
                            */
    UINT32 TimedMwaitEnable : 1;

                            /* Bits[31:31], Access Type=RW, default=None*/

                            /* When set, enables Timed MWAIT feature. */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CLOCK_CST_CONFIG_CONTROL_REGISTER;

/**
  Power Management I/O base address for I/O trapping to C-states.
**/
#define MSR_PMG_IO_CAPTURE_BASE 0x000000E4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Lvl2b : 16;

                            /* Bits[15:0], Access Type=RW, default=None*/

                            /*
                               Base address of the LVL_2 register visible to
                               software. If IO MWAIT Redirection is enabled
                               using IO MWAIT Redirection Enable
                               (PMG_CST_CONFIG_CONTROL MSR bit 10), reads to
                               this address will be consumed by the power
                               management logic and decoded to MWAIT
                               instructions. When IO port address redirection
                               is enabled, this is the IO port address reported
                               to the OS/software.
                            */
    UINT32 CstRange : 3;

                            /* Bits[18:16], Access Type=RW, default=None*/

                            /*
                               The IO-port block size in which IO-redirection
                               will be executed (0-7). Should be programmed
                               based on the number of LVLx registers existing
                               in the chipset
                            */
    UINT32 Rsvd19 : 13;

                            /* Bits[31:19], Access Type=RW, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PMG_IO_CAPTURE_BASE_REGISTER;

/**
  Not really a register. Probe mode MSR used to modify CPL.
**/
#define MSR_PROBE_CPL 0x00000101

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Cpl : 2;

                            /* Bits[1:0], Access Type=RO_V, default=None*/

                            /* CPLk */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PROBE_CPL_REGISTER;
/**
  Software PAIR weight override
**/
#define MSR_PAIR_WEIGHT_OVERRIDE 0x00000102
/**
  Pair package level thread participation
**/
#define MSR_PAIR_PKG_THREAD_PARTICIPATION 0x00000103
/**
  Register to specify a thread's inclusion or exclusion in Power Aware Interrupt Routing
**/
#define MSR_PAIR_THREAD_PARTICIPATION 0x00000104

#if 0 // Duplicate with ArchMsr.h.
/**
  Write-only virtual MSR to activate DCU flush command
**/
#define MSR_DCU_FLUSH_CMD 0x0000010B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 DcuFlush : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /*  */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RW, default=None*/

                            /* reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RW, default=None*/

                            /* reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_DCU_FLUSH_CMD_REGISTER;
#endif

/**
  Platform Firmware Control MSR.
**/
#define MSR_PLAT_FRMW_PROT_CTRL 0x00000110

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PfatLock : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Locks the PFAT configuration */
    UINT32 PfatEnable : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Enables PFAT */
    UINT32 PfatDp : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               When set this bit indicates that a second socket
                               exists. Applicable to dual socket systems only.
                            */
    UINT32 Reserved3 : 29;

                            /* Bits[31:3], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PLAT_FRMW_PROT_CTRL_REGISTER;
/**
  Platform Firmware Hash Value 063:000.
**/
#define MSR_PLAT_FRMW_PROT_HASH_0 0x00000111
/**
  Platform Firmware Hash Value 127:064.
**/
#define MSR_PLAT_FRMW_PROT_HASH_1 0x00000112
/**
  Platform Firmware Hash Value 191:128.
**/
#define MSR_PLAT_FRMW_PROT_HASH_2 0x00000113
/**
  Platform Firmware Hash Value 255:192.
**/
#define MSR_PLAT_FRMW_PROT_HASH_3 0x00000114
/**
  This registers contains the 64-bit physical address of the start of the PFAT DIRECTORY.
**/
#define MSR_PLAT_FRMW_PROT_TRIG_PARAM 0x00000115
/**
  This is a Write-Only command MSR. A write triggers the command. A Rd will GP Fault.
**/
#define MSR_PLAT_FRMW_PROT_TRIGGER 0x00000116
/**
  MSR to enable PFAT support on embedded controller discrete flash.
**/
#define MSR_PFAT_EC_PASSWORD 0x00000117

/**
  send to Sleep MSR
**/
#define MSR_PFAT_GT_SLEEP_CMDSTS 0x00000118

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 MailboxInternalPcodeKeepGtRc6 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               MAILBOX_INTERNAL_PCODE_KEEP_GT_RC6_DISABLE (0x0)
                               or MAILBOX_INTERNAL_PCODE_KEEP_GT_RC6_ENABLE
                               (0x1)
                            */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RW, default=0x00000000*/

                            /* Reserved Bits */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved Bits */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PFAT_GT_SLEEP_CMDSTS_REGISTER;

/**
  Read bits 23:16 of uncore SCP (storage for this 8b MSR)
**/
#define MSR_BIOS_INFO_FLAGS 0x0000011F

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 BiosInfoFlagsData : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /*
                               BIOS_INFO_FLAGS_DATA only 1 defined bit so far,
                               but want to have the flexibility to use other 7
                               bits w/o patching
                            */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RW, default=0x00000000*/

                            /* Reserved Bits */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved Bits */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_BIOS_INFO_FLAGS_REGISTER;

/**
  This is a read/write MSR that will control the ucode emulation of the PM_TMR.  BIOS will program this register.
**/
#define MSR_BIOS_UCODE_PM_TMR_EMULATION_CFG 0x00000121

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 EmulatedIoPort : 16;

                            /* Bits[15:0], Access Type=RW, default=None*/

                            /*
                               I/O port which ucode will intercept if the valid
                               bit is set. This port is the PM_TMR
                            */
    UINT32 Valid : 1;

                            /* Bits[16:16], Access Type=RW, default=None*/

                            /*
                               Indication if this configuration is valid. If
                               this isn't valid, then the port in
                               EMULATED_IO_PORT won't be intercepted. BIOS must
                               set this bit to enable PM_TMR emulation
                            */
    UINT32 Rsvd17 : 3;

                            /* Bits[19:17], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 RspDelayLoopCount : 12;

                            /* Bits[31:20], Access Type=RW, default=None*/

                            /*
                               Number of PAUSE-like delay loops that should be
                               completed before returning the response. This
                               will allow for better timing emulation of ACPI
                               timer response, which was causing issues in
                               BIOS.
                            */
    UINT32 CorrectionFactor : 32;

                            /* Bits[63:32], Access Type=RW, default=None*/

                            /*
                               Factor to use to correct calculation of PM_TMR
                               (against TSC[CTC])
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_BIOS_UCODE_PM_TMR_EMULATION_CFG_REGISTER;

/**
  This RO MSR will be used to read the Ubox CPUBUSNO/CPUBUSNO1/CPUBUSNO_VALID CSRs
**/
#define MSR_CPU_BUSNUMBER 0x00000128

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Cpubusno0 : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* Bus Number 0 */
    UINT32 Cpubusno1 : 8;

                            /* Bits[15:8], Access Type=RW, default=0x00000000*/

                            /* Bus Number 1 */
    UINT32 Cpubusno2 : 8;

                            /* Bits[23:16], Access Type=RW, default=0x00000000*/

                            /* Bus Number 2 */
    UINT32 Cpubusno3 : 8;

                            /* Bits[31:24], Access Type=RW, default=0x00000000*/

                            /* Bus Number 3 */
    UINT32 Cpubusno4 : 8;

                            /* Bits[39:32], Access Type=RW, default=0x00000000*/

                            /* Bus Number 4 */
    UINT32 Cpubusno5 : 8;

                            /* Bits[47:40], Access Type=RW, default=0x00000000*/

                            /* Bus Number 5 */
    UINT32 Rsvd48 : 15;

                            /* Bits[62:48], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Valid : 1;

                            /* Bits[63:63], Access Type=RW, default=0x00000000*/

                            /*
                               Set when the CSR is written with valid bus
                               numbers
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CPU_BUSNUMBER_REGISTER;
/**
  This RO MSR will be used to read the Ubox MMCFG_RULE_CFG list
**/
#define MSR_MMCFG_RULE_CFG 0x00000129
/**
  This RO MSR will be used to read the Ubox MMCFG_RULE_TARGET_LIST
**/
#define MSR_MMCFG_RULE_TARGET_LIST 0x0000012A
/**
  Anchor Cove MSR for reading boot policy information from the PCH.
  8 new RDMSR range (addr 0x130-0x137), which read 64b each.
  Base addr is 0xFED58000 and reads are consecutive.
  " seq has 8 instances in addresses range 0x130 to 0x137"
**/
#define MSR_ANC_BOOT_POLICY_0_0 0x00000130
/**
  Anchor Cove MSR for reading boot policy information from the PCH.
  8 new RDMSR range (addr 0x130-0x137), which read 64b each.
  Base addr is 0xFED58000 and reads are consecutive.
  " seq has 8 instances in addresses range 0x130 to 0x137"
**/
#define MSR_ANC_BOOT_POLICY_1_1 0x00000131
/**
  Anchor Cove MSR for reading boot policy information from the PCH.
  8 new RDMSR range (addr 0x130-0x137), which read 64b each.
  Base addr is 0xFED58000 and reads are consecutive.
  " seq has 8 instances in addresses range 0x130 to 0x137"
**/
#define MSR_ANC_BOOT_POLICY_2_2 0x00000132
/**
  Anchor Cove MSR for reading boot policy information from the PCH.
  8 new RDMSR range (addr 0x130-0x137), which read 64b each.
  Base addr is 0xFED58000 and reads are consecutive.
  " seq has 8 instances in addresses range 0x130 to 0x137"
**/
#define MSR_ANC_BOOT_POLICY_3_3 0x00000133
/**
  Anchor Cove MSR for reading boot policy information from the PCH.
  8 new RDMSR range (addr 0x130-0x137), which read 64b each.
  Base addr is 0xFED58000 and reads are consecutive.
  " seq has 8 instances in addresses range 0x130 to 0x137"
**/
#define MSR_ANC_BOOT_POLICY_4_4 0x00000134
/**
  Anchor Cove MSR for reading boot policy information from the PCH.
  8 new RDMSR range (addr 0x130-0x137), which read 64b each.
  Base addr is 0xFED58000 and reads are consecutive.
  " seq has 8 instances in addresses range 0x130 to 0x137"
**/
#define MSR_ANC_BOOT_POLICY_5_5 0x00000135
/**
  Anchor Cove MSR for reading boot policy information from the PCH.
  8 new RDMSR range (addr 0x130-0x137), which read 64b each.
  Base addr is 0xFED58000 and reads are consecutive.
  " seq has 8 instances in addresses range 0x130 to 0x137"
**/
#define MSR_ANC_BOOT_POLICY_6_6 0x00000136
/**
  Anchor Cove MSR for reading boot policy information from the PCH.
  8 new RDMSR range (addr 0x130-0x137), which read 64b each.
  Base addr is 0xFED58000 and reads are consecutive.
  " seq has 8 instances in addresses range 0x130 to 0x137"
**/
#define MSR_ANC_BOOT_POLICY_7_7 0x00000137

/**
  Anchor Cove MSR to indicate that the initial boot block is complete, and to re-enable events.
  Write-only and accessible via the ACM.
**/
#define MSR_ANC_FORCE_BOOT_POLICY_ENFORCED 0x00000138

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data : 32;

                            /* Bits[31:0], Access Type=RW, default=None*/

                            /* Force Boot Policy Enforced */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ANC_FORCE_BOOT_POLICY_ENFORCED_REGISTER;

/**
  Anchor Cove MSR to tell PCH that the ACM has successfully launched and to stop the deadman timer countdown.
  Write-only and accessible via the ACM.
**/
#define MSR_ANC_INITIAL_BOOT_BLOCK_COMPLETE 0x00000139

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Done : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /*
                               Bit indicates that ACM has successfully
                               launched. Stop deadman timer counter
                            */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ANC_INITIAL_BOOT_BLOCK_COMPLETE_REGISTER;

/**
  An MSR for communicating basic policy information from the Anchor Cove ACM to early BIOS.
  Things like executing in NEM, thread protection enabled etc., will be communicated.
**/
#define MSR_ANC_SACM_INFO 0x0000013A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 SacmData : 8;

                            /* Bits[7:0], Access Type=RW, default=None*/

                            /*
                               Anchor Cove boot policy information populated by
                               the AnC StartupACM
                            */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 AnchorCoveEnFuse : 1;

                            /* Bits[32:32], Access Type=RW, default=None*/

                            /*
                               Read-only bit to reflect the Anchor Cove enable
                               fuse
                            */
    UINT32 Pbe : 1;

                            /* Bits[33:33], Access Type=RW, default=None*/

                            /*
                               Read-only bit to reflect the PCH Protect BIOS
                               Environment bit
                            */
    UINT32 LtSxEnFuse : 1;

                            /* Bits[34:34], Access Type=RW, default=None*/

                            /* Read-only bit to reflect the LT-SX enable fuse */
    UINT32 NoResetSecretsProt : 1;

                            /* Bits[35:35], Access Type=RW, default=None*/

                            /*
                               Read-only bit to reflect no reset secrets
                               protection
                            */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ANC_SACM_INFO_REGISTER;

/**
  AES Feature configuration.  This MSR is visible only if one of the following holds:
  CPUID.(EAX=01h):ECX[25]=1, which indicates the processor was manufactured with AES-NI enabled.
**/
#define MSR_FEATURE_CONFIG 0x0000013C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Lock : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /*
                               Once this bit is set, writes to this register
                               will not be allowed
                            */
    UINT32 AesDisable : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /*
                               This bit disables Advanced Encryption Standard
                               feature on this processor core. To disable AES,
                               BIOS will write '11 to this MSR on every core.
                            */
    UINT32 Reserved2 : 30;

                            /* Bits[31:2], Access Type=RW, default=None*/

                            /* Reserved bits */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_FEATURE_CONFIG_REGISTER;
/**
  Spare core MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 3 instances in addresses range 0x13D to 0x13F"
**/
#define MSR_CORE_SPECIFIC_SPARE_0_0 0x0000013D
/**
  Spare core MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 3 instances in addresses range 0x13D to 0x13F"
**/
#define MSR_CORE_SPECIFIC_SPARE_1_1 0x0000013E
/**
  Spare core MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 3 instances in addresses range 0x13D to 0x13F"
**/
#define MSR_CORE_SPECIFIC_SPARE_2_2 0x0000013F

/**
  Miscellaneous enables for thread specific features.
  [IntelRsvd]FSCP Crunch - 1:32 Used only 1 bit out of 32[/IntelRsvd]
**/
#define MSR_MISC_THD_FEATURE_ENABLES 0x00000140

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CpuidGpOnCplGt0 : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /*
                               Causes CPUID to #GP if CPL greater than 0 and
                               not in SMM.
                            */
    UINT32 Reserved1 : 31;

                            /* Bits[31:1], Access Type=RW, default=None*/

                            /* SCP Register Reserved Bits */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_MISC_THD_FEATURE_ENABLES_REGISTER;

/**
  SMM-only MSR which allows locking of various states while in SMM mode
**/
#define MSR_SMM_SUPOVR_STATE_LOCK 0x00000141

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PagingStates : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /*
                               When set, prevents changing various paging state
                               bits (CR0,CR3,CR4,EFER), and prevents task
                               switches
                            */
    UINT32 Smbase : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* When set, prevents RSM(SMI) from updating SMBASE */
    UINT32 Ia32SmmMonitorCtlMsr : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /*
                               When set, prevents WRMSR to IA32_SMM_MONITOR_CTL
                               (aka MSEG) MSR
                            */
    UINT32 Reserved3 : 29;

                            /* Bits[31:3], Access Type=RW, default=None*/

                            /* Reserved for future usage */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMM_SUPOVR_STATE_LOCK_REGISTER;
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_0_0 0x00000142
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_1_1 0x00000143
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_2_2 0x00000144
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_3_3 0x00000145
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_4_4 0x00000146
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_5_5 0x00000147
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_6_6 0x00000148
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_7_7 0x00000149
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_8_8 0x0000014A
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_9_9 0x0000014B
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_10_10 0x0000014C
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_11_11 0x0000014D
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_12_12 0x0000014E
/**
  Spare thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. WSM eco 653232
  " seq has 14 instances in addresses range 0x142 to 0x14F"
**/
#define MSR_THREAD_SPECIFIC_SPARE_13_13 0x0000014F

/**
  An Interface to perform various overclocking oriented commands.
**/
#define MSR_OVERCLOCKING_MAILBOX 0x00000150

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data : 32;

                            /* Bits[31:0], Access Type=RW, default=None*/

                            /* Command specific data field. */
    UINT32 Command : 8;

                            /* Bits[39:32], Access Type=RW, default=None*/

                            /*
                               This field holds the command ID for WRMSR
                               operations and holds the error code on RDMSR
                               operations. [list] [*]Commands in 0x1 to 0xf
                               range are read-only capabilities. [*]Commands in
                               0x10 and up are read/write. [/list]
                            */
    UINT32 Param1 : 8;

                            /* Bits[47:40], Access Type=RW, default=None*/

                            /* Command specific Parameter 1 */
    UINT32 Param2 : 8;

                            /* Bits[55:48], Access Type=RW, default=None*/

                            /*
                               Command specific Parameter 2 [IntelRsvd]SNC:
                               This is now supported : b1304634937[/IntelRsvd]
                            */
    UINT32 Rsvd56 : 7;

                            /* Bits[62:56], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 RunBusy : 1;

                            /* Bits[63:63], Access Type=RW, default=None*/

                            /*
                               Writes without Run/Busy indicator set are
                               dropped on the floor
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_OVERCLOCKING_MAILBOX_REGISTER;

/**
  BIOS Done register for CNL issue 1351547
  - Bit 0 (R/W): ENABLE_IA_UNTRUSTED
  o Cleared only by reset (cold/warm).
  o A change from 0->1 will increment BIOS_DONE_COUNTER in the SoC
  o Writes to the bit will be ignored if the EAX[0] is 0
  - Bit 1 (R): SOC_BIOS_DONE
  o Returns '1 if all available threads set their ENABLE_IA_UNTRUSTED.
  o Writes will be silently dropped.
  - Bits 31:2: Reserved - write '1 results in #GP.
**/
#define MSR_BIOS_DONE 0x00000151

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 EnableIaUntrusted : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               o Cleared only by reset (cold/warm). o A change
                               from 0->1 will increment BIOS_DONE_COUNTER in
                               the SoC o Writes to the bit will be ignored if
                               the EAX[0] is 0
                            */
    UINT32 SocBiosDone : 1;

                            /* Bits[1:1], Access Type=RO_V, default=0x00000000*/

                            /*
                               o Cleared only by reset (cold/warm). o A change
                               from 0->1 will increment BIOS_DONE_COUNTER in
                               the SoC o Writes to the bit will be ignored if
                               the EAX[0] is 0
                            */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_BIOS_DONE_REGISTER;

/**
  SNC_CONFIG_BASE register decription
**/
#define MSR_SNC_CONFIG 0x00000152

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 SncEnable : 1;

                            /* Bits[0:0], Access Type=RW_V, default=0x00000000*/

                            /* SNC Enable bit */
    UINT32 SncIndicationEnable : 1;

                            /* Bits[1:1], Access Type=RW_V, default=0x00000000*/

                            /* SNC Enable bit */
    UINT32 NumberOfClusters : 2;

                            /* Bits[3:2], Access Type=RW_V, default=0x00000000*/

                            /* Number Of Clusters */
    UINT32 Cluster1Base : 6;

                            /* Bits[9:4], Access Type=RW_V, default=0x00000000*/

                            /* Cluster 2 Base */
    UINT32 Cluster2Base : 6;

                            /* Bits[15:10], Access Type=RW_V, default=0x00000000*/

                            /* Cluster 3 Base */
    UINT32 Cluster3Base : 6;

                            /* Bits[21:16], Access Type=RW_V, default=0x00000000*/

                            /* Cluster 4 Base */
    UINT32 Rsvd22 : 6;

                            /* Bits[27:22], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 SncLock : 1;

                            /* Bits[28:28], Access Type=RW_V, default=0x00000000*/

                            /*
                               Due to SKL B0 freeze this late arrving bit is
                               implemented in
                               FSCP_CR_MISC_FEATURE_ENABLES[SNC_LOCK]
                            */
    UINT32 Rsvd29 : 3;

                            /* Bits[31:29], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SNC_CONFIG_REGISTER;

/**
  SNC_RANGE1_BASE register decription
**/
#define MSR_SNC_RANGE0_BASE 0x00000153

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Range : 16;

                            /* Bits[15:0], Access Type=RW_V, default=0x00000000*/

                            /* Range1 Base Addr */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SNC_RANGE0_BASE_REGISTER;

/**
  SNC_RANGE2_BASE register decription
**/
#define MSR_SNC_RANGE1_BASE 0x00000154

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Range : 16;

                            /* Bits[15:0], Access Type=RW_V, default=0x00000000*/

                            /* Range2 Base Addr */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SNC_RANGE1_BASE_REGISTER;

/**
  SNC_RANGE3_BASE register decription
**/
#define MSR_SNC_RANGE2_BASE 0x00000155

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Range : 16;

                            /* Bits[15:0], Access Type=RW_V, default=0x00000000*/

                            /* Range 3 Base Addr */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SNC_RANGE2_BASE_REGISTER;

/**
  SNC_RANGE4_BASE register decription
**/
#define MSR_SNC_RANGE3_BASE 0x00000156

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Range : 16;

                            /* Bits[15:0], Access Type=RW_V, default=0x00000000*/

                            /* Range4 Base Addr */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SNC_RANGE3_BASE_REGISTER;

/**
  SNC_RANGE5_BASE register decription
**/
#define MSR_SNC_RANGE4_BASE 0x00000157

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Range : 16;

                            /* Bits[15:0], Access Type=RW_V, default=0x00000000*/

                            /* Range 5 Base Addr */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SNC_RANGE4_BASE_REGISTER;

/**
  Core SMI Error Source
**/
#define MSR_THREAD_SMI_ERR_SRC 0x00000158

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Ifu : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 Dcu : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_THREAD_SMI_ERR_SRC_REGISTER;

/**
  SNC range upper 6 bits per range register
**/
#define MSR_SNC_UPPER_BASE 0x00000159

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 UpperBase0 : 6;

                            /* Bits[5:0], Access Type=RW_V, default=0x00000000*/

                            /* Base Address [51:46] for 1st cluster */
    UINT32 UpperBase1 : 6;

                            /* Bits[11:6], Access Type=RW_V, default=0x00000000*/

                            /* Base Address [51:46] for 2nd cluster */
    UINT32 UpperBase2 : 6;

                            /* Bits[17:12], Access Type=RW_V, default=0x00000000*/

                            /* Base Address [51:46] for 3rd cluster */
    UINT32 UpperBase3 : 6;

                            /* Bits[23:18], Access Type=RW_V, default=0x00000000*/

                            /* Base Address [51:46] for 4th cluster */
    UINT32 UpperBase4 : 6;

                            /* Bits[29:24], Access Type=RW_V, default=0x00000000*/

                            /* Base Address [51:46] for 5th cluster */
    UINT32 Rsvd30 : 2;

                            /* Bits[31:30], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SNC_UPPER_BASE_REGISTER;

/**
  Special uncore usage msr, work in PFAT or in SMM BIOS flash
**/
#define MSR_SPCL_UNCORE_USAGE 0x0000015B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RW, default=0x00000000*/

                            /* Reserved Bits */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SPCL_UNCORE_USAGE_REGISTER;

/**
  Read-only MSR that specifies the maximum number of memory controllers on the platform capable of supporting memory persistence
**/
#define MSR_PERMEM_CONFIG_INFO 0x0000015C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ControllerCount : 8;

                            /* Bits[7:0], Access Type=RW, default=None*/

                            /*
                               maximum number of memory controllers on the
                               platform capable of supporting memory
                               persistence
                            */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RW, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PERMEM_CONFIG_INFO_REGISTER;

/**
  Index into the list of persistent memory addresses which is accessed when the PERMEM_CTRLR_ID MSR is read/written
**/
#define MSR_PERMEM_CTRLR_INDEX 0x0000015D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ControllerIndex : 8;

                            /* Bits[7:0], Access Type=RW, default=None*/

                            /* Index into persistent memory address list */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 31;

                            /* Bits[62:32], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Lock : 1;

                            /* Bits[63:63], Access Type=RW, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PERMEM_CTRLR_INDEX_REGISTER;

/**
  Read-only MSR that specifies the maximum number of memory controllers on the platform capable of supporting memory persistence
**/
#define MSR_PERMEM_CTRLR_ID 0x0000015E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 6;

                            /* Bits[5:0], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 ControllerIdentifier0 : 26;

                            /* Bits[31:6], Access Type=RW, default=None*/

                            /*
                               memory address that uniquely identifies a
                               persistent memory controller, whose index in
                               list is specified by PERMEM_CTRLR_INDEX
                            */
    UINT32 ControllerIdentifier1 : 32;

                            /* Bits[63:32], Access Type=RW, default=None*/

                            /*
                               memory address that uniquely identifies a
                               persistent memory controller, whose index in
                               list is specified by PERMEM_CTRLR_INDEX
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PERMEM_CTRLR_ID_REGISTER;
/**
  Probe mode MSR, used also in cache flush and segmentation
  C6NoSave Candidate
**/
#define MSR_REGISTER_0 0x00000160
/**
  Probe mode MSR, used also in PDM flows
  C6NoSave Candidate
**/
#define MSR_REGISTER_1 0x00000161
/**
  Probe mode MSR, used also in PDM flows
  C6NoSave Candidate
**/
#define MSR_REGISTER_2 0x00000162
/**
  Probe mode MSR, used also in page a/d assist and vmx flows
  C6NoSave Candidate: actually, we'll leave this in the C6 save loop because it's also an MSR
**/
#define MSR_REGISTER_3 0x00000163
/**
  Probe mode MSR, used also in PDM and paging flows
  C6NoSave Candidate
**/
#define MSR_REGISTER_4 0x00000164
/**
  Probe mode MSR, used also in PDM and paging flows
  C6NoSave Candidate
**/
#define MSR_REGISTER_5 0x00000165
/**
  Probe mode MSR
  C6NoSave Candidate
**/
#define MSR_REGISTER_6 0x00000166
/**
  Probe mode MSR
  C6NoSave Candidate
**/
#define MSR_REGISTER_7 0x00000167
/**
  Probe mode MSR
  C6NoSave Candidate
**/
#define MSR_REGISTER_8 0x00000168
/**
  Probe mode MSR
  C6NoSave Candidate
**/
#define MSR_REGISTER_9 0x00000169
/**
  Probe mode MSR
  C6NoSave Candidate
**/
#define MSR_REGISTER_10 0x0000016A
/**
  Probe mode MSR
  C6NoSave Candidate
**/
#define MSR_REGISTER_11 0x0000016B
/**
  Probe mode MSR
  C6NoSave Candidate
**/
#define MSR_REGISTER_12 0x0000016C
/**
  Probe mode MSR
  C6NoSave Candidate
**/
#define MSR_REGISTER_13 0x0000016D
/**
  SCP used by Task Switch and SMI code to save RIP
  Probe mode MSR, used also in PDM flows
**/
#define MSR_TASK_SWITCH_OR_SMI_RIP 0x0000016E
/**
  Probe mode MSR, used also in task switch
  C6NoSave Candidate
**/
#define MSR_TASK_SWITCH_OR_PROBE_MODE_MISC 0x0000016F

/**
  SMM revision identifier.[IntelRsvd] REVIEW: Register could be removed if RDMSR and SMM ucode use constants[/IntelRsvd]
**/
#define MSR_P6_CR_SMREVID 0x00000170

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Id : 16;

                            /* Bits[15:0], Access Type=RW, default=None*/

                            /* SMM Revision identifier */
    UINT32 IoInstrRestart : 1;

                            /* Bits[16:16], Access Type=RW, default=None*/

                            /*
                               If set, IO instruction restart is supported.
                               [IntelRsvd]NHM will set this bit [/IntelRsvd]
                            */
    UINT32 SmbaseRelocation : 1;

                            /* Bits[17:17], Access Type=RW, default=None*/

                            /*
                               If set, SMRAM base address relocation is
                               supported. [IntelRsvd]NHM will set this bit
                               [/IntelRsvd]
                            */
    UINT32 Rsvd18 : 14;

                            /* Bits[31:18], Access Type=RW, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_P6_CR_SMREVID_REGISTER;
/**
  SMM Base register
**/
#define MSR_P6_CR_SMBASE 0x00000171
/**
  Used to save PPPE exit reason for probe mode redirection
  C6NoSave Candidate
**/
#define MSR_PROBE_MODE_PPPE_REDIRECTION 0x00000172

/**
  Probe mode data register result
**/
#define MSR_PROBE_MODE_DR 0x00000173

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PrdLo : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /*
                               Probe data register result for lower 32 bits
                               restrictions : ucode only
                            */
    UINT32 PrdHi : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /*
                               Probe data register result for upper 32 bits
                               restrictions : None
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PROBE_MODE_DR_REGISTER;

/**
  Register that contains the poison and viral bit valid / invalid state.
**/
#define MSR_MCG_CONTAIN 0x00000178

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Pe : 1;

                            /* Bits[0:0], Access Type=RW_V, default=None*/

                            /*
                               Poison Enable - when set to '1' then the
                               Enhanced Containment Mode feature should be
                               enabled , when '0' then the behavior should be
                               legacy behavior.
                            */
    UINT32 EnableViral : 1;

                            /* Bits[1:1], Access Type=RW_V, default=0x00000000*/

                            /*
                               [list] [*]0: (default) legacy behavior [*]1:
                               Enable Viral Support [/list]
                            */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_MCG_CONTAIN_REGISTER;

/**
  Core SMI Error Source
**/
#define MSR_CORE_SMI_ERR_SRC 0x0000017C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 2;

                            /* Bits[1:0], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 Dtlb : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 Mlc : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 Rsvd4 : 28;

                            /* Bits[31:4], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CORE_SMI_ERR_SRC_REGISTER;

/**
  Enhanced MCA Capabilities register
**/
#define MSR_SMM_MCA_CAP 0x0000017D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 BankSupport : 32;

                            /* Bits[31:0], Access Type=RO_V, default=None*/

                            /*
                               One bit per bank. If bit is set, then the
                               corresponding bank supports enhanced MCA.
                            */
    UINT32 Rsvd32 : 22;

                            /* Bits[53:32], Access Type=RO_V, default=None*/

                            /* Reserved */
    UINT32 SmmProtMode : 1;

                            /* Bits[54:54], Access Type=RO_V, default=None*/

                            /* Set if SMM Protected Mode is supported */
    UINT32 ErrorSpoofing : 1;

                            /* Bits[55:55], Access Type=RO_V, default=None*/

                            /*
                               Set if Error Spoofing and Enhanced MCA are
                               supported
                            */
    UINT32 TargetedSmi : 1;

                            /* Bits[56:56], Access Type=RO_V, default=None*/

                            /*
                               Set to 1 if the thread supports targeted SMI and
                               the SMM_ENABLE register (MSR 4E1h) is supported.
                            */
    UINT32 SmmCpuSvrstr : 1;

                            /* Bits[57:57], Access Type=RO_V, default=None*/

                            /*
                               Set to 1 if the SAVE/RESTORE feature is
                               supported and the SMM_FEATURE_CONTROL register
                               (MSR 4E0h) is supported.
                            */
    UINT32 SmmCodeAccessChk : 1;

                            /* Bits[58:58], Access Type=RO_V, default=None*/

                            /*
                               Set to 1 if the SMM code access check feature is
                               supported and the SMM_FEATURE_CONTROL register
                               (MSR 4E0h) is supported.
                            */
    UINT32 LongFlowIndication : 1;

                            /* Bits[59:59], Access Type=RO_V, default=None*/

                            /* Set to indicate SMM long flow indicator support */
    UINT32 SmmRsvd : 4;

                            /* Bits[63:60], Access Type=RO_V, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMM_MCA_CAP_REGISTER;

/**
  Uncore SMI Error Source
**/
#define MSR_UNCORE_SMI_ERR_SRC 0x0000017E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 4;

                            /* Bits[3:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 McaBankId4 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId5 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId6 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId7 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId8 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId9 : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId10 : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId11 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId12 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId13 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId14 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId15 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId16 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId17 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId18 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId19 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId20 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId21 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId22 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId23 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId24 : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId25 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId26 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId27 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId28 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId29 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId30 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 McaBankId31 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*  */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_UNCORE_SMI_ERR_SRC_REGISTER;

/**
  [p]A non-architectural, package-scoped MSR intended for use by BIOS. ERROR_CONTROL[4] is a r/w bit that defeatures CMCI.
  Storage for this bit is in the UNCORE_SCP_MISC2_CREG[4]. The bit will be saved and restored in C7+ states.[/p]
  [p]The reset value for the bit is 0. It will not survive warm reset.[/p]
  [p]When MSR 0x17F bit 4 is set, two actions will happen:[/p]
  [list]
  [*]RDMSR to MCG_CAP will have bit 10 cleared to 0.
  [*]WRMSR to MCi_MISC2 registers will clear bits[31:0] in all modes.
  [/list]
**/
#define MSR_ERROR_CONTROL 0x0000017F

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 4;

                            /* Bits[3:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 CmciDisable : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /* When set, will disable CMCI signaling */
    UINT32 Rsvd5 : 2;

                            /* Bits[6:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 LlcEwbSraoPromote : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               For LLC EWB errors, allows EWB errors to be
                               promoted to SRAO from UCNA
                            */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ERROR_CONTROL_REGISTER;

/**
  This 'flexible boot' register is written by BIOS in order to modify the maximum non-turbo ratio on the next reset.
**/
#define MSR_FLEX_RATIO 0x00000194

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 OcExtraVoltage : 8;

                            /* Bits[7:0], Access Type=RWS, default=0x00000000*/

                            /*
                               Depracated. Extra voltage to be used for
                               Overclocking.The voltage is defined in units of
                               1/256 Volts.
                            */
    UINT32 FlexRatio : 8;

                            /* Bits[15:8], Access Type=RWS, default=0x00000000*/

                            /*
                               When enabled by the ENABLE bit, the value in
                               this field sets the maximum non-turbo ratio. If
                               this value is greater than the maximum ratio set
                               by hardware, this field is silently ignored. The
                               override value applies on the next reset and not
                               immediately.
                            */
    UINT32 Enable : 1;

                            /* Bits[16:16], Access Type=RWS, default=0x00000000*/

                            /*
                               When set to 1, indicates that the value
                               programmed in FLEX_RATIO field will be used to
                               override the maximum non-turbo ratio on next
                               reboot. When this bit is set to zero, all writes
                               to FLEX_RATIO field are silently ignored.
                            */
    UINT32 OcBins : 3;

                            /* Bits[19:17], Access Type=RW_L, default=0x00000000*/

                            /*
                               [p]If overclocking is enabled, this field
                               contains how many bins of Core ratio
                               overclocking are supported.[/p] [p]The encoding
                               is:[/p] [list] [*]0: No Core overclocking is
                               supported [*]1-6: Max 1-6 bins of Core ratio
                               overclocking is supported. [*]7: Unlimited
                               [/list] [p]If overclocking is disabled then this
                               field should be ignored.[/p] [p]Overclocking
                               bins imply programming the TURBO_RATIO_LIMIT MSR
                               above its hardware default value.[/p]
                               Overclocking enabled/disabled can be checked in
                               CAPID0_B_0_0_0_PCI.OC_ENABLED.
                            */
    UINT32 OcLock : 1;

                            /* Bits[20:20], Access Type=RW1S, default=0x00000000*/

                            /*
                               If set, all writes to overclocking limits are
                               disabled. Anyway modifications to overclocking
                               limits prior to setting this lock bit are
                               maintained. This field may only be set by
                               software and it is cleared by hardware only on
                               reset.
                            */
    UINT32 Rsvd21 : 11;

                            /* Bits[31:21], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_FLEX_RATIO_REGISTER;
/**
  Deprecated. The MSR always return zero.
**/
#define MSR_MSR_THERM2_CTL 0x0000019D

/**
  Temperature margin in PECI temperature counts from the thermal profile specification.  Platform fan control SW is expected to read therm_margin value to control fan or blower speed.
**/
#define MSR_PACKAGE_THERM_MARGIN 0x000001A1

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ThermMargin : 16;

                            /* Bits[15:0], Access Type=RO_V, default=0x00007F00*/

                            /*
                               Temperature margin in PECI temperature counts
                               from the thermal profile specification.
                               THERM_MARGIN is in 2's complement format (8.8
                               format where MSB equals 1 Sign bit + 7 bits of
                               integer temperature value and the LSB equals 8
                               precison bits of temperature value). A value of
                               zero indicates the hottest CPU die temperature
                               is on the thermal profile line. A negative value
                               indicates gap to the thermal profile that
                               platform SW should increase cooling capacity. A
                               sustained negative value should be avoided as it
                               may impact part reliability.
                            */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PACKAGE_THERM_MARGIN_REGISTER;

/**
  Legacy register holding temperature related constants for Platform use.
**/
#define MSR_TEMPERATURE_TARGET 0x000001A2

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 TccOffsetTimeWindow : 7;

                            /* Bits[6:0], Access Type=RO_V, default=0x00000000*/

                            /* Describes the RATL averaging time window */
    UINT32 TccOffsetClampingBit : 1;

                            /* Bits[7:7], Access Type=RO_V, default=0x00000000*/

                            /* When enabled will allow RATL throttling below P1 */
    UINT32 FanTempTargetOfst : 8;

                            /* Bits[15:8], Access Type=RW_L, default=0x00000000*/

                            /*
                               Fan Temperature Target Offset (a.k.a. T-Control)
                               indicates the relative offset from the Thermal
                               Monitor Trip Temperature at which fans should be
                               engaged.
                            */
    UINT32 RefTemp : 8;

                            /* Bits[23:16], Access Type=RW_L, default=0x00000000*/

                            /*
                               This field indicates the maximum junction
                               temperature, also referred to as the Throttle
                               Temperature, TCC Activation Temperature or
                               Prochot Temperature. This is the temperature at
                               which the Adaptive Thermal Monitor is activated.
                            */
    UINT32 TjMaxTccOffset : 6;

                            /* Bits[29:24], Access Type=RO_V, default=0x00000000*/

                            /*
                               Temperature offset in degrees (C) from the TJ
                               Max. Used for throttling temperature. Will not
                               impact temperature reading. If offset is allowed
                               and set - the throttle will occur and reported
                               at lower then Tj_max.
                            */
    UINT32 Rsvd30 : 1;

                            /* Bits[30:30], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Locked : 1;

                            /* Bits[31:31], Access Type=RW_KL, default=0x00000000*/

                            /*
                               When set, this entire register becomes read-
                               only.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_TEMPERATURE_TARGET_REGISTER;

/**
  Miscellaneous Feature Control Register
**/
#define MSR_MISC_FEATURE_CONTROL 0x000001A4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 MlcStreamerPrefetchDisable : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Set to disable MLC streamer prefetcher. */
    UINT32 MlcSpatialPrefetchDisable : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Set to disable MLC spatial prefetcher. */
    UINT32 DcuStreamerPrefetchDisable : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* Set to disable DCU streamer prefetcher. */
    UINT32 DcuIpPrefetchDisable : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* Set to disable DCU IP prefetcher. */
    UINT32 Rsvd4 : 1;

                            /* Bits[4:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd5 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Rsvd6 : 5;

                            /* Bits[10:6], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 DisableThreeStrikeCnt : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Prevent the Three Strike Counter from
                               incrementing
                            */
    UINT32 Rsvd12 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_MISC_FEATURE_CONTROL_REGISTER;

/**
  MSR for thread specific defeature
**/
#define MSR_THREAD_SW_DEFEATURE 0x000001A8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 XinitDisable : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* When this bit set: READ_XINIT_AS_NON_INIT */
    UINT32 XmodifiedDisable : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* When this bit set: READ_XMODIFIED_AS_MODIFIED */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_THREAD_SW_DEFEATURE_REGISTER;

/**
  Miscellaneous Power Management control; Various model specific features enumeration.
**/
#define MSR_MISC_PWR_MGMT 0x000001AA

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 SinglePctlEn : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Single_PCTL: When set (1), will cause PST
                               commands (writes to IA32_PERF_CTL) from any
                               cores to set the P-state target (no
                               coordination). This mean that the last thread
                               that writes the P-state request, is the dominant
                               one. If not set this mean that coordination
                               between all the thread requests will be
                               initiated and the resolved result will dominant.
                               Default = 0 (disabled).
                            */
    UINT32 Rsvd1 : 5;

                            /* Bits[5:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 EnableHwp : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Setting this bit (1) will cause the HWP Base
                               feature bit to report as present (1) in CPUID;
                               clearing this bit will cause CPUID to report the
                               feature as non-present (0). This bit can be set
                               only if IA32_PM_ENABLE (HWP_Enable) is clear(0).
                            */
    UINT32 EnableHwpInterrupt : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               RW Setting this bit (1) will cause the HWP
                               CPUID[6].EAX[8] Notifications feature bit to
                               report as present (1); clearing will report as
                               non-present (0). This bit can be set only if
                               IA32_PM_ENABLE (HWP_Enable) is clear(0) and
                               MISC_PWR_MGT[6] is set.
                            */
    UINT32 EnableOutOfBandAutonomous : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Setting this bit (1) will enable HWP with its
                               default settings but without the ability for
                               software to access HWP MSRs. This bit can be set
                               only if Enumerate HWP bit is clear,
                               MISC_PWR_MGT[6] (0).
                            */
    UINT32 EnableSdcOob : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               RW Setting this bit (1) will enable HDC with its
                               default settings but without the ability for
                               software to access IA32_PKG_HDC_CTL,
                               IA32_PM_CTL1 and IA32_THREAD_STALL_COUNTER MSR.
                               This bit can be set only if Enumerate HDC bit is
                               clear (0). Default = 0.
                            */
    UINT32 EnableSdc : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               This bit is reflected in CPUID[6].EAX[13] to
                               represent HDC as present as well the I
                               IA32_PKG_HDC_CTL, IA32_PM_CTL1 and
                               IA32_THREAD_STALL_COUNTER MSRs. (default value
                               is according to HDC-enabled-fuse)
                            */
    UINT32 SdcOobCapable : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Read-Only bit in which RDMSR reflects the
                               ENABLE_SDC_OOB fuse value for BIOS to know
                               whether it can ENABLE_SDC_OOB
                            */
    UINT32 EnableHwpEpp : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Enable EPP, RW Setting this bit (1) will cause
                               the HWP CPUID[6].EAX[10] Energy Performance
                               Preference bit to report as present (1);
                               clearing will report as non-present (0). This
                               bit can be set only if IA32_PM_ENABLE
                               (HWP_Enable) is clear(0) and MISC_PWR_MGT[6] is
                               set.
                            */
    UINT32 Lock : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Set this bit will lock this MSR until the next
                               reset
                            */
    UINT32 Rsvd14 : 4;

                            /* Bits[17:14], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PlatPStateCtrl : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Adding for Dell request to add
                               platform_p_stat_ctrl bit 18 to 0x1aa msr
                            */
    UINT32 Rsvd19 : 3;

                            /* Bits[21:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 LockThermInt : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Lock_Therm_Int - Ties thermal interrupts from
                               all cores. If set, then a thermal interrupt on
                               one core is routed to all cores. A value = 0
                               indicates not active, and a value = 1 indicates
                               active.
                            */
    UINT32 Rsvd23 : 9;

                            /* Bits[31:23], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_MISC_PWR_MGMT_REGISTER;

#if 0 // This definition is out of date. Prefer to use the definition in CpuRegs.h.
/**
  This MSR indicates the factory configured values for of 1-core, 2-core, 3-core and 4-core turbo ratio limits for all processors and also allows configuration of those values on parts with PLATFORM_INFO MSR 0CEh[28]==1.
**/
#define MSR_TURBO_RATIO_LIMIT 0x000001AD

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 MaxTurbo1Core : 8;

                            /* Bits[7:0], Access Type=RW_L, default=0x00000000*/

                            /* Maximum turbo ratio limit with 1 core active. */
    UINT32 MaxTurbo2Cores : 8;

                            /* Bits[15:8], Access Type=RW_L, default=0x00000000*/

                            /* Maximum turbo ratio limit with 2 cores active. */
    UINT32 MaxTurbo3Cores : 8;

                            /* Bits[23:16], Access Type=RW_L, default=0x00000000*/

                            /* Maximum turbo ratio limit with 3 cores active. */
    UINT32 MaxTurbo4Cores : 8;

                            /* Bits[31:24], Access Type=RW_L, default=0x00000000*/

                            /* Maximum turbo ratio limit with 4 cores active. */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_TURBO_RATIO_LIMIT_REGISTER;
#endif

/**
  This register defines the active core ranges for each frequency point
  NUMCORE[0:7] must be populated in ascending order.
  NUMCORE[i+1] must be greater than NUMCORE[i]
  Entries with NUMCORE[i] == 0 will be ignored
  The last valid entry must have NUMCORE >= the number of cores in the SKU
  If any of the rules above are broken, we will silently reject the configuration.
**/
#define MSR_TURBO_RATIO_LIMIT_CORES 0x000001AE

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Numcore0 : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /*
                               defines the active core ranges for each
                               frequency point.
                            */
    UINT32 Numcore1 : 8;

                            /* Bits[15:8], Access Type=RW, default=0x00000000*/

                            /*
                               defines the active core ranges for each
                               frequency point.
                            */
    UINT32 Numcore2 : 8;

                            /* Bits[23:16], Access Type=RW, default=0x00000000*/

                            /*
                               defines the active core ranges for each
                               frequency point.
                            */
    UINT32 Numcore3 : 8;

                            /* Bits[31:24], Access Type=RW, default=0x00000000*/

                            /*
                               defines the active core ranges for each
                               frequency point.
                            */
    UINT32 Numcore4 : 8;

                            /* Bits[39:32], Access Type=RW, default=0x00000000*/

                            /*
                               defines the active core ranges for each
                               frequency point.
                            */
    UINT32 Numcore5 : 8;

                            /* Bits[47:40], Access Type=RW, default=0x00000000*/

                            /*
                               defines the active core ranges for each
                               frequency point.
                            */
    UINT32 Numcore6 : 8;

                            /* Bits[55:48], Access Type=RW, default=0x00000000*/

                            /*
                               defines the active core ranges for each
                               frequency point.
                            */
    UINT32 Numcore7 : 8;

                            /* Bits[63:56], Access Type=RW, default=0x00000000*/

                            /*
                               defines the active core ranges for each
                               frequency point.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_TURBO_RATIO_LIMIT_CORES_REGISTER;

/**
  Current Logical Processor PM Meta Data and CTC data
**/
#define MSR_HW_GET_LP_PM_META_DATA 0x000001C2

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 LpId : 10;

                            /* Bits[9:0], Access Type=RO_V, default=None*/

                            /* LP ID */
    UINT32 Rsvd10 : 22;

                            /* Bits[31:10], Access Type=RO_V, default=None*/

                            /* Reserved */
    UINT32 AbsoluteTimeUponRead : 24;

                            /* Bits[55:32], Access Type=RO_V, default=None*/

                            /* Absolute time upon read */
    UINT32 Rsvd56 : 8;

                            /* Bits[63:56], Access Type=RO_V, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_HW_GET_LP_PM_META_DATA_REGISTER;

/**
  Deliver the LP PM Meta Data into the H/W
**/
#define MSR_HW_SET_LP_PM_META_DATA 0x000001C3

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 SetPmMetaData0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=None*/

                            /* Set PM Meta Data */
    UINT32 SetPmMetaData1 : 24;

                            /* Bits[55:32], Access Type=RO_V, default=None*/

                            /* Set PM Meta Data */
    UINT32 OsScenario : 4;

                            /* Bits[59:56], Access Type=RO_V, default=None*/

                            /* OS Scenario */
    UINT32 Rsvd60 : 4;

                            /* Bits[63:60], Access Type=RO_V, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_HW_SET_LP_PM_META_DATA_REGISTER;

/**
  This MSR return the status of debug resources (Used to be in MISC_ENABLES MSR).
**/
#define MSR_DEBUG_RESOURCE_STATUS 0x000001C6

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 DebugDrxAvailable : 1;

                            /* Bits[0:0], Access Type=RO_V, default=None*/

                            /*
                               Read-only bit. Inverted
                               P6_CR_ICECTLPMR[PRESERVE_DEBUG_RESOURCES]
                            */
    UINT32 DebugAvailable : 1;

                            /* Bits[1:1], Access Type=RO_V, default=None*/

                            /*
                               Read-only bit. Inverted
                               P6_CR_ICECTLPMR[PRESERVE_LBR_RESOURCES]
                            */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_DEBUG_RESOURCE_STATUS_REGISTER;

/**
  NHM creg to filter LBR writes
**/
#define MSR_LBR_SELECT 0x000001C8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CplEq0 : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* filter out ring 0 branches */
    UINT32 CplNeq0 : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* filter out non-ring 0 branches */
    UINT32 Jcc : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /* filter out taken conditional branches */
    UINT32 NearRelCall : 1;

                            /* Bits[3:3], Access Type=RW, default=None*/

                            /* filter out near relative calls */
    UINT32 NearIndirectCall : 1;

                            /* Bits[4:4], Access Type=RW, default=None*/

                            /* filter out near indirect calls */
    UINT32 NearRet : 1;

                            /* Bits[5:5], Access Type=RW, default=None*/

                            /* filter out near returns */
    UINT32 NearIndirectJmp : 1;

                            /* Bits[6:6], Access Type=RW, default=None*/

                            /* filter out near unconditional indirect jumps */
    UINT32 NearRelJmp : 1;

                            /* Bits[7:7], Access Type=RW, default=None*/

                            /* filter out near unconditional relative branches */
    UINT32 FarBranch : 1;

                            /* Bits[8:8], Access Type=RW, default=None*/

                            /* filter out far branches */
    UINT32 CallStack : 1;

                            /* Bits[9:9], Access Type=RW, default=None*/

                            /* enable LBR to only collect calls */
    UINT32 Rsvd10 : 22;

                            /* Bits[31:10], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_SELECT_REGISTER;

/**
  LBR creg that holds the TOS value
**/
#define MSR_LBR_TOS 0x000001C9

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Tos : 5;

                            /* Bits[4:0], Access Type=RW_V, default=None*/

                            /* LBR TOS */
    UINT32 Rsvd5 : 27;

                            /* Bits[31:5], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TOS_REGISTER;

/**
  LAST_BRANCH LBR MSR that holds non-IP information
**/
#define MSR_LAST_BRANCH_INFO 0x000001DA

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RO_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RO_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RO_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RO_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LAST_BRANCH_INFO_REGISTER;

/**
  Top of LBR Stack
**/
#define MSR_LAST_BRANCH_FROM_IP 0x000001DB

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=None*/

                            /* FROM LBR at Top of stack */
    UINT32 Data1 : 16;

                            /* Bits[47:32], Access Type=RO_V, default=None*/

                            /* FROM LBR at Top of stack */
    UINT32 SignExt : 16;

                            /* Bits[63:48], Access Type=RO_V, default=None*/

                            /* sign extension of bit 47 */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LAST_BRANCH_FROM_IP_REGISTER;

/**
  Top of LBR Stack
**/
#define MSR_LAST_BRANCH_TO_IP 0x000001DC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=None*/

                            /* TO LBR at top of stack */
    UINT32 Data1 : 16;

                            /* Bits[47:32], Access Type=RO_V, default=None*/

                            /* TO LBR at top of stack */
    UINT32 SignExt : 16;

                            /* Bits[63:48], Access Type=RO_V, default=None*/

                            /* sign extension of bit 47 */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LAST_BRANCH_TO_IP_REGISTER;

/**
  Last Exeception Record
**/
#define MSR_LAST_INT_FROM_IP 0x000001DD

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 LoData : 32;

                            /* Bits[31:0], Access Type=RW, default=None*/

                            /* low FROM addr of Last Exeception Record */
    UINT32 HiData : 25;

                            /* Bits[56:32], Access Type=RW, default=None*/

                            /* high FROM addr of Last Exeception Record */
    UINT32 CycleCount : 3;

                            /* Bits[59:57], Access Type=RO_V, default=None*/

                            /* 3 MSBs of the cycle counter */
    UINT32 CycCtrMode : 1;

                            /* Bits[60:60], Access Type=RO_V, default=None*/

                            /* cycle counter mode */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW, default=None*/

                            /* TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW, default=None*/

                            /* ROB is in TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW, default=None*/

                            /* MBr was mispredicted */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LAST_INT_FROM_IP_REGISTER;

/**
  Last Exeception Record
**/
#define MSR_LAST_INT_TO_IP 0x000001DE

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 LoData : 32;

                            /* Bits[31:0], Access Type=RW, default=None*/

                            /* low TO addr of Last Exeception Record */
    UINT32 HiData : 25;

                            /* Bits[56:32], Access Type=RW, default=None*/

                            /*
                               high TO addr of Last Exeception Record. If VAPA
                               is fuse-disabled, then bits [56:48] are also
                               part of the CYCLE_COUNT
                            */
    UINT32 CycleCount : 7;

                            /* Bits[63:57], Access Type=RW, default=None*/

                            /* Elapsed cycle counter from previous branch */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LAST_INT_TO_IP_REGISTER;

/**
  Probe mode control and status register. 16 bit. (Mrm roctlregc/roctlregd/icectlpmrSM306L)
**/
#define MSR_ICECTLPMR 0x000001DF

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Ir : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* ICECTLIR: Interrupt Redirection */
    UINT32 Urdmsr : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* ICECTLURDMSR: User Mode Access to Performance */
    UINT32 Pmen : 1;

                            /* Bits[2:2], Access Type=RO_V, default=0x00000000*/

                            /* ICECTLPMEN: ProbeMode Enabled */
    UINT32 PirStt : 1;

                            /* Bits[3:3], Access Type=RO_V, default=0x00000000*/

                            /* ICECTLPIR: Submit Probe Instruction Reg status */
    UINT32 PmIs : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /* ICECTLPM_IS: Probe Mode Instruction Status */
    UINT32 PmMce : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /* ICECTLPM_MCE: Machine Check Enabled */
    UINT32 ShutdownBit : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /* Reserved. Not used in PM */
    UINT32 HaltBit : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /* Reserved. Not used in PM */
    UINT32 PmInitBit : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* ICECTL_PM_INIT_BIT_POS: Enter Probe Mode on INIT */
    UINT32 PmMcEnBit : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /* ICECTL_PM_MC_EN_BIT_POS: Enter PM on enabled MC */
    UINT32 PmSmmEnterBit : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* ICECTL_PM_SMM_ENTER_BIT_POS */
    UINT32 PmSmmExitBit : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /* ICECTL_PM_SMM_EXIT_BIT_POS */
    UINT32 Res1Low : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /* ICECTLRES1_LOW: Reserved */
    UINT32 Res1High : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /* ICECTLRES1_HIGH: Reserved */
    UINT32 PreserveDebugResources : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /* ICECTLPMR_PRESERVE_DEBUG_RESOURCES: */
    UINT32 PreserveLbrResources : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               ICECTLPMR_PRESERVE_LBR_RESOURCES: PM S/W may
                               program the LBRs to trace the DUT. Before PM
                               exit, the PM S/W should reserve LBRs for itself
                               by setting ICECTLPMR.Preserve_LBR_Resources.
                               This will ensure that any other software running
                               on the CPU cannot use the LBRs. Setting this bit
                               will also effectively preserve RTIT resources.
                            */
    UINT32 CsiOffTapDrainOn : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Enable the tap and turn off the csi link packet:
                               Ynh
                            */
    UINT32 RemainProbemode : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* Remain in Probe mode */
    UINT32 PmHleBit : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               ICECTL_PM_HLE_BIT_POS: Enter Probe Mode on HLE
                               Aborts
                            */
    UINT32 PmHlepBit : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               ICECTL_PM_HLEP_BIT_POS: Enter Probe Mode on HLE+
                               Aborts
                            */
    UINT32 ClrPir : 1;

                            /* Bits[20:20], Access Type=WO, default=0x00000000*/

                            /* ICECTLPIR: Clear PIR bit state */
    UINT32 EnclaveInterruption : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               ICECTLPIR: ENCLAVE INTERRUPTION bit to be set in
                               ICECTLPMR once probe mode got signaled inside
                               enclave
                            */
    UINT32 PreserveRtitResources : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               ICECTLPMR_PRESERVE_RTIT_RESOURCES: PM S/W may
                               program RTIT to trace the DUT. Before PM exit,
                               the PM S/W should reserve RTIT for itself by
                               setting ICECTLPMR.Preserve_RTIT_Resources. This
                               will ensure that any other software running on
                               the CPU cannot use RTIT. Setting this bit will
                               also effectively preserve LBR/DEBUG resources.
                            */
    UINT32 Rsvd23 : 9;

                            /* Bits[31:23], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ICECTLPMR_REGISTER;

/**
  LER MSR that holds non-IP information
**/
#define MSR_LAST_INT_INFO 0x000001E0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LAST_INT_INFO_REGISTER;

/**
  This RO MSR will be used to report the fuse_cpu_type bits from PCU Package Config CSR
**/
#define MSR_CPU_TYPE 0x000001E1

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 FuseCpuType : 4;

                            /* Bits[3:0], Access Type=RW, default=0x00000000*/

                            /* CPU Type Indication */
    UINT32 Rsvd4 : 28;

                            /* Bits[31:4], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CPU_TYPE_REGISTER;

/**
  Register used to enable customer specific features
**/
#define MSR_CUSTOMER_SPECIFIC_FEATURE_ENABLE 0x000001E2

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* RSVD */
    UINT32 UserLevelMwaitEnable : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* Enable bit for user-level mwait */
    UINT32 RsvdUpper2 : 30;

                            /* Bits[31:2], Access Type=RW, default=None*/

                            /* RSVD */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CUSTOMER_SPECIFIC_FEATURE_ENABLE_REGISTER;

/**
  This MSR holds the capability of error spoofing. Bit 1 for unlock MCA/ CMCI generation capability (allows event injection), bit 0 to unlock writing to MC banks
**/
#define MSR_DEBUG_ERR_INJ_CTL 0x000001E3

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 McbwE : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit indicates if writing to MC banks is allowed
                               0 - Writing to MC banks Not allowed 1 - Writing
                               to MC banks allowed
                            */
    UINT32 McaCmciSe : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Bit indicates if error spoofing is allowed 0 -
                               Error spoofing not allowed 1 - Error spoofing
                               allowed(MCA/CMCI)
                            */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_DEBUG_ERR_INJ_CTL_REGISTER;

/**
  This MSR will be used to trigger MCA(bit0)/CMCI(bit1)
**/
#define MSR_DEBUG_ERR_INJ_CTL2 0x000001E4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 McaG : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit indicates if MC banks is triggered 0 - Not
                               triggered 1 - Triggered
                            */
    UINT32 CmciG : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Bit indicates if CMCI is triggered 0 - Not
                               triggered 1 - Triggered
                            */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_DEBUG_ERR_INJ_CTL2_REGISTER;

/**
  User-level Interrupts Vector
**/
#define MSR_ULI_VECTOR_INFO 0x000001E5

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 MatchVector : 8;

                            /* Bits[7:0], Access Type=RW, default=None*/

                            /*
                               Interrupt vector to match on to provide ULI
                               handling
                            */
    UINT32 Enable : 1;

                            /* Bits[8:8], Access Type=RW, default=None*/

                            /* Enable bit for ULI handling */
    UINT32 Rsvd9 : 23;

                            /* Bits[31:9], Access Type=RW, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ULI_VECTOR_INFO_REGISTER;
/**
  User-level Interrupts Target RIP
**/
#define MSR_ULI_TARGET_RIP 0x000001E7

/**
  VLW capability MSR that reports information about the VLW messages that are supported
**/
#define MSR_VLW_CAPABILITY 0x000001F0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Ignne : 1;

                            /* Bits[0:0], Access Type=RO_V, default=None*/

                            /*
                               '0 since IGNNE VLW message is not supported on
                               NHM
                            */
    UINT32 A20m : 1;

                            /* Bits[1:1], Access Type=RO_V, default=None*/

                            /* '1 means A20M message is supported */
    UINT32 Intr : 1;

                            /* Bits[2:2], Access Type=RO_V, default=None*/

                            /* '1 means INTR message is supported */
    UINT32 Rsvd3 : 1;

                            /* Bits[3:3], Access Type=RO_V, default=None*/

                            /* Reserved */
    UINT32 Smi : 1;

                            /* Bits[4:4], Access Type=RO_V, default=None*/

                            /* '1 means SMI message is supported */
    UINT32 Init : 1;

                            /* Bits[5:5], Access Type=RO_V, default=None*/

                            /* '1 means INIT message is supported */
    UINT32 Nmi : 1;

                            /* Bits[6:6], Access Type=RO_V, default=None*/

                            /* '1 means NMI message is supported */
    UINT32 Rsvd7 : 25;

                            /* Bits[31:7], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_VLW_CAPABILITY_REGISTER;

/**
  Virtual MSR to will write data to an Crash Log configuration
  CR address is taken from CORE_CRASHLOG_CONTROL
  writing and reading CDDIS - CrashLog_Disable
**/
#define MSR_CRASHLOG_CONTROL 0x000001F1

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Cddis : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /*
                               CrashDump_Disable - If set, indicates that Crash
                               Dump is disabled. Default value will come from
                               the CORE_CRASHLOG_DIS fuse.
                            */
    UINT32 Reserved1 : 31;

                            /* Bits[31:1], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CRASHLOG_CONTROL_REGISTER;

/**
  SMM Range Register - Physical Base Control Register
**/
#define MSR_SMRR_BASE 0x000001F2

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Memtype : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000000*/

                            /* SMRR BASE MemType */
    UINT32 Rsvd3 : 9;

                            /* Bits[11:3], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* SMRR BASE Physical Base Address */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRR_BASE_REGISTER;

/**
  SMM Range Register Base - Physical Mask Control Register
**/
#define MSR_SMRR_MASK 0x000001F3

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 9;

                            /* Bits[8:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Assist : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               If set, SMRR is in assist-mode - else in page
                               abort-mode (defeature only)
                            */
    UINT32 L : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Lock bit for the SMRR */
    UINT32 Vld : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /* SMM Mask Valid Bit */
    UINT32 Mask : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* SMM MASK MTRR Mask */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRR_MASK_REGISTER;

/**
  Processor Reserved Memory Range Register - Physical Mask Control Register
**/
#define MSR_PRMRR_MASK 0x000001F5

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 9;

                            /* Bits[8:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Assist : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               If set, PRMRR is in assist-mode - else in page
                               abort-mode (defeature only)
                            */
    UINT32 L : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Lock bit for the PRMRR */
    UINT32 Vld : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /* Enable bit for the PRMRR */
    UINT32 Mask0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* PRMRR MASK bits */
    UINT32 Mask1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* PRMRR MASK bits */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PRMRR_MASK_REGISTER;

/**
  SMM Range Register #2 - Physical Base Control Register
**/
#define MSR_SMRR2_BASE 0x000001F6

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Memtype : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000000*/

                            /* SMRR BASE MemType */
    UINT32 Rsvd3 : 9;

                            /* Bits[11:3], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* SMRR BASE Physical Base Address */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRR2_BASE_REGISTER;

/**
  SMM Range Register Base #2 - Physical Mask Control Register
**/
#define MSR_SMRR2_MASK 0x000001F7

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 9;

                            /* Bits[8:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Assist : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               If set, SMRR is in assist-mode - else in page
                               abort-mode (defeature only)
                            */
    UINT32 L : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Lock bit for the SMRR2 */
    UINT32 Vld : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /* SMM Mask Valid Bit */
    UINT32 Mask : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* SMM MASK MTRR Mask */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRR2_MASK_REGISTER;

/**
  Valid PRMRR configurations
**/
#define MSR_PRMRR_VALID_CONFIG 0x000001FB

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Config1m : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* 1M supported MEE size */
    UINT32 Config2m : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* 2M supported MEE size */
    UINT32 Rsvd2 : 3;

                            /* Bits[4:2], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Config32m : 1;

                            /* Bits[5:5], Access Type=RW, default=None*/

                            /* 32M supported MEE size */
    UINT32 Config64m : 1;

                            /* Bits[6:6], Access Type=RW, default=None*/

                            /* 64M supported MEE size */
    UINT32 Config128m : 1;

                            /* Bits[7:7], Access Type=RW, default=None*/

                            /* 128M supported MEE size */
    UINT32 Config256m : 1;

                            /* Bits[8:8], Access Type=RW, default=None*/

                            /* 256M supported MEE size */
    UINT32 Rsvd9 : 23;

                            /* Bits[31:9], Access Type=RW, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PRMRR_VALID_CONFIG_REGISTER;

/**
  Power Control Register
**/
#define MSR_POWER_CTL 0x000001FC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 EnableBidirProchot : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Used to enable or disable the response to
                               PROCHOT# input. When set/enabled, platform can
                               force CPU to throttle to a lower power condition
                               such as Pn/Pm by asserting prochot#. When
                               clear/disabled (default), CPU ignores the status
                               of the prochot input signal.
                            */
    UINT32 C1eEnable : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000001*/

                            /*
                               [p]Used to enable C1E behavior on every C1 entry
                               (even if MWAIT C1E substate bit was not set or
                               when using HLT).[/p] [p]When this package-
                               visible bit is set, it will cause the CPU to
                               switch to minimum GV point (P State) when all
                               cores have entered C1. The frequency will switch
                               immediately, followed by gradual voltage
                               switching (GV3 style).[/p]
                            */
    UINT32 SapmImcC2Policy : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000001*/

                            /*
                               Enables Self Refresh entry when the CPU is in
                               package-C2 (popup) state. Should be disabled
                               only if platform traffic cannot withstand even
                               the SR exit latency while in C2.
                            */
    UINT32 FastBrkSnpEn : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Controls the VID swing rate for Other_Snp_Wake
                               events detected at the iMPH. Will override a
                               "SLOW" sideband wake indication primarily for
                               PCIe traffic!). '1' - Use 'fast' VID swing rate
                            */
    UINT32 FastBrkIntEn : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000001*/

                            /*
                               Controls the VID swing rate for Other_Intp_Wake
                               events detected at the iMPH. Will override a
                               "SLOW" sideband wake indication (for C7 or
                               PCIe). '1' - Use 'fast' VID swing rate
                            */
    UINT32 Rsrvd5 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Rsrvd uCode needs to copy this bit to/from
                               POWER_CTL1_CR[5] on writes.reads
                            */
    UINT32 PholdCstPreventionInit : 11;

                            /* Bits[16:6], Access Type=RW, default=0x00000001*/

                            /*
                               Init value for the PHOLD_CST_PREVENTION_Timer.
                               Values are between 0 and 1023 in 2^21*10nS
                               resolution (matching 0 - ~21sec)
                            */
    UINT32 PholdSrDisable : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               if set to '1', CPU will also prevent the memory
                               from going to SR during the CST_PREVENTION
                               timeout;
                            */
    UINT32 PwrPerfPltfrmOvr : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               When set to 0 (default), will disable access to
                               IA32_ENERGY_PERFORMANCE_BIAS MSR 1B0h (causing a
                               GP# fault on access). CPUID.(EAX=6):ECX[3] will
                               read 0. When set to 1 will enable access to
                               IA32_ENERGY_PERFORMANCE_BIAS MSR 1B0h.
                               CPUID.(EAX=6):ECX[3] will read 1
                            */
    UINT32 EeTurboDisable : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Setting this bit disables the Turbo P-States
                               energy efficiency optimizations. In P-State
                               legacy mode (when IA32_PM_ENABLE[HWP_ENABLE] =
                               0), the processor will set the P-State to P0
                               when in the Turbo range. When HWP is enabled, if
                               the processor is in Autonomous mode it will
                               select the P-State based on Processor residency
                               and with no energy efficiency considerations. If
                               the OS selects the desired P-State, the
                               processor will adhere to this request unless any
                               physical constraints prevent that.
                            */
    UINT32 RthDisable : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Setting this bit disables the Race to Halt
                               optimization and enables the processor to
                               execute down to the HWP Lowest frequency.
                               Default value is 0 for processors that support
                               HWP. Default value is 1 for processors that do
                               not support HWP.
                            */
    UINT32 DisProchotOut : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /* Prochot output disable */
    UINT32 ProchotResponse : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /* Prochhot Configurable Response Enable */
    UINT32 ProchotLock : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               When set to 1, locks bits 0, 21, 22 and 23 of
                               this MSR. Once set, a reset is required to clear
                               this bit.
                            */
    UINT32 VrThermAlertDisable : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               When set to 1, disables the VR_THERMAL_ALERT
                               signaling.
                            */
    UINT32 DisableRingEe : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Setting this bit disables the H/W based Ring
                               energy efficiency optimization. Default value is
                               0 for processors that support Ring energy
                               efficiency optimization. Default value is 1 for
                               processors that do not support Ring energy
                               efficiency optimization.
                            */
    UINT32 DisableSaOptimization : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /* DISABLE_SA_OPTIMIZATION */
    UINT32 DisableOok : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Setting this bit disables the H/W base duty
                               cycles heuristics for performance boost during
                               power/thermal limitation. Default value is 0 for
                               processors that support HDC. Default value is 1
                               for processors that do not support HDC.
                            */
    UINT32 DisableAutonomous : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               [p]When this bit is set H/W Autonomous algorithm
                               for P-State selection is disabled. Default value
                               is 0 for processors that support HWP. Default
                               value is 1 for processors that do not support
                               H/W Autonomous algorithm for P-State.[/p]
                               [p]When P-State Legacy mode is enabled
                               (IA32_PM_ENABLE[HWP_ENABLE] = 0), the H/W only
                               owns selecting the P-State in the turbo range.
                               If POWER_CTL[28] is also set to 0, the algorithm
                               that selects the P-State in the Turbo range is
                               H/W Autonomous. In this case, mapping of the
                               Legacy Energy Performance Bias value to HWP EPP
                               is done internally to feed the Autonomous
                               algorithm. If POWER_CTL[28] is set to 1, the
                               legacy algorithm is in effect.[/p] [p]While H/W
                               Base P state is in use,
                               IA32_PM_ENABLE[HWP_ENABLE] = 1 and the
                               IA32_HWP_REQUEST[DESREID_PERF] = 0, the P-state
                               selection will be only the highest support
                               performance level[/p]
                            */
    UINT32 Rsvd29 : 1;

                            /* Bits[29:29], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 CstatePrewakeDisable : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               This bit can be used to disable core/pkg C-state
                               Prewake timers.
                            */
    UINT32 ReservedMode31 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_POWER_CTL_REGISTER;
/**
  Special Chipset Usage MSR
**/
#define MSR_SPCL_CHIPSET_USAGE 0x000001FE

/**
  Scratch Pad register P6_CR_ICECTLPMR_2
  Bit descriptions are derived from review of Merom ucode - May be incomplete (RajeshP)
**/
#define MSR_ICECTLPMR_2 0x0000025B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RsvdB0 : 8;

                            /* Bits[7:0], Access Type=RW, default=None*/

                            /* SCP Register Value */
    UINT32 C6Exit : 1;

                            /* Bits[8:8], Access Type=RW, default=None*/

                            /* Redirect to probe mode at the end of C6 exit */
    UINT32 Getsec : 1;

                            /* Bits[9:9], Access Type=RW, default=None*/

                            /* Redirect to probe mode at the start of GETSEC */
    UINT32 PreCram : 1;

                            /* Bits[10:10], Access Type=RW, default=None*/

                            /*
                               Redirect to probe mode just before loading LT
                               CRAM
                            */
    UINT32 AcmodeEnter : 1;

                            /* Bits[11:11], Access Type=RW, default=None*/

                            /*
                               Redirect to probe mode just before launching an
                               AC-module
                            */
    UINT32 AcmodeExit : 1;

                            /* Bits[12:12], Access Type=RW, default=None*/

                            /*
                               Redirect to probe mode after exiting an AC-
                               module (end of EXITAC)
                            */
    UINT32 SexitEnd : 1;

                            /* Bits[13:13], Access Type=RW, default=None*/

                            /* Redirect to probe mode at the end of SEXIT */
    UINT32 Enclu : 1;

                            /* Bits[14:14], Access Type=RW, default=None*/

                            /* Redirect to probe mode in ENCLU instruction */
    UINT32 Rsvd15 : 7;

                            /* Bits[21:15], Access Type=RW, default=None*/

                            /* SCP Register Value */
    UINT32 Int1 : 1;

                            /* Bits[22:22], Access Type=RW, default=None*/

                            /* Redirect to probe mode in INT1 instruction */
    UINT32 StepInto : 1;

                            /* Bits[23:23], Access Type=RW, default=None*/

                            /*
                               For SNB i366110: ITP Step Into Interrupts and
                               Exceptions
                            */
    UINT32 Shutdown : 1;

                            /* Bits[24:24], Access Type=RW, default=None*/

                            /* SCP Register Value */
    UINT32 Rsvd25 : 1;

                            /* Bits[25:25], Access Type=RW, default=None*/

                            /* SCP Register Value */
    UINT32 Vmexit : 1;

                            /* Bits[26:26], Access Type=RW, default=None*/

                            /* SCP Register Value */
    UINT32 Rsvd27 : 2;

                            /* Bits[28:27], Access Type=RW, default=None*/

                            /* SCP Register Value */
    UINT32 Vmentry : 3;

                            /* Bits[31:29], Access Type=RW, default=None*/

                            /* SCP Register Value */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ICECTLPMR_2_REGISTER;

/**
  This register is used for generating corrected error interrupts.
  This is a 64 bits register. Refer to the MCA HAS for details.
  x86_architectural: true
  creg_msr_symbol: MCi_CTL2
  creg_msr_mask: 64'hFFFFFFFABFFF8000
**/
#define MSR_MCI_CTL2 0x00000298

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Correrrthrhd : 15;

                            /* Bits[14:0], Access Type=RWS, default=0x00000000*/

                            /*
                               Correctable Error Threshold (CorrErrThrhd): When
                               the correctable error count
                               (MCi_STATUS.CorrCount) transitions to being
                               equal to this threshold, a CMCI will be signaled
                               if the CorrErrCmciEn bit is set. Typically used
                               to indicate to OS that a certain amount of
                               corrected errors were observed.
                            */
    UINT32 Rsvd15 : 15;

                            /* Bits[29:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Cmcien : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Corrected Error Interrupt Enable (CmciEn):
                               Enable CMCI signaling (when 1). Usage model is
                               to generate a CMCI interrupt for OS on corrected
                               or recoverable error. When the corrected error
                               threshold (CorrErrThrhd) is reached a CMCI will
                               be signaled.
                            */
    UINT32 Rsvd31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mapcmcitocsmi : 1;

                            /* Bits[32:32], Access Type=RW, default=0x00000000*/

                            /*
                               Map Correctable Machine Check Interrupt to
                               Correctable SM Interrupt (MapCmciToCsmi): If set
                               then any correctable machine check interrupt
                               will be transformed into a correctable SM
                               interrupt so BIOS can intercept it.
                            */
    UINT32 Rsvd33 : 1;

                            /* Bits[33:33], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mapmcetomsmi : 1;

                            /* Bits[34:34], Access Type=RW, default=0x00000000*/

                            /*
                               Map Machine Check Errors to Machine Check SM
                               Interrupt (MapCmciToCsmi): If set then any
                               machine check error (i.e. a fatal condition
                               signalled to OS) will be transformed into a
                               machine check SM interrupt so BIOS can intercept
                               it.
                            */
    UINT32 Rsvd35 : 29;

                            /* Bits[63:35], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_MCI_CTL2_REGISTER;

/**
  Processor Reserved Memory Range Register - Physical Base Control Register
**/
#define MSR_PRMRR_BASE_0 0x000002A0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Memtype : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE MemType */
    UINT32 Configured : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE Configured */
    UINT32 Rsvd4 : 8;

                            /* Bits[11:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PRMRR_BASE_0_REGISTER;

/**
  Processor Reserved Memory Range Register - Physical Base Control Register
  " seq has 7 instances in addresses range 0x2A1 to 0x2A7"
**/
#define MSR_PRMRR_BASE_1_1 0x000002A1

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Memtype : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE MemType */
    UINT32 Configured : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE Configured */
    UINT32 Rsvd4 : 8;

                            /* Bits[11:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PRMRR_BASE_1_1_REGISTER;

/**
  Processor Reserved Memory Range Register - Physical Base Control Register
  " seq has 7 instances in addresses range 0x2A1 to 0x2A7"
**/
#define MSR_PRMRR_BASE_2_2 0x000002A2

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Memtype : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE MemType */
    UINT32 Configured : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE Configured */
    UINT32 Rsvd4 : 8;

                            /* Bits[11:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PRMRR_BASE_2_2_REGISTER;

/**
  Processor Reserved Memory Range Register - Physical Base Control Register
  " seq has 7 instances in addresses range 0x2A1 to 0x2A7"
**/
#define MSR_PRMRR_BASE_3_3 0x000002A3

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Memtype : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE MemType */
    UINT32 Configured : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE Configured */
    UINT32 Rsvd4 : 8;

                            /* Bits[11:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PRMRR_BASE_3_3_REGISTER;

/**
  Processor Reserved Memory Range Register - Physical Base Control Register
  " seq has 7 instances in addresses range 0x2A1 to 0x2A7"
**/
#define MSR_PRMRR_BASE_4_4 0x000002A4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Memtype : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE MemType */
    UINT32 Configured : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE Configured */
    UINT32 Rsvd4 : 8;

                            /* Bits[11:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PRMRR_BASE_4_4_REGISTER;

/**
  Processor Reserved Memory Range Register - Physical Base Control Register
  " seq has 7 instances in addresses range 0x2A1 to 0x2A7"
**/
#define MSR_PRMRR_BASE_5_5 0x000002A5

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Memtype : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE MemType */
    UINT32 Configured : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE Configured */
    UINT32 Rsvd4 : 8;

                            /* Bits[11:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PRMRR_BASE_5_5_REGISTER;

/**
  Processor Reserved Memory Range Register - Physical Base Control Register
  " seq has 7 instances in addresses range 0x2A1 to 0x2A7"
**/
#define MSR_PRMRR_BASE_6_6 0x000002A6

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Memtype : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE MemType */
    UINT32 Configured : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE Configured */
    UINT32 Rsvd4 : 8;

                            /* Bits[11:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PRMRR_BASE_6_6_REGISTER;

/**
  Processor Reserved Memory Range Register - Physical Base Control Register
  " seq has 7 instances in addresses range 0x2A1 to 0x2A7"
**/
#define MSR_PRMRR_BASE_7_7 0x000002A7

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Memtype : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE MemType */
    UINT32 Configured : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* PRMRR BASE Configured */
    UINT32 Rsvd4 : 8;

                            /* Bits[11:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* PRMRR Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PRMRR_BASE_7_7_REGISTER;

/**
  No-Evict Mode MSR.
**/
#define MSR_NEM 0x000002E0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Setup : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /*
                               BIOS sets this when it is ready to fill the NEM
                               region, and then executes the requests to fill
                               the NEM
                            */
    UINT32 Run : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /*
                               BIOS sets this bit when it's done filling the
                               NEM region. At this point, the cache is locked.
                            */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RW, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_NEM_REGISTER;
/**
  Used by Intel TXT enabled BIOS to unlock memory after checking that the TPM is valid.
**/
#define MSR_LT_UNLOCK_MEMORY 0x000002E6

/**

**/
#define MSR_LTCTRLSTS 0x000002E7

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Configlock : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               This bit has been depracated [IntelRsvd]This bit
                               is used for indicating 'LT Config Lock'. This
                               bit is no loger supported from CNL [/IntelRsvd]
                            */
    UINT32 Memlockcpu : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000001*/

                            /*
                               This bit is implemented in the IMPH version of
                               the register only (as RO-VFW), the NCU holds a
                               shadow of the bit. This bit is used for
                               indicating 'LT Lock of CPU access to Memory'' to
                               read operations. The bit is cleared by a write
                               of 1 to the MemLockCPUClr bit. 0 - Memory access
                               is enabled 1 - Memory is Locked
                            */
    UINT32 Memlockdev : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000001*/

                            /*
                               This bit is implemented in the IMPH version of
                               the register only (as RO-VFW), the NCU holds a
                               shadow of the bit. This bit is used for
                               indicating 'LT Lock of Device access to Memory''
                               to read operations. The bit is cleared by a
                               write of 1 to the MemLockDevClr bit. 0 - Memory
                               access is enabled 1 - Memory is Locked
                            */
    UINT32 SmmlockRsvd : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* Reserved for implemention in JKT */
    UINT32 ScheckPass : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               This bit is set once by SCHECK once it passes.
                               it is cleared by the SCHECK_PASS_clr bit.
                            */
    UINT32 Poison : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               ucode will set this bit whenever it sends out a
                               poison cycle. cleared by PoisonClr bit.
                            */
    UINT32 Private : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               This bit is copied in the NCU and Cbo. This bit
                               is cleared by the PrivateClr bit. Read : 0 -
                               Private flag is cleared 1 - Private flag is set
                               Write : 0 - ignored 1 -Set the Private flag
                            */
    UINT32 Inacm : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               This bit is copied in the NCU IMPH and Cbo. This
                               bit is cleared by the respective bit in
                               NcuLTCtrClr register. Read : 0 - In ACM flag is
                               cleared 1 - In ACM flag is set Write : 0 -
                               ignored 1 -Set the InACM flag
                            */
    UINT32 Loc3guarddis : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               This bit is implemented in the Cbo and has a
                               shadow in NCU. This bit is cleared by writint a
                               1 to the respective bit in NcuLTCtrClr register.
                               Read : 0 - Locality 3 Guard is Enabled 1 -
                               Locality 3 Guard is Disable Write : 0 - ignored
                               1 -Set the Loc3Guard
                            */
    UINT32 Hskinprog : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               Indicates that the core is in the process of
                               SENTER or SEXIT handshake. This is a sticky bit
                               used by uCode as part of LT flow. No HW action
                               in NCU. This bit is cleared by writint a 1 to
                               the respective bit in NcuLTCtrClr register. Read
                               : 0 - Hand Shake not in progress 1 - Hand Shake
                               in progress Write : 0 - ignored 1 -Set the
                               HskInProg
                            */
    UINT32 Faterrdursacm : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               FATAL_ERROR_DURING_SACM Indicates that an error
                               occurred during Startup ACM processing that
                               caused an LT-shutdown. This register is
                               preserved across warm reset, so reset uCode can
                               check this bit and skip Startup ACM processing
                               if it is set to prevent an infinite loop of
                               resets This is a sticky bit used by uCode as
                               part of LT flow. No HW action in NCU. This bit
                               is cleared by writint a 1 to the respective bit
                               in NcuLTCtrClr register. Read : 0 - No Error 1 -
                               Fatal Error During SACM Write : 0 - ignored 1
                               -Set the FatErrDurSACM
                            */
    UINT32 IlpMsegValid : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               This is a sticky bit used by uCode as part of LT
                               flow. It is used to stash the ILP's copy of
                               FSCP_CR_VMX_MSEG_BASE[VALID]. It is used by
                               UCODE for consistency check to verify that all
                               threads select the same type of SMM handling. No
                               HW action in NCU. This bit is cleared by writing
                               a 1 to the respective bit in NcuLTCtrClr
                               register. Read : 0 - Bit is at cleared state 1 -
                               Bit is set state Write : 0 - ignored 1 -Set the
                               ILP_MSEG_VALID
                            */
    UINT32 PostSenter : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               This is a sticky bit used by uCode as part of LT
                               flow. The POST_SENTER bit will be set between
                               SENTER and SEXIT. It is used to detect
                               spontaneous reset during secure mode. The
                               POST_SENTER bit must survive warm reset. It will
                               be checked along with the existing AC-mode check
                               in reset UCODE. No HW action in NCU. This bit is
                               cleared by writing a 1 to the respective bit in
                               NcuLTCtrClr register. Read : 0 - Bit is at
                               cleared state 1 - Bit is set state Write : 0 -
                               ignored 1 -Set the POST_SENTER bit
                            */
    UINT32 LtScp3Rsrv : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               This is a sticky bit used by uCode as part of LT
                               flow - currently as spare bit. No HW action in
                               NCU. This bit is cleared by writint a 1 to the
                               respective bit in NcuLTCtrClr register. Read : 0
                               - Bit is at cleared state 1 - Bit is set state
                               Write : 0 - ignored 1 -Set the LT_scp3_rsrv
                            */
    UINT32 Rsvd14 : 2;

                            /* Bits[15:14], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Configunloc : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Writing a value of 0 to this bit has no effect.
                               Writing a value of 1 to this bit will clear the
                               ConfigLock flag. NOTE: The HW can assume that
                               only SW in ACM mode will write to this bit a
                               value of 1.
                            */
    UINT32 Memlockcpuclr : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Writing 1 to this bit clears MemLockCPU bit in
                               this register. Writing 0 to this bit has no
                               effect.
                            */
    UINT32 Memlockdevclr : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Writing 1 to this bit clears MemLockDev bit in
                               this register. Writing 0 to this bit has no
                               effect.
                            */
    UINT32 SmmlockclrReserved : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /* Reserved for use by JKT with SMMLock bit. */
    UINT32 ScheckPassClr : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               0 : Ignored 1 : Clear the SCHECK_PASS bit in
                               this register.
                            */
    UINT32 Poisonclr : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               0 : Ignored 1 : Clear the Poison bit in this
                               register.
                            */
    UINT32 Privateclr : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               0 : Ignored 1 : Clear the Private bit in this
                               register.
                            */
    UINT32 Inacmclr : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /* 0 : ignored 1 : Clears the InACM flag */
    UINT32 Loc3guarddisclear : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               Write : If Loc3GuardDis=0 (including the result
                               of this write) - Ignored. else 0 - ignored 1 -
                               Clear the Loc3GuardDis flag
                            */
    UINT32 Hskinprogclr : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Write : If HskInProgs=0 (including the result of
                               this write) - Ignored. else 0 - ignored 1 -
                               Clear the HskInProg flag
                            */
    UINT32 Faterrdursacmclr : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Write : If FatErrDurSACM=0 (including the result
                               of this write) - Ignored. else 0 - ignored 1 -
                               Clear the FatErrDurSACM flag
                            */
    UINT32 IlpMsegValidClr : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Write : If ILP_MSEG_VALID=0 (including the
                               result of this write) - Ignored. else 0 -
                               ignored 1 - Clear the ILP_MSEG_VALID flag
                            */
    UINT32 PostSenterClr : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Write : If POST_SENTER=0 (including the result
                               of this write) - Ignored. else 0 - ignored 1 -
                               Clear the POST_SENTER flag
                            */
    UINT32 LtScp3RsrvClr : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               Write : If LT_scp3_rsrv=0 (including the result
                               of this write) - Ignored. else 0 - ignored 1 -
                               Clear the LT_scp3_rsrv flag
                            */
    UINT32 Ltpmonctrclr : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               This bit is copied in the NCU and Cbo. This bit
                               is used for LT uCode control over the PMON
                               counters. The NCU copy of the register must be
                               cleared last to prevent race conditions with
                               clear operations of other module's counters. 0b
                               No action 1b Clear all PMON control registers
                               (including Fixed counter control)
                            */
    UINT32 Ltpmoncntclr : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               This bit is copied in the NCU and Cbo. This bit
                               is used for LT uCode control over the PMON
                               counters. 0b No Action 1b Clear all PMON Counter
                               registers and Unit overflow status registers
                               (including Fixed Counter and Global Overflow
                               Status).
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LTCTRLSTS_REGISTER;

/**
  ACM Only MSR for EDRAM management
**/
#define MSR_EDRAM_ACM 0x000002E8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ForceEdramDisabled : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 EdramIsDisabled : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* eDRAM is disabled as a result of force disable */
    UINT32 EdramExists : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*  */
    UINT32 Rsvd3 : 29;

                            /* Bits[31:3], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_EDRAM_ACM_REGISTER;
/**
  External 128-bit entropy for SGX keys derivation
**/
#define MSR_SE_EPOCH_0 0x00000300
/**
  External 128-bit entropy for SGX keys derivation
**/
#define MSR_SE_EPOCH_1 0x00000301

/**
  MSR to read and update SGX SVN by BIOS
**/
#define MSR_BIOS_SE_SVN 0x00000302

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Reserved0 : 16;

                            /* Bits[15:0], Access Type=RO_V, default=None*/

                            /*  */
    UINT32 SinitSeSvn : 8;

                            /* Bits[23:16], Access Type=RO_V, default=None*/

                            /* Security Version Number for the SINIT ACM */
    UINT32 ScleanSeSvn : 8;

                            /* Bits[31:24], Access Type=RO_V, default=None*/

                            /* Security Version Number for the SCLEAN ACM */
    UINT32 AncSeSvn : 8;

                            /* Bits[39:32], Access Type=RO_V, default=None*/

                            /* Security Version Number for SGX HW */
    UINT32 PfatSeSvn : 8;

                            /* Bits[47:40], Access Type=RO_V, default=None*/

                            /* Security Version Number for the PFAT ACM */
    UINT32 Reserved48 : 16;

                            /* Bits[63:48], Access Type=RO_V, default=None*/

                            /*  */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_BIOS_SE_SVN_REGISTER;
/**
  BOOT MSR for communicating boot protocol to MCHECK uses NcuScratchpad26
**/
#define MSR_MCHECK_BOOT_SCENARIO 0x00000304

/**
  IVB i1026245 - PerfMon Compound Counter enhancement
**/
#define MSR_COMPOUND_CTR_CTRL 0x00000306

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 FlopCtr0Inc : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000000*/

                            /* Flopped counter 0 inc */
    UINT32 FlopCtr1Inc : 3;

                            /* Bits[5:3], Access Type=RW, default=0x00000000*/

                            /* Flopped counter 1 inc */
    UINT32 FlopCtr2Inc : 3;

                            /* Bits[8:6], Access Type=RW, default=0x00000000*/

                            /* Flopped counter 2 inc */
    UINT32 FlopCtr3Inc : 3;

                            /* Bits[11:9], Access Type=RW, default=0x00000000*/

                            /* Flopped counter 3 inc */
    UINT32 Flop0 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /* Flopped signal 0 */
    UINT32 Flop1 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /* Flopped signal 1 */
    UINT32 Flop2 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /* Flopped signal 2 */
    UINT32 Flop3 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /* Flopped signal 3 */
    UINT32 OrFlop0123 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /* OR of Flopped signals 0,1,2,3 */
    UINT32 OrFlop012 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* OR of Flopped signals 0,1,2 */
    UINT32 OrFlop01 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /* OR of Flopped signals 0,1 */
    UINT32 OrFlop23 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /* OR of Flopped signals 2,3 */
    UINT32 Pmi : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               APIC interrupt enable. When set, the processor
                               generates an exception through its local APIC on
                               counter overflow for this counter's thread. This
                               bit gets AND-ed with the overflow of the counter
                               and Not the GlobalStatus overflow of the
                               counter. This means that the GlobalStatus
                               Overflow flag cannot cause a PMI.
                            */
    UINT32 MythrAllthr : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               The 8 general counters have been divided into
                               two banks T0 and T1 for each thread. When this
                               bit is set to zero the counters in each bank
                               counts its own predominant thread type. If set
                               to 1 the counters counts events for both
                               threads. Note, a counter can never be programmed
                               to only count the none predominant thread.
                            */
    UINT32 Enable : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               This field is the local enable for PerfMon
                               Counter. This bit must be asserted in order for
                               the PerfMon counter to begin counting the events
                               selected by the 'event select', 'unit mask'.
                               This bit gets AND-ed with the respective global
                               enable bit in register IA32_CR_PERF_GLOBAL_CTRL
                               to enable the counter to count.
                            */
    UINT32 Invert : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               This field controls the counting behavior of the
                               compound counter. When set to '1' the compound
                               counter will count cycles that the compound
                               event did not occur, When set to '0' the
                               compound counter will count cycles that the
                               compound event did occur.
                            */
    UINT32 EdgeDetect : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               When this bit is set to 0 no edge detection is
                               performed. We set to 1 edge detection is enabled
                               and detects when an event has crossed the
                               threshold value. For example if the threshold is
                               set to 2 and the current count is 0 and then on
                               the next cycle the current count is 2 or greater
                               an edge detection will ocurr which signals the
                               incrementer to increment by one. The if on the
                               next cycle The count coming is 2 or greater edge
                               detection will not fire. Now lets say five cycle
                               later the value drops to below two and then a
                               cycle later rises to two or greater an edge
                               detect will fire. Edge detection only signals
                               the counter to increment by 1. Note -> If edge
                               detection is set to 1 and the threshold is set
                               to zero edge detection is meaningless and
                               becomes disabled. This is because you can never
                               dip below a value of 0.
                            */
    UINT32 Rsvd25 : 7;

                            /* Bits[31:25], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 UbrkptCtr0 : 1;

                            /* Bits[61:61], Access Type=RW, default=0x00000000*/

                            /* Override counter 0 MicroBreakPoint */
    UINT32 Forceubrkpt : 1;

                            /* Bits[62:62], Access Type=RW, default=0x00000000*/

                            /*
                               When set a MicroBreakPoint occurs each time a
                               none zero Event enters the counter.
                            */
    UINT32 Rsvd63 : 1;

                            /* Bits[63:63], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_COMPOUND_CTR_CTRL_REGISTER;

/**
  IVB i1026245 - PerfMon Compound Counter enhancement
**/
#define MSR_COMPOUND_PERF_CTR 0x00000307

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Lower : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* Lower Half of COMPOUND PERF CTR */
    UINT32 Upper : 16;

                            /* Bits[47:32], Access Type=RW, default=0x00000000*/

                            /* Upper Half of COMPOUND PERF CTR */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_COMPOUND_PERF_CTR_REGISTER;

/**
  The BM_DETECT_CTRL is used to enable Branck Monitoring detection (BM), enable PMI exceptions
  on BM detect, set BM window size, determine counting method for BM window, and
  determine if trip is due to all counting conditions being met.
**/
#define MSR_ROP_DETECT_CTRL 0x00000350

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 EnRopDetect : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Global enable for Branch Monitoring counting. */
    UINT32 EnRopExcept : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Enable Branch Monitoring event signaling on
                               thresholds trip. Event will be signaled via PMI
                               signaling mechanism.
                            */
    UINT32 EnRopLbrFrz : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Enable LBR freeze on Branch Monitoring threshold
                               trip.
                            */
    UINT32 RopGuestDisable : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               When set to 1, Branch Montoring event triggering
                               and LBR freeze actions are disabled when
                               operating at VMX non-root operation.
                            */
    UINT32 Rsvd4 : 4;

                            /* Bits[7:4], Access Type=RW, default=0x00000000*/

                            /* Reserved bits. */
    UINT32 RopWindowSize : 10;

                            /* Bits[17:8], Access Type=RW, default=0x00000000*/

                            /*
                               Branch Monitoring window size. Default is 1023.
                               Legal range is 8 - 1023.
                            */
    UINT32 Rsvd18 : 6;

                            /* Bits[23:18], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 WindowCntSel : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000000*/

                            /*
                               Window count Options: 00 - Instructions retired.
                               01 - Branches retired. 10 - Return instructions
                               retired. 11 - Indirect branches retired.
                            */
    UINT32 CntAndMode : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               When set to 1, then threshold trip occurs only
                               if threshold conditions are true for all enabled
                               event counters. When set to 0, then threshold
                               trip occurs if either counter's onditions are
                               true. If a counter is not enabled then it does
                               not factor into the AND logic.
                            */
    UINT32 EnRopEventFilter : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Global enable for Branch Monitoring Event
                               filtering.
                            */
    UINT32 Rsvd28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ROP_DETECT_CTRL_REGISTER;

/**
  Branch Monitoring detect status - threshold tripped, which counter tripped, and tripping count.
**/
#define MSR_ROP_DETECT_STATUS 0x00000351

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Ropevent : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               A Branch Monitoring event was detected. When
                               this event status bit is set to 1, no further
                               logging is performed until this status bit is
                               cleared by software.
                            */
    UINT32 Roplbrsvalid : 1;

                            /* Bits[1:1], Access Type=RO_V, default=0x00000000*/

                            /*
                               Set to 1 if the LBR state is considered valid
                               for sampling.
                            */
    UINT32 Rsvd2 : 6;

                            /* Bits[7:2], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Ropcntrhit0 : 1;

                            /* Bits[8:8], Access Type=RO_V, default=0x00000000*/

                            /*
                               Set to 1 when Branch Monitoring counter 0 caused
                               threshold trip.
                            */
    UINT32 Ropcntrhit1 : 1;

                            /* Bits[9:9], Access Type=RO_V, default=0x00000000*/

                            /*
                               Set to 1 when Branch Monitoring counter 1 caused
                               threshold trip.
                            */
    UINT32 Rsvd10 : 6;

                            /* Bits[15:10], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Ropwindowcount : 10;

                            /* Bits[25:16], Access Type=RW_V, default=0x00000000*/

                            /*
                               Current value of window counter. The count value
                               is frozen on a valid event triggering condition.
                               A 10-bit unsigned value.
                            */
    UINT32 Rsvd26 : 6;

                            /* Bits[31:26], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Ropcount0 : 8;

                            /* Bits[39:32], Access Type=RW_V, default=0x00000000*/

                            /*
                               Measured count over the last window period for
                               Counter 0.
                            */
    UINT32 Ropcount1 : 8;

                            /* Bits[47:40], Access Type=RW_V, default=0x00000000*/

                            /*
                               Measured count over the last window period for
                               Counter 1.
                            */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ROP_DETECT_STATUS_REGISTER;

/**
  Branch Monitoring Detect Capabilities
**/
#define MSR_ROP_DETECT_CAPABILITIES 0x00000352

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RopDetect : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               1 - Branch Monitoring Detection is supported 0 -
                               Branch Monitoring Detection is not supported
                            */
    UINT32 RopEventFiltering : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000001*/

                            /*
                               1 - Branch Monitoring Event Filtering is
                               supported 0 - ROP Event Filtering is not
                               supported
                            */
    UINT32 Rsvd2 : 6;

                            /* Bits[7:2], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 RopCounterNumber : 4;

                            /* Bits[11:8], Access Type=RW, default=0x00000002*/

                            /*
                               Number of supported counters (Number of
                               BM_COUNTER_CONFIG_i MSRs)
                            */
    UINT32 RopFiltersNumber : 4;

                            /* Bits[15:12], Access Type=RW, default=0x00000001*/

                            /*
                               Number of supportedevent filters
                               (BM_EVENT_FILTERx MSRs)
                            */
    UINT32 Rsvd16 : 8;

                            /* Bits[23:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 RopFilterSupported : 8;

                            /* Bits[31:24], Access Type=RW, default=0x00000001*/

                            /*
                               Bitmask of supported event filers. Each bit of
                               FilterTypesSupported filed corresponds to a
                               specific event filter: Bit 16: Stack Pivoting
                               Detection Bits 17-23 reserved
                            */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ROP_DETECT_CAPABILITIES_REGISTER;

/**
  Counter_0: Counter enables, events selection, counter trip threshold.
**/
#define MSR_ROP_COUNTER_CONFIG_0 0x00000354

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RopCntrEn : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enable Branch Monitoring Counter 0. */
    UINT32 RopCntrEvSel : 7;

                            /* Bits[7:1], Access Type=RW, default=0x00000000*/

                            /*
                               Counter_0 event select: 0 - RET 1 - RET - Call
                               bias 2 - RET mispredicts (at retirement) 3 -
                               Branch mispredicts (at retirement) 4 - Indirect
                               branch mispredicts (at front-end) 5 - Far branch
                               instructions (at retirement) 6 - 127 - reserved.
                            */
    UINT32 RopCntrThreshold : 7;

                            /* Bits[14:8], Access Type=RW, default=0x00000000*/

                            /*
                               Counter_0 Threshold trip count. Legal values are
                               0 - 127.
                            */
    UINT32 MispredEventCnt : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Mispredict counting behavior: 0 - all
                               mispredicts are counted in a window. 1 - Only
                               consecutive mispredicts are counted in a window.
                               (i.e. correctly predicted event clears the
                               count.)
                            */
    UINT32 Rsvd16 : 8;

                            /* Bits[23:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 RopFilterEnable : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               Branch Monitoring filter enable for counter_0: 0
                               - No additional event filter is enabled for this
                               counter 1 - Filter 0 is enabled for this counter
                               (defined by BM_EVENT_FILTER0)
                            */
    UINT32 Rsvd25 : 7;

                            /* Bits[31:25], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ROP_COUNTER_CONFIG_0_REGISTER;

/**
  Counter_1: Counter enables, events selection, counter trip threshold.
**/
#define MSR_ROP_COUNTER_CONFIG_1 0x00000355

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RopCntrEn : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enable Counter_1. */
    UINT32 RopCntrEvSel : 7;

                            /* Bits[7:1], Access Type=RW, default=0x00000000*/

                            /*
                               Counter_1 event select. Legal combinations are:
                               0 - RET 1 - RET - Call bias 2 - RET mispredicts
                               (at retirement) 3 - Branch mispredicts (at
                               retirement) 4 - Indirect branch mispredicts (at
                               front-end) 5 - Far branch instructions (at
                               retirement) 6 - 127 - reserved
                            */
    UINT32 RopCntrThreshold : 7;

                            /* Bits[14:8], Access Type=RW, default=0x00000000*/

                            /*
                               Counter_1 Threshold trip count. Legal values are
                               0 - 127.
                            */
    UINT32 MispredEventCnt : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Mispredict counting behavior: 0 - all
                               mispredicts are counted in a window. 1 -
                               consecutive mispredicts are counted in a window.
                               (i.e. correctly predicted event clears the
                               count.)
                            */
    UINT32 Rsvd16 : 8;

                            /* Bits[23:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 RopFilterEnable : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               Branch Monitoring filter enable for counte_1: 0
                               - No additional event filter is enabled for this
                               counter 1 - Filter 0 is enabled for this counter
                               (defined by BM_EVENT_FILTER0)
                            */
    UINT32 Rsvd25 : 7;

                            /* Bits[31:25], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ROP_COUNTER_CONFIG_1_REGISTER;

/**
  Branch Monitoring event filter 0
**/
#define MSR_ROP_EVENT_FILTER0 0x00000360

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RopFilterType : 4;

                            /* Bits[3:0], Access Type=RW, default=0x00000000*/

                            /*
                               Type of additional Branch Monitoring event
                               filtering configured 0000 - No event filter is
                               configured 0001 - "Stack Pivoting Detection"
                               Heuristic 1111 - 0010 = Reserved
                            */
    UINT32 RopFilterHit : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               0 - Filter didn't detect ROP condition 1 -
                               Filter detected ROP condition
                            */
    UINT32 Rsvd5 : 3;

                            /* Bits[7:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 RopStackBase0 : 24;

                            /* Bits[31:8], Access Type=RW, default=0x00000000*/

                            /*
                               Event Filter Specific Configuration. Contents of
                               this field depend on the type of filtering used
                               defined by FilterType field. For Stack Pivoting
                               Filter this can be set as 256 byte aligned
                               linear address of the base of the stack range.
                            */
    UINT32 RopStackBase1 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /*
                               Event Filter Specific Configuration. Contents of
                               this field depend on the type of filtering used
                               defined by FilterType field. For Stack Pivoting
                               Filter this can be set as 256 byte aligned
                               linear address of the base of the stack range.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ROP_EVENT_FILTER0_REGISTER;
/**
  ROP event filter 0 Data
**/
#define MSR_ROP_EVENT_FILTER0_DATA 0x00000361

/**
  This MSR displays the programming status of all the PerfMon counters.
  It is a per logical processor read-only MSR used to observe the [IntelRsvd]?in-use?[/IntelRsvd] status of all the counters at once.
  [IntelRsvd]It is made architectural starting Skylake called IA32_PERF_GLOBAL_INUSE (MSR address 0x392)[/IntelRsvd]
**/
#define MSR_EMON_PERF_RES_PROGRAMMED 0x00000392

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 EnabledGenCntr : 8;

                            /* Bits[7:0], Access Type=RO_V, default=0x00000000*/

                            /*
                               Counter is in-use for General Counters 7, 6, 5,
                               4, 3, 2 ,1, 0 respectively. A '1 indicates the
                               counter is in-use, that is the corresponding
                               CORE_CR_PERMON_EVNTSEL_CNTrX.EVENT_SELECT[7:0]
                               is non zero
                            */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 EnabledFixedCntr : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /*
                               Counter is in-use for Fixed Counters 3, 2 ,1, 0
                               respectively. A '1 indicates the counter is in-
                               use, that is its corresponding
                               ROB1_CR_EMON_FIXED_CTR_CTRL.en_ctrX[1:0] is non
                               zero
                               CORE_CR_PERMON_EVNTSEL_CNTR.EVENT_SELECT[7:0] is
                               non zero
                            */
    UINT32 Rsvd36 : 27;

                            /* Bits[62:36], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Pmi : 1;

                            /* Bits[63:63], Access Type=RO_V, default=0x00000000*/

                            /* PMI */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_EMON_PERF_RES_PROGRAMMED_REGISTER;

/**
  IDP 1 PMON Counter 1  data register
  The Fix counter is counting UCLK cycles.
  All fields in this reigster must be reset when LT_CONTROL_MSR[LTPmonCntClr] is set to 1b.
**/
#define MSR_PERFCTR0 0x000003B8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Pmonctrdata0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               Pmon Counter data. The register may be read and
                               written when the counter is stopped.
                            */
    UINT32 Pmonctrdata1 : 12;

                            /* Bits[43:32], Access Type=RW_V, default=0x00000000*/

                            /*
                               Pmon Counter data. The register may be read and
                               written when the counter is stopped.
                            */
    UINT32 Rsvd44 : 20;

                            /* Bits[63:44], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PERFCTR0_REGISTER;

/**
  IDP 1 PMON Counter 2  data register
  The Fix counter is counting UCLK cycles.
  All fields in this reigster must be reset when LT_CONTROL_MSR[LTPmonCntClr] is set to 1b.
**/
#define MSR_PERFCTR1 0x000003B9

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Pmonctrdata0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               Pmon Counter data. The register may be read and
                               written when the counter is stopped.
                            */
    UINT32 Pmonctrdata1 : 12;

                            /* Bits[43:32], Access Type=RW_V, default=0x00000000*/

                            /*
                               Pmon Counter data. The register may be read and
                               written when the counter is stopped.
                            */
    UINT32 Rsvd44 : 20;

                            /* Bits[63:44], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PERFCTR1_REGISTER;

/**
  Threshold value for the load latency
**/
#define MSR_PEBS_LD_LAT_THRESHOLD 0x000003F6

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Thrshold : 16;

                            /* Bits[15:0], Access Type=RW, default=0x0000FFFF*/

                            /* Threshold for the Latency value */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PEBS_LD_LAT_THRESHOLD_REGISTER;

/**
  Precise Performance Monitoring (PPMON) Event Control.  This register is read-write.
**/
#define MSR_PEBS_FRONTEND 0x000003F7

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 EventId : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000000*/

                            /*
                               Choose which event to monitor (ie. 1: L1_IMISS,
                               2: MLC_MISS, 3: ITLB_MISS, 4: STLB_MISS, 5:
                               DSB_MISS, 6: IDQ_READ_BUBBLES)
                            */
    UINT32 Rsvd3 : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 CriticalFilter : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               When asserted, cycles occurring while IDQ is
                               empty are filtered, otherwise they are
                               monitored.
                            */
    UINT32 Rsvd5 : 3;

                            /* Bits[7:5], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 FeLatency : 12;

                            /* Bits[19:8], Access Type=RW, default=0x00000008*/

                            /*
                               Number of consecutive cycles not having less
                               than FE_THRESHOLD bubbles which must occur
                               before logging the event.
                            */
    UINT32 FeThreshold : 3;

                            /* Bits[22:20], Access Type=RW, default=0x00000000*/

                            /*
                               Number of delivery bubbles (or more) of cycles
                               to count. If number of delivery bubbles is
                               greater than or equal to this field, then count
                               it.
                            */
    UINT32 Rsvd23 : 9;

                            /* Bits[31:23], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PEBS_FRONTEND_REGISTER;

/**
  Time spent in the Package C-State.  It is given in units compatible to P1 clock frequency (Guaranteed / Maximum Core Non-Turbo Frequency).
**/
#define MSR_PC3_RCNTR 0x000003F8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Data1 : 28;

                            /* Bits[59:32], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Rsvd60 : 4;

                            /* Bits[63:60], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PC3_RCNTR_REGISTER;

/**
  Time spent in the Package C-State.  It is given in units compatible to P1 clock frequency (Guaranteed / Maximum Core Non-Turbo Frequency).
**/
#define MSR_PC6_RCNTR 0x000003F9

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Data1 : 28;

                            /* Bits[59:32], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Rsvd60 : 4;

                            /* Bits[63:60], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PC6_RCNTR_REGISTER;

/**
  Time spent in the Package C-State.  It is given in units compatible to P1 clock frequency (Guaranteed / Maximum Core Non-Turbo Frequency).
**/
#define MSR_PC7_RCNTR 0x000003FA

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Data1 : 28;

                            /* Bits[59:32], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Rsvd60 : 4;

                            /* Bits[63:60], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PC7_RCNTR_REGISTER;

/**
  Time spent in the Core C-State.  It is given in units compatible to P1 clock frequency (Guaranteed / Maximum Core Non-Turbo Frequency).
**/
#define MSR_CC3_RCNTR 0x000003FC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW, default=None*/

                            /* Data */
    UINT32 Data1 : 28;

                            /* Bits[59:32], Access Type=RW, default=None*/

                            /* Data */
    UINT32 Rsvd60 : 4;

                            /* Bits[63:60], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CC3_RCNTR_REGISTER;
/**
  Time spent in the Core C-State.  It is given in units compatible to P1 clock frequency (Guaranteed / Maximum Core Non-Turbo Frequency). CNL NEW: Moved from uncore to core
**/
#define MSR_CORE_C6_RESIDENCY_COUNTER 0x000003FD

/**
  Time spent in the Core C-State.  It is given in units compatible to P1 clock frequency (Guaranteed / Maximum Core Non-Turbo Frequency).
**/
#define MSR_CC7_RCNTR 0x000003FE

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Data1 : 28;

                            /* Bits[59:32], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Rsvd60 : 4;

                            /* Bits[63:60], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CC7_RCNTR_REGISTER;

/**
  The MCiCTL MSR controls the signalling of machine check exceptions generated by the bank.
**/
#define MSR_IMC0_MC_CTL 0x00000464

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 DataSpareErr : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               enable exception signaling for data sparing
                               errors.
                            */
    UINT32 DataScrubErr : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               enable exception signaling for data scrubbing
                               errors.
                            */
    UINT32 DataWrtErr : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* enable exception signaling for data write errors */
    UINT32 DataByteEnableErr : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               enable exception signaling for data byte enable
                               errors
                            */
    UINT32 AddrErr : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /* enable exception signaling for address errors */
    UINT32 CorrRdErr : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Enables exception signalling for normal read
                               errors.
                            */
    UINT32 WdbParErr : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /* enable exception signaling for WDB parity err */
    UINT32 ApppParErr : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               enable exception signaling for address path
                               parity protection err
                            */
    UINT32 Mc2lmInvalReqErr : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               enable exception signaling for unrecognized
                               request to 2LM controller
                            */
    UINT32 Mc2lmDatToInvalEntErr : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               enable exception signaling for read response to
                               an invalid 2LM scoreboard entry
                            */
    UINT32 Mc2lmUnexpectedReadrspErr : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               enable exception signaling for unexpected 2LM
                               read response
                            */
    UINT32 Mc2lmDdr4CmpErr : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               enable exception signaling for DDR4 completion
                               to an invalid 2LM scoreboard entry
                            */
    UINT32 Mc2lmDdrtCmpErr : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               enable exception signaling for DDRt completion
                               to an invalid 2LM scoreboard entry
                            */
    UINT32 Mc2lmFifoOvflwErr : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               enable exception signaling for 2LM data or
                               completion FIFO overflow
                            */
    UINT32 VdbParErr : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               enable exception signaling for DDRT WDB parity
                               err
                            */
    UINT32 RpaParErr : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /* enable exception signaling for RPA parity err */
    UINT32 WpaParErr : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /* enable exception signaling for WPA parity err */
    UINT32 DdrtEridUc : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /* Enable exception signalling for ERID UC Error */
    UINT32 DdrtIntrOverflow : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Enable exception signalling for interrupt seen
                               from FNV
                            */
    UINT32 DdrtEridFifoOverflow : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Enable exception signalling for for ERID FIFO
                               overflow error
                            */
    UINT32 DdrtFnvWrCreditError : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Enable exception signalling for FNV Write credit
                               error
                            */
    UINT32 DdrtFnvRdCreditError : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Enable exception signalling for FNV Read credi
                               error
                            */
    UINT32 DdrtSchedError : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Enable exception signalling for DDRT scheduler
                               error
                            */
    UINT32 DdrtEridPar : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Enable exception signalling for DDRT scheduler
                               error
                            */
    UINT32 LinkFail : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               Enable exception signalling for DDRT scheduler
                               error
                            */
    UINT32 DdrtFnvThermal : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Enable exception signalling for FNV Thermal
                               event error
                            */
    UINT32 Rsvd26 : 6;

                            /* Bits[31:26], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IMC0_MC_CTL_REGISTER;

/**
  The MCiSTATUS MSR contains information related to a machine check error if its VAL (valid) flag is set.
**/
#define MSR_IMC0_MC_STATUS 0x00000465

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Mcacod : 16;

                            /* Bits[15:0], Access Type=RWS_V, default=0x00000000*/

                            /*
                               Specifies the machine check architecture defined
                               error code for the machine check error condition
                               detected
                            */
    UINT32 Mscod : 16;

                            /* Bits[31:16], Access Type=RWS_V, default=0x00000000*/

                            /*
                               Specifies a model specific error code that
                               uniquely identifies the machine check error
                               condition that has been detected
                            */
    UINT32 OtherInfo : 6;

                            /* Bits[37:32], Access Type=RWS_V, default=0x00000000*/

                            /*
                               The functions of the bits in this field are
                               implementation specific and are not part of the
                               machine check architecture.
                            */
    UINT32 CorErrCnt : 15;

                            /* Bits[52:38], Access Type=RWS_V, default=0x00000000*/

                            /*
                               A 15 bit counter that is incremented each time a
                               corrected (or uncorrected but ignorable) error
                               is observed by the MCA recording bank
                            */
    UINT32 CorErrStat : 2;

                            /* Bits[54:53], Access Type=RWS, default=0x00000000*/

                            /*
                               These bits are used to indicate when the number
                               of corrected errors has exceeded the safe
                               threshold to the point where an uncorrected
                               error has become more likely to happen
                               CORR_ERR_STAT does not apply to IMC and is
                               marked as reserved attribute
                            */
    UINT32 Ar : 1;

                            /* Bits[55:55], Access Type=RWS_V, default=0x00000000*/

                            /*
                               AR - Action REquired. When set it indicates that
                               SW needs to take immediate recovery action for
                               the error. When clear, SW does not need to take
                               immediate action. Similar to the S bit, the AR
                               bit has meaning only when an error is logged
                               with UC=1 and PCC=0.
                            */
    UINT32 S : 1;

                            /* Bits[56:56], Access Type=RWS_V, default=0x00000000*/

                            /*
                               S - Signaling. When set it indicates that the
                               error was signaled with an MCERR. When clear it
                               indicates that the error was signaled via a
                               CMCI. The S bit has meaning only when an error
                               is logged with UC=1 and PCC=0.
                            */
    UINT32 Pcc : 1;

                            /* Bits[57:57], Access Type=RWS_V, default=0x00000000*/

                            /*
                               Indicates (when set) that the state of the
                               processor might have been corrupted by the error
                               condition detected and that reliable restarting
                               of the processor may not be possible
                            */
    UINT32 Addrv : 1;

                            /* Bits[58:58], Access Type=RWS_V, default=0x00000000*/

                            /*
                               indicates (when set) that the MCiADDR register
                               contains the address where the error occurred
                            */
    UINT32 Miscv : 1;

                            /* Bits[59:59], Access Type=RWS_V, default=0x00000000*/

                            /*
                               Indicates (when set) that the MCiMISC register
                               contains additional information regarding the
                               error.
                            */
    UINT32 En : 1;

                            /* Bits[60:60], Access Type=RWS_V, default=0x00000000*/

                            /*
                               Indicates (when set) that signaling of the
                               machine check exception for this error was
                               enabled by an associated flag bit of the MCiCTL
                               register
                            */
    UINT32 Uc : 1;

                            /* Bits[61:61], Access Type=RWS_V, default=0x00000000*/

                            /*
                               Error logged in this banks is an uncorrected
                               error.
                            */
    UINT32 Over : 1;

                            /* Bits[62:62], Access Type=RWS_V, default=0x00000000*/

                            /*
                               (Overflow) Indicates (when set) that a machine
                               check error occurred while the results of a
                               previous error were still in the register bank
                            */
    UINT32 Valid : 1;

                            /* Bits[63:63], Access Type=RWS_V, default=0x00000000*/

                            /* Error logged in this bank is valid */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IMC0_MC_STATUS_REGISTER;

/**
  The MCiADDR MSR contains the address of the code or data memory location that produced the machine check error if the ADDRV flag in the MCiSTATUS register is set.
**/
#define MSR_IMC1_MC9_ADDR 0x0000046A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Address0 : 32;

                            /* Bits[31:0], Access Type=RWS_V, default=0x00000000*/

                            /* Address associated with the error. */
    UINT32 Address1 : 14;

                            /* Bits[45:32], Access Type=RWS_V, default=0x00000000*/

                            /* Address associated with the error. */
    UINT32 UnimplementedUpperAddress : 18;

                            /* Bits[63:46], Access Type=RWS, default=0x00000000*/

                            /*
                               These bits are not implemented in that they will
                               never by set to one due to a detected error.
                               They can be written and read for software
                               testing.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IMC1_MC9_ADDR_REGISTER;

/**
  The MCiADDR MSR contains the address of the code or data memory location that produced the machine check error if the ADDRV flag in the MCiSTATUS register is set.
**/
#define MSR_IMC2_MCA_ADDR 0x0000046E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Address0 : 32;

                            /* Bits[31:0], Access Type=RWS_V, default=0x00000000*/

                            /* Address associated with the error. */
    UINT32 Address1 : 14;

                            /* Bits[45:32], Access Type=RWS_V, default=0x00000000*/

                            /* Address associated with the error. */
    UINT32 UnimplementedUpperAddress : 18;

                            /* Bits[63:46], Access Type=RWS, default=0x00000000*/

                            /*
                               These bits are not implemented in that they will
                               never by set to one due to a detected error.
                               They can be written and read for software
                               testing.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IMC2_MCA_ADDR_REGISTER;

/**
  SW opt-in for none-broadcast behavior
**/
#define MSR_MCG_EXE_CTL 0x000004D0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Lmce : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* Local MCE SW opt-in */
    UINT32 Lmsmi : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* Local MSMI SW opt-in */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RW, default=None*/

                            /*  */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_MCG_EXE_CTL_REGISTER;

/**
  This CSR holds enable bits for on-chip storage of SMM and
  Code Access Check Violation features.
**/
#define MSR_SMM_FEATURE_CONTROL 0x000004E0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Lock : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               If Lock = 1, CPU will drop writes to the
                               register If Lock = 0, CPU will allow update to
                               b[2:0]
                            */
    UINT32 SmmCpuSaveEn : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               If 0, SMI/RSM will save/restore state in SMRAM
                               If 1, SMI/RSM will save/restore state from SRAM
                            */
    UINT32 SmmCodeChkEn : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               If 1, generate unrecoverable MCHK on code fetch
                               outside SMRRs If 0, do not report any errors for
                               code fetch outside SMRRs
                            */
    UINT32 Rsvd3 : 29;

                            /* Bits[31:3], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMM_FEATURE_CONTROL_REGISTER;

/**
  Description: This SMM_ENABLE_MASK and MATCH registers are used to select threads (Logical thread Id's)
  that should be servicing a Targeted SMI. BIOS programs the MASK register to indicate which bits should
  be masked before doing a MATCH check
**/
#define MSR_SMM_ENABLE_MATCH 0x000004E8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ThreadIdMatch : 12;

                            /* Bits[11:0], Access Type=RW, default=0x00000000*/

                            /*
                               Each bit in this field corresponds to a logical
                               thread-id bit. When set, ucode masks the
                               corresponding thread-id bit before checking for
                               a match against the MATCH register during
                               targeted SMIs
                            */
    UINT32 Reserved12 : 20;

                            /* Bits[31:12], Access Type=RO, default=0x00000000*/

                            /* Reserved for future */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMM_ENABLE_MATCH_REGISTER;

/**
  Description: This SMM_ENABLE_MASK and MATCH registers are used to select threads (Logical thread Id's)
  that should be servicing a Targeted SMI. BIOS programs the MASK register to indicate which bits should
  be masked before doing a MATCH check
**/
#define MSR_SMM_ENABLE_MASK 0x000004EA

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ThreadIdMask : 12;

                            /* Bits[11:0], Access Type=RW, default=0x00000FFF*/

                            /*
                               Each bit in this field corresponds to a logical
                               thread-id bit. When set, ucode masks the
                               corresponding thread-id bit before checking for
                               a match against the MATCH register during
                               targeted SMIs
                            */
    UINT32 Reserved12 : 20;

                            /* Bits[31:12], Access Type=RO, default=0x00000000*/

                            /* Reserved for future */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMM_ENABLE_MASK_REGISTER;

/**
  SGX SVN Status MSR
**/
#define MSR_IA32_SE_SVN 0x00000500

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Lock : 1;

                            /* Bits[0:0], Access Type=RO_V, default=None*/

                            /*  */
    UINT32 Reserved1 : 15;

                            /* Bits[15:1], Access Type=RO_V, default=None*/

                            /*  */
    UINT32 SinitSeSvn : 8;

                            /* Bits[23:16], Access Type=RO_V, default=None*/

                            /*  */
    UINT32 Reserved24 : 8;

                            /* Bits[31:24], Access Type=RO_V, default=None*/

                            /*  */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RO_V, default=None*/

                            /*  */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IA32_SE_SVN_REGISTER;

/**
  SGX_DEBUG_MODE MSR to allow non-Intel debugger to enter debug mode equal to DEBUG_UNLOCK_MODE functionality
**/
#define MSR_SGX_DEBUG_MODE 0x00000503

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 NpkRequest : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* Trace Hub request */
    UINT32 DebugUnlockMode : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /*
                               Indication whether the system is under debug via
                               Intel Trace Hub
                            */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SGX_DEBUG_MODE_REGISTER;
/**
  Scratch Pad register PROBE_MODE_4
  C6NoSave Candidate
**/
#define MSR_PROBE_MODE_VMEXIT_REDIRECTION_REASON 0x00000504
/**
  VMX Redirection info used for Probe Mode
**/
#define MSR_PROBE_MODE_VMX_REDIRECTION_INFO 0x00000505
/**
  Not really a register. Probe mode MSR used to flush all TLBs.
**/
#define MSR_PROBE_TLB_FLUSH 0x00000508
/**
  Not really a register. Probe mode MSR used to read/write VMX pointers.
**/
#define MSR_PROBE_VMX_POINTER 0x00000509
/**
  emulated by xucode --> cause pppe exit, described in SNC HSD 1304428988 - HCTIO/SoftCE: uArch support for TIO_DEBUG_STATUS MSRs
**/
#define MSR_TIO_PM_DEBUG_STATUS 0x0000050A

/**
  Programmed in Probe mode, used in PDM.
  Need to save in C6
**/
#define MSR_AET_MISC_ENABLE 0x00000511

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 HwInt : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* HW Interrupt trace enable */
    UINT32 Iret : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* IRET trace enable */
    UINT32 Exception : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /* Exception trace enable */
    UINT32 Msr : 1;

                            /* Bits[3:3], Access Type=RW, default=None*/

                            /* MSR trace enable */
    UINT32 PowerEvent : 1;

                            /* Bits[4:4], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Io : 1;

                            /* Bits[5:5], Access Type=RW, default=None*/

                            /* IO trace enable */
    UINT32 Se : 1;

                            /* Bits[6:6], Access Type=RW, default=None*/

                            /* Secure Enclaves entry and exit trace enable */
    UINT32 Wbinvd : 1;

                            /* Bits[7:7], Access Type=RW, default=None*/

                            /* WBINVD trace enable */
    UINT32 Rsvd8 : 1;

                            /* Bits[8:8], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 CodeBreakpoint : 1;

                            /* Bits[9:9], Access Type=RW, default=None*/

                            /* Code breakpoint trace enable */
    UINT32 DataBreakpoint : 1;

                            /* Bits[10:10], Access Type=RW, default=None*/

                            /* Data breakpoint trace enable */
    UINT32 Rsvd11 : 1;

                            /* Bits[11:11], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Btm : 1;

                            /* Bits[12:12], Access Type=RW, default=None*/

                            /* BTM trace enable */
    UINT32 Smi : 1;

                            /* Bits[13:13], Access Type=RW, default=None*/

                            /* SMI trace enable */
    UINT32 Mwait : 1;

                            /* Bits[14:14], Access Type=RW, default=None*/

                            /* Monitor/Mwait trace enable */
    UINT32 Rsvd15 : 13;

                            /* Bits[27:15], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 LipDisable : 1;

                            /* Bits[28:28], Access Type=RW, default=None*/

                            /* disable LIP for the pdm packet. */
    UINT32 RicDisable : 1;

                            /* Bits[29:29], Access Type=RW, default=None*/

                            /* disnable RIC for the pdm packet. */
    UINT32 Rsvd30 : 1;

                            /* Bits[30:30], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Rsvd31 : 1;

                            /* Bits[31:31], Access Type=RW, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AET_MISC_ENABLE_REGISTER;

/**
  AET (PDM) Event Control Register
**/
#define MSR_AET_EVENT_CTRL 0x00000512

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 HwInt : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* HW Interrupt trace enable */
    UINT32 Iret : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* IRET trace enable */
    UINT32 Exception : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /* Exception trace enable */
    UINT32 Msr : 1;

                            /* Bits[3:3], Access Type=RW, default=None*/

                            /* MSR trace enable */
    UINT32 PowerEvent : 1;

                            /* Bits[4:4], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Io : 1;

                            /* Bits[5:5], Access Type=RW, default=None*/

                            /* IO trace enable */
    UINT32 Se : 1;

                            /* Bits[6:6], Access Type=RW, default=None*/

                            /* Secure Enclaves entry and exit trace enable */
    UINT32 Wbinvd : 1;

                            /* Bits[7:7], Access Type=RW, default=None*/

                            /* WBINVD trace enable */
    UINT32 Rsvd8 : 1;

                            /* Bits[8:8], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 CodeBreakpoint : 1;

                            /* Bits[9:9], Access Type=RW, default=None*/

                            /* Code breakpoint trace enable */
    UINT32 DataBreakpoint : 1;

                            /* Bits[10:10], Access Type=RW, default=None*/

                            /* Data breakpoint trace enable */
    UINT32 Rsvd11 : 1;

                            /* Bits[11:11], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Btm : 1;

                            /* Bits[12:12], Access Type=RW, default=None*/

                            /* BTM trace enable */
    UINT32 Smi : 1;

                            /* Bits[13:13], Access Type=RW, default=None*/

                            /* SMI trace enable */
    UINT32 Mwait : 1;

                            /* Bits[14:14], Access Type=RW, default=None*/

                            /* Monitor/Mwait trace enable */
    UINT32 Rsvd15 : 15;

                            /* Bits[29:15], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Npk : 1;

                            /* Bits[30:30], Access Type=RW, default=None*/

                            /* NPK output enable */
    UINT32 PdmMasterEnable : 1;

                            /* Bits[31:31], Access Type=RW, default=None*/

                            /* Mater enable for PDM. */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AET_EVENT_CTRL_REGISTER;
/**
  PPPE Redirection info used for Probe Mode
**/
#define MSR_PROBE_MODE_PPPE_REDIRECTION_INFO 0x00000513
/**
  This define is used to reserve some MSR addresses for probe mode. Ucode would have a dedicated handler for these MSRs
  " seq has 12 instances in addresses range 0x514 to 0x51F"
**/
#define MSR_PROBE_MODE_RESERVED_1_1 0x00000514
/**
  This define is used to reserve some MSR addresses for probe mode. Ucode would have a dedicated handler for these MSRs
  " seq has 12 instances in addresses range 0x514 to 0x51F"
**/
#define MSR_PROBE_MODE_RESERVED_2_2 0x00000515
/**
  This define is used to reserve some MSR addresses for probe mode. Ucode would have a dedicated handler for these MSRs
  " seq has 12 instances in addresses range 0x514 to 0x51F"
**/
#define MSR_PROBE_MODE_RESERVED_3_3 0x00000516
/**
  This define is used to reserve some MSR addresses for probe mode. Ucode would have a dedicated handler for these MSRs
  " seq has 12 instances in addresses range 0x514 to 0x51F"
**/
#define MSR_PROBE_MODE_RESERVED_4_4 0x00000517
/**
  This define is used to reserve some MSR addresses for probe mode. Ucode would have a dedicated handler for these MSRs
  " seq has 12 instances in addresses range 0x514 to 0x51F"
**/
#define MSR_PROBE_MODE_RESERVED_5_5 0x00000518
/**
  This define is used to reserve some MSR addresses for probe mode. Ucode would have a dedicated handler for these MSRs
  " seq has 12 instances in addresses range 0x514 to 0x51F"
**/
#define MSR_PROBE_MODE_RESERVED_6_6 0x00000519
/**
  This define is used to reserve some MSR addresses for probe mode. Ucode would have a dedicated handler for these MSRs
  " seq has 12 instances in addresses range 0x514 to 0x51F"
**/
#define MSR_PROBE_MODE_RESERVED_7_7 0x0000051A
/**
  This define is used to reserve some MSR addresses for probe mode. Ucode would have a dedicated handler for these MSRs
  " seq has 12 instances in addresses range 0x514 to 0x51F"
**/
#define MSR_PROBE_MODE_RESERVED_8_8 0x0000051B
/**
  This define is used to reserve some MSR addresses for probe mode. Ucode would have a dedicated handler for these MSRs
  " seq has 12 instances in addresses range 0x514 to 0x51F"
**/
#define MSR_PROBE_MODE_RESERVED_9_9 0x0000051C
/**
  This define is used to reserve some MSR addresses for probe mode. Ucode would have a dedicated handler for these MSRs
  " seq has 12 instances in addresses range 0x514 to 0x51F"
**/
#define MSR_PROBE_MODE_RESERVED_10_10 0x0000051D
/**
  This define is used to reserve some MSR addresses for probe mode. Ucode would have a dedicated handler for these MSRs
  " seq has 12 instances in addresses range 0x514 to 0x51F"
**/
#define MSR_PROBE_MODE_RESERVED_11_11 0x0000051E
/**
  This define is used to reserve some MSR addresses for probe mode. Ucode would have a dedicated handler for these MSRs
  " seq has 12 instances in addresses range 0x514 to 0x51F"
**/
#define MSR_PROBE_MODE_RESERVED_12_12 0x0000051F
/**
  Scratch Pad register ICECTLPMR_PRIOR_STATE
  Used only by probe mode.
  C6NoSave candidate
**/
#define MSR_ICECTLPMR_PRIOR_STATE 0x00000520

/**
  AET base address. programmed by probe mode software. cmoshe
  Ucode will use it as the address where it will send all PDM messages.
**/
#define MSR_AET_BASE_ADDRESS 0x00000521

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Valid : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /*
                               Valid. Ucode will write PDMs only if valid is
                               set
                            */
    UINT32 Rsvd1 : 5;

                            /* Bits[5:1], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 Address0 : 26;

                            /* Bits[31:6], Access Type=RW, default=None*/

                            /* Base address for AET */
    UINT32 Address1 : 32;

                            /* Bits[63:32], Access Type=RW, default=None*/

                            /* Base address for AET */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AET_BASE_ADDRESS_REGISTER;

/**
  Core UARCH_CTL msr
**/
#define MSR_CORE_UARCH_CTL 0x00000541

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 DcuScrubEn : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* L1 scrubbing enable */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CORE_UARCH_CTL_REGISTER;

/**
  PL4 limit. It is Icc limit on some power-delivery board element, mapped into W. It is proactive, instantaneous limit.
**/
#define MSR_VR_CURRENT_CONFIG 0x00000601

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CurrentLimit : 13;

                            /* Bits[12:0], Access Type=RO_V, default=0x00000000*/

                            /*
                               Current limitation in 0.125 A increments. This
                               field is locked by VR_CURRENT_CONFIG[LOCK]. When
                               the LOCK bit is set to 1b, this field becomes
                               Read Only.
                            */
    UINT32 Rsvd13 : 18;

                            /* Bits[30:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Lock : 1;

                            /* Bits[31:31], Access Type=ROS_V, default=0x00000000*/

                            /*
                               This bit will lock the CURRENT_LIMIT settings in
                               this register and will also lock this setting.
                               This means that once set to 1b, the
                               CURRENT_LIMIT setting and this bit become Read
                               Only until the next Warm Reset.
                            */
    UINT32 Psi1Threshold : 10;

                            /* Bits[41:32], Access Type=RO_V, default=0x00000000*/

                            /* Not in use */
    UINT32 Psi2Threshold : 10;

                            /* Bits[51:42], Access Type=RO_V, default=0x00000000*/

                            /* Not in use */
    UINT32 Psi3Threshold : 10;

                            /* Bits[61:52], Access Type=RO_V, default=0x00000000*/

                            /* Not in use */
    UINT32 Ps4Enable : 1;

                            /* Bits[62:62], Access Type=RO_V, default=0x00000000*/

                            /* Not in use */
    UINT32 Reserved63 : 1;

                            /* Bits[63:63], Access Type=RO_V, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_VR_CURRENT_CONFIG_REGISTER;

/**
  Defines units for calculating SKU power and timing parameters.
**/
#define MSR_PACKAGE_POWER_SKU_UNIT 0x00000606

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PwrUnit : 4;

                            /* Bits[3:0], Access Type=RO_V, default=0x00000003*/

                            /*
                               Power Units used for power control registers.
                               The actual unit value is calculated by 1 W /
                               Power(2,PWR_UNIT). The default value of 0011b
                               corresponds to 1/8 W.
                            */
    UINT32 Rsvd4 : 4;

                            /* Bits[7:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 EnergyUnit : 5;

                            /* Bits[12:8], Access Type=RO_V, default=0x0000000E*/

                            /*
                               Energy Units used for power control registers.
                               The actual unit value is calculated by 1 J /
                               Power(2,ENERGY_UNIT). The default value of 14
                               corresponds to Ux.14 number.
                            */
    UINT32 Rsvd13 : 3;

                            /* Bits[15:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 TimeUnit : 4;

                            /* Bits[19:16], Access Type=RO_V, default=0x0000000A*/

                            /*
                               Time Units used for power control registers. The
                               actual unit value is calculated by 1 s /
                               Power(2,TIME_UNIT). The default value of Ah
                               corresponds to 976 usec.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PACKAGE_POWER_SKU_UNIT_REGISTER;

/**
  Control and Status register for the BIOS-to-PCODE mailbox.  This mailbox is implemented as a means for accessing statistics and implementing PCODE patches.
  This register is used in conjunction with BIOS_MAILBOX_DATA.
**/
#define MSR_BIOS_MAILBOX_INTERFACE 0x00000607

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Command : 8;

                            /* Bits[7:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field contains the SW request command or
                               the PCODE response code, depending on the
                               setting of RUN_BUSY.
                            */
    UINT32 Addr : 21;

                            /* Bits[28:8], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field contains the address associated with
                               specific commands.
                            */
    UINT32 Rsvd29 : 2;

                            /* Bits[30:29], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 RunBusy : 1;

                            /* Bits[31:31], Access Type=RW1S, default=0x00000000*/

                            /*
                               SW may write to the two mailbox registers only
                               when RUN_BUSY is cleared (0b). Setting RUN_BUSY
                               to 1b will create a Fast Path event. After
                               setting this bit, SW will poll this bit until it
                               is cleared. PCODE will clear RUN_BUSY after
                               updating the mailbox registers with the result
                               and error code.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_BIOS_MAILBOX_INTERFACE_REGISTER;
/**
  Data register for the BIOS-to-PCODE mailbox.  This mailbox is implemented as a means for accessing statistics and implementing PCODE patches.
  This register is used in conjunction with BIOS_MAILBOX_INTERFACE.
**/
#define MSR_BIOS_MAILBOX_DATA 0x00000608

/**
  This MSR reads/writes THREAD_P_REQ[P_STATE_OFFSET]. HSW ECO 4400429
**/
#define MSR_PST_CONFIG_CONTROL 0x00000609

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PStateOffset : 8;

                            /* Bits[7:0], Access Type=RW, default=None*/

                            /* P-state offset of Thread-P-Req */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PST_CONFIG_CONTROL_REGISTER;

/**
  The coordinated Package-Additive (above the core) Interrupt Response Time is used for BIOS runtime control.  This setting affects the selected package state.
**/
#define MSR_C_STATE_LATENCY_CONTROL_0 0x0000060A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Value : 10;

                            /* Bits[9:0], Access Type=RW, default=0x00000000*/

                            /*
                               The Interrupt Response Time Limit is given in
                               units defined in the Multipler field of this
                               register.
                            */
    UINT32 Multiplier : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               This field indicates the unit of measurement
                               that is defined for the Value field in this
                               register.
                            */
    UINT32 Rsvd13 : 2;

                            /* Bits[14:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Valid : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               This field qualifies the validity of the Value
                               field in this register.
                            */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_C_STATE_LATENCY_CONTROL_0_REGISTER;

/**
  The coordinated Package-Additive (above the core) Interrupt Response Time is used for BIOS runtime control.  This setting affects the selected package state.
**/
#define MSR_C_STATE_LATENCY_CONTROL_1 0x0000060B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Value : 10;

                            /* Bits[9:0], Access Type=RW, default=0x00000000*/

                            /*
                               The Interrupt Response Time Limit is given in
                               units defined in the Multipler field of this
                               register.
                            */
    UINT32 Multiplier : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               This field indicates the unit of measurement
                               that is defined for the Value field in this
                               register.
                            */
    UINT32 Rsvd13 : 2;

                            /* Bits[14:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Valid : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               This field qualifies the validity of the Value
                               field in this register.
                            */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_C_STATE_LATENCY_CONTROL_1_REGISTER;

/**
  The coordinated Package-Additive (above the core) Interrupt Response Time is used for BIOS runtime control.  This setting affects the selected package state.
**/
#define MSR_C_STATE_LATENCY_CONTROL_2 0x0000060C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Value : 10;

                            /* Bits[9:0], Access Type=RW, default=0x00000000*/

                            /*
                               The Interrupt Response Time Limit is given in
                               units defined in the Multipler field of this
                               register.
                            */
    UINT32 Multiplier : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               This field indicates the unit of measurement
                               that is defined for the Value field in this
                               register.
                            */
    UINT32 Rsvd13 : 2;

                            /* Bits[14:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Valid : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               This field qualifies the validity of the Value
                               field in this register.
                            */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_C_STATE_LATENCY_CONTROL_2_REGISTER;

/**
  Time spent in the Package C-State.  It is given in units compatible to P1 clock frequency (Guaranteed / Maximum Core Non-Turbo Frequency).
**/
#define MSR_PC2_RCNTR 0x0000060D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Data1 : 28;

                            /* Bits[59:32], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Rsvd60 : 4;

                            /* Bits[63:60], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PC2_RCNTR_REGISTER;

/**
  This register allows platform BIOS to limit the power consumption of the processor to the specified values.
**/
#define MSR_PACKAGE_RAPL_LIMIT 0x00000610

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PkgPwrLim1 : 15;

                            /* Bits[14:0], Access Type=RW_L, default=0x00000118*/

                            /*
                               Average Power limit value which the package must
                               not exceed over a time window as specified by
                               Power_Limit_1_TIME field above. The processor
                               power consumption will be controlled to the
                               Power_Limit_1 value over an exponential weighted
                               moving average of the time window. This field is
                               specified in the units as identified by the
                               PACKAGE_POWER_SKU_UNIT (MSR 606h). Initial value
                               varies based on the SKU.
                            */
    UINT32 PkgPwrLim1En : 1;

                            /* Bits[15:15], Access Type=RO, default=0x00000001*/

                            /*
                               When set, enables processor to apply control
                               policies such that the package average power
                               does not exceed Power_Limit_1 value over an
                               exponential weighted moving average of the time
                               window. This bit is always enabled indicating
                               Power_Limit_1 is always active. Because the
                               processor must maintain the power consumption to
                               the TDP value, Power_Limit_1 is always enabled.
                            */
    UINT32 PkgClmpLim1 : 1;

                            /* Bits[16:16], Access Type=RW_L, default=0x00000000*/

                            /*
                               When set, allows processor to go below the OS
                               requested P States in order to maintain the
                               power below Power_Limit_1 value specified below.
                               This bit is writable only when
                               CPUID.(EAX=06h):EAX[4] is set.
                            */
    UINT32 PkgPwrLim1Time : 7;

                            /* Bits[23:17], Access Type=RW_L, default=0x0000000A*/

                            /*
                               This indicates the time window over which
                               Power_Limit_1 value should be maintained. This
                               field is made up of two numbers from the
                               following equation. The processor power
                               consumption will be controlled to the
                               Power_Limit_1 value over an exponential weighted
                               moving average of the time window. Time Window =
                               (float) ((1+(X/4)) * (2 ^ Y)) Where: X =
                               POWER_LIMIT_1_TIME[23:22] Y =
                               POWER_LIMIT_1_TIME[21:17] The unit of
                               measurement for this field is available from
                               PACKAGE_POWER_SKU_UNIT (MSR 606h). The maximum
                               allowed value in this field is defined in
                               PACKAGE_POWER_SKU (MSR 614h) PACKAGE_MAX_TIME
                               field.
                            */
    UINT32 Rsvd24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PkgPwrLim2 : 15;

                            /* Bits[46:32], Access Type=RW_L, default=0x00000000*/

                            /*
                               This field indicates the power limitation #2.
                               The unit of measurement is defined in
                               PACKAGE_POWER_SKU_UNIT_MSR[PWR_UNIT].
                            */
    UINT32 PkgPwrLim2En : 1;

                            /* Bits[47:47], Access Type=RW_L, default=0x00000000*/

                            /*
                               This bit enables/disables PKG_PWR_LIM_2. 0b
                               Package Power Limit 2 is Disabled 1b Package
                               Power Limit 2 is Enabled
                            */
    UINT32 PkgClmpLim2 : 1;

                            /* Bits[48:48], Access Type=RW_L, default=0x00000000*/

                            /*
                               When set, allows processor to go below the OS
                               requested P States in order to maintain the
                               power below Power_Limit_2 value specified below.
                               This bit is writable only when
                               CPUID.(EAX=6):EAX[4] is set.
                            */
    UINT32 PkgPwrLim2Time : 7;

                            /* Bits[55:49], Access Type=RW_L, default=0x00000000*/

                            /*
                               This indicates the short duration time window
                               over which Power_Limit_2 value should be
                               maintained. This field is made up of two numbers
                               from the following equation. The processor power
                               consumption will be controlled to the
                               Power_Limit_2 value over an exponential weighted
                               moving average of the time window. Time Window =
                               (float) ((1+(X/4)) * (2 ^ Y)) Where: X =
                               POWER_LIMIT_2_TIME[55:54] Y =
                               POWER_LIMIT_2_TIME[53:49] The unit of
                               measurement for this field is available from
                               PACKAGE_POWER_SKU_UNIT (MSR 606h).
                            */
    UINT32 Rsvd56 : 7;

                            /* Bits[62:56], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PkgPwrLimLock : 1;

                            /* Bits[63:63], Access Type=RW_KL, default=0x00000000*/

                            /*
                               When set, all settings in this register are
                               locked and are treated as Read Only. This bit
                               will typically set by BIOS during boot time or
                               resume from Sx.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PACKAGE_RAPL_LIMIT_REGISTER;
/**
  Package energy consumed by the entire CPU (including IA, GT and uncore).  The counter will wrap around and continue counting when it reaches its limit.
  The energy status is reported in units which are defined in PACKAGE_POWER_SKU_UNIT_MSR[ENERGY_UNIT].
**/
#define MSR_PACKAGE_ENERGY_STATUS 0x00000611
/**
  Package RAPL Performance Status Register. This register provides information on the performance impact of the RAPL power limit and indicates the duration for processor went below the requested P-state due to package power constraint.
**/
#define MSR_PACKAGE_RAPL_PERF_STATUS 0x00000613

/**
  Defines allowed SKU power and timing parameters.
  PCODE will update the contents of this register.
**/
#define MSR_PACKAGE_POWER_SKU 0x00000614

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PkgTdp : 15;

                            /* Bits[14:0], Access Type=RO_V, default=0x00000118*/

                            /*
                               The TDP package power setting allowed for this
                               part. The units for this value are defined in
                               PACKAGE_POWER_SKU_MSR[PWR_UNIT].
                            */
    UINT32 Rsvd15 : 1;

                            /* Bits[15:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PkgMinPwr : 15;

                            /* Bits[30:16], Access Type=ROS_V, default=0x00000060*/

                            /*
                               The minimal package power setting allowed for
                               this part. Lower values will be clamped to this
                               value. The minimum setting is typical (not
                               guaranteed). The units for this value are
                               defined in PACKAGE_POWER_SKU_MSR[PWR_UNIT].
                            */
    UINT32 Rsvd31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PkgMaxPwr : 15;

                            /* Bits[46:32], Access Type=ROS_V, default=0x00000240*/

                            /*
                               The maximal package power setting allowed for
                               the SKU. Higher values will be clamped to this
                               value. The maximum setting is typical (not
                               guaranteed). The units for this value are
                               defined in PACKAGE_POWER_SKU_MSR[PWR_UNIT].
                            */
    UINT32 Rsvd47 : 1;

                            /* Bits[47:47], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PkgMaxWin : 7;

                            /* Bits[54:48], Access Type=ROS_V, default=0x00000012*/

                            /*
                               The maximal time window allowed for the SKU.
                               Higher values will be clamped to this value. x =
                               PKG_MAX_WIN[54:53] y = PKG_MAX_WIN[52:48] The
                               timing interval window is Floating Point number
                               given by 1.x * power(2,y). The unit of
                               measurement is defined in
                               PACKAGE_POWER_SKU_UNIT_MSR[TIME_UNIT].
                            */
    UINT32 Rsvd55 : 9;

                            /* Bits[63:55], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PACKAGE_POWER_SKU_REGISTER;

/**
  Read/write data from/to pcode through internal mailbox
**/
#define MSR_PL3_CONTROL 0x00000615

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PowerLimit : 15;

                            /* Bits[14:0], Access Type=RW, default=None*/

                            /*
                               PL3 or PAppMax power level. A power reading
                               above this will be interpreted as a violation
                               (in increments of 1/8th Watt, U12.3)
                            */
    UINT32 Enable : 1;

                            /* Bits[15:15], Access Type=RW, default=None*/

                            /*
                               0 (default)=>Algorithm Disabled; 1=> Algorithm
                               Enabled
                            */
    UINT32 Reserved16 : 1;

                            /* Bits[16:16], Access Type=RW, default=None*/

                            /* Reserved . #GP if used. */
    UINT32 Timewindow : 7;

                            /* Bits[23:17], Access Type=RW, default=None*/

                            /*
                               Duration over which duty cycle control will be
                               maintained. The time is in the tau
                               format(xxYYYYY) in milliseconds
                            */
    UINT32 Dutycyle : 7;

                            /* Bits[30:24], Access Type=RW, default=None*/

                            /*
                               Expressed in percentage(U7.0%). Clipped to a max
                               value of 100%.
                            */
    UINT32 Lock : 1;

                            /* Bits[31:31], Access Type=RW, default=None*/

                            /*
                               0=> Updates to fields allowed; 1=> Interface
                               locked. Ignore any writes
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PL3_CONTROL_REGISTER;

/**
  Allows software to set power limits for
  the DRAM domain and measurement attributes associated with each limit.
**/
#define MSR_DDR_RAPL_LIMIT 0x00000618

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Limit1Power : 15;

                            /* Bits[14:0], Access Type=RWS_L, default=0x00000000*/

                            /*
                               Power Limit[0] for DDR domain. Units=Watts,
                               Format=11.3, Resolution=0.125W,
                               Range=0-2047.875W.
                            */
    UINT32 Limit1Enable : 1;

                            /* Bits[15:15], Access Type=RWS_L, default=0x00000000*/

                            /* Power Limit[0] enable bit for DDR domain. */
    UINT32 Rsvd16 : 1;

                            /* Bits[16:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Limit1TimeWindowY : 5;

                            /* Bits[21:17], Access Type=RWS_L, default=0x00000000*/

                            /*
                               Power Limit[0] time window Y value, for DDR
                               domain. Actual time_window for RAPL is: (1/1024
                               seconds) * (1+(x/4)) * (2^y)
                            */
    UINT32 Limit1TimeWindowX : 2;

                            /* Bits[23:22], Access Type=RWS_L, default=0x00000000*/

                            /*
                               Power Limit[0] time window X value, for DDR
                               domain. Actual time_window for RAPL is: (1/1024
                               seconds) * (1+(x/4)) * (2^y)
                            */
    UINT32 Rsvd24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Limit2Power : 15;

                            /* Bits[46:32], Access Type=RWS_L, default=0x00000000*/

                            /*
                               Power Limit[1] for DDR domain. Units=Watts,
                               Format=11.3, Resolution=0.125W,
                               Range=0-2047.875W.
                            */
    UINT32 Limit2Enable : 1;

                            /* Bits[47:47], Access Type=RWS_L, default=0x00000000*/

                            /* Power Limit[1] enable bit for DDR domain. */
    UINT32 Rsvd48 : 1;

                            /* Bits[48:48], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Limit2TimeWindowY : 5;

                            /* Bits[53:49], Access Type=RWS_L, default=0x00000000*/

                            /*
                               Power Limit[1] time window Y value, for DDR
                               domain. Actual time_window for RAPL is: (1/1024
                               seconds) * (1+(x/4)) * (2^y)
                            */
    UINT32 Limit2TimeWindowX : 2;

                            /* Bits[55:54], Access Type=RWS_L, default=0x00000000*/

                            /*
                               Power Limit[1] time window X value, for DDR
                               domain. Actual time_window for RAPL is: (1/1024
                               seconds) * (1+(x/4)) * (2^y)
                            */
    UINT32 Rsvd56 : 7;

                            /* Bits[62:56], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Locked : 1;

                            /* Bits[63:63], Access Type=RWS_KL, default=0x00000000*/

                            /*
                               When set, this entire register becomes read-
                               only. This bit will typically be set by BIOS
                               during boot.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_DDR_RAPL_LIMIT_REGISTER;
/**
  Accumulates the energy consumed by the DIMMs (summed across all channels).
**/
#define MSR_DDR_ENERGY_STATUS 0x00000619
/**
  Memory RAPL performance excursion counter.  This register can report the performance impact of power limiting.
**/
#define MSR_DDR_RAPL_PERF_STATUS 0x0000061B

/**

**/
#define MSR_DRAM_POWER_INFO_CFG 0x0000061C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 DramTdp : 15;

                            /* Bits[14:0], Access Type=RW, default=0x00000118*/

                            /*
                               The Spec power allowed for DRAM. The TDP setting
                               is typical (not guaranteed). The units for this
                               value are defined in
                               DRAM_POWER_INFO_UNIT_MSR[PWR_UNIT].
                            */
    UINT32 Rsvd15 : 1;

                            /* Bits[15:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 DramMinPwr : 15;

                            /* Bits[30:16], Access Type=RW, default=0x00000078*/

                            /*
                               The minimal power setting allowed for DRAM.
                               Lower values will be clamped to this value. The
                               minimum setting is typical (not guaranteed). The
                               units for this value are defined in
                               DRAM_POWER_INFO_UNIT_MSR[PWR_UNIT].
                            */
    UINT32 Rsvd31 : 1;

                            /* Bits[31:31], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 DramMaxPwr : 15;

                            /* Bits[46:32], Access Type=RW, default=0x00000258*/

                            /*
                               The maximal power setting allowed for DRAM.
                               Higher values will be clamped to this value. The
                               maximum setting is typical (not guaranteed). The
                               units for this value are defined in
                               DRAM_POWER_INFO_UNIT_MSR[PWR_UNIT].
                            */
    UINT32 Rsvd47 : 1;

                            /* Bits[47:47], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 DramMaxWin : 7;

                            /* Bits[54:48], Access Type=RW, default=0x00000028*/

                            /*
                               The maximal time window allowed for the DRAM.
                               Higher values will be clamped to this value. x =
                               PKG_MAX_WIN[54:53] y = PKG_MAX_WIN[52:48] The
                               timing interval window is Floating Point number
                               given by 1.x * power(2,y). The unit of
                               measurement is defined in
                               DRAM_POWER_INFO_UNIT_MSR[TIME_UNIT].
                            */
    UINT32 Rsvd55 : 8;

                            /* Bits[62:55], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Lock : 1;

                            /* Bits[63:63], Access Type=RW, default=0x00000000*/

                            /* Lock bit to lock the Register */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_DRAM_POWER_INFO_CFG_REGISTER;

/**
  Time spent with LLC flushed. Count at the same frequency as the TSC
**/
#define MSR_LLC_FLUSHED_RCNTR 0x0000061D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Data1 : 28;

                            /* Bits[59:32], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Rsvd60 : 4;

                            /* Bits[63:60], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_FLUSHED_RCNTR_REGISTER;

/**
  This register provides additional support for BCLK overclocking
**/
#define MSR_LCLK_PLL_RATIO 0x0000061E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 LclkRatio : 2;

                            /* Bits[1:0], Access Type=RWS, default=0x00000000*/

                            /*
                               LCLK Ratio 00 - 100 MHz bclk (5:5 mapping) 01 -
                               125 MHz bclk (5:4 mapping) 10 - 166 MHz bclk
                               (5:3 mapping) 11 - 250 MHz bclk (5:2 mapping)
                            */
    UINT32 LcSbSelect : 1;

                            /* Bits[2:2], Access Type=RWS, default=0x00000000*/

                            /*
                               LC vs. SB PLL Selection (0 = LC PLL, 1 = SB
                               PLL). Default 0x0
                            */
    UINT32 LongReset : 1;

                            /* Bits[3:3], Access Type=RWS, default=0x00000000*/

                            /*
                               If set to 1, wait additional timeout before
                               relocking Gen2/Gen3/Lclk PLLs
                            */
    UINT32 Rsvd4 : 28;

                            /* Bits[31:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LCLK_PLL_RATIO_REGISTER;

/**
  Min/Max Ratio Limits for Uncore
**/
#define MSR_UNCORE_RATIO_LIMIT 0x00000620

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 MaxClrRatio : 7;

                            /* Bits[6:0], Access Type=RW, default=0x00000000*/

                            /*
                               Maximum allowed ratio for the Ring and Last
                               Level Cache (LLC)
                            */
    UINT32 Rsvd7 : 1;

                            /* Bits[7:7], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 MinClrRatio : 7;

                            /* Bits[14:8], Access Type=RW, default=0x00000000*/

                            /*
                               Minimum allowed ratio for the Ring and Last
                               Level Cache (LLC)
                            */
    UINT32 Rsvd15 : 17;

                            /* Bits[31:15], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_UNCORE_RATIO_LIMIT_REGISTER;

/**
  Ring and Last Level Cache Performance Status
**/
#define MSR_UNCORE_PERF_STATUS 0x00000621

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CurrentClrRatio : 7;

                            /* Bits[6:0], Access Type=RO_V, default=0x00000000*/

                            /* Current Ring and Last Level Cache Ratio */
    UINT32 Rsvd7 : 9;

                            /* Bits[15:7], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 LlcRingVoltage : 16;

                            /* Bits[31:16], Access Type=RO_V, default=0x00000000*/

                            /*
                               [p]Indicates the current operating voltage in
                               3.13 format for Ring and LLC[/p] [p]i.e. current
                               voltage = float([47:32] / (2^13))[/p]
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_UNCORE_PERF_STATUS_REGISTER;

/**
  Gives SW ability to trigger a PMReq through Pcode to put the chipset and other devices
  off of the chipset into a low power state.
**/
#define MSR_PCH_EA_CONTROL 0x00000622

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 EaValue : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000001*/

                            /*
                               0x0: Tell PCH that cores are not executing 0x1:
                               Tell PCH that cores are executing/Disable
                               Feature
                            */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PCH_EA_CONTROL_REGISTER;

/**
  Reflect the value of control when PCH has responded to request from PCH_EA_CONTROL.
**/
#define MSR_PCH_EA_STATUS 0x00000623

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 EaStatus : 1;

                            /* Bits[0:0], Access Type=RW_L, default=0x00000001*/

                            /*
                               Reflects back the value of control once PCH has
                               responded to control request.
                            */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PCH_EA_STATUS_REGISTER;

/**
  Time spent in the Package C-State.  It is given in units compatible to P1 clock frequency (Guaranteed / Maximum Core Non-Turbo Frequency).
  This time will be updated by PCODE only after the C-State exit (the update of this register has lower priority than actually ensuring that the C-State exit occurs).
  For C2, this value includes any forced or popup time from other states.
  For C3/C6/C7/C8/C9/C10, this value does not include popup periods, but advances even if VR actions are disabled.
**/
#define MSR_PC8_RCNTR 0x00000630

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Data1 : 28;

                            /* Bits[59:32], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Rsvd60 : 4;

                            /* Bits[63:60], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PC8_RCNTR_REGISTER;

/**
  Time spent in the Package C-State.  It is given in units compatible to P1 clock frequency (Guaranteed / Maximum Core Non-Turbo Frequency).
  This time will be updated by PCODE only after the C-State exit (the update of this register has lower priority than actually ensuring that the C-State exit occurs).
  For C2, this value includes any forced or popup time from other states.
  For C3/C6/C7/C8/C9/C10, this value does not include popup periods, but advances even if VR actions are disabled.
**/
#define MSR_PC9_RCNTR 0x00000631

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Data1 : 28;

                            /* Bits[59:32], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Rsvd60 : 4;

                            /* Bits[63:60], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PC9_RCNTR_REGISTER;

/**
  Time spent in the Package C-State.  It is given in units compatible to P1 clock frequency (Guaranteed / Maximum Core Non-Turbo Frequency).
  This time will be updated by PCODE only after the C-State exit (the update of this register has lower priority than actually ensuring that the C-State exit occurs).
  For C2, this value includes any forced or popup time from other states.
  For C3/C6/C7/C8/C9/C10, this value does not include popup periods, but advances even if VR actions are disabled.
**/
#define MSR_PC10_RCNTR 0x00000632

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Data1 : 28;

                            /* Bits[59:32], Access Type=RW, default=0x00000000*/

                            /* Counter Value */
    UINT32 Rsvd60 : 4;

                            /* Bits[63:60], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PC10_RCNTR_REGISTER;

/**
  The coordinated Package-Additive (above the core) Interrupt Response Time is used for BIOS runtime control.  This setting affects the selected package state.
**/
#define MSR_C_STATE_LATENCY_CONTROL_3 0x00000633

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Value : 10;

                            /* Bits[9:0], Access Type=RW, default=0x00000000*/

                            /*
                               The Interrupt Response Time Limit is given in
                               units defined in the Multipler field of this
                               register.
                            */
    UINT32 Multiplier : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               This field indicates the unit of measurement
                               that is defined for the Value field in this
                               register.
                            */
    UINT32 Rsvd13 : 2;

                            /* Bits[14:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Valid : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               This field qualifies the validity of the Value
                               field in this register.
                            */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_C_STATE_LATENCY_CONTROL_3_REGISTER;

/**
  The coordinated Package-Additive (above the core) Interrupt Response Time is used for BIOS runtime control.  This setting affects the selected package state.
**/
#define MSR_C_STATE_LATENCY_CONTROL_4 0x00000634

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Value : 10;

                            /* Bits[9:0], Access Type=RW, default=0x00000000*/

                            /*
                               The Interrupt Response Time Limit is given in
                               units defined in the Multipler field of this
                               register.
                            */
    UINT32 Multiplier : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               This field indicates the unit of measurement
                               that is defined for the Value field in this
                               register.
                            */
    UINT32 Rsvd13 : 2;

                            /* Bits[14:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Valid : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               This field qualifies the validity of the Value
                               field in this register.
                            */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_C_STATE_LATENCY_CONTROL_4_REGISTER;

/**
  The coordinated Package-Additive (above the core) Interrupt Response Time is used for BIOS runtime control.  This setting affects the selected package state.
**/
#define MSR_C_STATE_LATENCY_CONTROL_5 0x00000635

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Value : 10;

                            /* Bits[9:0], Access Type=RW, default=0x00000000*/

                            /*
                               The Interrupt Response Time Limit is given in
                               units defined in the Multipler field of this
                               register.
                            */
    UINT32 Multiplier : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               This field indicates the unit of measurement
                               that is defined for the Value field in this
                               register.
                            */
    UINT32 Rsvd13 : 2;

                            /* Bits[14:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Valid : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               This field qualifies the validity of the Value
                               field in this register.
                            */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_C_STATE_LATENCY_CONTROL_5_REGISTER;

/**
  Input voltage regulator configuration parameters.
**/
#define MSR_VR_MISC_CONFIG2 0x00000636

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 FastRampVoltage : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /*
                               This is the maximum voltage that the CPU can
                               ramp at the fast rate to.
                            */
    UINT32 MinC8Voltage : 8;

                            /* Bits[15:8], Access Type=RW, default=0x00000000*/

                            /*
                               Used to constrain the CPU's minimum voltage
                               during package C8 C-state. The default setting
                               of 0x00 will result in full CPU control over the
                               minimum VID. VID resolution is 10mV / LSB. This
                               is internally clipped by fuses to the C8 voltage
                            */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_VR_MISC_CONFIG2_REGISTER;

/**
  This register is used by BIOS/OS/Integrated Graphics Driver/CPM Driver to limit the power budget of the Primary Power Plane.
  The overall package turbo power limitation is controlled by PACKAGE_RAPL_LIMIT.
**/
#define MSR_PRIMARY_PLANE_TURBO_POWER_LIMIT 0x00000638

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 IaPpPwrLim : 15;

                            /* Bits[14:0], Access Type=RW_L, default=0x00000000*/

                            /*
                               This is the power limitation on the IA cores
                               power plane. The unit of measurement is defined
                               in PACKAGE_POWER_SKU_UNIT_MSR[PWR_UNIT].
                            */
    UINT32 PwrLimCtrlEn : 1;

                            /* Bits[15:15], Access Type=RW_L, default=0x00000000*/

                            /*
                               This bit must be set in order to limit the power
                               of the IA cores power plane. 0b IA cores power
                               plane power limitation is disabled 1b IA cores
                               power plane power limitation is enabled
                            */
    UINT32 PpClampLim : 1;

                            /* Bits[16:16], Access Type=RW_L, default=0x00000000*/

                            /*
                               Power Plane Clamping limitation - Allow going
                               below P1. 0b PBM is limited between P1 and P0.
                               1b PBM can go below P1.
                            */
    UINT32 CtrlTimeWin : 7;

                            /* Bits[23:17], Access Type=RW_L, default=0x00000000*/

                            /*
                               x = CTRL_TIME_WIN[23:22] y =
                               CTRL_TIME_WIN[21:17] The timing interval window
                               is Floating Point number given by 1.x *
                               power(2,y). The unit of measurement is defined
                               in PACKAGE_POWER_SKU_UNIT_MSR[TIME_UNIT]. The
                               maximal time window is bounded by
                               PACKAGE_POWER_SKU_MSR[PKG_MAX_WIN]. The minimum
                               time window is 1 unit of measurement (as defined
                               above).
                            */
    UINT32 Rsvd24 : 7;

                            /* Bits[30:24], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PpPwrLimLock : 1;

                            /* Bits[31:31], Access Type=RW_KL, default=0x00000000*/

                            /*
                               When set, all settings in this register are
                               locked and are treated as Read Only.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PRIMARY_PLANE_TURBO_POWER_LIMIT_REGISTER;
/**
  Reports total energy consumed.  The counter will wrap around and continue counting when it reaches its limit.
  The energy status is reported in units which are defined in PACKAGE_POWER_SKU_UNIT_MSR[ENERGY_UNIT].
  SW will read this value and subtract the difference from last value read. The value of this register is updated every 1mSec.
**/
#define MSR_PRIMARY_PLANE_ENERGY_STATUS 0x00000639

/**
  The PRIMARY_PLANE_TURBO_POWER_POLICY and SECONDARY_PLANE_TURBO_POWER_POLICY are used together to balance the power budget betwen the two power planes.
  The power plane with the higher policy will get a higher priority.  The default value will aim to maintain same ratio for IA and GT.
**/
#define MSR_PRIMARY_PLANE_TURBO_POWER_POLICY 0x0000063A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Priptp : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000000*/

                            /*
                               Priority Level. A higher number implies a higher
                               priority.
                            */
    UINT32 Rsvd5 : 27;

                            /* Bits[31:5], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PRIMARY_PLANE_TURBO_POWER_POLICY_REGISTER;
/**
  Memory RAPL performance excursion counter.  This register can report the performance impact of power limiting.
**/
#define MSR_PRIMARY_PLANE_OVERFLOW_STATUS 0x0000063B

/**
  This register is used by BIOS/OS/Integrated Graphics Driver/CPM Driver to limit the power budget of the Secondary Power Plane.
  The overall package turbo power limitation is controlled by PACKAGE_RAPL_LIMIT.
**/
#define MSR_SECONDARY_PLANE_TURBO_POWER_LIMIT 0x00000640

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 NonIaPpPwrLim : 15;

                            /* Bits[14:0], Access Type=RW_L, default=0x00000000*/

                            /*
                               This is the power limitation on the Non-IA cores
                               power plane. The unit of measurement is defined
                               in PACKAGE_POWER_SKU_UNIT_MSR[PWR_UNIT].
                            */
    UINT32 PwrLimCtrlEn : 1;

                            /* Bits[15:15], Access Type=RW_L, default=0x00000000*/

                            /*
                               This bit must be set in order to limit the power
                               of the Non-IA cores power plane. 0b Non-IA cores
                               power plane power limitation is disabled 1b Non-
                               IA cores power plane power limitation is enabled
                            */
    UINT32 PpClampLim : 1;

                            /* Bits[16:16], Access Type=RW_L, default=0x00000000*/

                            /*
                               Power Plane Clamping limitation - Allow going
                               below P1. 0b PBM is limited between P1 and P0.
                               1b PBM can go below P1.
                            */
    UINT32 CtrlTimeWin : 7;

                            /* Bits[23:17], Access Type=RW_L, default=0x00000000*/

                            /*
                               x = CTRL_TIME_WIN[23:22] y =
                               CTRL_TIME_WIN[21:17] The timing interval window
                               is Floating Point number given by 1.x *
                               power(2,y). The unit of measurement is defined
                               in PACKAGE_POWER_SKU_UNIT_MSR[TIME_UNIT]. The
                               maximal time window is bounded by
                               PACKAGE_POWER_SKU_MSR[PKG_MAX_WIN]. The minimum
                               time window is 1 unit of measurement (as defined
                               above).
                            */
    UINT32 Rsvd24 : 7;

                            /* Bits[30:24], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 SpPwrLimLock : 1;

                            /* Bits[31:31], Access Type=RW_KL, default=0x00000000*/

                            /*
                               When set, all settings in this register are
                               locked and are treated as Read Only.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SECONDARY_PLANE_TURBO_POWER_LIMIT_REGISTER;
/**
  Reports total energy consumed.  The counter will wrap around and continue counting when it reaches its limit.
  The energy status is reported in units which are defined in PACKAGE_POWER_SKU_UNIT_MSR[ENERGY_UNIT].
  SW will read this value and subtract the difference from last value read. The value of this register is updated every 1mSec.
**/
#define MSR_SECONDARY_PLANE_ENERGY_STATUS 0x00000641

/**
  The PRIMARY_PLANE_TURBO_POWER_POLICY and SECONDARY_PLANE_TURBO_POWER_POLICY are used together to balance the power budget betwen the two power planes.
  The power plane with the higher policy will get a higher priority.  The default value will aim to maintain same ratio for IA and GT.
**/
#define MSR_SECONDARY_PLANE_TURBO_POWER_POLICY 0x00000642

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Secptp : 5;

                            /* Bits[4:0], Access Type=RW, default=0x00000010*/

                            /*
                               Priority Level. A higher number implies a higher
                               priority.
                            */
    UINT32 Rsvd5 : 27;

                            /* Bits[31:5], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SECONDARY_PLANE_TURBO_POWER_POLICY_REGISTER;

/**
  This register is used to indicate the Nominal Configurable TDP ratio available for this
  specific sku. System BIOS must use this value while building the _PSS table if the feature is enabled.
**/
#define MSR_CONFIG_TDP_NOMINAL 0x00000648

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 TdpRatio : 8;

                            /* Bits[7:0], Access Type=RO_V, default=0x00000000*/

                            /*
                               Nominal TDP level ratio to be used for this
                               specific processor (in units of 100 MHz). Note:
                               A value of 0 in this field indicates
                               invalid/undefined TDP point
                            */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CONFIG_TDP_NOMINAL_REGISTER;

/**
  Level 1 configurable TDP settings
**/
#define MSR_CONFIG_TDP_LEVEL1 0x00000649

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PkgTdp : 15;

                            /* Bits[14:0], Access Type=RO_V, default=0x00000000*/

                            /*
                               Power for this TDP level. Units defined in
                               PACKAGE_POWER_SKU_MSR[PWR_UNIT] Similar to
                               PACKAGE_POWER_SKU[PKG_TDP]
                            */
    UINT32 Rsvd15 : 1;

                            /* Bits[15:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 TdpRatio : 8;

                            /* Bits[23:16], Access Type=RO_V, default=0x00000000*/

                            /* TDP ratio for config tdp level 1. */
    UINT32 Rsvd24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PkgMaxPwr : 15;

                            /* Bits[46:32], Access Type=RO_V, default=0x00000000*/

                            /*
                               Max pkg power setting allowed for this config
                               TDP level1. Higher values will be clamped down
                               to this value. Units defined in
                               PACKAGE_POWER_SKU_MSR[PWR_UNIT]. Similar to
                               PACKAGE_POWER_SKU[PKG_MAX_PWR].
                            */
    UINT32 Rsvd47 : 1;

                            /* Bits[47:47], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PkgMinPwr : 15;

                            /* Bits[62:48], Access Type=RO_V, default=0x00000000*/

                            /*
                               Min pkg power setting allowed for this config
                               TDP level. Lower values will be clamped up to
                               this value. Units defined in
                               PACKAGE_POWER_SKU_MSR[PWR_UNIT]. Similar to
                               PACKAGE_POWER_SKU[PKG_MIN_PWR].
                            */
    UINT32 Rsvd63 : 1;

                            /* Bits[63:63], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CONFIG_TDP_LEVEL1_REGISTER;

/**
  Level 2 configurable TDP settings
**/
#define MSR_CONFIG_TDP_LEVEL2 0x0000064A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PkgTdp : 15;

                            /* Bits[14:0], Access Type=RO_V, default=0x00000000*/

                            /*
                               Power for this TDP level. Units defined in
                               PACKAGE_POWER_SKU_MSR[PWR_UNIT] Similar to
                               PACKAGE_POWER_SKU[PKG_TDP].
                            */
    UINT32 Rsvd15 : 1;

                            /* Bits[15:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 TdpRatio : 8;

                            /* Bits[23:16], Access Type=RO_V, default=0x00000000*/

                            /* TDP ratio for level 2. */
    UINT32 Rsvd24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PkgMaxPwr : 15;

                            /* Bits[46:32], Access Type=RO_V, default=0x00000000*/

                            /*
                               Max pkg power setting allowed for config TDP
                               level 2. Higher values will be clamped down to
                               this value. Units defined in
                               PACKAGE_POWER_SKU_MSR[PWR_UNIT]. Similar to
                               PACKAGE_POWER_SKU[PKG_MAX_PWR].
                            */
    UINT32 Rsvd47 : 1;

                            /* Bits[47:47], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PkgMinPwr : 15;

                            /* Bits[62:48], Access Type=RO_V, default=0x00000000*/

                            /*
                               Min pkg power setting allowed for this config
                               TDP level 2. Lower values will be clamped up to
                               this value. Units defined in
                               PACKAGE_POWER_SKU_MSR[PWR_UNIT]. Similar to
                               PACKAGE_POWER_SKU[PKG_MIN_PWR].
                            */
    UINT32 Rsvd63 : 1;

                            /* Bits[63:63], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CONFIG_TDP_LEVEL2_REGISTER;

/**
  Rd/Wr register to allow platform SW to select TDP point and set lock
**/
#define MSR_CONFIG_TDP_CONTROL 0x0000064B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 TdpLevel : 2;

                            /* Bits[1:0], Access Type=RWS_L, default=0x00000000*/

                            /*
                               Config TDP level selected 0 = nominal TDP level
                               (default) 1 = Level from CONFIG_TDP_LEVEL_1 2 =
                               Level from CONFIG_TDP_LEVEL_2 3 = reserved
                            */
    UINT32 Rsvd2 : 29;

                            /* Bits[30:2], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ConfigTdpLock : 1;

                            /* Bits[31:31], Access Type=RWS_KL, default=0x00000000*/

                            /*
                               Config TDP level select lock 0 - unlocked. 1 -
                               locked till next reset.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_CONFIG_TDP_CONTROL_REGISTER;

/**
  indicate the new maximum non-turbo
  ratio to be used by the processor. Attempts to write to this MSR when the
  PLATFORM_INFO[34:33] ==0, may result in a GP fault#.
**/
#define MSR_TURBO_ACTIVATION_RATIO 0x0000064C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 MaxNonTurboRatio : 8;

                            /* Bits[7:0], Access Type=RWS_L, default=0x00000000*/

                            /*
                               System BIOS can program this field to indicate
                               the new Max non turbo ratio (in units of 100
                               MHz). All P state requests above this ratio is
                               considered as Max Turbo ratio request. Note: A
                               value of 0 would indicate the feature is
                               disabled
                            */
    UINT32 Rsvd8 : 23;

                            /* Bits[30:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 TurboActivationRatioLock : 1;

                            /* Bits[31:31], Access Type=RWS_KL, default=0x00000000*/

                            /*
                               When this bit is set it indicates that the
                               contents of this register is locked. This bit is
                               cleared only on a reset.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_TURBO_ACTIVATION_RATIO_REGISTER;
/**
  Reports the actual energy used by the platform
**/
#define MSR_PLATFORM_ENERGY_STATUS 0x0000064D

/**
  Interface to allow software to determine what is causing resolved frequency to be clamped
  below the requested frequency. Status bits are updated by pcode through the io interface IO_IA_PERF_LIMIT,
  log bits are set by hw on a status bit edge dected and cleared by a SW write of '0'.
**/
#define MSR_IA_PERF_LIMIT_REASONS 0x0000064F

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Prochot : 1;

                            /* Bits[0:0], Access Type=RO, default=0x00000000*/

                            /*
                               PROCHOT# Status, RO, When set by PCODE indicates
                               that PROCHOT# has cause IA frequency clipping
                            */
    UINT32 Thermal : 1;

                            /* Bits[1:1], Access Type=RO, default=0x00000000*/

                            /*
                               Thermal Status, RO, When set by PCODE indicates
                               that Thermal event has cause IA frequency
                               clipping
                            */
    UINT32 SpareIa2 : 1;

                            /* Bits[2:2], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 SpareIa3 : 1;

                            /* Bits[3:3], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 RsrLimit : 1;

                            /* Bits[4:4], Access Type=RO, default=0x00000000*/

                            /*
                               Reliability stress Restrictor Status, RO, When
                               set by PCODE indicates that Reliability stress
                               restrictor has cause IA frequency clipping
                            */
    UINT32 Ratl : 1;

                            /* Bits[5:5], Access Type=RO, default=0x00000000*/

                            /*
                               Running average thermal limit Status, R0, When
                               set by PCODE indicates that Running average
                               thermal limit has cause IA frequency clipping
                            */
    UINT32 VrThermalert : 1;

                            /* Bits[6:6], Access Type=RO, default=0x00000000*/

                            /*
                               Hot VR (any processor VR) Status, RO, When set
                               by PCODE indicates that Hot VR (any processor
                               VR) has cause IA frequency clipping
                            */
    UINT32 VrTdc : 1;

                            /* Bits[7:7], Access Type=RO, default=0x00000000*/

                            /*
                               VR TDC (Thermal design current) Status, RO, When
                               set by PCODE indicates that VR TDC (Thermal
                               design current has cause IA frequency clipping
                            */
    UINT32 Other : 1;

                            /* Bits[8:8], Access Type=RO, default=0x00000000*/

                            /*
                               Other (IccMax, PL4, etc) Status, RO, When set by
                               PCODE indicates that other has cause reason IA
                               frequency clipping
                            */
    UINT32 SpareIa9 : 1;

                            /* Bits[9:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 PbmPl1 : 1;

                            /* Bits[10:10], Access Type=RO, default=0x00000000*/

                            /*
                               PBM PL1 (pkg, platform), RO, When set by PCODE
                               indicates that PBM PL1 (package or platform PL1)
                               has cause IA frequency clipping
                            */
    UINT32 PbmPl2 : 1;

                            /* Bits[11:11], Access Type=RO, default=0x00000000*/

                            /*
                               PBM PL2, PL3 (pkg, platform) Status, RO, When
                               set by PCODE indicates that PBM PL2 or
                               PL3(package or platform PL2 or PL3) has cause IA
                               frequency clipping
                            */
    UINT32 MaxTurboLimit : 1;

                            /* Bits[12:12], Access Type=RO, default=0x00000000*/

                            /*
                               Max turbo limit Status, RO, When set by PCODE
                               indicates that Max turbo limit has cause IA
                               frequency clipping
                            */
    UINT32 TurboAtten : 1;

                            /* Bits[13:13], Access Type=RO, default=0x00000000*/

                            /*
                               Turbo attenuation (multi core turbo) Status, RO,
                               When set by PCODE indicates that Turbo
                               attenuation (multi core turbo) has cause IA
                               frequency clipping
                            */
    UINT32 SpareIa14 : 1;

                            /* Bits[14:14], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 SpareIa15 : 1;

                            /* Bits[15:15], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 ProchotLog : 1;

                            /* Bits[16:16], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               PROCHOT# Log, RW, When set by PCODE indicates
                               that PROCHOT# has cause IA frequency clipping.
                               Software should write to this bit to clear the
                               status in this bit
                            */
    UINT32 ThermalLog : 1;

                            /* Bits[17:17], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               Thermal Log, RW, When set by PCODE indicates
                               that Thermal event has cause IA frequency
                               clipping. Software should write to this bit to
                               clear the status in this bit
                            */
    UINT32 SpareIa2Log : 1;

                            /* Bits[18:18], Access Type=RW0C_FW, default=0x00000000*/

                            /* Reserved */
    UINT32 SpareIa3Log : 1;

                            /* Bits[19:19], Access Type=RW0C_FW, default=0x00000000*/

                            /* Reserved */
    UINT32 RsrLimitLog : 1;

                            /* Bits[20:20], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               Reliability stress restrictor Log, RW, When set
                               by PCODE indicates that Reliability stress
                               restrictor has cause IA frequency clipping.
                               Software should write to this bit to clear the
                               status in this bit
                            */
    UINT32 RatlLog : 1;

                            /* Bits[21:21], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               Running average thermal limit Log, RW, When set
                               by PCODE indicates that Running average thermal
                               limit has cause IA frequency clipping. Software
                               should write to this bit to clear the status in
                               this bit
                            */
    UINT32 VrThermalertLog : 1;

                            /* Bits[22:22], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               Hot VR (any processor VR) Log, RW, When set by
                               PCODE indicates that Hot VR (any processor VR)
                               has cause IA frequency clipping. Software should
                               write to this bit to clear the status in this
                               bit
                            */
    UINT32 VrTdcLog : 1;

                            /* Bits[23:23], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               VR TDC (Thermal design current) Log, RW, When
                               set by PCODE indicates that VR TDC (Thermal
                               design current has cause IA frequency clipping.
                               Software should write to this bit to clear the
                               status in this bit
                            */
    UINT32 OtherLog : 1;

                            /* Bits[24:24], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               Other (IccMax, PL4, etc) Log, RW, When set by
                               PCODE indicates that other has cause reason IA
                               frequency clipping. Software should write to
                               this bit to clear the status in this bit
                            */
    UINT32 SpareIa9Log : 1;

                            /* Bits[25:25], Access Type=RW0C_FW, default=0x00000000*/

                            /* Reserved */
    UINT32 PbmPl1Log : 1;

                            /* Bits[26:26], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               PBM PL1 (pkg, platform) Log, RW, When set by
                               PCODE indicates that PBM PL1 (package or
                               platform PL1) has cause IA frequency clipping.
                               Software should write to this bit to clear the
                               status in this bit
                            */
    UINT32 PbmPl2Log : 1;

                            /* Bits[27:27], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               PBM PL2, PL3 (pkg, platform) Log, RW, When set
                               by PCODE indicates that PBM PL2 or PL3(package
                               or platform PL2 or PL3) has cause IA frequency
                               clipping. Software should write to this bit to
                               clear the status in this bit
                            */
    UINT32 MaxTurboLimitLog : 1;

                            /* Bits[28:28], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               Max turbo limit Log, RW, When set by PCODE
                               indicates that Max turbo limit has cause IA
                               frequency clipping. Software should write to
                               this bit to clear the status in this bit
                            */
    UINT32 TurboAttenLog : 1;

                            /* Bits[29:29], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               Turbo attenuation (multi core turbo) Log, RW,
                               When set by PCODE indicates that Turbo
                               attenuation (multi core turbo) has cause IA
                               frequency clipping. Software should write to
                               this bit to clear the status in this bit
                            */
    UINT32 SpareIa14Log : 1;

                            /* Bits[30:30], Access Type=RW0C_FW, default=0x00000000*/

                            /* Reserved */
    UINT32 SpareIa15Log : 1;

                            /* Bits[31:31], Access Type=RW0C_FW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IA_PERF_LIMIT_REASONS_REGISTER;

/**
  MSR Name: PKG_HDC_CONFIG_CONTROL,
  Enables tune  options for the  HDC operation.
**/
#define MSR_PKG_SDC_CONFIG_CONTROL 0x00000652

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 SdcCxMonitor : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000002*/

                            /*
                               HDC_CX_MONITOR, Controls the
                               PKG_HDC_DEEP_RESIDENCY the Cx threshold that >=
                               counts pkg Cx residency due forced idle Cx
                               event: 0x0 no-counting, 0x1 PC2R only, 0x2 PC3
                               and deep, 0x3 PC6 and deep, 0x4 PC7 and deep.
                               Default=0x0
                            */
    UINT32 SdcMcntCountMethod : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               SDC_MCNT_COUNT_METHOD, Controls if MCNT will
                               increment or not during HDC forced idle time
                               (default=0 meaning 'tick')
                            */
    UINT32 SdcRespectOsMin : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               HDC_RESPECT_OS_MIN,HDC Direct control under HWP
                               Minimal, Direct control, is limited by the ratio
                               between most efferent frequency to the OS
                               minimal frequency setting via legacy P state or
                               HWP interfaces. Set this bit will disable this
                               control method
                            */
    UINT32 SdcMaxForceIdleDurationTime : 6;

                            /* Bits[10:5], Access Type=RW, default=0x00000000*/

                            /*
                               HDC_MAX_FORCE_IDLE_DURATION_TIME, Limits the HDC
                               max duration idle time (50usec units). The
                               default value is 0x0, meaning min HDC duty
                               cycles idle time default value to be set by
                               pcode (e.g. 800usec)
                            */
    UINT32 Spare2 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /* SPARE2. */
    UINT32 SdcDirectControl : 7;

                            /* Bits[18:12], Access Type=RW, default=0x00000000*/

                            /*
                               HDC_DIRECT_CONTRO, overrides the H/W Heuristics
                               with S/W defined HDC control %. The units are 1/
                               127 (0x7F=100%). A value of 0x0 means that HDC
                               is not requested. HDC due to RAPL power
                               limitation will not be affected by this setting.
                            */
    UINT32 MinActiveTime : 8;

                            /* Bits[26:19], Access Type=RW, default=0x00000000*/

                            /*
                               Limits the forced idle min duration active time
                               (50usec units) starting 100usec as the lowest
                               value. The default value is 0x0, means min HDC
                               duty cycles active time default value to be set
                               by pcode (e.g. 250usec). Default value is 0x0.
                            */
    UINT32 Spare3 : 5;

                            /* Bits[31:27], Access Type=RW, default=0x00000000*/

                            /* SPARE3. */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PKG_SDC_CONFIG_CONTROL_REGISTER;
/**
  Core SDC Residency counter
**/
#define MSR_CORE_SDC_RESIDENCY 0x00000653

/**
  Contains software threads information for the current ia_thread.
**/
#define MSR_THREAD_INFO 0x00000654

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ProcessId : 20;

                            /* Bits[19:0], Access Type=RW, default=0x00000000*/

                            /*
                               S/W Process ID (R/W): monitor the process the
                               current thread belongs to
                            */
    UINT32 ThreadPriority : 4;

                            /* Bits[23:20], Access Type=RW, default=0x00000000*/

                            /*
                               Thread priority: Lowest - 0, priority - 15:
                               Highest priority
                            */
    UINT32 ThreadProcessType : 8;

                            /* Bits[31:24], Access Type=RW, default=0x00000000*/

                            /*
                               Multi-Threaded: 0x1, Process Uses GFX: 0x2,
                               Consumer/Producer: 0x3
                            */
    UINT32 SwThreadId : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* S/W Thread ID (R/W): monitor the current thread */
    UINT32 Spare : 12;

                            /* Bits[63:52], Access Type=RW, default=0x00000000*/

                            /* Spare */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_THREAD_INFO_REGISTER;
/**
  MSR Name: PKG_HDC_SHALLOW_RESIDENCY, PKG shallow CX cycles Residency Counter.
**/
#define MSR_PKG_SDC_SHALLOW_RESIDENCY 0x00000655
/**
  MSR Name: PKG_HDC_DEEP_RESIDENCY
  PKG Deep CX duty cycles Residency Counter
**/
#define MSR_PKG_SDC_DEEP_RESIDENCY 0x00000656
/**
  Sum the cycles per number of  active cores
**/
#define MSR_PKG_IA_C0_ANY_SUM 0x00000658
/**
  C0.Any - Sum the cycles of any active cores.
**/
#define MSR_PKG_IA_C0_ANY 0x00000659
/**
  Sum the cycles of active GT
**/
#define MSR_PKG_GT_C0_ANY 0x0000065A
/**
  Sum the cycles of overlap time between any IA cores and GT
**/
#define MSR_PKG_GT_AND_IA_OVERLAP 0x0000065B

/**
  Platform power limit
**/
#define MSR_PLATFORM_POWER_LIMIT 0x0000065C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PowerLimit1 : 15;

                            /* Bits[14:0], Access Type=RW_L, default=0x00000000*/

                            /*
                               Average Power limit value which the Platform
                               must not exceed over a time window as specified
                               by Power_Limit_1_TIME field above.
                            */
    UINT32 PowerLimit1En : 1;

                            /* Bits[15:15], Access Type=RW_L, default=0x00000000*/

                            /*
                               When set, enables processor to apply control
                               policies such that the Platform average power
                               does not exceed Power_Limit_1 value over an
                               exponential weighted moving average of the time
                               window.
                            */
    UINT32 CriticalPowerClamp1 : 1;

                            /* Bits[16:16], Access Type=RW_L, default=0x00000000*/

                            /*
                               When set, allows processor to go below the OS
                               requested P States in order to maintain the
                               power below Power_Limit_1 value specified below.
                            */
    UINT32 PowerLimit1Time : 7;

                            /* Bits[23:17], Access Type=RW_L, default=0x0000000A*/

                            /*
                               This indicates the time window over which
                               Power_Limit_1 value should be maintained.
                            */
    UINT32 Rsvd24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PowerLimit2 : 15;

                            /* Bits[46:32], Access Type=RW_L, default=0x00000000*/

                            /*
                               Duration Power limit value which the Platform
                               must not exceed. This field is specified in the
                               units as identified by the
                               PALTFORM_POWER_SKU_UNIT (MSR606h).
                            */
    UINT32 PowerLimit2En : 1;

                            /* Bits[47:47], Access Type=RW_L, default=0x00000000*/

                            /*
                               When set, enables processor to apply control
                               policies such that the platform power does not
                               exceed Power_Limit_2 value.
                            */
    UINT32 CriticalPowerClamp2 : 1;

                            /* Bits[48:48], Access Type=RW_L, default=0x00000000*/

                            /*
                               When set, allows processor to go below the OS
                               requested P States in order to maintain the
                               power below Power_Limit_2 value specified below.
                            */
    UINT32 Rsvd49 : 14;

                            /* Bits[62:49], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Lock : 1;

                            /* Bits[63:63], Access Type=RW_KL, default=0x00000000*/

                            /* Locks all other fields. */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PLATFORM_POWER_LIMIT_REGISTER;

/**
  FAST_UNCORE_MSRS _STATUS, Eanble coplition deliver status report
**/
#define MSR_DISTRIBUTED_STATUS 0x0000065E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Cr0 : 1;

                            /* Bits[0:0], Access Type=RO_V, default=0x00000000*/

                            /*
                               indicates whether the CPU is in the middle of
                               distribute the IA32_HWP_REQUEST MSR. 1= the
                               distribute of the last WRMSR for
                               IA32_HWP_REQUEST is still ongoing. 0 = the
                               distribute of the last WRMSR for
                               IA32_HWP_REQUEST is done or not yet happened
                            */
    UINT32 Cr1 : 1;

                            /* Bits[1:1], Access Type=RO_V, default=0x00000000*/

                            /* CR1 Dirty Bit */
    UINT32 Cr2 : 1;

                            /* Bits[2:2], Access Type=RO_V, default=0x00000000*/

                            /* CR2 Dirty Bit */
    UINT32 Cr3 : 1;

                            /* Bits[3:3], Access Type=RO_V, default=0x00000000*/

                            /* CR3 Dirty Bit */
    UINT32 Rsvd4 : 28;

                            /* Bits[31:4], Access Type=RO_V, default=0x00000000*/

                            /* Status CR rsvd Bits */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_DISTRIBUTED_STATUS_REGISTER;

/**
  Fast wrmsr/rdmsr enumeration MSR. This is read-only MSR. Each bit refers to one MSR and indicate if this MSR is enabled to be use in FAST_UNCORE_MSRS.
**/
#define MSR_FAST_UNCORE_MSRS_CAPABILITY 0x0000065F

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 MsrsCapability : 4;

                            /* Bits[3:0], Access Type=RO_V, default=None*/

                            /*
                               Bit 0 - If set (1), HW supports the fast access
                               mode for IA32_HWP_REQUEST MSR
                            */
    UINT32 Rsvd4 : 28;

                            /* Bits[31:4], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_FAST_UNCORE_MSRS_CAPABILITY_REGISTER;
/**
  Core C1 Residency counter
**/
#define MSR_CORE_C1_RESIDENCY 0x00000660

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_0_0 0x00000680

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_0_0_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_1_1 0x00000681

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_1_1_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_2_2 0x00000682

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_2_2_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_3_3 0x00000683

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_3_3_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_4_4 0x00000684

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_4_4_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_5_5 0x00000685

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_5_5_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_6_6 0x00000686

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_6_6_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_7_7 0x00000687

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_7_7_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_8_8 0x00000688

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_8_8_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_9_9 0x00000689

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_9_9_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_10_10 0x0000068A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_10_10_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_11_11 0x0000068B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_11_11_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_18_18 0x00000692

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_18_18_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_19_19 0x00000693

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_19_19_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_20_20 0x00000694

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_20_20_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_21_21 0x00000695

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_21_21_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_22_22 0x00000696

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_22_22_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_23_23 0x00000697

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_23_23_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_24_24 0x00000698

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_24_24_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_25_25 0x00000699

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_25_25_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_26_26 0x0000069A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_26_26_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_27_27 0x0000069B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_27_27_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_28_28 0x0000069C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_28_28_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_29_29 0x0000069D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_29_29_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_30_30 0x0000069E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_30_30_REGISTER;

/**
  LBR MSR that holds the from IP, canonical check for write, see Vol 3A
**/
#define MSR_LBR_FROM_IP_31_31 0x0000069F

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* From IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_FROM_IP_31_31_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_0_0 0x000006C0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_0_0_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_1_1 0x000006C1

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_1_1_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_2_2 0x000006C2

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_2_2_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_3_3 0x000006C3

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_3_3_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_4_4 0x000006C4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_4_4_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_5_5 0x000006C5

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_5_5_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_6_6 0x000006C6

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_6_6_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_7_7 0x000006C7

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_7_7_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_8_8 0x000006C8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_8_8_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_9_9 0x000006C9

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_9_9_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_10_10 0x000006CA

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_10_10_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_11_11 0x000006CB

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_11_11_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_12_12 0x000006CC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_12_12_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_13_13 0x000006CD

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_13_13_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_14_14 0x000006CE

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_14_14_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_15_15 0x000006CF

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_15_15_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_16_16 0x000006D0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_16_16_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_17_17 0x000006D1

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_17_17_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_18_18 0x000006D2

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_18_18_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_19_19 0x000006D3

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_19_19_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_20_20 0x000006D4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_20_20_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_21_21 0x000006D5

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_21_21_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_22_22 0x000006D6

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_22_22_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_23_23 0x000006D7

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_23_23_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_24_24 0x000006D8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_24_24_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_25_25 0x000006D9

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_25_25_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_26_26 0x000006DA

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_26_26_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_27_27 0x000006DB

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_27_27_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_28_28 0x000006DC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_28_28_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_29_29 0x000006DD

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_29_29_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_30_30 0x000006DE

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_30_30_REGISTER;

/**
  LBR MSR that holds the from IP
**/
#define MSR_LBR_TO_IP_31_31 0x000006DF

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Data0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 Data1 : 25;

                            /* Bits[56:32], Access Type=RW_V, default=None*/

                            /* Target IP */
    UINT32 SignExt : 7;

                            /* Bits[63:57], Access Type=RO_V, default=None*/

                            /*
                               sign extension of bit 56 (VAPA fuse-enabled) or
                               bit 47 (VAPA fuse-disabled)
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_TO_IP_31_31_REGISTER;

/**
  Holds global control fields for the NCU PMON counters.
  All fields in this reigster must be reset when LT_CONTROL_MSR[LTPmonCtrClr] is set to 1b.
**/
#define MSR_NCUPMONCTRLGLCTR 0x00000707

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Threadid : 4;

                            /* Bits[3:0], Access Type=RW, default=0x00000000*/

                            /*
                               The Thread-ID format is given as follows: [0:0]
                               T0 or T1. For GT Core this bit must be 0. [3:1]
                               Core ID. When "TID Filter Enable" is clear in
                               the Counter Control register, then the specified
                               counter will count all events. Thread-ID value
                               of 0xE is reserved for non-associated requests
                               like LLC victims and External Snoops.
                            */
    UINT32 Rsvd4 : 28;

                            /* Bits[31:4], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_NCUPMONCTRLGLCTR_REGISTER;

/**
  Ubox local PMON mask for NCDEC events
**/
#define MSR_UBOX_PMON_EVENT_NCDEC_MASK_CTL0 0x0000070B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Mask : 25;

                            /* Bits[24:0], Access Type=RWS, default=0x00000000*/

                            /*
                               event mask bit per ring message decode [ 0]
                               PMON_NCDEC_MASK_NCB_Int_CBO_IIO [ 1]
                               PMON_NCDEC_MASK_NCB_Int_UBX_QPI [ 2]
                               PMON_NCDEC_MASK_NCB_P2PB_IIO [ 3]
                               PMON_NCDEC_MASK_NCB_P2PB_CBO_UBX_QPI [ 4]
                               PMON_NCDEC_MASK_NCB_VLW_IIO_CBO [ 5]
                               PMON_NCDEC_MASK_NCB_VLW_UBX_QPI [ 6]
                               PMON_NCDEC_MASK_NCB_EOI_CBO [ 7]
                               PMON_NCDEC_MASK_NCB_EOI_UBX_QPI [ 8]
                               PMON_NCDEC_MASK_NCB_EOI_IIO [ 9]
                               PMON_NCDEC_MASK_NCB_STARTREQ234 [10]
                               PMON_NCDEC_MASK_NCB_PMREQ [11]
                               PMON_NCDEC_MASK_NCB_RSVD [12]
                               PMON_NCDEC_MASK_NCS_CfgRd_Wr [13]
                               PMON_NCDEC_MASK_NCS_IORd_Wr [14]
                               PMON_NCDEC_MASK_NCS_LTRd [15]
                               PMON_NCDEC_MASK_NCS_LTWr_IIO_CBO [16]
                               PMON_NCDEC_MASK_NCS_LTWr_UBX_QPI [17]
                               PMON_NCDEC_MASK_NCS_FERR [18]
                               PMON_NCDEC_MASK_NCS_RSVD [19]
                               PMON_NCDEC_MASK_NCS_SHUTDOWN_CBO [20]
                               PMON_NCDEC_MASK_NCS_LOCKS_UNLOCK_CBO_IIO [21]
                               PMON_NCDEC_MASK_NCS_LOCKS_UNLOCK_UBX_QPI [22]
                               PMON_NCDEC_MASK_NCS_STARTREQ1_STOPREQ1234 [23]
                               PMON_NCDEC_MASK_NCS_INVD_WBINVD_CBO_IIO [24]
                               PMON_NCDEC_MASK_NCS_INVD_WBINVD_UBX_QPI
                            */
    UINT32 Rsvd25 : 7;

                            /* Bits[31:25], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_UBOX_PMON_EVENT_NCDEC_MASK_CTL0_REGISTER;

/**
  Ubox local PMON mask for NCDEC events for subunit target
**/
#define MSR_UBOX_PMON_EVENT_NCDEC_MASK_CTL1 0x0000070C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Mask : 12;

                            /* Bits[11:0], Access Type=RWS, default=0x00000000*/

                            /*
                               event mask bit per sub unit target [ 0] GLOB_INT
                               [ 1] PMREQ [ 2] RACU [ 3] NCEVENT [ 4] NCLOCK [
                               5] GLOB_LOCK [ 6] MAST_LOCK [ 7] NCS_SPEC [ 8]
                               NCB_SPEC [ 9] GLOB_EOI [10] NCEOI [11] DROP
                            */
    UINT32 AddrMask : 16;

                            /* Bits[27:12], Access Type=RWS, default=0x00000000*/

                            /* Register address mask for addr[15:0] */
    UINT32 Rsvd28 : 4;

                            /* Bits[31:28], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_UBOX_PMON_EVENT_NCDEC_MASK_CTL1_REGISTER;

/**
  Address offset match value for Ubox match/mask. Will compare bits that are not masked
**/
#define MSR_UBOX_PMON_EVENT_NCDEC_MATCH_ADDR 0x0000070D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 AddrMatch : 16;

                            /* Bits[15:0], Access Type=RWS, default=0x00000000*/

                            /* Address offset to match */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_UBOX_PMON_EVENT_NCDEC_MATCH_ADDR_REGISTER;
/**
  PMON Global Status register.
  All fields in this reigster must be reset when LT_CONTROL_MSR[LTPmonCntClr] is set to 1b.
**/
#define MSR_NCUPMONGLSTS1 0x0000070F

/**

**/
#define MSR_PCUPMONUNITCTRL 0x00000710

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Resetcounterconfigs : 1;

                            /* Bits[0:0], Access Type=WO, default=0x00000000*/

                            /*
                               When this bit is written to, the counter
                               configuration registers will be reset. This does
                               not effect the values in the counters. This is a
                               WO register, and writing to this bit will
                               trigger a reset for 1 cycle only.
                            */
    UINT32 Resetcounters : 1;

                            /* Bits[1:1], Access Type=WO, default=0x00000000*/

                            /*
                               When this bit is written to, the counters data
                               fields will be reset. The configuration values
                               will not be reset. This is a WO register, and
                               writing to this bit will trigger a reset for 1
                               cycle only.
                            */
    UINT32 Rsvd2 : 6;

                            /* Bits[7:2], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Freezecounters : 1;

                            /* Bits[8:8], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit is written to when the counters should
                               be frozen. If this bit is written to and freeze
                               is enabled, the counters in the unit will stop
                               counting. To freeze the counters, this bit need
                               only be set by one of the unit control
                               registers.
                            */
    UINT32 Rsvd9 : 7;

                            /* Bits[15:9], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Freezeenable : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000001*/

                            /*
                               This bit controls what the counters in the unit
                               will do when they receive a freeze signal. When
                               set, the counters will be allowed to freeze.
                               When not set, the counters will ignore the
                               freeze signal. For freeze to be enabled for a
                               given unit, all of the unit control registers
                               must have this bit set.
                            */
    UINT32 Overflowenable : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000001*/

                            /*
                               This bit controls the behavior of counters when
                               they overflow. When set, the system will trigger
                               the overflow handling process throughout the
                               rest of the uncore, potentially triggering a PMI
                               and freezing counters. When it is not set, the
                               counters will simply wrap around and continue to
                               count. For overflow to be enabled for a given
                               unit, all of the unit control registers must
                               have this bit set.
                            */
    UINT32 Rsvd18 : 14;

                            /* Bits[31:18], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PCUPMONUNITCTRL_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_PCUPMONCNTRCFG_0 0x00000711

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Filtermask : 7;

                            /* Bits[6:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is used to decode the PerfMon event
                               which is selected. The encodings for each of the
                               valid UnCore PerfMon events can be found in the
                               Perfmon HAS and the individual unit HAS
                               documents.
                            */
    UINT32 Useoccupancy : 1;

                            /* Bits[7:7], Access Type=WO, default=0x00000000*/

                            /*
                               When enabled, this will pass the output of the
                               occupancy block through to the counter
                               (dependent on the event occuring). See the HAS
                               for more details.
                            */
    UINT32 Rsvd8 : 6;

                            /* Bits[13:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Occselect : 2;

                            /* Bits[15:14], Access Type=WO, default=0x00000000*/

                            /*
                               Select which of the four occupancy counters to
                               use. 00 - Threads in C0 01 - Cores in C0 10 -
                               Cores in C3 11 - Cores in C6
                            */
    UINT32 Rsvd16 : 1;

                            /* Bits[16:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterreset : 1;

                            /* Bits[17:17], Access Type=WO, default=0x00000000*/

                            /*
                               When this bit is set, the corresponding counter
                               will be reset to 0. This allows for a quick
                               reset of the counter when changing event
                               encodings.
                            */
    UINT32 Edgedetect : 1;

                            /* Bits[18:18], Access Type=WO, default=0x00000000*/

                            /*
                               Edge Detect allows one to count either 0 to 1 or
                               1 to 0 transitions of a given event. For
                               example, we have an event that counts the number
                               of cycles in L0s mode in Intel UPI. By using
                               edge detect, one can count the number of times
                               that we entered L0s mode (by detecting the
                               rising edge). Edge detect only works in
                               conjunction with threshholding. This is true
                               even for events that can only increment by 1 in
                               a given cycle (like the L0s example above). In
                               this case, one should set a threshhold of 1. One
                               can also use Edge Detect with queue occupancy
                               events. For example, if one wanted to count the
                               number of times when the TOR occupancy was
                               larger than 5, one would selet the TOR occupancy
                               event with a threshold of 5 and set the Edge
                               Detect bit. Edge detect can also be used with
                               the invert. This is generally not particularly
                               useful, as the count of falling edges compared
                               to rising edges will always on differ by 1.
                            */
    UINT32 Tidfilterenable : 1;

                            /* Bits[19:19], Access Type=WO, default=0x00000000*/

                            /*
                               ThreadID filter enable. This is only used by
                               Cbo. For other units it is Reserved.
                            */
    UINT32 Overflowenable : 1;

                            /* Bits[20:20], Access Type=WO, default=0x00000000*/

                            /*
                               Setting this bit will enable the counter to send
                               an overflow signal. If this bit is not set, the
                               counter will wrap around when it overflows
                               without triggering anything. If this bit is set
                               and the Units configuration register has
                               overflow enabled, tehn a signal will be
                               transmitted to the Ubox
                            */
    UINT32 Internal : 1;

                            /* Bits[21:21], Access Type=WO, default=0x00000000*/

                            /*
                               This bit needs to be asserted if the event which
                               needs to be selected is an internal event.
                               Internal events are events that are only
                               accessible on unlocked parts. One can basically
                               think of the internal bit as an extension of the
                               event select bits [7:0], as it allows the use to
                               gain access to additional events. It will not be
                               possible to use these events on locked parts.
                               For perfmons that exist in MSR space, the MSR
                               write mask is set on this bit, and the ucode
                               handler will trigger a GP fault if one attempts
                               to write to these bits. Writing to these bits is
                               controlled in other ways in the other units.
                            */
    UINT32 Counterenable : 1;

                            /* Bits[22:22], Access Type=WO, default=0x00000000*/

                            /*
                               This field is the local enable for the PerfMon
                               Counter. This bit must be asserted in order for
                               the PerfMon counter to begin counting the events
                               selected by the event select, unit mask, and
                               internal the events selected by the event
                               select, unit mask, and internal if this bit is
                               set to 1 but the Unit Control Registers have
                               determined that counting is disabled, then the
                               counter will not count.
                            */
    UINT32 Invert : 1;

                            /* Bits[23:23], Access Type=WO, default=0x00000000*/

                            /*
                               This bit indicates how the threshold field will
                               be compared to the incoming event. When 0, the
                               comparison that will be done is threshold >=
                               event. When set to 1, the comparison that will
                               be done is inverted from the case where this bit
                               is set to 0, i.e., threshold event. The invert
                               bit only works when Threshhold != 0. So, if one
                               would like to invert a non-occupancy event (like
                               LLC Hit), one needs to set the threshhold to 1.
                            */
    UINT32 Threshold : 6;

                            /* Bits[29:24], Access Type=WO, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the UnCore is 7bits (queue
                               occupancy), bit 31 is unused. The result of the
                               comparison is effectively a 1 bit wide event,
                               i.e., the counter will be incremented by 1 when
                               the comparison is true (the type of comparison
                               depends on the setting of the 'invert' bit - see
                               bit 23 below) no matter how wide the original
                               event was. When this field is zero, threshold
                               comparison is disabled and the event is passed
                               without modification.
                            */
    UINT32 Occinvert : 1;

                            /* Bits[30:30], Access Type=WO, default=0x00000000*/

                            /*
                               Invert the output of the occupancy threshhold
                               comparison logic. 0 - "greater than or equal to"
                               comparison on the threshhold compare 1 - "less
                               than" comparison on the threshhold compare
                            */
    UINT32 Occedgedetect : 1;

                            /* Bits[31:31], Access Type=WO, default=0x00000000*/

                            /*
                               Enable edge detection on the output of the
                               occupancy threshhold comparison. When enabled
                               and used with the Threshhold logic, this will
                               provide the ability to track the number of times
                               when an occupancy counter exceed or was equal to
                               the value in the threshhold. When used with
                               OccInvert, this will track the number of times
                               when the value dropped below the threshhold.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PCUPMONCNTRCFG_0_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_PCUPMONCNTRCFG_1 0x00000712

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Filtermask : 7;

                            /* Bits[6:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is used to decode the PerfMon event
                               which is selected. The encodings for each of the
                               valid UnCore PerfMon events can be found in the
                               Perfmon HAS and the individual unit HAS
                               documents.
                            */
    UINT32 Useoccupancy : 1;

                            /* Bits[7:7], Access Type=WO, default=0x00000000*/

                            /*
                               When enabled, this will pass the output of the
                               occupancy block through to the counter
                               (dependent on the event occuring). See the HAS
                               for more details.
                            */
    UINT32 Rsvd8 : 6;

                            /* Bits[13:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Occselect : 2;

                            /* Bits[15:14], Access Type=WO, default=0x00000000*/

                            /*
                               Select which of the four occupancy counters to
                               use. 00 - Threads in C0 01 - Cores in C0 10 -
                               Cores in C3 11 - Cores in C6
                            */
    UINT32 Rsvd16 : 1;

                            /* Bits[16:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterreset : 1;

                            /* Bits[17:17], Access Type=WO, default=0x00000000*/

                            /*
                               When this bit is set, the corresponding counter
                               will be reset to 0. This allows for a quick
                               reset of the counter when changing event
                               encodings.
                            */
    UINT32 Edgedetect : 1;

                            /* Bits[18:18], Access Type=WO, default=0x00000000*/

                            /*
                               Edge Detect allows one to count either 0 to 1 or
                               1 to 0 transitions of a given event. For
                               example, we have an event that counts the number
                               of cycles in L0s mode in Intel UPI. By using
                               edge detect, one can count the number of times
                               that we entered L0s mode (by detecting the
                               rising edge). Edge detect only works in
                               conjunction with threshholding. This is true
                               even for events that can only increment by 1 in
                               a given cycle (like the L0s example above). In
                               this case, one should set a threshhold of 1. One
                               can also use Edge Detect with queue occupancy
                               events. For example, if one wanted to count the
                               number of times when the TOR occupancy was
                               larger than 5, one would selet the TOR occupancy
                               event with a threshold of 5 and set the Edge
                               Detect bit. Edge detect can also be used with
                               the invert. This is generally not particularly
                               useful, as the count of falling edges compared
                               to rising edges will always on differ by 1.
                            */
    UINT32 Tidfilterenable : 1;

                            /* Bits[19:19], Access Type=WO, default=0x00000000*/

                            /*
                               ThreadID filter enable. This is only used by
                               Cbo. For other units it is Reserved.
                            */
    UINT32 Overflowenable : 1;

                            /* Bits[20:20], Access Type=WO, default=0x00000000*/

                            /*
                               Setting this bit will enable the counter to send
                               an overflow signal. If this bit is not set, the
                               counter will wrap around when it overflows
                               without triggering anything. If this bit is set
                               and the Units configuration register has
                               overflow enabled, tehn a signal will be
                               transmitted to the Ubox
                            */
    UINT32 Internal : 1;

                            /* Bits[21:21], Access Type=WO, default=0x00000000*/

                            /*
                               This bit needs to be asserted if the event which
                               needs to be selected is an internal event.
                               Internal events are events that are only
                               accessible on unlocked parts. One can basically
                               think of the internal bit as an extension of the
                               event select bits [7:0], as it allows the use to
                               gain access to additional events. It will not be
                               possible to use these events on locked parts.
                               For perfmons that exist in MSR space, the MSR
                               write mask is set on this bit, and the ucode
                               handler will trigger a GP fault if one attempts
                               to write to these bits. Writing to these bits is
                               controlled in other ways in the other units.
                            */
    UINT32 Counterenable : 1;

                            /* Bits[22:22], Access Type=WO, default=0x00000000*/

                            /*
                               This field is the local enable for the PerfMon
                               Counter. This bit must be asserted in order for
                               the PerfMon counter to begin counting the events
                               selected by the event select, unit mask, and
                               internal the events selected by the event
                               select, unit mask, and internal if this bit is
                               set to 1 but the Unit Control Registers have
                               determined that counting is disabled, then the
                               counter will not count.
                            */
    UINT32 Invert : 1;

                            /* Bits[23:23], Access Type=WO, default=0x00000000*/

                            /*
                               This bit indicates how the threshold field will
                               be compared to the incoming event. When 0, the
                               comparison that will be done is threshold >=
                               event. When set to 1, the comparison that will
                               be done is inverted from the case where this bit
                               is set to 0, i.e., threshold event. The invert
                               bit only works when Threshhold != 0. So, if one
                               would like to invert a non-occupancy event (like
                               LLC Hit), one needs to set the threshhold to 1.
                            */
    UINT32 Threshold : 6;

                            /* Bits[29:24], Access Type=WO, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the UnCore is 7bits (queue
                               occupancy), bit 31 is unused. The result of the
                               comparison is effectively a 1 bit wide event,
                               i.e., the counter will be incremented by 1 when
                               the comparison is true (the type of comparison
                               depends on the setting of the 'invert' bit - see
                               bit 23 below) no matter how wide the original
                               event was. When this field is zero, threshold
                               comparison is disabled and the event is passed
                               without modification.
                            */
    UINT32 Occinvert : 1;

                            /* Bits[30:30], Access Type=WO, default=0x00000000*/

                            /*
                               Invert the output of the occupancy threshhold
                               comparison logic. 0 - "greater than or equal to"
                               comparison on the threshhold compare 1 - "less
                               than" comparison on the threshhold compare
                            */
    UINT32 Occedgedetect : 1;

                            /* Bits[31:31], Access Type=WO, default=0x00000000*/

                            /*
                               Enable edge detection on the output of the
                               occupancy threshhold comparison. When enabled
                               and used with the Threshhold logic, this will
                               provide the ability to track the number of times
                               when an occupancy counter exceed or was equal to
                               the value in the threshhold. When used with
                               OccInvert, this will track the number of times
                               when the value dropped below the threshhold.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PCUPMONCNTRCFG_1_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_PCUPMONCNTRCFG_2 0x00000713

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Filtermask : 7;

                            /* Bits[6:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is used to decode the PerfMon event
                               which is selected. The encodings for each of the
                               valid UnCore PerfMon events can be found in the
                               Perfmon HAS and the individual unit HAS
                               documents.
                            */
    UINT32 Useoccupancy : 1;

                            /* Bits[7:7], Access Type=WO, default=0x00000000*/

                            /*
                               When enabled, this will pass the output of the
                               occupancy block through to the counter
                               (dependent on the event occuring). See the HAS
                               for more details.
                            */
    UINT32 Rsvd8 : 6;

                            /* Bits[13:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Occselect : 2;

                            /* Bits[15:14], Access Type=WO, default=0x00000000*/

                            /*
                               Select which of the four occupancy counters to
                               use. 00 - Threads in C0 01 - Cores in C0 10 -
                               Cores in C3 11 - Cores in C6
                            */
    UINT32 Rsvd16 : 1;

                            /* Bits[16:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterreset : 1;

                            /* Bits[17:17], Access Type=WO, default=0x00000000*/

                            /*
                               When this bit is set, the corresponding counter
                               will be reset to 0. This allows for a quick
                               reset of the counter when changing event
                               encodings.
                            */
    UINT32 Edgedetect : 1;

                            /* Bits[18:18], Access Type=WO, default=0x00000000*/

                            /*
                               Edge Detect allows one to count either 0 to 1 or
                               1 to 0 transitions of a given event. For
                               example, we have an event that counts the number
                               of cycles in L0s mode in Intel UPI. By using
                               edge detect, one can count the number of times
                               that we entered L0s mode (by detecting the
                               rising edge). Edge detect only works in
                               conjunction with threshholding. This is true
                               even for events that can only increment by 1 in
                               a given cycle (like the L0s example above). In
                               this case, one should set a threshhold of 1. One
                               can also use Edge Detect with queue occupancy
                               events. For example, if one wanted to count the
                               number of times when the TOR occupancy was
                               larger than 5, one would selet the TOR occupancy
                               event with a threshold of 5 and set the Edge
                               Detect bit. Edge detect can also be used with
                               the invert. This is generally not particularly
                               useful, as the count of falling edges compared
                               to rising edges will always on differ by 1.
                            */
    UINT32 Tidfilterenable : 1;

                            /* Bits[19:19], Access Type=WO, default=0x00000000*/

                            /*
                               ThreadID filter enable. This is only used by
                               Cbo. For other units it is Reserved.
                            */
    UINT32 Overflowenable : 1;

                            /* Bits[20:20], Access Type=WO, default=0x00000000*/

                            /*
                               Setting this bit will enable the counter to send
                               an overflow signal. If this bit is not set, the
                               counter will wrap around when it overflows
                               without triggering anything. If this bit is set
                               and the Units configuration register has
                               overflow enabled, tehn a signal will be
                               transmitted to the Ubox
                            */
    UINT32 Internal : 1;

                            /* Bits[21:21], Access Type=WO, default=0x00000000*/

                            /*
                               This bit needs to be asserted if the event which
                               needs to be selected is an internal event.
                               Internal events are events that are only
                               accessible on unlocked parts. One can basically
                               think of the internal bit as an extension of the
                               event select bits [7:0], as it allows the use to
                               gain access to additional events. It will not be
                               possible to use these events on locked parts.
                               For perfmons that exist in MSR space, the MSR
                               write mask is set on this bit, and the ucode
                               handler will trigger a GP fault if one attempts
                               to write to these bits. Writing to these bits is
                               controlled in other ways in the other units.
                            */
    UINT32 Counterenable : 1;

                            /* Bits[22:22], Access Type=WO, default=0x00000000*/

                            /*
                               This field is the local enable for the PerfMon
                               Counter. This bit must be asserted in order for
                               the PerfMon counter to begin counting the events
                               selected by the event select, unit mask, and
                               internal the events selected by the event
                               select, unit mask, and internal if this bit is
                               set to 1 but the Unit Control Registers have
                               determined that counting is disabled, then the
                               counter will not count.
                            */
    UINT32 Invert : 1;

                            /* Bits[23:23], Access Type=WO, default=0x00000000*/

                            /*
                               This bit indicates how the threshold field will
                               be compared to the incoming event. When 0, the
                               comparison that will be done is threshold >=
                               event. When set to 1, the comparison that will
                               be done is inverted from the case where this bit
                               is set to 0, i.e., threshold event. The invert
                               bit only works when Threshhold != 0. So, if one
                               would like to invert a non-occupancy event (like
                               LLC Hit), one needs to set the threshhold to 1.
                            */
    UINT32 Threshold : 6;

                            /* Bits[29:24], Access Type=WO, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the UnCore is 7bits (queue
                               occupancy), bit 31 is unused. The result of the
                               comparison is effectively a 1 bit wide event,
                               i.e., the counter will be incremented by 1 when
                               the comparison is true (the type of comparison
                               depends on the setting of the 'invert' bit - see
                               bit 23 below) no matter how wide the original
                               event was. When this field is zero, threshold
                               comparison is disabled and the event is passed
                               without modification.
                            */
    UINT32 Occinvert : 1;

                            /* Bits[30:30], Access Type=WO, default=0x00000000*/

                            /*
                               Invert the output of the occupancy threshhold
                               comparison logic. 0 - "greater than or equal to"
                               comparison on the threshhold compare 1 - "less
                               than" comparison on the threshhold compare
                            */
    UINT32 Occedgedetect : 1;

                            /* Bits[31:31], Access Type=WO, default=0x00000000*/

                            /*
                               Enable edge detection on the output of the
                               occupancy threshhold comparison. When enabled
                               and used with the Threshhold logic, this will
                               provide the ability to track the number of times
                               when an occupancy counter exceed or was equal to
                               the value in the threshhold. When used with
                               OccInvert, this will track the number of times
                               when the value dropped below the threshhold.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PCUPMONCNTRCFG_2_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_PCUPMONCNTRCFG_3 0x00000714

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Filtermask : 7;

                            /* Bits[6:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is used to decode the PerfMon event
                               which is selected. The encodings for each of the
                               valid UnCore PerfMon events can be found in the
                               Perfmon HAS and the individual unit HAS
                               documents.
                            */
    UINT32 Useoccupancy : 1;

                            /* Bits[7:7], Access Type=WO, default=0x00000000*/

                            /*
                               When enabled, this will pass the output of the
                               occupancy block through to the counter
                               (dependent on the event occuring). See the HAS
                               for more details.
                            */
    UINT32 Rsvd8 : 6;

                            /* Bits[13:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Occselect : 2;

                            /* Bits[15:14], Access Type=WO, default=0x00000000*/

                            /*
                               Select which of the four occupancy counters to
                               use. 00 - Threads in C0 01 - Cores in C0 10 -
                               Cores in C3 11 - Cores in C6
                            */
    UINT32 Rsvd16 : 1;

                            /* Bits[16:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterreset : 1;

                            /* Bits[17:17], Access Type=WO, default=0x00000000*/

                            /*
                               When this bit is set, the corresponding counter
                               will be reset to 0. This allows for a quick
                               reset of the counter when changing event
                               encodings.
                            */
    UINT32 Edgedetect : 1;

                            /* Bits[18:18], Access Type=WO, default=0x00000000*/

                            /*
                               Edge Detect allows one to count either 0 to 1 or
                               1 to 0 transitions of a given event. For
                               example, we have an event that counts the number
                               of cycles in L0s mode in Intel UPI. By using
                               edge detect, one can count the number of times
                               that we entered L0s mode (by detecting the
                               rising edge). Edge detect only works in
                               conjunction with threshholding. This is true
                               even for events that can only increment by 1 in
                               a given cycle (like the L0s example above). In
                               this case, one should set a threshhold of 1. One
                               can also use Edge Detect with queue occupancy
                               events. For example, if one wanted to count the
                               number of times when the TOR occupancy was
                               larger than 5, one would selet the TOR occupancy
                               event with a threshold of 5 and set the Edge
                               Detect bit. Edge detect can also be used with
                               the invert. This is generally not particularly
                               useful, as the count of falling edges compared
                               to rising edges will always on differ by 1.
                            */
    UINT32 Tidfilterenable : 1;

                            /* Bits[19:19], Access Type=WO, default=0x00000000*/

                            /*
                               ThreadID filter enable. This is only used by
                               Cbo. For other units it is Reserved.
                            */
    UINT32 Overflowenable : 1;

                            /* Bits[20:20], Access Type=WO, default=0x00000000*/

                            /*
                               Setting this bit will enable the counter to send
                               an overflow signal. If this bit is not set, the
                               counter will wrap around when it overflows
                               without triggering anything. If this bit is set
                               and the Units configuration register has
                               overflow enabled, tehn a signal will be
                               transmitted to the Ubox
                            */
    UINT32 Internal : 1;

                            /* Bits[21:21], Access Type=WO, default=0x00000000*/

                            /*
                               This bit needs to be asserted if the event which
                               needs to be selected is an internal event.
                               Internal events are events that are only
                               accessible on unlocked parts. One can basically
                               think of the internal bit as an extension of the
                               event select bits [7:0], as it allows the use to
                               gain access to additional events. It will not be
                               possible to use these events on locked parts.
                               For perfmons that exist in MSR space, the MSR
                               write mask is set on this bit, and the ucode
                               handler will trigger a GP fault if one attempts
                               to write to these bits. Writing to these bits is
                               controlled in other ways in the other units.
                            */
    UINT32 Counterenable : 1;

                            /* Bits[22:22], Access Type=WO, default=0x00000000*/

                            /*
                               This field is the local enable for the PerfMon
                               Counter. This bit must be asserted in order for
                               the PerfMon counter to begin counting the events
                               selected by the event select, unit mask, and
                               internal the events selected by the event
                               select, unit mask, and internal if this bit is
                               set to 1 but the Unit Control Registers have
                               determined that counting is disabled, then the
                               counter will not count.
                            */
    UINT32 Invert : 1;

                            /* Bits[23:23], Access Type=WO, default=0x00000000*/

                            /*
                               This bit indicates how the threshold field will
                               be compared to the incoming event. When 0, the
                               comparison that will be done is threshold >=
                               event. When set to 1, the comparison that will
                               be done is inverted from the case where this bit
                               is set to 0, i.e., threshold event. The invert
                               bit only works when Threshhold != 0. So, if one
                               would like to invert a non-occupancy event (like
                               LLC Hit), one needs to set the threshhold to 1.
                            */
    UINT32 Threshold : 6;

                            /* Bits[29:24], Access Type=WO, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the UnCore is 7bits (queue
                               occupancy), bit 31 is unused. The result of the
                               comparison is effectively a 1 bit wide event,
                               i.e., the counter will be incremented by 1 when
                               the comparison is true (the type of comparison
                               depends on the setting of the 'invert' bit - see
                               bit 23 below) no matter how wide the original
                               event was. When this field is zero, threshold
                               comparison is disabled and the event is passed
                               without modification.
                            */
    UINT32 Occinvert : 1;

                            /* Bits[30:30], Access Type=WO, default=0x00000000*/

                            /*
                               Invert the output of the occupancy threshhold
                               comparison logic. 0 - "greater than or equal to"
                               comparison on the threshhold compare 1 - "less
                               than" comparison on the threshhold compare
                            */
    UINT32 Occedgedetect : 1;

                            /* Bits[31:31], Access Type=WO, default=0x00000000*/

                            /*
                               Enable edge detection on the output of the
                               occupancy threshhold comparison. When enabled
                               and used with the Threshhold logic, this will
                               provide the ability to track the number of times
                               when an occupancy counter exceed or was equal to
                               the value in the threshhold. When used with
                               OccInvert, this will track the number of times
                               when the value dropped below the threshhold.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PCUPMONCNTRCFG_3_REGISTER;
/**

**/
#define MSR_PCUPMONFILTER 0x00000715

/**

**/
#define MSR_PCUPMONUNITSTATUS 0x00000716

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Counteroverflowbitmask : 7;

                            /* Bits[6:0], Access Type=WO, default=0x00000000*/

                            /*
                               This bitmask that specifies which counter(or
                               counters have overflowed. If the unit has a
                               fixed counter, it's corresponding bitmask will
                               be stored at position 0.
                            */
    UINT32 Rsvd7 : 25;

                            /* Bits[31:7], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PCUPMONUNITSTATUS_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_PCUPMONCNTR_0 0x00000717

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Countervalue1 : 16;

                            /* Bits[47:32], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PCUPMONCNTR_0_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_PCUPMONCNTR_1 0x00000718

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Countervalue1 : 16;

                            /* Bits[47:32], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PCUPMONCNTR_1_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_PCUPMONCNTR_2 0x00000719

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Countervalue1 : 16;

                            /* Bits[47:32], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PCUPMONCNTR_2_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_PCUPMONCNTR_3 0x0000071A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Countervalue1 : 16;

                            /* Bits[47:32], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PCUPMONCNTR_3_REGISTER;
/**
  Spare Virtual MSRs in uncore Creg PLA
**/
#define MSR_RESIDENCY_CTR_SELECT 0x0000071B
/**
  Spare Virtual MSRs in uncore Creg PLA
**/
#define MSR_RESIDENCY_CTR_CONFIG 0x0000071C
/**
  Spare Virtual MSRs in uncore Creg PLA
**/
#define MSR_RESIDENCY_CTR 0x0000071D

#if 0 // Duplicate with ArchitecturalMsr.h in EDK2.
/**
  Contains enable bits for HWP feature
**/
#define MSR_IA32_PM_ENABLE 0x00000770

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 HwpEnable : 1;

                            /* Bits[0:0], Access Type=RW_KL, default=0x00000000*/

                            /*
                               Software sets this bit to enable HWP with
                               autonomous selection. When set, the processor
                               will disregard input from the legacy performance
                               control interface (IA32_PERF_CTL). Note this bit
                               can only be enabled once from the default value.
                               Once set, writes to the HWP_ENABLE bit are
                               ignored. Only RESET will clear this bit. Default
                               = zero (0).
                            */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IA32_PM_ENABLE_REGISTER;
#endif

#if 0 // Duplicate with ArchitecturalMsr.h in EDK2.
/**
  Contains fields describing the performance and window time borders in which HWP works.
**/
#define MSR_IA32_HWP_CAPABILITIES 0x00000771

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 HighestPerformance : 8;

                            /* Bits[7:0], Access Type=RW_L, default=0x00000000*/

                            /*
                               Value for the maximum non-guaranteed performance
                               level. This value can change dynamically dueover
                               clocking S/W support
                            */
    UINT32 GuaranteedPerformance : 8;

                            /* Bits[15:8], Access Type=RW_L, default=0x00000001*/

                            /*
                               Current value for the guaranteed performance
                               level. This value can change dynamically as a
                               result of Config TDP setting
                            */
    UINT32 MostEfficientPerformance : 8;

                            /* Bits[23:16], Access Type=RW_L, default=0x00000000*/

                            /*
                               Current value of the most efficient performance
                               level. This value can change dynamically as a
                               result of workload characteristics.
                            */
    UINT32 LowestLinearPerformance : 8;

                            /* Bits[31:24], Access Type=RW_L, default=0x00000001*/

                            /*
                               Value for the lowest performance level that
                               software can program to IA32_HWP_REQUEST.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IA32_HWP_CAPABILITIES_REGISTER;
#endif

#if 0 // Duplicate with ArchitecturalMsr.h in EDK2.
/**
  Contains bits describing the current status of HWP feature work process
**/
#define MSR_IA32_HWP_INTERRUPT 0x00000773

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ChangeToGuaranteed : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               When set (1), an HWP Interrupt will be generated
                               whenever a change to the Guaranteed Performance
                               occurs. Default = interrupt disabled (0).
                            */
    UINT32 ExcursionToMinimum : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               When set (1), an HWP Interrupt will be generated
                               whenever HW is unable to meet the Minimum
                               Performance. Default = interrupt disabled (0).
                            */
    UINT32 ChangeToHighest : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               When set (1), an HWP Interrupt will be generated
                               whenever a change to the Highest Performance
                               occurs. Default = interrupt disabled (0).
                            */
    UINT32 PeciOverride : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               When set(1), an HWP interrupt will be generated
                               whenever a management controller supersedes one
                               or more of the OS control hints (min, max, EPP)
                               specified in IA32_HWP_REQUEST or
                               IA32_HWP_REQUEST_PKG
                            */
    UINT32 Rsvd4 : 28;

                            /* Bits[31:4], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IA32_HWP_INTERRUPT_REGISTER;
#endif

#if 0 // Duplicate with ArchitecturalMsr.h in EDK2.
/**
  Power Management Control Hints to a Logical Processor
**/
#define MSR_IA32_HWP_REQUEST 0x00000774

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 MinimumPerformance : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000001*/

                            /*
                               Conveys a hint to the HWP hardware. The OS
                               programs the minimum performance hint to achieve
                               the required quality of service (QOS) or to meet
                               a service level agreement (SLA) as needed. Note
                               that an excursion below the level specified is
                               possible due to hardware constraints. The
                               default value of this field is
                               IA32_HWP_CAPABILITIES.Lowest_Performance.
                            */
    UINT32 MaximumPerformance : 8;

                            /* Bits[15:8], Access Type=RW, default=0x000000FF*/

                            /*
                               Conveys a hint to the HWP hardware. The OS
                               programs this field to limit the maximum
                               performance that is expected to be supplied by
                               the HWP hardware. Excursions above the limit
                               requested by OS are possible due to hardware
                               coordination between the processor cores and
                               other components in the package. The default
                               value of this field is
                               IA32_HWP_CAPABILITIES.Highest_Performance.
                            */
    UINT32 DesiredPerformance : 8;

                            /* Bits[23:16], Access Type=RW, default=0x00000000*/

                            /*
                               Conveys a hint to the HWP hardware. When set to
                               zero, hardware autonomous selection determines
                               the performance target. When set to a non-zero
                               value (between the range of Lowest_Performance
                               and Highest_Performance of
                               IA32_HWP_CAPABILITIES) conveys an explicit
                               performance request hint to the hardware;
                               effectively disabling HW Autonomous selection.
                               The Desired_Performance input is non-
                               constraining in terms of Performance and Energy
                               Efficiency optimizations, which are
                               independently controlled. The default value of
                               this field is 0.
                            */
    UINT32 EnergyPerformancePreference : 8;

                            /* Bits[31:24], Access Type=RW, default=0x00000080*/

                            /*
                               Conveys a hint to the HWP hardware. The OS may
                               write a range of values from 0 (performance
                               preference) to 0FFH (energy efficiency
                               preference) to influence the rate of performance
                               increase /decrease and the result of the
                               hardware's energy efficiency and performance
                               optimizations. The default value of this field
                               is 80H. Note: If CPUID.06H:EAX[bit 10] indicates
                               that this field is not supported, HWP uses the
                               value of the IA32_ENERGY_PERF_BIAS MSR to
                               determine the energy efficiency / performance
                               preference.
                            */
    UINT32 ActivityWindow : 10;

                            /* Bits[41:32], Access Type=RW, default=0x00000000*/

                            /*
                               Conveys a hint to the HWP hardware specifying a
                               moving workload history observation window for
                               performance/frequency optimizations. If 0, the
                               hardware will determine the appropriate window
                               size. When writing a non-zero value to this
                               field, this field is encoded in the format of
                               bits 38:32 as a 7-bit mantissa and bits 41:39 as
                               a 3-bit exponent value in powers of 10. The
                               resultant value is in microseconds. Thus, the
                               minimal/maximum activity window size is 1
                               microsecond/1270 seconds. Combined with the
                               Energy_Performance_Preference input,
                               Activity_Window influences the rate of
                               performance increase / decrease. This non-zero
                               hint only has meaning when Desired_Performance =
                               0. The default value of this field is 0
                            */
    UINT32 PackageControl : 1;

                            /* Bits[42:42], Access Type=RW, default=0x00000000*/

                            /*
                               When set causes thread IA32_HWP_REQUEST control
                               inputs to be derived from IA32_HWP_REQUEST_PKG
                            */
    UINT32 Rsvd43 : 16;

                            /* Bits[58:43], Access Type=RO, default=0x00000000*/

                            /* Reserved Bits */
    UINT32 ActivityWindowsValid : 1;

                            /* Bits[59:59], Access Type=RW, default=0x00000000*/

                            /*
                               When set 1 means that if the package control bit
                               is set, takes active windows value from this MSR
                            */
    UINT32 EppValid : 1;

                            /* Bits[60:60], Access Type=RW, default=0x00000000*/

                            /*
                               When set 1 means that if the package control bit
                               is set, takes EPP value from the the this MSR
                            */
    UINT32 DesiredValid : 1;

                            /* Bits[61:61], Access Type=RW, default=0x00000000*/

                            /*
                               When set 1 means that if the package control bit
                               is set, takes Desired Performance value from the
                               the this MSR
                            */
    UINT32 MaximumValid : 1;

                            /* Bits[62:62], Access Type=RW, default=0x00000000*/

                            /*
                               When set 1 means that if the package control bit
                               is set, takes Maximum Performance value from the
                               the this MSR
                            */
    UINT32 MinimumValid : 1;

                            /* Bits[63:63], Access Type=RW, default=0x00000000*/

                            /*
                               When set 1 means that if the package control bit
                               is set, takes Minimum Performance value from the
                               the this MSR
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IA32_HWP_REQUEST_REGISTER;
#endif

#if 0 // Duplicate with ArchitecturalMsr.h in EDK2.
/**
  Contains bits describing the current status of HWP feature work process
**/
#define MSR_IA32_HWP_STATUS 0x00000777

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ChangeToGuaranteed : 1;

                            /* Bits[0:0], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               If set (1), a change to Guaranteed Performance
                               has occurred. SW should query
                               IA32_HWP_CAPABILITIES to ascertain the new
                               Guaranteed Performance value. SW must clear this
                               bit by writing a zero (0).
                            */
    UINT32 Rsvd1 : 1;

                            /* Bits[1:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ExcursionToMinimum : 1;

                            /* Bits[2:2], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               If set (1), an excursion to Minimum Performance
                               has occurred. SW must clear this bit by writing
                               a zero (0).
                            */
    UINT32 HighestChange : 1;

                            /* Bits[3:3], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               If set (1), a change to Highest Performance has
                               occurred. SW should query IA32_HWP_CAPABILITIES
                               to ascertain the new Highest Performance value.
                               SW must clear this bit by writing a zero (0).
                            */
    UINT32 PeciOverrideEnter : 1;

                            /* Bits[4:4], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               If set (1), a management controller has started
                               a PECI override of one or more OS control hints
                               (min, max, EPP) specified in IA32_HWP_REQUEST or
                               IA32_HWP_REQUEST_PKG. SW must clear this bit
                            */
    UINT32 PeciOverrideExit : 1;

                            /* Bits[5:5], Access Type=RW0C_FW, default=0x00000000*/

                            /*
                               If set (1), a management controller has stopped
                               a PECI override of all OS control hints (min,
                               max, EPP) specified in IA32_HWP_REQUEST or
                               IA32_HWP_REQUEST_PKG. SW must clear this bit by
                               writing a zero (0).
                            */
    UINT32 Rsvd6 : 26;

                            /* Bits[31:6], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IA32_HWP_STATUS_REGISTER;
#endif

/**
  This MSR will write the ERRINJLCK bit of IIO, QPI, CBO, MC
**/
#define MSR_ERR_INJ_LCK_UNLOCK_CTL 0x00000790

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ErrInjLckUnlock : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000001*/

                            /*
                               Bit indicates if error injection is enabled 0 -
                               unlocked 1 - locked (not enabled). note that
                               this field actually not used by ucode
                            */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ERR_INJ_LCK_UNLOCK_CTL_REGISTER;
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 2 instances in addresses range 0x791 to 0x792"
**/
#define MSR_UNCORE_SPARE_0_0 0x00000791
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 2 instances in addresses range 0x791 to 0x792"
**/
#define MSR_UNCORE_SPARE_1_1 0x00000792

/**
  Extended MCi Status Pointer
**/
#define MSR_EXTENDED_MCG_PTR 0x00000793

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PhysMemPtr0 : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /*
                               Physical memory pointer. Points to the memory
                               (DRAM or MMIO) containing Extended_MCi_Status
                               structure.
                            */
    UINT32 PhysMemPtr1 : 30;

                            /* Bits[61:32], Access Type=RW, default=0x00000000*/

                            /*
                               Physical memory pointer. Points to the memory
                               (DRAM or MMIO) containing Extended_MCi_Status
                               structure.
                            */
    UINT32 Overflow : 1;

                            /* Bits[62:62], Access Type=RW, default=0x00000000*/

                            /* Overflow */
    UINT32 Valid : 1;

                            /* Bits[63:63], Access Type=RW, default=0x00000000*/

                            /* Valid */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_EXTENDED_MCG_PTR_REGISTER;
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 12 instances in addresses range 0x794 to 0x79F"
**/
#define MSR_UNCORE_SPARE_2_2 0x00000794
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 12 instances in addresses range 0x794 to 0x79F"
**/
#define MSR_UNCORE_SPARE_3_3 0x00000795
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 12 instances in addresses range 0x794 to 0x79F"
**/
#define MSR_UNCORE_SPARE_4_4 0x00000796
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 12 instances in addresses range 0x794 to 0x79F"
**/
#define MSR_UNCORE_SPARE_5_5 0x00000797
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 12 instances in addresses range 0x794 to 0x79F"
**/
#define MSR_UNCORE_SPARE_6_6 0x00000798
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 12 instances in addresses range 0x794 to 0x79F"
**/
#define MSR_UNCORE_SPARE_7_7 0x00000799
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 12 instances in addresses range 0x794 to 0x79F"
**/
#define MSR_UNCORE_SPARE_8_8 0x0000079A
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 12 instances in addresses range 0x794 to 0x79F"
**/
#define MSR_UNCORE_SPARE_9_9 0x0000079B
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 12 instances in addresses range 0x794 to 0x79F"
**/
#define MSR_UNCORE_SPARE_10_10 0x0000079C
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 12 instances in addresses range 0x794 to 0x79F"
**/
#define MSR_UNCORE_SPARE_11_11 0x0000079D
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 12 instances in addresses range 0x794 to 0x79F"
**/
#define MSR_UNCORE_SPARE_12_12 0x0000079E
/**
  Spare Virtual MSRs in uncore Creg PLA
  " seq has 12 instances in addresses range 0x794 to 0x79F"
**/
#define MSR_UNCORE_SPARE_13_13 0x0000079F
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 2 instances in addresses range 0x800 to 0x801"
**/
#define MSR_VIRTUAL_APIC_0_0 0x00000800
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 2 instances in addresses range 0x800 to 0x801"
**/
#define MSR_VIRTUAL_APIC_1_1 0x00000801

/**
  X2APIC Local APIC ID register
**/
#define MSR_PIC_EXTENDED_LOCAL_APIC_ID 0x00000802

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Tid : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Thread Id */
    UINT32 Cid : 3;

                            /* Bits[3:1], Access Type=RW, default=0x00000000*/

                            /* Core Id */
    UINT32 HighApicId : 11;

                            /* Bits[14:4], Access Type=RW, default=0x00000000*/

                            /* HIGH_APIC Id */
    UINT32 Rsvd15 : 17;

                            /* Bits[31:15], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_EXTENDED_LOCAL_APIC_ID_REGISTER;

/**
  Local APIC Version register
**/
#define MSR_PIC_LOCAL_UNIT_VERSION 0x00000803

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 VersionId : 8;

                            /* Bits[7:0], Access Type=RO_V, default=0x00000015*/

                            /* APIC Version ID */
    UINT32 Rsvd8 : 8;

                            /* Bits[15:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 MaxLvtEntry : 8;

                            /* Bits[23:16], Access Type=RO_V, default=0x00000006*/

                            /* Index of highest LVT Entry */
    UINT32 DirectedEoiSupport : 1;

                            /* Bits[24:24], Access Type=RO_V, default=0x00000001*/

                            /*
                               If 1, this part contains support for Directed
                               EOI (EOI Broadcast Disable)
                            */
    UINT32 Rsvd25 : 7;

                            /* Bits[31:25], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_LOCAL_UNIT_VERSION_REGISTER;
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 4 instances in addresses range 0x804 to 0x807"
**/
#define MSR_VIRTUAL_APIC_2_2 0x00000804
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 4 instances in addresses range 0x804 to 0x807"
**/
#define MSR_VIRTUAL_APIC_3_3 0x00000805
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 4 instances in addresses range 0x804 to 0x807"
**/
#define MSR_VIRTUAL_APIC_4_4 0x00000806
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 4 instances in addresses range 0x804 to 0x807"
**/
#define MSR_VIRTUAL_APIC_5_5 0x00000807

/**
  APIC Task Priority Register
**/
#define MSR_PIC_TASK_PRIORITY 0x00000808

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 TprValue : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* Task Priority Register */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_TASK_PRIORITY_REGISTER;
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 1 instances in addresses range 0x809 to 0x809"
**/
#define MSR_VIRTUAL_APIC_6_6 0x00000809

/**
  APIC Processor Priority Register
**/
#define MSR_PIC_PROCESSOR_PRIORITY 0x0000080A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PprValue : 8;

                            /* Bits[7:0], Access Type=RO_V, default=0x00000000*/

                            /* Processor Priority Register */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_PROCESSOR_PRIORITY_REGISTER;
/**
  APIC EOI Register
**/
#define MSR_PIC_EOI 0x0000080B
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 1 instances in addresses range 0x80C to 0x80C"
**/
#define MSR_VIRTUAL_APIC_7_7 0x0000080C

/**
  X2APIC Logical Destination register
**/
#define MSR_PIC_EXTENDED_LOGICAL_DESTINATION 0x0000080D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ExtendedCidTid : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* Logical ID 15:0 */
    UINT32 HighApicId : 11;

                            /* Bits[26:16], Access Type=RW, default=0x00000000*/

                            /* Logical ID 26:16 */
    UINT32 Rsvd27 : 5;

                            /* Bits[31:27], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_EXTENDED_LOGICAL_DESTINATION_REGISTER;
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 1 instances in addresses range 0x80E to 0x80E"
**/
#define MSR_VIRTUAL_APIC_8_8 0x0000080E

/**
  Spurious Interrupt Vector register
**/
#define MSR_PIC_SPURIOUS_INTERRUPT 0x0000080F

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 SpuriousVector : 8;

                            /* Bits[7:0], Access Type=RW, default=0x000000FF*/

                            /* Spurious Interrupt Vector */
    UINT32 SoftwareEnable : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /* Software Enable Bit */
    UINT32 Rsvd9 : 3;

                            /* Bits[11:9], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Directedeoien : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /* EOI Suppression Bit */
    UINT32 Rsvd13 : 19;

                            /* Bits[31:13], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_SPURIOUS_INTERRUPT_REGISTER;
/**
  APIC In-Service register bits
  " seq has 1 instances in addresses range 0x810 to 0x810"
**/
#define MSR_PIC_ISR_DWORD_0_0 0x00000810
/**
  APIC In-Service register bits
  " seq has 7 instances in addresses range 0x811 to 0x817"
**/
#define MSR_PIC_ISR_DWORD_1_1 0x00000811
/**
  APIC In-Service register bits
  " seq has 7 instances in addresses range 0x811 to 0x817"
**/
#define MSR_PIC_ISR_DWORD_2_2 0x00000812
/**
  APIC In-Service register bits
  " seq has 7 instances in addresses range 0x811 to 0x817"
**/
#define MSR_PIC_ISR_DWORD_3_3 0x00000813
/**
  APIC In-Service register bits
  " seq has 7 instances in addresses range 0x811 to 0x817"
**/
#define MSR_PIC_ISR_DWORD_4_4 0x00000814
/**
  APIC In-Service register bits
  " seq has 7 instances in addresses range 0x811 to 0x817"
**/
#define MSR_PIC_ISR_DWORD_5_5 0x00000815
/**
  APIC In-Service register bits
  " seq has 7 instances in addresses range 0x811 to 0x817"
**/
#define MSR_PIC_ISR_DWORD_6_6 0x00000816
/**
  APIC In-Service register bits
  " seq has 7 instances in addresses range 0x811 to 0x817"
**/
#define MSR_PIC_ISR_DWORD_7_7 0x00000817
/**
  APIC Trigger Mode register bits
  " seq has 1 instances in addresses range 0x818 to 0x818"
**/
#define MSR_PIC_TMR_DWORD_0_0 0x00000818
/**
  APIC Trigger Mode register bits
  " seq has 7 instances in addresses range 0x819 to 0x81F"
**/
#define MSR_PIC_TMR_DWORD_1_1 0x00000819
/**
  APIC Trigger Mode register bits
  " seq has 7 instances in addresses range 0x819 to 0x81F"
**/
#define MSR_PIC_TMR_DWORD_2_2 0x0000081A
/**
  APIC Trigger Mode register bits
  " seq has 7 instances in addresses range 0x819 to 0x81F"
**/
#define MSR_PIC_TMR_DWORD_3_3 0x0000081B
/**
  APIC Trigger Mode register bits
  " seq has 7 instances in addresses range 0x819 to 0x81F"
**/
#define MSR_PIC_TMR_DWORD_4_4 0x0000081C
/**
  APIC Trigger Mode register bits
  " seq has 7 instances in addresses range 0x819 to 0x81F"
**/
#define MSR_PIC_TMR_DWORD_5_5 0x0000081D
/**
  APIC Trigger Mode register bits
  " seq has 7 instances in addresses range 0x819 to 0x81F"
**/
#define MSR_PIC_TMR_DWORD_6_6 0x0000081E
/**
  APIC Trigger Mode register bits
  " seq has 7 instances in addresses range 0x819 to 0x81F"
**/
#define MSR_PIC_TMR_DWORD_7_7 0x0000081F
/**
  APIC Interrupt Request register bits
  " seq has 1 instances in addresses range 0x820 to 0x820"
**/
#define MSR_PIC_IRR_DWORD_0_0 0x00000820
/**
  APIC Interrupt Request register bits
  " seq has 7 instances in addresses range 0x821 to 0x827"
**/
#define MSR_PIC_IRR_DWORD_1_1 0x00000821
/**
  APIC Interrupt Request register bits
  " seq has 7 instances in addresses range 0x821 to 0x827"
**/
#define MSR_PIC_IRR_DWORD_2_2 0x00000822
/**
  APIC Interrupt Request register bits
  " seq has 7 instances in addresses range 0x821 to 0x827"
**/
#define MSR_PIC_IRR_DWORD_3_3 0x00000823
/**
  APIC Interrupt Request register bits
  " seq has 7 instances in addresses range 0x821 to 0x827"
**/
#define MSR_PIC_IRR_DWORD_4_4 0x00000824
/**
  APIC Interrupt Request register bits
  " seq has 7 instances in addresses range 0x821 to 0x827"
**/
#define MSR_PIC_IRR_DWORD_5_5 0x00000825
/**
  APIC Interrupt Request register bits
  " seq has 7 instances in addresses range 0x821 to 0x827"
**/
#define MSR_PIC_IRR_DWORD_6_6 0x00000826
/**
  APIC Interrupt Request register bits
  " seq has 7 instances in addresses range 0x821 to 0x827"
**/
#define MSR_PIC_IRR_DWORD_7_7 0x00000827

/**
  APIC Error Status register
**/
#define MSR_PIC_ERROR_STATUS 0x00000828

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 4;

                            /* Bits[3:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 RedirectableIpi : 1;

                            /* Bits[4:4], Access Type=RO_V, default=0x00000000*/

                            /*
                               IPI with illegal Low Priority delivery mode
                               attempted from ICR write
                            */
    UINT32 SendIllegalVector : 1;

                            /* Bits[5:5], Access Type=RO_V, default=0x00000000*/

                            /* IPI with illegal vector attempted from ICR write */
    UINT32 RcvIllegalVector : 1;

                            /* Bits[6:6], Access Type=RO_V, default=0x00000000*/

                            /* Interrupt received with an illegal vector */
    UINT32 IllegalRegAddr : 1;

                            /* Bits[7:7], Access Type=RO_V, default=0x00000000*/

                            /*
                               APIC register access detected with an illegal
                               address
                            */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_ERROR_STATUS_REGISTER;
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 6 instances in addresses range 0x829 to 0x82E"
**/
#define MSR_VIRTUAL_APIC_9_9 0x00000829
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 6 instances in addresses range 0x829 to 0x82E"
**/
#define MSR_VIRTUAL_APIC_10_10 0x0000082A
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 6 instances in addresses range 0x829 to 0x82E"
**/
#define MSR_VIRTUAL_APIC_11_11 0x0000082B
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 6 instances in addresses range 0x829 to 0x82E"
**/
#define MSR_VIRTUAL_APIC_12_12 0x0000082C
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 6 instances in addresses range 0x829 to 0x82E"
**/
#define MSR_VIRTUAL_APIC_13_13 0x0000082D
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 6 instances in addresses range 0x829 to 0x82E"
**/
#define MSR_VIRTUAL_APIC_14_14 0x0000082E

/**
  LVT Entry for Correctable MCA Interrupt
**/
#define MSR_PIC_LVT_CMCI 0x0000082F

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Vector : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* PIC Correctable MCA Interrupt Vector */
    UINT32 DeliveryMode : 3;

                            /* Bits[10:8], Access Type=RW, default=0x00000000*/

                            /* PIC Correctable MCA Interrupt Delivery Mode */
    UINT32 Rsvd11 : 1;

                            /* Bits[11:11], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 DeliveryStatus : 1;

                            /* Bits[12:12], Access Type=RO_V, default=0x00000000*/

                            /* PIC Correctable MCA Interrupt Delivery Status */
    UINT32 Rsvd13 : 3;

                            /* Bits[15:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mask : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000001*/

                            /*
                               PIC Correctable MCA Interrupt Mask Bit -
                               writeable only when APIC is SW Enabled
                            */
    UINT32 Rsvd17 : 15;

                            /* Bits[31:17], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_LVT_CMCI_REGISTER;

/**
  APIC Interrupt Command register
**/
#define MSR_PIC_INTERRUPT_COMMAND 0x00000830

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Vector : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* Interrupt Vector for outgoing IPI */
    UINT32 DeliveryMode : 3;

                            /* Bits[10:8], Access Type=RW, default=0x00000000*/

                            /* Delivery Mode for outgoing IPI */
    UINT32 DestinationMode : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /* Destination Mode for outgoing IPI */
    UINT32 DeliveryStatus : 1;

                            /* Bits[12:12], Access Type=RO_V, default=0x00000000*/

                            /* Delivery Status for outgoing IPI */
    UINT32 Rsvd13 : 1;

                            /* Bits[13:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Level : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /* Level Trigger for outgoing IPI */
    UINT32 TriggerMode : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /* Trigger Mode for outgoing IPI */
    UINT32 Rsvd16 : 2;

                            /* Bits[17:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 DestShorthand : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000000*/

                            /* Destination Shorthand for outgoing IPI */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Destination : 27;

                            /* Bits[58:32], Access Type=RW, default=0x00000000*/

                            /* Destination for outgoing IPI */
    UINT32 Rsvd59 : 5;

                            /* Bits[63:59], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_INTERRUPT_COMMAND_REGISTER;
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 1 instances in addresses range 0x831 to 0x831"
**/
#define MSR_VIRTUAL_APIC_15_15 0x00000831

/**
  LVT Entry for the PIC Timer
**/
#define MSR_PIC_LVT_TIMER 0x00000832

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Vector : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* PIC Timer Interrupt Vector */
    UINT32 Rsvd8 : 4;

                            /* Bits[11:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 DeliveryStatus : 1;

                            /* Bits[12:12], Access Type=RO_V, default=0x00000000*/

                            /* PIC Timer Interrupt Delivery Status */
    UINT32 Rsvd13 : 3;

                            /* Bits[15:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mask : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000001*/

                            /*
                               PIC Timer Interrupt Mask Bit - writeable only
                               when APIC is SW Enabled
                            */
    UINT32 TimerMode : 2;

                            /* Bits[18:17], Access Type=RW, default=0x00000000*/

                            /*
                               timer mode- single (00) periodic (01)
                               tsc_deadline (10) reserved (11)
                            */
    UINT32 Rsvd19 : 13;

                            /* Bits[31:19], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_LVT_TIMER_REGISTER;

/**
  LVT Entry for the Thermal Interrupt
**/
#define MSR_PIC_LVT_THERM 0x00000833

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Vector : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* PIC Thermal Interrupt Vector */
    UINT32 DeliveryMode : 3;

                            /* Bits[10:8], Access Type=RW, default=0x00000000*/

                            /* PIC Thermal Interrupt Delivery Mode */
    UINT32 Rsvd11 : 1;

                            /* Bits[11:11], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 DeliveryStatus : 1;

                            /* Bits[12:12], Access Type=RO_V, default=0x00000000*/

                            /* PIC Thermal Interrupt Delivery Status */
    UINT32 Rsvd13 : 3;

                            /* Bits[15:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mask : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000001*/

                            /*
                               PIC Thermal Interrupt Mask Bit - writeable only
                               when APIC is SW Enabled
                            */
    UINT32 Rsvd17 : 15;

                            /* Bits[31:17], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_LVT_THERM_REGISTER;

/**
  LVT Entry for PerfMon Interrupt
**/
#define MSR_PIC_LVT_PERF 0x00000834

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Vector : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* PIC PerfMon Interrupt Vector */
    UINT32 DeliveryMode : 3;

                            /* Bits[10:8], Access Type=RW, default=0x00000000*/

                            /* PIC PerfMon Interrupt Delivery Mode */
    UINT32 Rsvd11 : 1;

                            /* Bits[11:11], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 DeliveryStatus : 1;

                            /* Bits[12:12], Access Type=RO_V, default=0x00000000*/

                            /* PIC PerfMon Interrupt Delivery Status */
    UINT32 Rsvd13 : 3;

                            /* Bits[15:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mask : 1;

                            /* Bits[16:16], Access Type=RW_V, default=0x00000001*/

                            /*
                               PIC PerfMon Interrupt Mask Bit - writeable only
                               when APIC is SW Enabled
                            */
    UINT32 Rsvd17 : 15;

                            /* Bits[31:17], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_LVT_PERF_REGISTER;

/**
  LVT Entry for Lint Pin 0 Interrupt
**/
#define MSR_PIC_LVT_LINT0 0x00000835

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Vector : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* PIC Lint Pin 0 Interrupt Vector */
    UINT32 DeliveryMode : 3;

                            /* Bits[10:8], Access Type=RW, default=0x00000000*/

                            /* PIC Lint Pin 0 Interrupt Delivery Mode */
    UINT32 Rsvd11 : 1;

                            /* Bits[11:11], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 DeliveryStatus : 1;

                            /* Bits[12:12], Access Type=RO_V, default=0x00000000*/

                            /* PIC Lint Pin 0 Interrupt Delivery Status */
    UINT32 Polarity : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /* PIC Lint Pin 0 Polarity */
    UINT32 Rirr : 1;

                            /* Bits[14:14], Access Type=RO_V, default=0x00000000*/

                            /* PIC Lint Pin 0 Remote IRR Bit */
    UINT32 TriggerMode : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /* PIC Lint Pin 0 Trigger Mode */
    UINT32 Mask : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000001*/

                            /*
                               PIC Lint Pin 0 Interrupt Mask Bit - writeable
                               only when APIC is SW Enabled
                            */
    UINT32 Rsvd17 : 15;

                            /* Bits[31:17], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_LVT_LINT0_REGISTER;

/**
  LVT Entry for Lint Pin 1 Interrupt
**/
#define MSR_PIC_LVT_LINT1 0x00000836

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Vector : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* PIC Lint Pin 1 Interrupt Vector */
    UINT32 DeliveryMode : 3;

                            /* Bits[10:8], Access Type=RW, default=0x00000000*/

                            /* PIC Lint Pin 1 Interrupt Delivery Mode */
    UINT32 Rsvd11 : 1;

                            /* Bits[11:11], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 DeliveryStatus : 1;

                            /* Bits[12:12], Access Type=RO_V, default=0x00000000*/

                            /* PIC Lint Pin 1 Interrupt Delivery Status */
    UINT32 Polarity : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /* PIC Lint Pin 1 Polarity */
    UINT32 Rirr : 1;

                            /* Bits[14:14], Access Type=RO_V, default=0x00000000*/

                            /* PIC Lint Pin 1 Interrupt Remote IRR */
    UINT32 TriggerMode : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /* PIC Lint Pin 1 Trigger Mode */
    UINT32 Mask : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000001*/

                            /*
                               PIC Lint Pin 1 Interrupt Mask Bit - writeable
                               only when APIC is SW Enabled
                            */
    UINT32 Rsvd17 : 15;

                            /* Bits[31:17], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_LVT_LINT1_REGISTER;

/**
  LVT Entry for Error Interrupt
**/
#define MSR_PIC_LVT_ERROR 0x00000837

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Vector : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* PIC Error Interrupt Vector */
    UINT32 Rsvd8 : 4;

                            /* Bits[11:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 DeliveryStatus : 1;

                            /* Bits[12:12], Access Type=RO_V, default=0x00000000*/

                            /* PIC Error Interrupt Delivery Status */
    UINT32 Rsvd13 : 3;

                            /* Bits[15:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mask : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000001*/

                            /*
                               PIC Error Interrupt Mask Bit - writeable only
                               when APIC is SW Enabled
                            */
    UINT32 Rsvd17 : 15;

                            /* Bits[31:17], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_LVT_ERROR_REGISTER;
/**
  APIC Initial Count register
**/
#define MSR_PIC_TIMER_INITIAL_COUNT_REG 0x00000838
/**
  APIC Current Count register
**/
#define MSR_PIC_TIMER_CURRENT_COUNT_REG 0x00000839
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 4 instances in addresses range 0x83A to 0x83D"
**/
#define MSR_VIRTUAL_APIC_16_16 0x0000083A
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 4 instances in addresses range 0x83A to 0x83D"
**/
#define MSR_VIRTUAL_APIC_17_17 0x0000083B
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 4 instances in addresses range 0x83A to 0x83D"
**/
#define MSR_VIRTUAL_APIC_18_18 0x0000083C
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 4 instances in addresses range 0x83A to 0x83D"
**/
#define MSR_VIRTUAL_APIC_19_19 0x0000083D

/**
  APIC Divide Configuration register
**/
#define MSR_PIC_TIMER_DIVIDE_CONFIG_REG 0x0000083E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 DivideSel : 4;

                            /* Bits[3:0], Access Type=RW_V, default=0x00000000*/

                            /* APIC LVT Interrupt Timer Counter Config */
    UINT32 Rsvd4 : 28;

                            /* Bits[31:4], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_TIMER_DIVIDE_CONFIG_REG_REGISTER;

/**
  x2APIC Self IPI register
**/
#define MSR_SELF_IPI 0x0000083F

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Vector : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /* Self IPI Vector */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SELF_IPI_REGISTER;
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_20_20 0x00000840
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_21_21 0x00000841
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_22_22 0x00000842
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_23_23 0x00000843
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_24_24 0x00000844
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_25_25 0x00000845
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_26_26 0x00000846
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_27_27 0x00000847
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_28_28 0x00000848
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_29_29 0x00000849
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_30_30 0x0000084A
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_31_31 0x0000084B
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_32_32 0x0000084C
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_33_33 0x0000084D
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_34_34 0x0000084E
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_35_35 0x0000084F
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_36_36 0x00000850
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_37_37 0x00000851
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_38_38 0x00000852
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_39_39 0x00000853
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_40_40 0x00000854
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_41_41 0x00000855
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_42_42 0x00000856
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_43_43 0x00000857
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_44_44 0x00000858
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_45_45 0x00000859
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_46_46 0x0000085A
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_47_47 0x0000085B
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_48_48 0x0000085C
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_49_49 0x0000085D
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_50_50 0x0000085E
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_51_51 0x0000085F
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_52_52 0x00000860
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_53_53 0x00000861
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_54_54 0x00000862
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_55_55 0x00000863
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_56_56 0x00000864
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_57_57 0x00000865
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_58_58 0x00000866
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_59_59 0x00000867
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_60_60 0x00000868
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_61_61 0x00000869
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_62_62 0x0000086A
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_63_63 0x0000086B
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_64_64 0x0000086C
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_65_65 0x0000086D
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_66_66 0x0000086E
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_67_67 0x0000086F
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_68_68 0x00000870
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_69_69 0x00000871
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_70_70 0x00000872
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_71_71 0x00000873
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_72_72 0x00000874
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_73_73 0x00000875
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_74_74 0x00000876
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_75_75 0x00000877
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_76_76 0x00000878
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_77_77 0x00000879
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_78_78 0x0000087A
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_79_79 0x0000087B
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_80_80 0x0000087C
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_81_81 0x0000087D
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_82_82 0x0000087E
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_83_83 0x0000087F
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_84_84 0x00000880
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_85_85 0x00000881
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_86_86 0x00000882
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_87_87 0x00000883
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_88_88 0x00000884
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_89_89 0x00000885
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_90_90 0x00000886
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_91_91 0x00000887
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_92_92 0x00000888
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_93_93 0x00000889
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_94_94 0x0000088A
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_95_95 0x0000088B
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_96_96 0x0000088C
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_97_97 0x0000088D
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_98_98 0x0000088E
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_99_99 0x0000088F
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_100_100 0x00000890
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_101_101 0x00000891
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_102_102 0x00000892
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_103_103 0x00000893
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_104_104 0x00000894
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_105_105 0x00000895
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_106_106 0x00000896
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_107_107 0x00000897
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_108_108 0x00000898
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_109_109 0x00000899
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_110_110 0x0000089A
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_111_111 0x0000089B
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_112_112 0x0000089C
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_113_113 0x0000089D
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_114_114 0x0000089E
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_115_115 0x0000089F
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_116_116 0x000008A0
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_117_117 0x000008A1
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_118_118 0x000008A2
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_119_119 0x000008A3
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_120_120 0x000008A4
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_121_121 0x000008A5
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_122_122 0x000008A6
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_123_123 0x000008A7
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_124_124 0x000008A8
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_125_125 0x000008A9
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_126_126 0x000008AA
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_127_127 0x000008AB
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_128_128 0x000008AC
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_129_129 0x000008AD
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_130_130 0x000008AE
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_131_131 0x000008AF
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_132_132 0x000008B0
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_133_133 0x000008B1
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_134_134 0x000008B2
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_135_135 0x000008B3
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_136_136 0x000008B4
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_137_137 0x000008B5
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_138_138 0x000008B6
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_139_139 0x000008B7
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_140_140 0x000008B8
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_141_141 0x000008B9
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_142_142 0x000008BA
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_143_143 0x000008BB
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_144_144 0x000008BC
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_145_145 0x000008BD
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_146_146 0x000008BE
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_147_147 0x000008BF
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_148_148 0x000008C0
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_149_149 0x000008C1
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_150_150 0x000008C2
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_151_151 0x000008C3
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_152_152 0x000008C4
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_153_153 0x000008C5
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_154_154 0x000008C6
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_155_155 0x000008C7
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_156_156 0x000008C8
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_157_157 0x000008C9
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_158_158 0x000008CA
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_159_159 0x000008CB
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_160_160 0x000008CC
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_161_161 0x000008CD
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_162_162 0x000008CE
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_163_163 0x000008CF
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_164_164 0x000008D0
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_165_165 0x000008D1
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_166_166 0x000008D2
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_167_167 0x000008D3
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_168_168 0x000008D4
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_169_169 0x000008D5
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_170_170 0x000008D6
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_171_171 0x000008D7
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_172_172 0x000008D8
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_173_173 0x000008D9
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_174_174 0x000008DA
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_175_175 0x000008DB
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_176_176 0x000008DC
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_177_177 0x000008DD
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_178_178 0x000008DE
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_179_179 0x000008DF
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_180_180 0x000008E0
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_181_181 0x000008E1
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_182_182 0x000008E2
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_183_183 0x000008E3
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_184_184 0x000008E4
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_185_185 0x000008E5
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_186_186 0x000008E6
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_187_187 0x000008E7
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_188_188 0x000008E8
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_189_189 0x000008E9
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_190_190 0x000008EA
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_191_191 0x000008EB
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_192_192 0x000008EC
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_193_193 0x000008ED
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_194_194 0x000008EE
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_195_195 0x000008EF
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_196_196 0x000008F0
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_197_197 0x000008F1
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_198_198 0x000008F2
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_199_199 0x000008F3
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_200_200 0x000008F4
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_201_201 0x000008F5
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_202_202 0x000008F6
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_203_203 0x000008F7
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_204_204 0x000008F8
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_205_205 0x000008F9
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_206_206 0x000008FA
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_207_207 0x000008FB
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_208_208 0x000008FC
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_209_209 0x000008FD
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_210_210 0x000008FE
/**
  Virtual APIC MSRs that are modeled by ucode
  " seq has 192 instances in addresses range 0x840 to 0x8FF"
**/
#define MSR_VIRTUAL_APIC_211_211 0x000008FF

/**
  Holds XSAVE_AREA "triplet" w/ addition of XCompaction vector for the XMODIFIED optimization.
**/
#define MSR_XRSTOR_INFO 0x00000900

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 XsaveAreaCpl : 2;

                            /* Bits[1:0], Access Type=RW, default=None*/

                            /* The full CPL from the last XRSTOR instruction. */
    UINT32 XsaveAreaVmmHostGuest : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /*
                               The VMM Host/Guest state from the last XRSTOR
                               instruction.
                            */
    UINT32 Rsvd3 : 2;

                            /* Bits[4:3], Access Type=RW, default=None*/

                            /* Unused bits. */
    UINT32 XsaveAreaValid : 1;

                            /* Bits[5:5], Access Type=RW, default=None*/

                            /*
                               The XSAVE_AREA valid bit is effectively an
                               address bit of the XSAVE_AREA. Since all
                               XSAVE_AREAs must be 64 byte aligned, setting
                               this bit forces the misalignment so compare of
                               this XSAVE_AREA and the XSAVE_AREA specified in
                               the XSAVE instruction must miscompare. The
                               miscompare will force all xmodified bits to be
                               treated as modified.
                            */
    UINT32 XsaveAreaAddress0 : 26;

                            /* Bits[31:6], Access Type=RW, default=None*/

                            /*
                               The XSAVE_AREA linear address from the last
                               XRSTOR.
                            */
    UINT32 XsaveAreaAddress1 : 25;

                            /* Bits[56:32], Access Type=RW, default=None*/

                            /*
                               The XSAVE_AREA linear address from the last
                               XRSTOR.
                            */
    UINT32 Rsvd57 : 7;

                            /* Bits[63:57], Access Type=RW, default=None*/

                            /* Unused bits. */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_XRSTOR_INFO_REGISTER;
/**
  Contains Exit Qual used on SMI I/O exits
  C6NoSave Candidate
**/
#define MSR_VMX_IO_EXIT_QUAL 0x00000901

/**
  Equivalent to architectural DR6 reg. 16 bit.
  (Mrm roctlregc/roctlregd/{tmpdr6lowSM306L|tmpdr6hiSM306L})
  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  !!!                                                                            !!!
  !!! CAUTION: Adding more bits to this creg or changing the layout of this creg !!!
  !!! will require MSR ucode changes. Talk to MSR ucode owner (rpartha on NHM) if!!!
  !!! you want to make changes to this creg                                      !!!
  !!!                                                                            !!!
  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**/
#define MSR_TMPDR6 0x00000902

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 B0 : 1;

                            /* Bits[0:0], Access Type=RW_V, default=0x00000000*/

                            /* ROBTMPDR6B0 */
    UINT32 B1 : 1;

                            /* Bits[1:1], Access Type=RW_V, default=0x00000000*/

                            /* ROBTMPDR6B1 */
    UINT32 B2 : 1;

                            /* Bits[2:2], Access Type=RW_V, default=0x00000000*/

                            /* ROBTMPDR6B2 */
    UINT32 B3 : 1;

                            /* Bits[3:3], Access Type=RW_V, default=0x00000000*/

                            /* ROBTMPDR6B3 */
    UINT32 Rsvd4 : 9;

                            /* Bits[12:4], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Bd : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /* ROBTMPDR6BD */
    UINT32 Bs : 1;

                            /* Bits[14:14], Access Type=RW_V, default=0x00000000*/

                            /* ROBTMPDR6BS */
    UINT32 Bt : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /* ROBTMPDR6BT */
    UINT32 Hled : 1;

                            /* Bits[16:16], Access Type=RW_V, default=0x00000000*/

                            /* ROBTMPDR6HLED */
    UINT32 EnclaveInterruption : 1;

                            /* Bits[17:17], Access Type=RW_V, default=0x00000000*/

                            /*
                               Enclave interruption indication. Cleared by HW
                               on retired EOM
                            */
    UINT32 Rsvd18 : 14;

                            /* Bits[31:18], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_TMPDR6_REGISTER;

/**
  Millicode MSR used to read/write certain fields of the
  Macroalias register.
  WRMSR will ignore the undefined bits (63:18, 14:13, 10, 6:2).
  WRMSR will not signal fault on any combination of bits, it is
  softwares responsiblity to make sure that values programmed
  this register are consistent and correct
  RDMSR will always return 0 in bits 63:18, 14:13, 10:9, 6:2.
  RDMSR will return the last value successfully updated by WRMSR
**/
#define MSR_XU_MACROINSTRUCTION_ALIAS 0x00000903

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Scale : 2;

                            /* Bits[1:0], Access Type=RW, default=0x00000000*/

                            /*
                               Scale: 00 -> scale 1, 01 -> scale 2, 10 -> scale
                               4, 11 -> scale 8
                            */
    UINT32 Rsvd2 : 5;

                            /* Bits[6:2], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Asize : 3;

                            /* Bits[9:7], Access Type=RW, default=0x00000000*/

                            /*
                               Address size: 000 -> 16-bit, 001 -> 32 bit, 010
                               -> 64-bit, 011-111 -> Reserved
                            */
    UINT32 Rsvd10 : 1;

                            /* Bits[10:10], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Osize : 2;

                            /* Bits[12:11], Access Type=RW, default=0x00000000*/

                            /*
                               Operand size: 00 -> DSZ16, 01 -> DSZ32, 10 ->
                               DSZ64, 11 -> Reserved
                            */
    UINT32 Rsvd13 : 2;

                            /* Bits[14:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Lseg : 3;

                            /* Bits[17:15], Access Type=RW, default=0x00000000*/

                            /*
                               Logical Segment: 000-> ES, 001-> CS, 010-> SS,
                               011-> DS, 100-> FS, 101-> GS, 110-111 ->
                               Reserved
                            */
    UINT32 Rsvd18 : 14;

                            /* Bits[31:18], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_XU_MACROINSTRUCTION_ALIAS_REGISTER;

/**
  Millicode MSR used to update the POST_VMXON and CURRENT_WP_IS_SHADOW_VMCS mode-based branch bits
  WRMSR will ignore the undefined bits
  RDMSR will always return 0 in undefined bits
**/
#define MSR_XU_VMX_CONTROL 0x00000904

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 1;

                            /* Bits[0:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PostVmxon : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Indicates whether the machine is in a post-VMXON
                               state
                            */
    UINT32 Rsvd2 : 4;

                            /* Bits[5:2], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 CurrentWpIsShadowVmcs : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Indicates whether the current working pointer is
                               a shadow VMCS
                            */
    UINT32 Rsvd7 : 25;

                            /* Bits[31:7], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_XU_VMX_CONTROL_REGISTER;
/**
  Pause-Loop Exiting: First value
**/
#define MSR_VMX_PLE_FIRST 0x00000905
/**
  Pause-Loop Exiting: Last value
**/
#define MSR_VMX_PLE_LAST 0x00000906

/**
  Holds address bits [11:0] of a guest load/store access that hit the AVRR range
  C6NoSave Candidate
  FSCP Crunch:  12:32 Used only 12 bits out of 32
**/
#define MSR_VMX_VMENTRY_AVRR_TBIT_MAILBOX 0x00000907

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 MailboxOffset : 12;

                            /* Bits[11:0], Access Type=RW, default=None*/

                            /*
                               Mailbox address bits [11:0] of a guest
                               load/store access that hit the AVRR range
                            */
    UINT32 Reserved12 : 20;

                            /* Bits[31:12], Access Type=RW, default=None*/

                            /* Unused */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_VMX_VMENTRY_AVRR_TBIT_MAILBOX_REGISTER;

/**
  Millicode MSR used to control SMM states
  WRMSR will ignore the undefined bits (63:32, 30:1).
  RDMSR will always return 0 in bits 63:32, 30:1.
**/
#define MSR_XU_SMM_STATE 0x00000908

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 InSmm : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Setting/clearing this bit will set/clear
                               CORE_CR_RR_MODE[IN_SMM] for the current thread
                               (see GQ1_CR_XU_SMM_STATE for uncore). 0 - Not in
                               SMM mode, 1 - In SMM mode
                            */
    UINT32 Rsvd1 : 3;

                            /* Bits[3:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 SmmCodeAccessVioEnable : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               Tied to the following bits.
                               PMH_CR_RR_MODE[SMM_CODE_RANGE_CHK_EN] and
                               ROB1_CR_MISC_STATE[EIP_LOGGING].
                               Setting/clearing this bit will set/clear
                               PMH_CR_RR_MODE[SMM_CODE_RANGE_CHK_EN] and
                               ROB1_CR_MISC_STATE[EIP_LOGGING]
                            */
    UINT32 Rsvd5 : 16;

                            /* Bits[20:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 PsmiBaseLocked : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               RDMSR only bit to report status of
                               SCP_CR_PSMI_CTRL_PSMI_BASE_LOCKED, ignored on
                               WRMSR
                            */
    UINT32 Rsvd22 : 9;

                            /* Bits[30:22], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 SmmOutsideVmx : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Setting/clearing this bit will set/clear
                               FSCP_CR_LT_SMM_OPT_OUT_INFO[SMM_OUTSIDE_VMX]
                               (bit31) Indicates/controls opt-in to peer SMM
                               operation
                            */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_XU_SMM_STATE_REGISTER;
/**
  Saved RSI value from IO SMI, used by parallel VMExit and SMI
  C6NoSave Candidate
**/
#define MSR_IO_SMI_BACKUP_RSI 0x00000909
/**
  Saved RCX value from IO SMI, used by parallel VMExit and SMI
  C6NoSave Candidate
**/
#define MSR_IO_SMI_BACKUP_RCX 0x0000090A
/**
  Saved RDI value from IO SMI, used by parallel VMExit and SMI
  C6NoSave Candidate
**/
#define MSR_IO_SMI_BACKUP_RDI 0x0000090B

/**
  Holds VPPR bits [7:4]
  FSCP Crunch:  4/32 Used only 4 bits out of 32
**/
#define MSR_VMX_VPPR 0x0000090C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Vppr74 : 4;

                            /* Bits[3:0], Access Type=RW, default=None*/

                            /* VPPR bits [7:4] */
    UINT32 Reserved4 : 28;

                            /* Bits[31:4], Access Type=RW, default=None*/

                            /* New FSCPs added on HSW */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_VMX_VPPR_REGISTER;
/**
  Write only MSR for Xucode to write PDM data out to the GDXC
**/
#define MSR_PDM_GDXC_MSG 0x0000090D

/**
  This is a Write-Only cmd MSR. A write causes GT to flush outstanding transactions and re-load it's boot context. A Rd will GP Fault.
  With the removal of the GT_CREG_ADDR_DIFFERENTIATOR there is no
  need for this to be virtual
**/
#define MSR_GT_FLUSH_RELOAD 0x0000090E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 BcldReq : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               GT Boot Context Load Request. Write to this bit
                               will initiate ?Mcheck Complete Routine? (PPPE
                               flow).
                            */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RW, default=0x00000000*/

                            /* reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_GT_FLUSH_RELOAD_REGISTER;

/**
  GT writes a '1 to this bit to acknowledge PPPE range registers are loaded into GT.
**/
#define MSR_GT_FLUSH_BCLD_ACK 0x0000090F

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Ack : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* GT Boot Context Load Ack */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_GT_FLUSH_BCLD_ACK_REGISTER;

/**

**/
#define MSR_XU_STATUS 0x00000910

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 C6DramEnabled : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* C6 DRAM ENABLE FUSE */
    UINT32 Rsvd1 : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* reserved */
    UINT32 TagecOnly : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /* reserved */
    UINT32 Rsvd3 : 13;

                            /* Bits[15:3], Access Type=RW, default=None*/

                            /* reserved */
    UINT32 Strap : 4;

                            /* Bits[19:16], Access Type=RW, default=None*/

                            /* Straps from PCU_CR_STRAP_SET_DATA2_HIGH.strap */
    UINT32 Rsvd20 : 5;

                            /* Bits[24:20], Access Type=RW, default=None*/

                            /* reserved */
    UINT32 EpcOvDis : 1;

                            /* Bits[25:25], Access Type=RW, default=None*/

                            /* EPC_OV Disable fuse */
    UINT32 Rsvd26 : 5;

                            /* Bits[30:26], Access Type=RW, default=None*/

                            /* reserved */
    UINT32 EdmmDis : 1;

                            /* Bits[31:31], Access Type=RW, default=None*/

                            /* EDMM Disable fuse */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_XU_STATUS_REGISTER;

/**
  Holds XSAVE_AREA XCompaction vector for the XMODIFIED optimization.
**/
#define MSR_XRSTOR_XCOMPACTION_VECTOR 0x00000911

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 XcompactionVector : 10;

                            /* Bits[9:0], Access Type=RW, default=None*/

                            /*
                               Bit 0 => FP Bit 1 => SSE Bit 2 => GSSE Bit 3 =>
                               PL BNDREGS Bit 4 => PL BNDCFS Bit 5 => KMASK Bit
                               6 => AVX3(15:0) Bit 7 => AVX3(31:16) Bit 8 =>
                               RTIT (reserved - actual bit in IA_XSS) Bit 9 =>
                               PKRU
                            */
    UINT32 Rsvd10 : 5;

                            /* Bits[14:10], Access Type=RW, default=None*/

                            /* Available for use */
    UINT32 XcompInUse : 1;

                            /* Bits[15:15], Access Type=RW, default=None*/

                            /*
                               Save area for XRSTOR_INFO used XCOMPACTION, or
                               VECTOR in this MSR is valid.
                            */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RW, default=None*/

                            /* Available for use */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RW, default=None*/

                            /* Available for use */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_XRSTOR_XCOMPACTION_VECTOR_REGISTER;

/**
  Trusted IO - CAM Filter Info
**/
#define MSR_XU_TIO_CF_INFO 0x00000912

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Numrows : 8;

                            /* Bits[7:0], Access Type=RO, default=0x00000000*/

                            /*
                               Specifies the number of rows in the CAM Filter
                               table
                            */
    UINT32 Numcols : 8;

                            /* Bits[15:8], Access Type=RO, default=0x00000000*/

                            /*
                               Specifies the number of CRs per row in the CAM
                               Filter table
                            */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RO, default=0x00000000*/

                            /*
                               reserved the number of CRs per row in the CAM
                               Filter table
                            */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RO, default=0x00000000*/

                            /*
                               reserved the number of CRs per row in the CAM
                               Filter table
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_XU_TIO_CF_INFO_REGISTER;
/**
  MSR used to access the CAM Filter Table
**/
#define MSR_XU_TIO_CF_TABLE 0x00000913
/**
  VMX AVRR Remap Addr used in RR assist
**/
#define MSR_VMX_AVRR_REMAP 0x00000915

/**
  APIC Virtualization Range Register - Base address of virtual APIC
**/
#define MSR_AVRR_BASE 0x00000916

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 11;

                            /* Bits[10:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Vld : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /* Enable bit for the AVRR */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* AVRR Base Address */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* AVRR Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AVRR_BASE_REGISTER;
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 4 instances in addresses range 0x917 to 0x91A"
**/
#define MSR_XU_RESERVED_1_1 0x00000917
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 4 instances in addresses range 0x917 to 0x91A"
**/
#define MSR_XU_RESERVED_2_2 0x00000918
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 4 instances in addresses range 0x917 to 0x91A"
**/
#define MSR_XU_RESERVED_3_3 0x00000919
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 4 instances in addresses range 0x917 to 0x91A"
**/
#define MSR_XU_RESERVED_4_4 0x0000091A
/**
  PPPE Exception Handling Entrypoint
**/
#define MSR_EM_EXCEPTIONS_HANDLING_EIP 0x0000091B
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 4 instances in addresses range 0x91C to 0x91F"
**/
#define MSR_XU_RESERVED_5_5 0x0000091C
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 4 instances in addresses range 0x91C to 0x91F"
**/
#define MSR_XU_RESERVED_6_6 0x0000091D
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 4 instances in addresses range 0x91C to 0x91F"
**/
#define MSR_XU_RESERVED_7_7 0x0000091E
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 4 instances in addresses range 0x91C to 0x91F"
**/
#define MSR_XU_RESERVED_8_8 0x0000091F

/**
  The who-am-I register is used by uCode to set up the APIC ID.
  This register is initialized by the PCU according to the socket configuration using the NcuPcuWHOAMI register.
  The who-am-i register returns a thread specific identifier, however some of the fields of this registers are shared between all threads as indicated by the fields description.
**/
#define MSR_NCUWHOAMI 0x00000920

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Lpid : 3;

                            /* Bits[2:0], Access Type=RO_V, default=0x00000000*/

                            /*
                               3-bit field. UBOX generates contiguous LPIDs for
                               logical procsesors within an IDI agent. CPUs
                               with fewer than 8 logical processors per IDI (eg
                               ICL, ICX) see holes in the WHOAMI space. Ucode
                               handles this as required (plug holes or live
                               with it)
                            */
    UINT32 Moduleid : 13;

                            /* Bits[15:3], Access Type=RO_V, default=0x00000000*/

                            /* Returns the Module Identification number. */
    UINT32 Packageid : 11;

                            /* Bits[26:16], Access Type=RW_V, default=0x00000000*/

                            /*
                               Maps to the socketId straps; Can be programmed
                               (MSR)
                            */
    UINT32 Rsvd27 : 1;

                            /* Bits[27:27], Access Type=RO_V, default=0x00000000*/

                            /* Reserved */
    UINT32 Corenum : 3;

                            /* Bits[30:28], Access Type=RO, default=0x00000000*/

                            /*
                               Indicates how many common APIC ID bits there are
                               in the socket: 000: upto 8 cores 001: upto 16
                               cores 010: upto 32 cores 011: upto 64 cores 100:
                               upto 128 cores 101: upto 256 cores 110: upto 512
                               cores 111: upto 1024 cores This field is used by
                               uCode for correctly handling the number of
                               variable bits in PID field.
                            */
    UINT32 Bsp : 1;

                            /* Bits[31:31], Access Type=RO_V, default=0x00000000*/

                            /*
                               Indicates to the core uCode that this thread
                               should be made the BSP of the socket, .
                               Selection among multi-socket BSP is done by BIOS
                               SW. 0 : this thread should not be set as BSP 1 :
                               this thread should be set as BSP
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_NCUWHOAMI_REGISTER;

/**

**/
#define MSR_RESOLVED_CORES_MASK 0x00000921

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CoreMask : 8;

                            /* Bits[7:0], Access Type=RWS, default=0x00000000*/

                            /*
                               The resolved IA core mask contains the
                               functional (non fused-down) and non-defeatured
                               IA cores. The mask is indexed by logical ID. It
                               is normally contiguous, unless BIOS defeature is
                               activated on a particular core. Ucode will read
                               this mask in order to decide on BSP and APIC
                               IDs. This field is determined by FW based on
                               CSR_DESIRED_CORES[CORE_OFF_MASK] and
                               PCU_CR_RESOLVED_CORES_MASK[FUSED_CORE_MASK].
                            */
    UINT32 ThreadMask : 2;

                            /* Bits[9:8], Access Type=RWS, default=0x00000000*/

                            /*
                               Thread Mask indicates which threads are enabled
                               in the core. The LSB is the enable bit for
                               Thread 0, whereas the MSB is the enable bit for
                               Thread 1. This field is determined by FW based
                               on CSR_DESIRED_CORES[SMT_DISABLE] and
                               PCU_CR_RESOLVED_CORES_MASK[FUSED_THREAD_MASK].
                            */
    UINT32 Rsvd10 : 6;

                            /* Bits[15:10], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 FusedCoreMask : 8;

                            /* Bits[23:16], Access Type=RWS, default=0x00000000*/

                            /* Vector of fused enabled IA cores in the package. */
    UINT32 FusedSmtCapability : 1;

                            /* Bits[24:24], Access Type=RWS, default=0x00000000*/

                            /*
                               Fuse enabled threads in the package. 0b 1 thread
                               1b 2 threads This value represents the inverted
                               value of the HT_DIS fuse.
                            */
    UINT32 Rsvd25 : 7;

                            /* Bits[31:25], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_RESOLVED_CORES_MASK_REGISTER;

/**
  Write only MSR for Xucode to modify the PDM header for GDXC messages
**/
#define MSR_PDM_HEADER 0x00000922

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PacketType : 8;

                            /* Bits[7:0], Access Type=WO, default=0x00000000*/

                            /* GDXC Packet type */
    UINT32 PacketLength : 16;

                            /* Bits[23:8], Access Type=WO, default=0x00000000*/

                            /* GDXC Packet length */
    UINT32 Rsvd24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PDM_HEADER_REGISTER;

/**
  Timer control bits for various MLC/APIC Timers
**/
#define MSR_MLC_PWR_MGMT_TIMER_CTRL 0x00000923

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ApicTimerFreeze : 1;

                            /* Bits[0:0], Access Type=RO_V, default=0x00000000*/

                            /*
                               Set to disable APIC Timer InitCnt and CfgCnt
                               APIC Register updates. Does not directly freeze
                               the APIC Timer. Supposed to freeze CTC in probe-
                               mode, but bit is hardwired to 0. This bit is not
                               used.
                            */
    UINT32 VtTimerFreeze : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Set to freeze VT timer in MLC */
    UINT32 AmcntFreeze : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* Set to freeze ACNT/MCNT Timers in MLC */
    UINT32 McntEnable : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Set to enable MCNT Timer in MLC when the thread
                               is asleep. This would be set for conditions like
                               T-state throttling and P-state transitions where
                               MCNT is supposed to continue to count even while
                               the thread is asleep.
                            */
    UINT32 Rsvd4 : 28;

                            /* Bits[31:4], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_MLC_PWR_MGMT_TIMER_CTRL_REGISTER;
/**
  Scratch space exposed via MSR in PPPE
**/
#define MSR_PPPE_DOORBELL_EXIT_BITMAP 0x00000924
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 7 instances in addresses range 0x928 to 0x92E"
**/
#define MSR_XU_RESERVED_9_9 0x00000928
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 7 instances in addresses range 0x928 to 0x92E"
**/
#define MSR_XU_RESERVED_10_10 0x00000929
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 7 instances in addresses range 0x928 to 0x92E"
**/
#define MSR_XU_RESERVED_11_11 0x0000092A
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 7 instances in addresses range 0x928 to 0x92E"
**/
#define MSR_XU_RESERVED_12_12 0x0000092B
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 7 instances in addresses range 0x928 to 0x92E"
**/
#define MSR_XU_RESERVED_13_13 0x0000092C
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 7 instances in addresses range 0x928 to 0x92E"
**/
#define MSR_XU_RESERVED_14_14 0x0000092D
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 7 instances in addresses range 0x928 to 0x92E"
**/
#define MSR_XU_RESERVED_15_15 0x0000092E

/**
  Register decription
**/
#define MSR_PIC_LT_DOORBELL 0x0000092F

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 SenterEvent : 1;

                            /* Bits[0:0], Access Type=RW1S, default=0x00000000*/

                            /* Needs to be updated */
    UINT32 SenterContinueEvent : 1;

                            /* Bits[1:1], Access Type=RW1S, default=0x00000000*/

                            /* Needs to be updated */
    UINT32 SexitEvent : 1;

                            /* Bits[2:2], Access Type=RW1S, default=0x00000000*/

                            /* Needs to be updated */
    UINT32 SexitContinueEvent : 1;

                            /* Bits[3:3], Access Type=RW1S, default=0x00000000*/

                            /* Needs to be updated */
    UINT32 WakeupEvent : 1;

                            /* Bits[4:4], Access Type=RW1S, default=0x00000000*/

                            /* Needs to be updated */
    UINT32 Pppe : 3;

                            /* Bits[7:5], Access Type=RW1S, default=0x00000000*/

                            /* LT_DOORBELL[8:5] is reserved for PPPE. */
    UINT32 HsxReservedPfatEnter : 1;

                            /* Bits[8:8], Access Type=RW1S, default=0x00000000*/

                            /*
                               LT_DOORBELL[8] is used by Haswell Server as the
                               multi-socket PFAT ENTER DOORBELL.
                            */
    UINT32 UcodeRsvd : 2;

                            /* Bits[10:9], Access Type=RW1S, default=0x00000000*/

                            /* LT_DOORBELL[10:9] is reserved for ucode usage. */
    UINT32 PfatWakeup : 1;

                            /* Bits[11:11], Access Type=RW1S, default=0x00000000*/

                            /*
                               LT_DOORBELL[11] is used as the PFAT WAKEUP
                               DOORBELL.
                            */
    UINT32 RsvdExtLtdb12 : 5;

                            /* Bits[16:12], Access Type=RW1S, default=0x00000000*/

                            /* Needs to be updated */
    UINT32 NonWbLoadSeen : 1;

                            /* Bits[17:17], Access Type=RW1S, default=0x00000000*/

                            /* Needs to be updated */
    UINT32 MlcFillOccurred : 1;

                            /* Bits[18:18], Access Type=RW1S, default=0x00000000*/

                            /* Needs to be updated */
    UINT32 MlcEvictionOccurred : 1;

                            /* Bits[19:19], Access Type=RW1S, default=0x00000000*/

                            /* Needs to be updated */
    UINT32 HiddenLakeInterrupt : 1;

                            /* Bits[20:20], Access Type=RW1S, default=0x00000000*/

                            /* Hidden Lake Interrupt from NCU via serial bus */
    UINT32 Rsvd21 : 7;

                            /* Bits[27:21], Access Type=RW1S, default=0x00000000*/

                            /* Rsvd */
    UINT32 Xucode : 4;

                            /* Bits[31:28], Access Type=RW1S, default=0x00000000*/

                            /* Used by millicode */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PIC_LT_DOORBELL_REGISTER;
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 3 instances in addresses range 0x930 to 0x932"
**/
#define MSR_XU_RESERVED_16_16 0x00000930
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 3 instances in addresses range 0x930 to 0x932"
**/
#define MSR_XU_RESERVED_17_17 0x00000931
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 3 instances in addresses range 0x930 to 0x932"
**/
#define MSR_XU_RESERVED_18_18 0x00000932

/**
  PPPE will have read/write access to the FSCP_CR_VMCS_CACHE_BASE register for implementing the VMCS cache (i387450).
  Can be cut to 32-bits if not used by PPPE
**/
#define MSR_VMCS_CACHE_BASE 0x00000933

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Address : 32;

                            /* Bits[31:0], Access Type=RW, default=None*/

                            /* Address of the VMCS cache for this thread */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=None*/

                            /* Unused */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_VMCS_CACHE_BASE_REGISTER;
/**
  Scratch Pad register BNS_CR_PSMBASE
**/
#define MSR_PSMI_BASE 0x00000934

/**
  Holds various SMX state
**/
#define MSR_LT_SMX_STATE 0x00000936

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 IlpFlag : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /*
                               Set during SENTER and SEXIT handshakes for the
                               ILP thread. Also set during ENTERACCS
                            */
    UINT32 SenterFlag : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* Set by SENTER for all threads, cleared by SEXIT */
    UINT32 AcmodeFlag : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /* Set while AC mode is active */
    UINT32 ShutdownFlag : 1;

                            /* Bits[3:3], Access Type=RW, default=None*/

                            /*
                               Setting this caues leacy shutdown to morph to
                               LT-shutdown
                            */
    UINT32 AuthenticationBypassFlag : 1;

                            /* Bits[4:4], Access Type=RW, default=None*/

                            /*
                               Set to bypass AC-module authentication to speed
                               up validation
                            */
    UINT32 PsmiEnable : 1;

                            /* Bits[5:5], Access Type=RW, default=None*/

                            /* Set to enable PSMI events during AC-mode */
    UINT32 CramLoadBypass : 1;

                            /* Bits[6:6], Access Type=RW, default=None*/

                            /* Set to bypass CRAM load */
    UINT32 EnteraccsMacro : 1;

                            /* Bits[7:7], Access Type=RW, default=None*/

                            /* Set during ENTERACCS */
    UINT32 SavedGqDisDca : 1;

                            /* Bits[8:8], Access Type=RW, default=None*/

                            /* Saved value of the GQ DCA Disable bit */
    UINT32 LtAbortFlag : 1;

                            /* Bits[9:9], Access Type=RW, default=None*/

                            /*  */
    UINT32 FitProcessing : 1;

                            /* Bits[10:10], Access Type=RW, default=None*/

                            /*
                               Set during patch load and startup ACM launch
                               while we're processing the FIT.
                            */
    UINT32 SavedSmrrValid : 1;

                            /* Bits[11:11], Access Type=RW, default=None*/

                            /*
                               Saved value of the SMRR valid bit. Used when
                               unlocking TSEG.
                            */
    UINT32 SavedSmrr2Valid : 1;

                            /* Bits[12:12], Access Type=RW, default=None*/

                            /*
                               Saved value of the SMRR2 valid bit. Used when
                               unlocking TSEG.
                            */
    UINT32 SavedBiosDone : 1;

                            /* Bits[13:13], Access Type=RW, default=None*/

                            /*  */
    UINT32 PackageBsp : 1;

                            /* Bits[14:14], Access Type=RW, default=None*/

                            /*
                               Thread that will send the JOIN cycle to the
                               chipset (RLP BSP) will also set this bit
                            */
    UINT32 SvSenterEn : 1;

                            /* Bits[15:15], Access Type=RW, default=None*/

                            /*
                               Enables extended state saving for SV during
                               SENTER
                            */
    UINT32 CrashCode : 5;

                            /* Bits[20:16], Access Type=RW, default=None*/

                            /*
                               Holds the crash code for LT-shutdown. Written to
                               LSBs of LT_CRASH register. Dont change position
                               without CRASH_ACM_SVN
                            */
    UINT32 CrashCodeValid : 1;

                            /* Bits[21:21], Access Type=RW, default=None*/

                            /* Indicates that the crash code is vaild */
    UINT32 PppeEnabled : 1;

                            /* Bits[22:22], Access Type=RW, default=None*/

                            /*
                               Indicates whether PPPE was enabled prior to AC-
                               mode
                            */
    UINT32 SavedTf : 1;

                            /* Bits[23:23], Access Type=RW, default=None*/

                            /* Saved value of EFLAGS.TF during SEXIT */
    UINT32 TpmBypass : 1;

                            /* Bits[24:24], Access Type=RW, default=None*/

                            /* Set to bypass TPM registration during SENTER */
    UINT32 Hotadd : 1;

                            /* Bits[25:25], Access Type=RW, default=None*/

                            /*  */
    UINT32 Reserved26 : 5;

                            /* Bits[30:26], Access Type=RW, default=None*/

                            /*  */
    UINT32 LtPatchFlag : 1;

                            /* Bits[31:31], Access Type=RW, default=None*/

                            /*  */
    UINT32 CrashAcmSvn : 8;

                            /* Bits[39:32], Access Type=RW, default=None*/

                            /*
                               Used in case of Crash-Code = 16, otherwise
                               zeroed. Should be 16 bits shifted left from the
                               CRASH_CODE field.
                            */
    UINT32 Reserved40 : 24;

                            /* Bits[63:40], Access Type=RW, default=None*/

                            /*  */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LT_SMX_STATE_REGISTER;
/**
  VMX timer current count
**/
#define MSR_MLC_VT_TIMER_COUNT 0x00000937

/**
  VMX timer control
**/
#define MSR_MLC_VT_TIMER_CONTROL 0x00000938

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 TimerEnable : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Set to enable VT timer */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_MLC_VT_TIMER_CONTROL_REGISTER;

/**
  SMM IO MISC INFO Register. 32 bit. (Mrm roctlregc/roapes/roiomiscinfoSM306L)
**/
#define MSR_IOMISCINFO 0x00000939

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Smi : 1;

                            /* Bits[0:0], Access Type=RW_V, default=0x00000000*/

                            /* IO_SMI_POS */
    UINT32 IoLength : 3;

                            /* Bits[3:1], Access Type=RW, default=0x00000000*/

                            /* IO_LENGTH_MSB_POS:IO_LENGTH_LSB_POS */
    UINT32 IoType : 4;

                            /* Bits[7:4], Access Type=RW, default=0x00000000*/

                            /* IO_TYPE_MSB_POS:IO_TYPE_LSB_POS */
    UINT32 Rsvd8 : 8;

                            /* Bits[15:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 IoPort : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* IO_PORT_MSB_POS:IO_PORT_LSB_POS */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IOMISCINFO_REGISTER;
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 1 instances in addresses range 0x93B to 0x93B"
**/
#define MSR_XU_RESERVED_19_19 0x0000093B
/**
  Memory address accessed by the last IO instruction.
  Used to communicate between io and SMI/PPPE.
  C6NoSave candidate
**/
#define MSR_IO_MEM_ADDR 0x0000093E
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 1 instances in addresses range 0x93F to 0x93F"
**/
#define MSR_XU_RESERVED_20_20 0x0000093F

/**
  Mode C - Protected Mode PagDir Pointers - 0
  " seq has 4 instances in addresses range 0x940 to 0x943"
**/
#define MSR_PDPTR_0_0 0x00000940

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 P : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Page Directory Pointer Entry 0 - P bit */
    UINT32 Rsvd1 : 2;

                            /* Bits[2:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Pwt : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* CR3 page level cache write through */
    UINT32 Pcd : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /* CR3 page level cache disable */
    UINT32 Rsvd5 : 7;

                            /* Bits[11:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Pdba0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* Page Directory Base Address */
    UINT32 Pdba1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* Page Directory Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PDPTR_0_0_REGISTER;

/**
  Mode C - Protected Mode PagDir Pointers - 0
  " seq has 4 instances in addresses range 0x940 to 0x943"
**/
#define MSR_PDPTR_1_1 0x00000941

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 P : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Page Directory Pointer Entry 0 - P bit */
    UINT32 Rsvd1 : 2;

                            /* Bits[2:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Pwt : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* CR3 page level cache write through */
    UINT32 Pcd : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /* CR3 page level cache disable */
    UINT32 Rsvd5 : 7;

                            /* Bits[11:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Pdba0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* Page Directory Base Address */
    UINT32 Pdba1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* Page Directory Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PDPTR_1_1_REGISTER;

/**
  Mode C - Protected Mode PagDir Pointers - 0
  " seq has 4 instances in addresses range 0x940 to 0x943"
**/
#define MSR_PDPTR_2_2 0x00000942

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 P : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Page Directory Pointer Entry 0 - P bit */
    UINT32 Rsvd1 : 2;

                            /* Bits[2:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Pwt : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* CR3 page level cache write through */
    UINT32 Pcd : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /* CR3 page level cache disable */
    UINT32 Rsvd5 : 7;

                            /* Bits[11:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Pdba0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* Page Directory Base Address */
    UINT32 Pdba1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* Page Directory Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PDPTR_2_2_REGISTER;

/**
  Mode C - Protected Mode PagDir Pointers - 0
  " seq has 4 instances in addresses range 0x940 to 0x943"
**/
#define MSR_PDPTR_3_3 0x00000943

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 P : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Page Directory Pointer Entry 0 - P bit */
    UINT32 Rsvd1 : 2;

                            /* Bits[2:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Pwt : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* CR3 page level cache write through */
    UINT32 Pcd : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /* CR3 page level cache disable */
    UINT32 Rsvd5 : 7;

                            /* Bits[11:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Pdba0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* Page Directory Base Address */
    UINT32 Pdba1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* Page Directory Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PDPTR_3_3_REGISTER;
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 10 instances in addresses range 0x944 to 0x94D"
**/
#define MSR_XU_RESERVED_21_21 0x00000944
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 10 instances in addresses range 0x944 to 0x94D"
**/
#define MSR_XU_RESERVED_22_22 0x00000945
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 10 instances in addresses range 0x944 to 0x94D"
**/
#define MSR_XU_RESERVED_23_23 0x00000946
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 10 instances in addresses range 0x944 to 0x94D"
**/
#define MSR_XU_RESERVED_24_24 0x00000947
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 10 instances in addresses range 0x944 to 0x94D"
**/
#define MSR_XU_RESERVED_25_25 0x00000948
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 10 instances in addresses range 0x944 to 0x94D"
**/
#define MSR_XU_RESERVED_26_26 0x00000949
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 10 instances in addresses range 0x944 to 0x94D"
**/
#define MSR_XU_RESERVED_27_27 0x0000094A
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 10 instances in addresses range 0x944 to 0x94D"
**/
#define MSR_XU_RESERVED_28_28 0x0000094B
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 10 instances in addresses range 0x944 to 0x94D"
**/
#define MSR_XU_RESERVED_29_29 0x0000094C
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 10 instances in addresses range 0x944 to 0x94D"
**/
#define MSR_XU_RESERVED_30_30 0x0000094D

/**

**/
#define MSR_XU_ALL_CORES_POISON 0x0000094E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PoisonEn : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* reserved */
    UINT32 ViralEn : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* reserved */
    UINT32 RasSgxOptin : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /* reserved */
    UINT32 Rsrvd3 : 29;

                            /* Bits[31:3], Access Type=RW, default=None*/

                            /* reserved */
    UINT32 Rsrvd32 : 32;

                            /* Bits[63:32], Access Type=RW, default=None*/

                            /* reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_XU_ALL_CORES_POISON_REGISTER;
/**

**/
#define MSR_XU_OPTIN 0x0000094F

/**
  Each bit is command from xucode for specific action. Not really a register.
**/
#define MSR_XUCODE_UCODE_COMMAND 0x00000950

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 EnableEmxrr : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* set EMXRR_enable at PMH_CR_RR_MODE[7] */
    UINT32 UpdateCurrentSeSvn : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* Updates CURRENT_SE_SVN */
    UINT32 LockSeSvn : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /* Sets and lock R_LAST_PATCH_SVN */
    UINT32 SignalMckindEvent : 1;

                            /* Bits[3:3], Access Type=RW, default=None*/

                            /*
                               broadcast the MCKIND to all threads in the
                               package will not be formally checked
                            */
    UINT32 DisablePdrCopy : 1;

                            /* Bits[4:4], Access Type=RW, default=None*/

                            /*
                               Set FSCP_CR_TAP_MISC.DISABLE_PDR_COPY per
                               Skylake issue 1350825
                            */
    UINT32 SetSmmDelayed : 1;

                            /* Bits[5:5], Access Type=RW, default=None*/

                            /*
                               invoke set_smm_delayed_bit ucode routine per
                               Skylake issue 1351518
                            */
    UINT32 ClearSmmDelayed : 1;

                            /* Bits[6:6], Access Type=RW, default=None*/

                            /*
                               invoke clear_smm_delayed_bit ucode routine per
                               Skylake issue 1351518
                            */
    UINT32 Reserved7 : 24;

                            /* Bits[30:7], Access Type=RW, default=None*/

                            /* Reserved */
    UINT32 SetSgxSecureEn : 1;

                            /* Bits[31:31], Access Type=RW, default=None*/

                            /* For mcheck to set sgx_secure_en */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_XUCODE_UCODE_COMMAND_REGISTER;

/**
  An uncore register indicating that SE is fully installed. Used by CPUID and preamble need to check the option to cache it for each core
**/
#define MSR_GLOBAL_SE_ENABLE 0x00000951

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 SeEnable : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* enable bit for this thread */
    UINT32 Lock : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* this acts as global SE disable */
    UINT32 Reserved2 : 30;

                            /* Bits[31:2], Access Type=RW, default=None*/

                            /*  */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_GLOBAL_SE_ENABLE_REGISTER;

/**

**/
#define MSR_PKG_SE_SVN 0x00000952

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 PrResetSvn : 8;

                            /* Bits[7:0], Access Type=RW, default=None*/

                            /* Reflection of PR_RESET_SVN for XuCode access */
    UINT32 RLastPatchSvn0 : 24;

                            /* Bits[31:8], Access Type=RW, default=None*/

                            /*
                               Reflection of R_LAST_PATCH_SVN[63:8] for XuCode
                               access
                            */
    UINT32 RLastPatchSvn1 : 32;

                            /* Bits[63:32], Access Type=RW, default=None*/

                            /*
                               Reflection of R_LAST_PATCH_SVN[63:8] for XuCode
                               access
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PKG_SE_SVN_REGISTER;

/**
  Enclave Linear Space Range Register - Physical Base Control Register
**/
#define MSR_ELSRR_BASE 0x00000955

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 12;

                            /* Bits[11:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* ELSRR Base Address */
    UINT32 Base1 : 25;

                            /* Bits[56:32], Access Type=RW, default=0x00000000*/

                            /* ELSRR Base Address */
    UINT32 Rsvd57 : 7;

                            /* Bits[63:57], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ELSRR_BASE_REGISTER;

/**
  Enclave Linear Space Range Register - Physical Mask Control Register
**/
#define MSR_ELSRR_MASK 0x00000956

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 12;

                            /* Bits[11:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mask0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* ELSRR MASK bits */
    UINT32 Mask1 : 25;

                            /* Bits[56:32], Access Type=RW, default=0x00000000*/

                            /* ELSRR MASK bits */
    UINT32 Rsvd57 : 7;

                            /* Bits[63:57], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ELSRR_MASK_REGISTER;

/**
  TCS Physical Address. Pointer to TCS structure, to be used at ASEX
**/
#define MSR_TCS_PA 0x00000958

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 TcsPhysAddr0 : 32;

                            /* Bits[31:0], Access Type=RW, default=None*/

                            /*  */
    UINT32 TcsPhysAddr1 : 20;

                            /* Bits[51:32], Access Type=RW, default=None*/

                            /*  */
    UINT32 RsvdB52 : 12;

                            /* Bits[63:52], Access Type=RW, default=None*/

                            /*  */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_TCS_PA_REGISTER;

/**
  Holds SE Active SECS
**/
#define MSR_SECS_SID 0x00000959

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 EnclaveMode : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* The thread is in Enclave Mode */
    UINT32 Rsvd1 : 11;

                            /* Bits[11:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ActiveSecs0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* ACTIVE_SECS */
    UINT32 ActiveSecs1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* ACTIVE_SECS */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SECS_SID_REGISTER;
/**
  This is a Read-Only xucode MSR.
**/
#define MSR_FUSE_KEY1_0 0x00000960
/**
  This is a Read-Only xucode MSR.
**/
#define MSR_FUSE_KEY1_1 0x00000961

/**
  Millicode Memory Range Register - Physical Base Control Register
**/
#define MSR_EMRR_BASE 0x00000962

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Memtype : 3;

                            /* Bits[2:0], Access Type=RW, default=0x00000000*/

                            /* EMRR BASE MemType */
    UINT32 Rsvd3 : 9;

                            /* Bits[11:3], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* EMRR Base Address */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* EMRR Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_EMRR_BASE_REGISTER;

/**
  Millicode Memory Range Register - Physical Mask Control Register
**/
#define MSR_EMRR_MASK 0x00000963

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 9;

                            /* Bits[8:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Assist : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               If set, EMRR is in assist-mode - else in page
                               abort-mode (defeature only)
                            */
    UINT32 L : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Lock bit for the EMRR */
    UINT32 Vld : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /* Enable bit for the EMRR */
    UINT32 Mask0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* EMRR MASK bits */
    UINT32 Mask1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* EMRR MASK bits */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_EMRR_MASK_REGISTER;

/**
  Xucode Memory Range Register - Physical Base Control Register
**/
#define MSR_EMXRR_BASE 0x00000964

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 12;

                            /* Bits[11:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* EMXRR Base Address */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* EMXRR Base Address */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_EMXRR_BASE_REGISTER;

/**
  Xucode Memory Range Register - Physical Mask Control Register
**/
#define MSR_EMXRR_MASK 0x00000965

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 10;

                            /* Bits[9:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 L : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Lock bit for the EMXRR */
    UINT32 Rsvd11 : 1;

                            /* Bits[11:11], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mask0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /* EMXRR MASK bits */
    UINT32 Mask1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /* EMXRR MASK bits */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_EMXRR_MASK_REGISTER;
/**
  This define is used to reserve some MSR addresses for XuCode. Ucode would have a dedicated handler for these MSRs
  " seq has 1 instances in addresses range 0x967 to 0x967"
**/
#define MSR_XU_RESERVED_31_31 0x00000967
/**
  This is uncore SCP. RO MSR to provide 128 bits of external entropy used for key derivation.
**/
#define MSR_MEE_SETUP 0x0000096A

/**

**/
#define MSR_PPPE_TAP_STATUS 0x0000096B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 DebugUnlockMode : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* debug unlock mode */
    UINT32 Rsrvd1 : 31;

                            /* Bits[31:1], Access Type=RW, default=None*/

                            /* reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PPPE_TAP_STATUS_REGISTER;

/**
  MEE init register
**/
#define MSR_EE_INIT 0x0000096C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Lock : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Lock bit. */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_EE_INIT_REGISTER;

/**
  Holds XCR0 and XSAVE Compaction Vector (used for XMODIFIED optimization check)
**/
#define MSR_XCR0 0x0000096D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 X87 : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* Bit 0 => FP */
    UINT32 Sse : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* Bit 1 => SSE */
    UINT32 Gsse : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /* Bit 2 => GSSE */
    UINT32 PlBndregs : 1;

                            /* Bits[3:3], Access Type=RW, default=None*/

                            /* Bit 3 => PL BNDREGS */
    UINT32 PlBndcfs : 1;

                            /* Bits[4:4], Access Type=RW, default=None*/

                            /* Bit 4 => PL BNDCFS */
    UINT32 Kmask : 1;

                            /* Bits[5:5], Access Type=RW, default=None*/

                            /* Bit 5 => KMASK */
    UINT32 Avx3150 : 1;

                            /* Bits[6:6], Access Type=RW, default=None*/

                            /* Bit 6 => AVX3(15:0) */
    UINT32 Avx33116 : 1;

                            /* Bits[7:7], Access Type=RW, default=None*/

                            /* Bit 7 => AVX3(31:16) */
    UINT32 RsvdIaXssRtit8 : 1;

                            /* Bits[8:8], Access Type=RW, default=None*/

                            /*
                               Bit 8 is reserved because of use as RTIT bit in
                               IA_XSS.
                            */
    UINT32 Pkru : 1;

                            /* Bits[9:9], Access Type=RW, default=None*/

                            /* Bit 9 => Page Protection Keys User. */
    UINT32 Rsvd10 : 22;

                            /* Bits[31:10], Access Type=RW, default=None*/

                            /* Unused bits. */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RW, default=None*/

                            /* Unused bits. */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_XCR0_REGISTER;
/**
  PCHSGXID 0 exposed in PCH by CSME
**/
#define MSR_SGX_RDPCHSGXID_0 0x00000970
/**
  PCHSGXID 1 exposed in PCH by CSME
**/
#define MSR_SGX_RDPCHSGXID_1 0x00000971
/**
  MCHECK XuCode register that holds address of uncore register to be written
**/
#define MSR_MCHECK_CPU_REGISTER_ADDRESS 0x00000972
/**
  Virtual MSR to will write data to an Uncore CR.
  The write is invoked by MCHECK flow.
  CR address is taken from MSR 0x972
**/
#define MSR_MCHECK_CPU_REGISTER_DATA 0x00000973
/**
  MSR to read/write ubox LOW TME EPHEMERAL KEY
**/
#define MSR_BIOS_TME_KEY_0 0x00000992
/**
  MSR to read/write ubox HIGH TME EPHEMERAL KEY
**/
#define MSR_BIOS_TME_KEY_1 0x00000993
/**
  Virtual MSR to read TME_ACTIVATE[MK_TME_KEYID_BITS] from SoC.
  Write with EDX:EAX == 0 will translate the above value into PMH mask register.
**/
#define MSR_CORE_MKTME_ACTIVATION 0x000009FF

/**
  Various controls
**/
#define MSR_IO_BW_P_LIMIT_OVERRIDE 0x00000A00

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 FloorOffset : 6;

                            /* Bits[5:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This value specifies the number of bins below P1
                               at which the freq floor will be set to.
                               Frequency Floor = P1 - 100 * OVRD_VALUE By
                               default: Freq floor wil lbe set to P1.
                            */
    UINT32 Rsvd6 : 2;

                            /* Bits[7:6], Access Type=RW_V, default=0x00000000*/

                            /*  */
    UINT32 FloorEnable : 1;

                            /* Bits[8:8], Access Type=RW_V, default=0x00000000*/

                            /* Overrides the Frequency Floor */
    UINT32 Rsvd9 : 23;

                            /* Bits[31:9], Access Type=RW_V, default=0x00000000*/

                            /*  */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IO_BW_P_LIMIT_OVERRIDE_REGISTER;

/**
  This register effectively governs all major power saving engines and hueristics on the die.
**/
#define MSR_ENERGY_PERF_BIAS_CONFIG 0x00000A01

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 WorkldConfig : 3;

                            /* Bits[2:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This allows optimization for the workload
                               characterization. The three options for
                               selection: 000 - UMA - default 001 -NUMA
                               optimized - use NUMA table for Intel UPI 010 -
                               I/O sensitive - use IO BW P limit table 011 -
                               NUMA and I/O - use both Intel UPI and IO BW P
                               Lmit table This field indicates which table to
                               use.
                            */
    UINT32 AltEnergyPerfBias : 4;

                            /* Bits[6:3], Access Type=RW_V, default=0x00000000*/

                            /*  */
    UINT32 Rsvd7 : 5;

                            /* Bits[11:7], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 P0TotalTimeThresholdHigh : 6;

                            /* Bits[17:12], Access Type=RW_V, default=0x00000000*/

                            /*
                               The HW switching mechanism ENABLES the
                               performance setting (0) when the total P0 time
                               is greater than this threshhold.
                            */
    UINT32 P0TotalTimeThresholdLow : 6;

                            /* Bits[23:18], Access Type=RW_V, default=0x00000000*/

                            /*
                               The HW switching mechanism DISABLES the
                               performance setting (0) when the total P0 time
                               is less than this threshhold. It hen uses the
                               over rides when specified, otherwise it uses the
                               socket_IA32_Performance_Power_Bias.
                            */
    UINT32 AvgTimeWindow : 8;

                            /* Bits[31:24], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is used to control the decay constant
                               of the EWMA filter that is applied to core C0
                               and P0 time. The 8-bit value is distributed into
                               a 4-bit mantissa (M = Bits[7:4]) and 4-bit
                               exponent (E = Bits[3:0]). The formula for
                               computing the decay constant is 1-alpha =
                               (M+17)/pow(2,E+5). The filter is then applied as
                               follows: Y[n] = alpha*Y[n-1] + (1-alpha)*X[n],
                               where Y[n] is the output, X[n] is the input, and
                               n is the time step (in milliseconds).
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_ENERGY_PERF_BIAS_CONFIG_REGISTER;

/**
  This register is intended for OS usage. It enables the OS
  to write an LTR value if they choose to participate in the LTR process.
  This register includes parameters that PCODE will use to override information
  received from PCI Express via LTR messages.
  Pcode will choose this value, or PCIE_LTR_OVRD, or actual LTR values from IIO
  depending on selection function in POWER_CTL uCR
  PCODE will sample this register at slow loop.
  This register needs to be exposed as MSR - details TBD
**/
#define MSR_SW_LTR_OVRD 0x00000A02

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Nstl : 10;

                            /* Bits[9:0], Access Type=RW, default=0x00000000*/

                            /*
                               Latency requirement for Non-Snoop requests. This
                               value is multiplied by the MULTIPLIER field to
                               yield a time value, yielding an expressible
                               range from 1ns to 34,326.183,936 ns. Setting
                               this field and the MULTIPLIER to all 0s
                               indicates that the device will be impacted by
                               any delay and that the best possible service is
                               requested.
                            */
    UINT32 Multiplier : 3;

                            /* Bits[12:10], Access Type=RW, default=0x00000000*/

                            /*
                               This field indicates the scale that the NSTL
                               value is multipled by to yield a time value.
                            */
    UINT32 Rsvd13 : 1;

                            /* Bits[13:13], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ForceNl : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               When this bit is set, PCODE will choose the non-
                               snoop latency requirement from this register,
                               regardless of the LTR messages that are recieved
                               by any of the PCI Express controllers. When this
                               bit is clear, PCODE will choose the non-snoop
                               latency requirement as the minimum value taken
                               between this register and each of the LTR
                               messages that were received by the PCI Express
                               controllers with the Requirement bit set to 1b.
                            */
    UINT32 NlV : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               When this bit is set to 0b, PCODE will ignore
                               the Non- Snoop Latency override value.
                            */
    UINT32 Sxl : 10;

                            /* Bits[25:16], Access Type=RW, default=0x00000000*/

                            /*
                               Latency requirement for Snoop requests. This
                               value is multiplied by the SXL_MULTIPLIER field
                               to yield a time value, yielding an expressible
                               range from 1ns to 34,326.183,936 ns. Setting
                               this field and the SXL_MULTIPLIER to all 0s
                               indicates that the device will be impacted by
                               any delay and that the best possible service is
                               requested.
                            */
    UINT32 Sxlm : 3;

                            /* Bits[28:26], Access Type=RW, default=0x00000000*/

                            /*
                               This field indicates the scale that the SXL
                               value is multipled by to yield a time value.
                            */
    UINT32 Rsvd29 : 1;

                            /* Bits[29:29], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 ForceSxl : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               When this bit is set, PCODE will choose the
                               snoop latency requirement from this register,
                               regardless of the LTR messages that are recieved
                               by any of the PCI Express controllers. When this
                               bit is clear, PCODE will choose the snoop
                               latency requirement as the minimum value taken
                               between this register and each of the LTR
                               messages that were received by the PCI Express
                               controllers with the Requirement bit set to 1b.
                            */
    UINT32 SxlV : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               When this bit is set to 0b, PCODE will ignore
                               the Snoop Latency override value.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SW_LTR_OVRD_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_M2PPMONCNTRCFG_2 0x00000B18

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Eventselect : 8;

                            /* Bits[7:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is used to decode the PerfMon event
                               which is selected. The encodings for each of the
                               valid UnCore PerfMon events can be found in the
                               respective individual unit performance
                               monitoring documentation.
                            */
    UINT32 Unitmask : 8;

                            /* Bits[15:8], Access Type=RW_V, default=0x00000000*/

                            /*
                               This mask selects the sub-events to be selected
                               for creation of the event. The selected sub-
                               events are bitwise OR-ed together to create
                               event. At least one sub-event must be selected
                               otherwise the PerfMon event signals will not
                               ever get asserted. Events with no sub-events
                               listed effectively have only one sub-event
                               =event -1 bit 8 must be set to 1 in this case.
                            */
    UINT32 Rsvd16 : 1;

                            /* Bits[16:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterreset : 1;

                            /* Bits[17:17], Access Type=RW_V, default=0x00000000*/

                            /*
                               When this bit is set, the corresponding counter
                               will be reset to 0. This allows for a quick
                               reset of the counter when changing event
                               encodings.
                            */
    UINT32 Edgedetect : 1;

                            /* Bits[18:18], Access Type=RW_V, default=0x00000000*/

                            /*
                               Edge Detect allows one to count either 0 to 1 or
                               1 to 0 transitions of a given event. For
                               example, we have an event that counts the number
                               of cycles in L1 mode in Intel QPI. By using edge
                               detect, one can count the number of times that
                               we entered L1 mode (by detecting the rising
                               edge).ect only works in conjunction with
                               threshholding. This is true even for events that
                               can only increment by 1 in a given cycle (like
                               the L1 example above). In this case, one should
                               set a threshhold of 1. One can also use Edge
                               Detect with queue occupancy events. For example,
                               if one wanted to count the number of times when
                               the TOR occupancy was larger than 5, one would
                               selet the TOR occupancy event with a threshold
                               of 5 and set the Edge Detect bit. Can also be
                               used with the invert. This is generally not
                               particularly useful, as the count of falling
                               edges compared to rising edges will always on
                               differ by 1.
                            */
    UINT32 Rsvd19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Overflowenable : 1;

                            /* Bits[20:20], Access Type=RW_V, default=0x00000000*/

                            /*
                               Setting this bit will enable the counter to send
                               an overflow signal. If this bit is not set, the
                               counter will wrap around when it overflows
                               without triggering anything. If this bit is set
                               and the Units configuration register has
                               Overflow enabled, then a signal will be
                               transmitted to the Ubox.
                            */
    UINT32 Internal : 1;

                            /* Bits[21:21], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit needs to be asserted if the event which
                               needs to be selected is an internal event.
                               Internal events are only accessible on unlocked
                               parts. One can think of an internal bit as an
                               extension of the event select bits 7:0, as it
                               allows theuse to gain access to additional
                               events. For perfmons that exist in teh MSR space
                               , the MSR write mask is set on this bit and teh
                               ucode handler will trigger a GP fault if one
                               attempts to write to these bits. Writing to
                               these bits is controlled in otehr ways in the
                               other units
                            */
    UINT32 Counterenable : 1;

                            /* Bits[22:22], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is the local enable for the PerfMon
                               Counter. This bit must be asserted in order for
                               the PerfMon counter to begin counting the events
                               selected by the event select, unit mask, and
                               internal bits (see the fields below). There is
                               one bit per PerfMon Counter. Note that if this
                               bit is set to 1 but the Unit Control Registers
                               have determined that counting is disabled, then
                               the counter will not count.
                            */
    UINT32 Invert : 1;

                            /* Bits[23:23], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit indicates how the threshold field will
                               be compared to the incoming event. When 0, the
                               comparison that will be done is threshold event.
                               When set to 1, the comparison that will be done
                               is inverted from the case where this bit is set
                               to 0, i.e., threshold event. The invert bit only
                               works when Threshhold != 0. So, if one would
                               like to invert a non-occupancy event (like LLC
                               Hit), one needs to set the threshhold to 1.
                            */
    UINT32 ResThreshold : 8;

                            /* Bits[31:24], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the ITC/OTC is 10 bits
                               (queue occupancy), it is 10 bit wide. The result
                               of the comparison is effectively a 1 bit wide
                               event, i.e., the counter will be incremented by
                               1 when the comparison is true (the type of
                               comparison depends on the setting of the invert
                               bit - see bit 23 below) no matter how wide the
                               original event was. When this field is zero,
                               threshold comparison is disabled and the event
                               is passed without modification.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_M2PPMONCNTRCFG_2_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_M2PPMONCNTRCFG_3 0x00000B19

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Eventselect : 8;

                            /* Bits[7:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is used to decode the PerfMon event
                               which is selected. The encodings for each of the
                               valid UnCore PerfMon events can be found in the
                               respective individual unit performance
                               monitoring documentation.
                            */
    UINT32 Unitmask : 8;

                            /* Bits[15:8], Access Type=RW_V, default=0x00000000*/

                            /*
                               This mask selects the sub-events to be selected
                               for creation of the event. The selected sub-
                               events are bitwise OR-ed together to create
                               event. At least one sub-event must be selected
                               otherwise the PerfMon event signals will not
                               ever get asserted. Events with no sub-events
                               listed effectively have only one sub-event
                               =event -1 bit 8 must be set to 1 in this case.
                            */
    UINT32 Rsvd16 : 1;

                            /* Bits[16:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterreset : 1;

                            /* Bits[17:17], Access Type=RW_V, default=0x00000000*/

                            /*
                               When this bit is set, the corresponding counter
                               will be reset to 0. This allows for a quick
                               reset of the counter when changing event
                               encodings.
                            */
    UINT32 Edgedetect : 1;

                            /* Bits[18:18], Access Type=RW_V, default=0x00000000*/

                            /*
                               Edge Detect allows one to count either 0 to 1 or
                               1 to 0 transitions of a given event. For
                               example, we have an event that counts the number
                               of cycles in L1 mode in Intel QPI. By using edge
                               detect, one can count the number of times that
                               we entered L1 mode (by detecting the rising
                               edge).ect only works in conjunction with
                               threshholding. This is true even for events that
                               can only increment by 1 in a given cycle (like
                               the L1 example above). In this case, one should
                               set a threshhold of 1. One can also use Edge
                               Detect with queue occupancy events. For example,
                               if one wanted to count the number of times when
                               the TOR occupancy was larger than 5, one would
                               selet the TOR occupancy event with a threshold
                               of 5 and set the Edge Detect bit. Can also be
                               used with the invert. This is generally not
                               particularly useful, as the count of falling
                               edges compared to rising edges will always on
                               differ by 1.
                            */
    UINT32 Rsvd19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Overflowenable : 1;

                            /* Bits[20:20], Access Type=RW_V, default=0x00000000*/

                            /*
                               Setting this bit will enable the counter to send
                               an overflow signal. If this bit is not set, the
                               counter will wrap around when it overflows
                               without triggering anything. If this bit is set
                               and the Units configuration register has
                               Overflow enabled, then a signal will be
                               transmitted to the Ubox.
                            */
    UINT32 Internal : 1;

                            /* Bits[21:21], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit needs to be asserted if the event which
                               needs to be selected is an internal event.
                               Internal events are only accessible on unlocked
                               parts. One can think of an internal bit as an
                               extension of the event select bits 7:0, as it
                               allows theuse to gain access to additional
                               events. For perfmons that exist in teh MSR space
                               , the MSR write mask is set on this bit and teh
                               ucode handler will trigger a GP fault if one
                               attempts to write to these bits. Writing to
                               these bits is controlled in otehr ways in the
                               other units
                            */
    UINT32 Counterenable : 1;

                            /* Bits[22:22], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is the local enable for the PerfMon
                               Counter. This bit must be asserted in order for
                               the PerfMon counter to begin counting the events
                               selected by the event select, unit mask, and
                               internal bits (see the fields below). There is
                               one bit per PerfMon Counter. Note that if this
                               bit is set to 1 but the Unit Control Registers
                               have determined that counting is disabled, then
                               the counter will not count.
                            */
    UINT32 Invert : 1;

                            /* Bits[23:23], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit indicates how the threshold field will
                               be compared to the incoming event. When 0, the
                               comparison that will be done is threshold event.
                               When set to 1, the comparison that will be done
                               is inverted from the case where this bit is set
                               to 0, i.e., threshold event. The invert bit only
                               works when Threshhold != 0. So, if one would
                               like to invert a non-occupancy event (like LLC
                               Hit), one needs to set the threshhold to 1.
                            */
    UINT32 ResThreshold : 8;

                            /* Bits[31:24], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the ITC/OTC is 10 bits
                               (queue occupancy), it is 10 bit wide. The result
                               of the comparison is effectively a 1 bit wide
                               event, i.e., the counter will be incremented by
                               1 when the comparison is true (the type of
                               comparison depends on the setting of the invert
                               bit - see bit 23 below) no matter how wide the
                               original event was. When this field is zero,
                               threshold comparison is disabled and the event
                               is passed without modification.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_M2PPMONCNTRCFG_3_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_IRPPMONCNTRCFG_0 0x00000B1D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Eventselect : 8;

                            /* Bits[7:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is used to decode the PerfMon event
                               which is selected. The encodings for each of the
                               valid UnCore PerfMon events can be found in the
                               respective individual unit performance
                               monitoring documentation.
                            */
    UINT32 Unitmask : 8;

                            /* Bits[15:8], Access Type=RW_V, default=0x00000000*/

                            /*
                               This mask selects the sub-events to be selected
                               for creation of the event. The selected sub-
                               events are bitwise OR-ed together to create
                               event. At least one sub-event must be selected
                               otherwise the PerfMon event signals will not
                               ever get asserted. Events with no sub-events
                               listed effectively have only one sub-event
                               =event -1 bit 8 must be set to 1 in this case.
                            */
    UINT32 Queueoccupancyreset : 1;

                            /* Bits[16:16], Access Type=RW_V, default=0x00000000*/

                            /*
                               This write only bit causes the queue occupancy
                               Perf counter for which the event select register
                               is associated to be clearedto all 0 when a 1 is
                               written to it. No action is taken when 0 is
                               written. Note since the queue occupancy counters
                               will never drop to 0 , it is possible for the
                               counters to catch up with the real occupancy of
                               the queuein question when the real occupancy
                               drops to 0
                            */
    UINT32 Counterreset : 1;

                            /* Bits[17:17], Access Type=RW_V, default=0x00000000*/

                            /*
                               When this bit is set, the corresponding counter
                               will be reset to 0. This allows for a quick
                               reset of the counter when changing event
                               encodings.
                            */
    UINT32 Edgedetect : 1;

                            /* Bits[18:18], Access Type=RW_V, default=0x00000000*/

                            /*
                               Edge Detect allows one to count either 0 to 1 or
                               1 to 0 transitions of a given event. For
                               example, we have an event that counts the number
                               of cycles in L1 mode in Intel QPI. By using edge
                               detect, one can count the number of times that
                               we entered L1 mode (by detecting the rising
                               edge).ect only works in conjunction with
                               threshholding. This is true even for events that
                               can only increment by 1 in a given cycle (like
                               the L1 example above). In this case, one should
                               set a threshhold of 1. One can also use Edge
                               Detect with queue occupancy events. For example,
                               if one wanted to count the number of times when
                               the TOR occupancy was larger than 5, one would
                               selet the TOR occupancy event with a threshold
                               of 5 and set the Edge Detect bit. Can also be
                               used with the invert. This is generally not
                               particularly useful, as the count of falling
                               edges compared to rising edges will always on
                               differ by 1.
                            */
    UINT32 Rsvd19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Overflowenable : 1;

                            /* Bits[20:20], Access Type=RW_V, default=0x00000000*/

                            /*
                               Setting this bit will enable the counter to send
                               an overflow signal. If this bit is not set, the
                               counter will wrap around when it overflows
                               without triggering anything. If this bit is set
                               and the Units configuration register has
                               Overflow enabled, then a signal will be
                               transmitted to the Ubox.
                            */
    UINT32 Internal : 1;

                            /* Bits[21:21], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit needs to be asserted if the event which
                               needs to be selected is an internal event.
                               Internal events are only accessible on unlocked
                               parts. One can think of an internal bit as an
                               extension of the event select bits 7:0, as it
                               allows theuse to gain access to additional
                               events. For perfmons that exist in teh MSR space
                               , the MSR write mask is set on this bit and teh
                               ucode handler will trigger a GP fault if one
                               attempts to write to these bits. Writing to
                               these bits is controlled in otehr ways in the
                               other units
                            */
    UINT32 Counterenable : 1;

                            /* Bits[22:22], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is the local enable for the PerfMon
                               Counter. This bit must be asserted in order for
                               the PerfMon counter to begin counting the events
                               selected by the event select, unit mask, and
                               internal bits (see the fields below). There is
                               one bit per PerfMon Counter. Note that if this
                               bit is set to 1 but the Unit Control Registers
                               have determined that counting is disabled, then
                               the counter will not count.
                            */
    UINT32 Invert : 1;

                            /* Bits[23:23], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit indicates how the threshold field will
                               be compared to the incoming event. When 0, the
                               comparison that will be done is threshold event.
                               When set to 1, the comparison that will be done
                               is inverted from the case where this bit is set
                               to 0, i.e., threshold event. The invert bit only
                               works when Threshhold != 0. So, if one would
                               like to invert a non-occupancy event (like LLC
                               Hit), one needs to set the threshhold to 1.
                            */
    UINT32 Threshold : 8;

                            /* Bits[31:24], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the ITC/OTC is 10 bits
                               (queue occupancy), it is 10 bit wide. The result
                               of the comparison is effectively a 1 bit wide
                               event, i.e., the counter will be incremented by
                               1 when the comparison is true (the type of
                               comparison depends on the setting of the invert
                               bit - see bit 23 below) no matter how wide the
                               original event was. When this field is zero,
                               threshold comparison is disabled and the event
                               is passed without modification.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IRPPMONCNTRCFG_0_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_IRPPMONCNTRCFG_1 0x00000B1E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Eventselect : 8;

                            /* Bits[7:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is used to decode the PerfMon event
                               which is selected. The encodings for each of the
                               valid UnCore PerfMon events can be found in the
                               respective individual unit performance
                               monitoring documentation.
                            */
    UINT32 Unitmask : 8;

                            /* Bits[15:8], Access Type=RW_V, default=0x00000000*/

                            /*
                               This mask selects the sub-events to be selected
                               for creation of the event. The selected sub-
                               events are bitwise OR-ed together to create
                               event. At least one sub-event must be selected
                               otherwise the PerfMon event signals will not
                               ever get asserted. Events with no sub-events
                               listed effectively have only one sub-event
                               =event -1 bit 8 must be set to 1 in this case.
                            */
    UINT32 Queueoccupancyreset : 1;

                            /* Bits[16:16], Access Type=RW_V, default=0x00000000*/

                            /*
                               This write only bit causes the queue occupancy
                               Perf counter for which the event select register
                               is associated to be clearedto all 0 when a 1 is
                               written to it. No action is taken when 0 is
                               written. Note since the queue occupancy counters
                               will never drop to 0 , it is possible for the
                               counters to catch up with the real occupancy of
                               the queuein question when the real occupancy
                               drops to 0
                            */
    UINT32 Counterreset : 1;

                            /* Bits[17:17], Access Type=RW_V, default=0x00000000*/

                            /*
                               When this bit is set, the corresponding counter
                               will be reset to 0. This allows for a quick
                               reset of the counter when changing event
                               encodings.
                            */
    UINT32 Edgedetect : 1;

                            /* Bits[18:18], Access Type=RW_V, default=0x00000000*/

                            /*
                               Edge Detect allows one to count either 0 to 1 or
                               1 to 0 transitions of a given event. For
                               example, we have an event that counts the number
                               of cycles in L1 mode in Intel QPI. By using edge
                               detect, one can count the number of times that
                               we entered L1 mode (by detecting the rising
                               edge).ect only works in conjunction with
                               threshholding. This is true even for events that
                               can only increment by 1 in a given cycle (like
                               the L1 example above). In this case, one should
                               set a threshhold of 1. One can also use Edge
                               Detect with queue occupancy events. For example,
                               if one wanted to count the number of times when
                               the TOR occupancy was larger than 5, one would
                               selet the TOR occupancy event with a threshold
                               of 5 and set the Edge Detect bit. Can also be
                               used with the invert. This is generally not
                               particularly useful, as the count of falling
                               edges compared to rising edges will always on
                               differ by 1.
                            */
    UINT32 Rsvd19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Overflowenable : 1;

                            /* Bits[20:20], Access Type=RW_V, default=0x00000000*/

                            /*
                               Setting this bit will enable the counter to send
                               an overflow signal. If this bit is not set, the
                               counter will wrap around when it overflows
                               without triggering anything. If this bit is set
                               and the Units configuration register has
                               Overflow enabled, then a signal will be
                               transmitted to the Ubox.
                            */
    UINT32 Internal : 1;

                            /* Bits[21:21], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit needs to be asserted if the event which
                               needs to be selected is an internal event.
                               Internal events are only accessible on unlocked
                               parts. One can think of an internal bit as an
                               extension of the event select bits 7:0, as it
                               allows theuse to gain access to additional
                               events. For perfmons that exist in teh MSR space
                               , the MSR write mask is set on this bit and teh
                               ucode handler will trigger a GP fault if one
                               attempts to write to these bits. Writing to
                               these bits is controlled in otehr ways in the
                               other units
                            */
    UINT32 Counterenable : 1;

                            /* Bits[22:22], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is the local enable for the PerfMon
                               Counter. This bit must be asserted in order for
                               the PerfMon counter to begin counting the events
                               selected by the event select, unit mask, and
                               internal bits (see the fields below). There is
                               one bit per PerfMon Counter. Note that if this
                               bit is set to 1 but the Unit Control Registers
                               have determined that counting is disabled, then
                               the counter will not count.
                            */
    UINT32 Invert : 1;

                            /* Bits[23:23], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit indicates how the threshold field will
                               be compared to the incoming event. When 0, the
                               comparison that will be done is threshold event.
                               When set to 1, the comparison that will be done
                               is inverted from the case where this bit is set
                               to 0, i.e., threshold event. The invert bit only
                               works when Threshhold != 0. So, if one would
                               like to invert a non-occupancy event (like LLC
                               Hit), one needs to set the threshhold to 1.
                            */
    UINT32 Threshold : 8;

                            /* Bits[31:24], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the ITC/OTC is 10 bits
                               (queue occupancy), it is 10 bit wide. The result
                               of the comparison is effectively a 1 bit wide
                               event, i.e., the counter will be incremented by
                               1 when the comparison is true (the type of
                               comparison depends on the setting of the invert
                               bit - see bit 23 below) no matter how wide the
                               original event was. When this field is zero,
                               threshold comparison is disabled and the event
                               is passed without modification.
                            */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IRPPMONCNTRCFG_1_REGISTER;

/**

**/
#define MSR_IIOPMONUNITCTRL 0x00000B20

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Resetcounterconfigs : 1;

                            /* Bits[0:0], Access Type=WO, default=0x00000000*/

                            /*
                               When this bit is written to, the counter
                               configuration registers will be reset. This does
                               not effect the values in the counters. This is a
                               WO register, and writing to this bit will
                               trigger a reset for 1 cycle only.
                            */
    UINT32 Resetcounters : 1;

                            /* Bits[1:1], Access Type=WO, default=0x00000000*/

                            /*
                               When this bit is written to, the counters data
                               fields will be reset. The configuration values
                               will not be reset. This is a WO register, and
                               writing to this bit will trigger a reset for 1
                               cycle only.
                            */
    UINT32 Rsvd2 : 6;

                            /* Bits[7:2], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Freezecounters : 1;

                            /* Bits[8:8], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit is written to when the counters should
                               be frozen. If this bit is written to and freeze
                               is enabled, the counters in the unit will stop
                               counting. To freeze the counters, this bit need
                               only be set by one of the unit control
                               registers.
                            */
    UINT32 Rsvd9 : 7;

                            /* Bits[15:9], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Freezeenable : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000001*/

                            /*
                               This bit controls what the counters in the unit
                               will do when they receive a freeze signal. When
                               set, the counters will be allowed to freeze.
                               When not set, the counters will ignore the
                               freeze signal. For freeze to be enabled for a
                               given unit, all of the unit control registers
                               must have this bit set.
                            */
    UINT32 Overflowenable : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000001*/

                            /*
                               This bit controls the behavior of counters when
                               they overflow. When set, the system will trigger
                               the overflow handling process throughout the
                               rest of the uncore, potentially triggering a PMI
                               and freezing counters. When it is not set, the
                               counters will simply wrap around and continue to
                               count. For overflow to be enabled for a given
                               unit, all of the unit control registers must
                               have this bit set.
                            */
    UINT32 Rsvd18 : 14;

                            /* Bits[31:18], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONUNITCTRL_REGISTER;

/**
  This register is a perf counter. Software can read it and write it
**/
#define MSR_IIOPMONCNTR_0 0x00000B21

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Countervalue1 : 16;

                            /* Bits[47:32], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONCNTR_0_REGISTER;

/**
  This register is a perf counter. Software can read it and write it
**/
#define MSR_IIOPMONCNTR_1 0x00000B22

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Countervalue1 : 16;

                            /* Bits[47:32], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONCNTR_1_REGISTER;

/**
  This register is a perf counter. Software can read it and write it
**/
#define MSR_IIOPMONCNTR_2 0x00000B23

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Countervalue1 : 16;

                            /* Bits[47:32], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONCNTR_2_REGISTER;

/**
  This register is a perf counter. Software can read it and write it
**/
#define MSR_IIOPMONCNTR_3 0x00000B24

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Countervalue1 : 16;

                            /* Bits[47:32], Access Type=RW_V, default=0x00000000*/

                            /* The value of the counter */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONCNTR_3_REGISTER;

/**

**/
#define MSR_IIOPMONFRCNTRCLK 0x00000B25

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=WO, default=0x00000000*/

                            /*
                               This register is a perfmon counter. Software can
                               both read it and write it
                            */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=WO, default=0x00000000*/

                            /*
                               This register is a perfmon counter. Software can
                               both read it and write it
                            */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTRCLK_REGISTER;

/**

**/
#define MSR_IIOPMONUNITSTATUS 0x00000B27

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Counter0ovf : 1;

                            /* Bits[0:0], Access Type=WO, default=0x00000000*/

                            /* counter 0 overflowed */
    UINT32 Counter1ovf : 1;

                            /* Bits[1:1], Access Type=WO, default=0x00000000*/

                            /* counter 1 overflowed */
    UINT32 Counter2ovf : 1;

                            /* Bits[2:2], Access Type=WO, default=0x00000000*/

                            /* counter 2 overflowed */
    UINT32 Counter3ovf : 1;

                            /* Bits[3:3], Access Type=WO, default=0x00000000*/

                            /* counter3 overflowed */
    UINT32 Rsvd4 : 28;

                            /* Bits[31:4], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONUNITSTATUS_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_IOPMONCNTRCFG_0 0x00000B28

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Eventselect : 8;

                            /* Bits[7:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is used to decode the PerfMon event
                               which is selected. The encodings for each of the
                               valid UnCore PerfMon events can be found in the
                               respective individual unit performance
                               monitoring documentation.
                            */
    UINT32 Unitmask : 8;

                            /* Bits[15:8], Access Type=RW_V, default=0x00000000*/

                            /*
                               This mask selects the sub-events to be selected
                               for creation of the event. The selected sub-
                               events are bitwise OR-ed together to create
                               event. At least one sub-event must be selected
                               otherwise the PerfMon event signals will not
                               ever get asserted. Events with no sub-events
                               listed effectively have only one sub-event
                               =event -1 bit 8 must be set to 1 in this case.
                            */
    UINT32 Rsvd16 : 1;

                            /* Bits[16:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterreset : 1;

                            /* Bits[17:17], Access Type=RW_V, default=0x00000000*/

                            /*
                               When this bit is set, the corresponding counter
                               will be reset to 0. This allows for a quick
                               reset of the counter when changing event
                               encodings.
                            */
    UINT32 Edgedetect : 1;

                            /* Bits[18:18], Access Type=RW_V, default=0x00000000*/

                            /*
                               Edge Detect allows one to count either 0 to 1 or
                               1 to 0 transitions of a given event. For
                               example, we have an event that counts the number
                               of cycles in L1 mode in Intel QPI. By using edge
                               detect, one can count the number of times that
                               we entered L1 mode (by detecting the rising
                               edge).ect only works in conjunction with
                               threshholding. This is true even for events that
                               can only increment by 1 in a given cycle (like
                               the L1 example above). In this case, one should
                               set a threshhold of 1. One can also use Edge
                               Detect with queue occupancy events. For example,
                               if one wanted to count the number of times when
                               the TOR occupancy was larger than 5, one would
                               selet the TOR occupancy event with a threshold
                               of 5 and set the Edge Detect bit. Can also be
                               used with the invert. This is generally not
                               particularly useful, as the count of falling
                               edges compared to rising edges will always on
                               differ by 1.
                            */
    UINT32 Rsvd19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Overflowenable : 1;

                            /* Bits[20:20], Access Type=RW_V, default=0x00000000*/

                            /*
                               Setting this bit will enable the counter to send
                               an overflow signal. If this bit is not set, the
                               counter will wrap around when it overflows
                               without triggering anything. If this bit is set
                               and the Units configuration register has
                               Overflow enabled, then a signal will be
                               transmitted to the Ubox.
                            */
    UINT32 Rsvd21 : 1;

                            /* Bits[21:21], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterenable : 1;

                            /* Bits[22:22], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is the local enable for the PerfMon
                               Counter. This bit must be asserted in order for
                               the PerfMon counter to begin counting the events
                               selected by the event select, unit mask, and
                               internal bits (see the fields below). There is
                               one bit per PerfMon Counter. Note that if this
                               bit is set to 1 but the Unit Control Registers
                               have determined that counting is disabled, then
                               the counter will not count.
                            */
    UINT32 Invert : 1;

                            /* Bits[23:23], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit indicates how the threshold field will
                               be compared to the incoming event. When 0, the
                               comparison that will be done is threshold event.
                               When set to 1, the comparison that will be done
                               is inverted from the case where this bit is set
                               to 0, i.e., threshold event. The invert bit only
                               works when Threshhold != 0. So, if one would
                               like to invert a non-occupancy event (like LLC
                               Hit), one needs to set the threshhold to 1.
                            */
    UINT32 ResThreshold0 : 8;

                            /* Bits[31:24], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the ITC/OTC is 10 bits
                               (queue occupancy), it is 10 bit wide. The result
                               of the comparison is effectively a 1 bit wide
                               event, i.e., the counter will be incremented by
                               1 when the comparison is true (the type of
                               comparison depends on the setting of the invert
                               bit - see bit 23 below) no matter how wide the
                               original event was. When this field is zero,
                               threshold comparison is disabled and the event
                               is passed without modification.
                            */
    UINT32 ResThreshold1 : 4;

                            /* Bits[35:32], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the ITC/OTC is 10 bits
                               (queue occupancy), it is 10 bit wide. The result
                               of the comparison is effectively a 1 bit wide
                               event, i.e., the counter will be incremented by
                               1 when the comparison is true (the type of
                               comparison depends on the setting of the invert
                               bit - see bit 23 below) no matter how wide the
                               original event was. When this field is zero,
                               threshold comparison is disabled and the event
                               is passed without modification.
                            */
    UINT32 Chnlmask : 12;

                            /* Bits[47:36], Access Type=RW, default=0x00000FFF*/

                            /*
                               This one-hot field specifies which PCIE links
                               should be considered when counting PerfMon
                               events. For example, if only bit 1 is set, then
                               only events corresponding to PCIE link 1 will be
                               counted.
                            */
    UINT32 Fcmask : 3;

                            /* Bits[50:48], Access Type=RW, default=0x00000007*/

                            /*
                               This one-hot field specifies which FCs should be
                               considered when counting PerfMon events: Bit 0 -
                               Posted requests Bit 1 - Non-posted requests Bit
                               2 - Completions
                            */
    UINT32 Rsvd51 : 13;

                            /* Bits[63:51], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IOPMONCNTRCFG_0_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_IOPMONCNTRCFG_1 0x00000B29

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Eventselect : 8;

                            /* Bits[7:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is used to decode the PerfMon event
                               which is selected. The encodings for each of the
                               valid UnCore PerfMon events can be found in the
                               respective individual unit performance
                               monitoring documentation.
                            */
    UINT32 Unitmask : 8;

                            /* Bits[15:8], Access Type=RW_V, default=0x00000000*/

                            /*
                               This mask selects the sub-events to be selected
                               for creation of the event. The selected sub-
                               events are bitwise OR-ed together to create
                               event. At least one sub-event must be selected
                               otherwise the PerfMon event signals will not
                               ever get asserted. Events with no sub-events
                               listed effectively have only one sub-event
                               =event -1 bit 8 must be set to 1 in this case.
                            */
    UINT32 Rsvd16 : 1;

                            /* Bits[16:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterreset : 1;

                            /* Bits[17:17], Access Type=RW_V, default=0x00000000*/

                            /*
                               When this bit is set, the corresponding counter
                               will be reset to 0. This allows for a quick
                               reset of the counter when changing event
                               encodings.
                            */
    UINT32 Edgedetect : 1;

                            /* Bits[18:18], Access Type=RW_V, default=0x00000000*/

                            /*
                               Edge Detect allows one to count either 0 to 1 or
                               1 to 0 transitions of a given event. For
                               example, we have an event that counts the number
                               of cycles in L1 mode in Intel QPI. By using edge
                               detect, one can count the number of times that
                               we entered L1 mode (by detecting the rising
                               edge).ect only works in conjunction with
                               threshholding. This is true even for events that
                               can only increment by 1 in a given cycle (like
                               the L1 example above). In this case, one should
                               set a threshhold of 1. One can also use Edge
                               Detect with queue occupancy events. For example,
                               if one wanted to count the number of times when
                               the TOR occupancy was larger than 5, one would
                               selet the TOR occupancy event with a threshold
                               of 5 and set the Edge Detect bit. Can also be
                               used with the invert. This is generally not
                               particularly useful, as the count of falling
                               edges compared to rising edges will always on
                               differ by 1.
                            */
    UINT32 Rsvd19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Overflowenable : 1;

                            /* Bits[20:20], Access Type=RW_V, default=0x00000000*/

                            /*
                               Setting this bit will enable the counter to send
                               an overflow signal. If this bit is not set, the
                               counter will wrap around when it overflows
                               without triggering anything. If this bit is set
                               and the Units configuration register has
                               Overflow enabled, then a signal will be
                               transmitted to the Ubox.
                            */
    UINT32 Rsvd21 : 1;

                            /* Bits[21:21], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterenable : 1;

                            /* Bits[22:22], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is the local enable for the PerfMon
                               Counter. This bit must be asserted in order for
                               the PerfMon counter to begin counting the events
                               selected by the event select, unit mask, and
                               internal bits (see the fields below). There is
                               one bit per PerfMon Counter. Note that if this
                               bit is set to 1 but the Unit Control Registers
                               have determined that counting is disabled, then
                               the counter will not count.
                            */
    UINT32 Invert : 1;

                            /* Bits[23:23], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit indicates how the threshold field will
                               be compared to the incoming event. When 0, the
                               comparison that will be done is threshold event.
                               When set to 1, the comparison that will be done
                               is inverted from the case where this bit is set
                               to 0, i.e., threshold event. The invert bit only
                               works when Threshhold != 0. So, if one would
                               like to invert a non-occupancy event (like LLC
                               Hit), one needs to set the threshhold to 1.
                            */
    UINT32 ResThreshold0 : 8;

                            /* Bits[31:24], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the ITC/OTC is 10 bits
                               (queue occupancy), it is 10 bit wide. The result
                               of the comparison is effectively a 1 bit wide
                               event, i.e., the counter will be incremented by
                               1 when the comparison is true (the type of
                               comparison depends on the setting of the invert
                               bit - see bit 23 below) no matter how wide the
                               original event was. When this field is zero,
                               threshold comparison is disabled and the event
                               is passed without modification.
                            */
    UINT32 ResThreshold1 : 4;

                            /* Bits[35:32], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the ITC/OTC is 10 bits
                               (queue occupancy), it is 10 bit wide. The result
                               of the comparison is effectively a 1 bit wide
                               event, i.e., the counter will be incremented by
                               1 when the comparison is true (the type of
                               comparison depends on the setting of the invert
                               bit - see bit 23 below) no matter how wide the
                               original event was. When this field is zero,
                               threshold comparison is disabled and the event
                               is passed without modification.
                            */
    UINT32 Chnlmask : 12;

                            /* Bits[47:36], Access Type=RW, default=0x00000FFF*/

                            /*
                               This one-hot field specifies which PCIE links
                               should be considered when counting PerfMon
                               events. For example, if only bit 1 is set, then
                               only events corresponding to PCIE link 1 will be
                               counted.
                            */
    UINT32 Fcmask : 3;

                            /* Bits[50:48], Access Type=RW, default=0x00000007*/

                            /*
                               This one-hot field specifies which FCs should be
                               considered when counting PerfMon events: Bit 0 -
                               Posted requests Bit 1 - Non-posted requests Bit
                               2 - Completions
                            */
    UINT32 Rsvd51 : 13;

                            /* Bits[63:51], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IOPMONCNTRCFG_1_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_IOPMONCNTRCFG_2 0x00000B2A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Eventselect : 8;

                            /* Bits[7:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is used to decode the PerfMon event
                               which is selected. The encodings for each of the
                               valid UnCore PerfMon events can be found in the
                               respective individual unit performance
                               monitoring documentation.
                            */
    UINT32 Unitmask : 8;

                            /* Bits[15:8], Access Type=RW_V, default=0x00000000*/

                            /*
                               This mask selects the sub-events to be selected
                               for creation of the event. The selected sub-
                               events are bitwise OR-ed together to create
                               event. At least one sub-event must be selected
                               otherwise the PerfMon event signals will not
                               ever get asserted. Events with no sub-events
                               listed effectively have only one sub-event
                               =event -1 bit 8 must be set to 1 in this case.
                            */
    UINT32 Rsvd16 : 1;

                            /* Bits[16:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterreset : 1;

                            /* Bits[17:17], Access Type=RW_V, default=0x00000000*/

                            /*
                               When this bit is set, the corresponding counter
                               will be reset to 0. This allows for a quick
                               reset of the counter when changing event
                               encodings.
                            */
    UINT32 Edgedetect : 1;

                            /* Bits[18:18], Access Type=RW_V, default=0x00000000*/

                            /*
                               Edge Detect allows one to count either 0 to 1 or
                               1 to 0 transitions of a given event. For
                               example, we have an event that counts the number
                               of cycles in L1 mode in Intel QPI. By using edge
                               detect, one can count the number of times that
                               we entered L1 mode (by detecting the rising
                               edge).ect only works in conjunction with
                               threshholding. This is true even for events that
                               can only increment by 1 in a given cycle (like
                               the L1 example above). In this case, one should
                               set a threshhold of 1. One can also use Edge
                               Detect with queue occupancy events. For example,
                               if one wanted to count the number of times when
                               the TOR occupancy was larger than 5, one would
                               selet the TOR occupancy event with a threshold
                               of 5 and set the Edge Detect bit. Can also be
                               used with the invert. This is generally not
                               particularly useful, as the count of falling
                               edges compared to rising edges will always on
                               differ by 1.
                            */
    UINT32 Rsvd19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Overflowenable : 1;

                            /* Bits[20:20], Access Type=RW_V, default=0x00000000*/

                            /*
                               Setting this bit will enable the counter to send
                               an overflow signal. If this bit is not set, the
                               counter will wrap around when it overflows
                               without triggering anything. If this bit is set
                               and the Units configuration register has
                               Overflow enabled, then a signal will be
                               transmitted to the Ubox.
                            */
    UINT32 Rsvd21 : 1;

                            /* Bits[21:21], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterenable : 1;

                            /* Bits[22:22], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is the local enable for the PerfMon
                               Counter. This bit must be asserted in order for
                               the PerfMon counter to begin counting the events
                               selected by the event select, unit mask, and
                               internal bits (see the fields below). There is
                               one bit per PerfMon Counter. Note that if this
                               bit is set to 1 but the Unit Control Registers
                               have determined that counting is disabled, then
                               the counter will not count.
                            */
    UINT32 Invert : 1;

                            /* Bits[23:23], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit indicates how the threshold field will
                               be compared to the incoming event. When 0, the
                               comparison that will be done is threshold event.
                               When set to 1, the comparison that will be done
                               is inverted from the case where this bit is set
                               to 0, i.e., threshold event. The invert bit only
                               works when Threshhold != 0. So, if one would
                               like to invert a non-occupancy event (like LLC
                               Hit), one needs to set the threshhold to 1.
                            */
    UINT32 ResThreshold0 : 8;

                            /* Bits[31:24], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the ITC/OTC is 10 bits
                               (queue occupancy), it is 10 bit wide. The result
                               of the comparison is effectively a 1 bit wide
                               event, i.e., the counter will be incremented by
                               1 when the comparison is true (the type of
                               comparison depends on the setting of the invert
                               bit - see bit 23 below) no matter how wide the
                               original event was. When this field is zero,
                               threshold comparison is disabled and the event
                               is passed without modification.
                            */
    UINT32 ResThreshold1 : 4;

                            /* Bits[35:32], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the ITC/OTC is 10 bits
                               (queue occupancy), it is 10 bit wide. The result
                               of the comparison is effectively a 1 bit wide
                               event, i.e., the counter will be incremented by
                               1 when the comparison is true (the type of
                               comparison depends on the setting of the invert
                               bit - see bit 23 below) no matter how wide the
                               original event was. When this field is zero,
                               threshold comparison is disabled and the event
                               is passed without modification.
                            */
    UINT32 Chnlmask : 12;

                            /* Bits[47:36], Access Type=RW, default=0x00000FFF*/

                            /*
                               This one-hot field specifies which PCIE links
                               should be considered when counting PerfMon
                               events. For example, if only bit 1 is set, then
                               only events corresponding to PCIE link 1 will be
                               counted.
                            */
    UINT32 Fcmask : 3;

                            /* Bits[50:48], Access Type=RW, default=0x00000007*/

                            /*
                               This one-hot field specifies which FCs should be
                               considered when counting PerfMon events: Bit 0 -
                               Posted requests Bit 1 - Non-posted requests Bit
                               2 - Completions
                            */
    UINT32 Rsvd51 : 13;

                            /* Bits[63:51], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IOPMONCNTRCFG_2_REGISTER;

/**
  Holds the status information and control the operation of the the PMON Fixed Counter.
**/
#define MSR_IOPMONCNTRCFG_3 0x00000B2B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Eventselect : 8;

                            /* Bits[7:0], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is used to decode the PerfMon event
                               which is selected. The encodings for each of the
                               valid UnCore PerfMon events can be found in the
                               respective individual unit performance
                               monitoring documentation.
                            */
    UINT32 Unitmask : 8;

                            /* Bits[15:8], Access Type=RW_V, default=0x00000000*/

                            /*
                               This mask selects the sub-events to be selected
                               for creation of the event. The selected sub-
                               events are bitwise OR-ed together to create
                               event. At least one sub-event must be selected
                               otherwise the PerfMon event signals will not
                               ever get asserted. Events with no sub-events
                               listed effectively have only one sub-event
                               =event -1 bit 8 must be set to 1 in this case.
                            */
    UINT32 Rsvd16 : 1;

                            /* Bits[16:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterreset : 1;

                            /* Bits[17:17], Access Type=RW_V, default=0x00000000*/

                            /*
                               When this bit is set, the corresponding counter
                               will be reset to 0. This allows for a quick
                               reset of the counter when changing event
                               encodings.
                            */
    UINT32 Edgedetect : 1;

                            /* Bits[18:18], Access Type=RW_V, default=0x00000000*/

                            /*
                               Edge Detect allows one to count either 0 to 1 or
                               1 to 0 transitions of a given event. For
                               example, we have an event that counts the number
                               of cycles in L1 mode in Intel QPI. By using edge
                               detect, one can count the number of times that
                               we entered L1 mode (by detecting the rising
                               edge).ect only works in conjunction with
                               threshholding. This is true even for events that
                               can only increment by 1 in a given cycle (like
                               the L1 example above). In this case, one should
                               set a threshhold of 1. One can also use Edge
                               Detect with queue occupancy events. For example,
                               if one wanted to count the number of times when
                               the TOR occupancy was larger than 5, one would
                               selet the TOR occupancy event with a threshold
                               of 5 and set the Edge Detect bit. Can also be
                               used with the invert. This is generally not
                               particularly useful, as the count of falling
                               edges compared to rising edges will always on
                               differ by 1.
                            */
    UINT32 Rsvd19 : 1;

                            /* Bits[19:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Overflowenable : 1;

                            /* Bits[20:20], Access Type=RW_V, default=0x00000000*/

                            /*
                               Setting this bit will enable the counter to send
                               an overflow signal. If this bit is not set, the
                               counter will wrap around when it overflows
                               without triggering anything. If this bit is set
                               and the Units configuration register has
                               Overflow enabled, then a signal will be
                               transmitted to the Ubox.
                            */
    UINT32 Rsvd21 : 1;

                            /* Bits[21:21], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Counterenable : 1;

                            /* Bits[22:22], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is the local enable for the PerfMon
                               Counter. This bit must be asserted in order for
                               the PerfMon counter to begin counting the events
                               selected by the event select, unit mask, and
                               internal bits (see the fields below). There is
                               one bit per PerfMon Counter. Note that if this
                               bit is set to 1 but the Unit Control Registers
                               have determined that counting is disabled, then
                               the counter will not count.
                            */
    UINT32 Invert : 1;

                            /* Bits[23:23], Access Type=RW_V, default=0x00000000*/

                            /*
                               This bit indicates how the threshold field will
                               be compared to the incoming event. When 0, the
                               comparison that will be done is threshold event.
                               When set to 1, the comparison that will be done
                               is inverted from the case where this bit is set
                               to 0, i.e., threshold event. The invert bit only
                               works when Threshhold != 0. So, if one would
                               like to invert a non-occupancy event (like LLC
                               Hit), one needs to set the threshhold to 1.
                            */
    UINT32 ResThreshold0 : 8;

                            /* Bits[31:24], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the ITC/OTC is 10 bits
                               (queue occupancy), it is 10 bit wide. The result
                               of the comparison is effectively a 1 bit wide
                               event, i.e., the counter will be incremented by
                               1 when the comparison is true (the type of
                               comparison depends on the setting of the invert
                               bit - see bit 23 below) no matter how wide the
                               original event was. When this field is zero,
                               threshold comparison is disabled and the event
                               is passed without modification.
                            */
    UINT32 ResThreshold1 : 4;

                            /* Bits[35:32], Access Type=RW_V, default=0x00000000*/

                            /*
                               This field is compared directly against an
                               incoming event value for events that can
                               increment by 1 or more in a given cycle. Since
                               the widest event from the ITC/OTC is 10 bits
                               (queue occupancy), it is 10 bit wide. The result
                               of the comparison is effectively a 1 bit wide
                               event, i.e., the counter will be incremented by
                               1 when the comparison is true (the type of
                               comparison depends on the setting of the invert
                               bit - see bit 23 below) no matter how wide the
                               original event was. When this field is zero,
                               threshold comparison is disabled and the event
                               is passed without modification.
                            */
    UINT32 Chnlmask : 12;

                            /* Bits[47:36], Access Type=RW, default=0x00000FFF*/

                            /*
                               This one-hot field specifies which PCIE links
                               should be considered when counting PerfMon
                               events. For example, if only bit 1 is set, then
                               only events corresponding to PCIE link 1 will be
                               counted.
                            */
    UINT32 Fcmask : 3;

                            /* Bits[50:48], Access Type=RW, default=0x00000007*/

                            /*
                               This one-hot field specifies which FCs should be
                               considered when counting PerfMon events: Bit 0 -
                               Posted requests Bit 1 - Non-posted requests Bit
                               2 - Completions
                            */
    UINT32 Rsvd51 : 13;

                            /* Bits[63:51], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IOPMONCNTRCFG_3_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_0 0x00000B50

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_0_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_1 0x00000B51

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_1_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_2 0x00000B52

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_2_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_3 0x00000B53

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_3_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_4 0x00000B54

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_4_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_5 0x00000B55

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_5_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_6 0x00000B56

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_6_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_7 0x00000B57

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_7_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_8 0x00000B58

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_8_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_9 0x00000B59

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_9_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_10 0x00000B5A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_10_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_11 0x00000B5B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_11_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_12 0x00000B5C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_12_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_13 0x00000B5D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_13_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_14 0x00000B5E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_14_REGISTER;

/**
  This is the foward counter. Software can read and write into it
**/
#define MSR_IIOPMONFRCNTR_15 0x00000B5F

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Countervalue0 : 32;

                            /* Bits[31:0], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Countervalue1 : 4;

                            /* Bits[35:32], Access Type=RO_V, default=0x00000000*/

                            /* The current value of the counter */
    UINT32 Rsvd36 : 28;

                            /* Bits[63:36], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IIOPMONFRCNTR_15_REGISTER;

/**
  Available only in SMM. SMRAM copy of CR0 saved by SMI
**/
#define MSR_SMRAM_CR0 0x00000C00

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Pe : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Protection Enable */
    UINT32 Mp : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* Monitor Coprocessor */
    UINT32 Em : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /* Emulation */
    UINT32 Ts : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /* Task Switched */
    UINT32 Et : 1;

                            /* Bits[4:4], Access Type=RO_V, default=None*/

                            /*
                               Extension Type (hardware for this bit always
                               reads as '1...no actual state here)
                            */
    UINT32 Ne : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /* Numeric Error */
    UINT32 Rsvd6 : 10;

                            /* Bits[15:6], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Wp : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /* Write Protect */
    UINT32 Rsvd17 : 1;

                            /* Bits[17:17], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Am : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /* Alignment Mask */
    UINT32 Rsvd19 : 10;

                            /* Bits[28:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Nw : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               Not Write-through - During reset ucode the reset
                               thread will write this value to a '1 for itself,
                               and a '0 for the other thread
                            */
    UINT32 Cd : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Cache Disable - During reset ucode the reset
                               thread will write this value to a '1 for itself,
                               and a '0 for the other thread
                            */
    UINT32 Pg : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /* Paging */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_CR0_REGISTER;

/**
  Available only in SMM. SMRAM copy of CR3 saved by SMI
**/
#define MSR_SMRAM_CR3 0x00000C01

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsv : 3;

                            /* Bits[2:0], Access Type=RW, default=None*/

                            /* Reserved bits, reset value T0 = 3'b0, T1=3'b111 */
    UINT32 Pwt : 1;

                            /* Bits[3:3], Access Type=RW, default=None*/

                            /*
                               CR3 page level cache write through, reset value
                               T0 = 0, T1 = 1
                            */
    UINT32 Pcd : 1;

                            /* Bits[4:4], Access Type=RW, default=None*/

                            /*
                               CR3 page level cache disable reset value T0 = 0,
                               T1 = 1
                            */
    UINT32 PdptrPdb : 7;

                            /* Bits[11:5], Access Type=RW, default=None*/

                            /*
                               PD Pntr Base, extended range for Mode-C paging,
                               reset val T0 ? 7'h78 : 7'h07
                            */
    UINT32 Pdba0 : 20;

                            /* Bits[31:12], Access Type=RW, default=None*/

                            /*
                               CR3 page directory base address , T0 ? 20'hfffff
                               : 20'hffff0
                            */
    UINT32 Pdba1 : 21;

                            /* Bits[52:32], Access Type=RW, default=None*/

                            /*
                               CR3 page directory base address , T0 ? 20'hfffff
                               : 20'hffff0
                            */
    UINT32 Rsvd53 : 11;

                            /* Bits[63:53], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_CR3_REGISTER;

/**
  Available only in SMM. SMRAM copy of EFLAGS saved by SMI
**/
#define MSR_SMRAM_EFLAGS 0x00000C02

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Cf : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* Carry */
    UINT32 Rsvd1 : 1;

                            /* Bits[1:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Pf : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /* Parity */
    UINT32 Rsvd3 : 1;

                            /* Bits[3:3], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Af : 1;

                            /* Bits[4:4], Access Type=RW, default=None*/

                            /* AuxCarry */
    UINT32 Rsvd5 : 1;

                            /* Bits[5:5], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Zf : 1;

                            /* Bits[6:6], Access Type=RW, default=None*/

                            /* Zero */
    UINT32 Sf : 1;

                            /* Bits[7:7], Access Type=RW, default=None*/

                            /* Stack Fault */
    UINT32 Tf : 1;

                            /* Bits[8:8], Access Type=RW, default=None*/

                            /* Trap */
    UINT32 InterruptFlag : 1;

                            /* Bits[9:9], Access Type=RW, default=None*/

                            /* Interrupt Enable */
    UINT32 Df : 1;

                            /* Bits[10:10], Access Type=RW, default=None*/

                            /* Double-fault Exception */
    UINT32 Of : 1;

                            /* Bits[11:11], Access Type=RW, default=None*/

                            /* Overflow */
    UINT32 Iopl : 2;

                            /* Bits[13:12], Access Type=RW, default=None*/

                            /* I/O privilege level */
    UINT32 Nt : 1;

                            /* Bits[14:14], Access Type=RW, default=None*/

                            /* Nested Task */
    UINT32 Rsvd15 : 1;

                            /* Bits[15:15], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rf : 1;

                            /* Bits[16:16], Access Type=RW, default=None*/

                            /* Resume */
    UINT32 Vm : 1;

                            /* Bits[17:17], Access Type=RW, default=None*/

                            /* Virtual-8086 Mode */
    UINT32 Ac : 1;

                            /* Bits[18:18], Access Type=RW, default=None*/

                            /* Alignment Check */
    UINT32 Vif : 1;

                            /* Bits[19:19], Access Type=RW, default=None*/

                            /* Virtual Interrupt */
    UINT32 Vip : 1;

                            /* Bits[20:20], Access Type=RW, default=None*/

                            /* Virtual Interrupt Pending */
    UINT32 Id : 1;

                            /* Bits[21:21], Access Type=RW, default=None*/

                            /* Identification */
    UINT32 Rsvd22 : 10;

                            /* Bits[31:22], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_EFLAGS_REGISTER;

/**
  Available only in SMM. SMRAM copy of EFER saved by SMI
**/
#define MSR_SMRAM_EFER 0x00000C03

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Sce : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* System Call Enable Bit */
    UINT32 Rsvd1 : 7;

                            /* Bits[7:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Lme : 1;

                            /* Bits[8:8], Access Type=RW, default=None*/

                            /* Long Mode Enabled */
    UINT32 Rsvd9 : 1;

                            /* Bits[9:9], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Lma : 1;

                            /* Bits[10:10], Access Type=RW, default=None*/

                            /* Long Mode Active */
    UINT32 Nxe : 1;

                            /* Bits[11:11], Access Type=RW, default=None*/

                            /* Enable No-Execute Mode */
    UINT32 Rsvd12 : 20;

                            /* Bits[31:12], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_EFER_REGISTER;
/**
  Available only in SMM. SMRAM copy of RIP saved by SMI, introduced in HSW
**/
#define MSR_SMRAM_RIP 0x00000C04

/**
  Available only in SMM. SMRAM copy of DR6 saved by SMI
**/
#define MSR_SMRAM_DR6 0x00000C05

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 B0 : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* Breakpoint condition detected bit */
    UINT32 B1 : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* Breakpoint condition detected bit */
    UINT32 B2 : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /* Breakpoint condition detected bit */
    UINT32 B3 : 1;

                            /* Bits[3:3], Access Type=RW, default=None*/

                            /* Breakpoint condition detected bit */
    UINT32 MustBeOneLow : 8;

                            /* Bits[11:4], Access Type=RW, default=None*/

                            /* Bits which are architecturally defined to be 1 */
    UINT32 MustBeZero : 1;

                            /* Bits[12:12], Access Type=RW, default=None*/

                            /* Bits which are architecturally defined to be 0 */
    UINT32 Bd : 1;

                            /* Bits[13:13], Access Type=RW, default=None*/

                            /*
                               Indicates that the next instruction in the
                               instruction stream will access one of the debug
                               registers when a debug fault handler is reached.
                            */
    UINT32 Bs : 1;

                            /* Bits[14:14], Access Type=RW, default=None*/

                            /*
                               The debug exception was triggered by a single-
                               step trap.
                            */
    UINT32 Bt : 1;

                            /* Bits[15:15], Access Type=RW, default=None*/

                            /*
                               The debug exception was triggered by a TSS T-bit
                               trap.
                            */
    UINT32 MustBeOneHigh : 16;

                            /* Bits[31:16], Access Type=RW, default=None*/

                            /* Bits which are architecturally defined to be 1. */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_DR6_REGISTER;

/**
  Available only in SMM. SMRAM copy of DR7 saved by SMI
**/
#define MSR_SMRAM_DR7 0x00000C06

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 L0 : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* Local breakpoint enable for DR0 */
    UINT32 G0 : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* Global breakpoint enable for DR0 */
    UINT32 L1 : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /* Local breakpoint enable for DR1 */
    UINT32 G1 : 1;

                            /* Bits[3:3], Access Type=RW, default=None*/

                            /* Global breakpoint enable for DR1 */
    UINT32 L2 : 1;

                            /* Bits[4:4], Access Type=RW, default=None*/

                            /* Local breakpoint enable for DR2 */
    UINT32 G2 : 1;

                            /* Bits[5:5], Access Type=RW, default=None*/

                            /* Global breakpoint enable for DR2 */
    UINT32 L3 : 1;

                            /* Bits[6:6], Access Type=RW, default=None*/

                            /* Local breakpoint enable for DR3 */
    UINT32 G3 : 1;

                            /* Bits[7:7], Access Type=RW, default=None*/

                            /* Global breakpoint enable for DR3 */
    UINT32 Le : 1;

                            /* Bits[8:8], Access Type=RW, default=None*/

                            /* Local exact breakpoint enable */
    UINT32 Ge : 1;

                            /* Bits[9:9], Access Type=RW, default=None*/

                            /* Global exact breakpoint enable */
    UINT32 Rsvd10 : 3;

                            /* Bits[12:10], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Gd : 1;

                            /* Bits[13:13], Access Type=RW, default=None*/

                            /*
                               Enables the debug register protection condition
                               that is flagged by BD of DR6
                            */
    UINT32 Rsvd14 : 2;

                            /* Bits[15:14], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rw0 : 2;

                            /* Bits[17:16], Access Type=RW, default=None*/

                            /* Breakpoint condition for DR0 */
    UINT32 Len0 : 2;

                            /* Bits[19:18], Access Type=RW, default=None*/

                            /* Size of memory breakpoint location for DR0 */
    UINT32 Rw1 : 2;

                            /* Bits[21:20], Access Type=RW, default=None*/

                            /* Breakpoint condition for DR1 */
    UINT32 Len1 : 2;

                            /* Bits[23:22], Access Type=RW, default=None*/

                            /* Size of memory breakpoint location for DR1 */
    UINT32 Rw2 : 2;

                            /* Bits[25:24], Access Type=RW, default=None*/

                            /* Breakpoint condition for DR2 */
    UINT32 Len2 : 2;

                            /* Bits[27:26], Access Type=RW, default=None*/

                            /* Size of memory breakpoint location for DR2 */
    UINT32 Rw3 : 2;

                            /* Bits[29:28], Access Type=RW, default=None*/

                            /* Breakpoint condition for DR3 */
    UINT32 Len3 : 2;

                            /* Bits[31:30], Access Type=RW, default=None*/

                            /* Size of memory breakpoint location for DR3 */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_DR7_REGISTER;

/**
  Available only in SMM. SMRAM copy of TR Sel and LDTR Sel saved by SMI
**/
#define MSR_SMRAM_TR_LDTR 0x00000C07

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 LdtrSel : 16;

                            /* Bits[15:0], Access Type=RW, default=None*/

                            /* LDTR Selector */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 TrSel : 16;

                            /* Bits[47:32], Access Type=RW, default=None*/

                            /* TR Selector */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_TR_LDTR_REGISTER;

/**
  Available only in SMM. SMRAM copy of GS and FS saved by SMI
**/
#define MSR_SMRAM_GS_FS 0x00000C08

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Fs : 16;

                            /* Bits[15:0], Access Type=RW, default=None*/

                            /* FS */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Gs : 16;

                            /* Bits[47:32], Access Type=RW, default=None*/

                            /* GS */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_GS_FS_REGISTER;

/**
  Available only in SMM. SMRAM copy of DS and SS saved by SMI
**/
#define MSR_SMRAM_DS_SS 0x00000C09

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Ss : 16;

                            /* Bits[15:0], Access Type=RW, default=None*/

                            /* FS */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Ds : 16;

                            /* Bits[47:32], Access Type=RW, default=None*/

                            /* GS */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_DS_SS_REGISTER;

/**
  Available only in SMM. SMRAM copy of CS and ES saved by SMI
**/
#define MSR_SMRAM_CS_ES 0x00000C0A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Es : 16;

                            /* Bits[15:0], Access Type=RW, default=None*/

                            /* FS */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Cs : 16;

                            /* Bits[47:32], Access Type=RW, default=None*/

                            /* GS */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_CS_ES_REGISTER;

/**
  Available only in SMM. SMRAM copy of IOMISCINFO saved by SMI
**/
#define MSR_SMRAM_IOMISCINFO 0x00000C0B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Iomiscinfo : 32;

                            /* Bits[31:0], Access Type=RW, default=None*/

                            /* Copy of ROB IOMISCINFO */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_IOMISCINFO_REGISTER;
/**
  Available only in SMM. SMRAM copy of IO_MEM_ADDR saved by SMI
**/
#define MSR_SMRAM_IO_MEM_ADDR 0x00000C0C
/**
  Available only in SMM. SMRAM copy of RDI saved by SMI
**/
#define MSR_SMRAM_RDI 0x00000C0D
/**
  Available only in SMM. SMRAM copy of RSI saved by SMI
**/
#define MSR_SMRAM_RSI 0x00000C0E
/**
  Available only in SMM. SMRAM copy of RBP saved by SMI
**/
#define MSR_SMRAM_RBP 0x00000C0F
/**
  Available only in SMM. SMRAM copy of RSP saved by SMI
**/
#define MSR_SMRAM_RSP 0x00000C10
/**
  Available only in SMM. SMRAM copy of RBX saved by SMI
**/
#define MSR_SMRAM_RBX 0x00000C11
/**
  Available only in SMM. SMRAM copy of RDX saved by SMI
**/
#define MSR_SMRAM_RDX 0x00000C12
/**
  Available only in SMM. SMRAM copy of RCX saved by SMI
**/
#define MSR_SMRAM_RCX 0x00000C13
/**
  Available only in SMM. SMRAM copy of RAX saved by SMI
**/
#define MSR_SMRAM_RAX 0x00000C14
/**
  Available only in SMM. SMRAM copy of R8 saved by SMI
**/
#define MSR_SMRAM_R8 0x00000C15
/**
  Available only in SMM. SMRAM copy of R9 saved by SMI
**/
#define MSR_SMRAM_R9 0x00000C16
/**
  Available only in SMM. SMRAM copy of R10 saved by SMI
**/
#define MSR_SMRAM_R10 0x00000C17
/**
  Available only in SMM. SMRAM copy of R11 saved by SMI
**/
#define MSR_SMRAM_R11 0x00000C18
/**
  Available only in SMM. SMRAM copy of R12 saved by SMI
**/
#define MSR_SMRAM_R12 0x00000C19
/**
  Available only in SMM. SMRAM copy of R13 saved by SMI
**/
#define MSR_SMRAM_R13 0x00000C1A
/**
  Available only in SMM. SMRAM copy of R14 saved by SMI
**/
#define MSR_SMRAM_R14 0x00000C1B
/**
  Available only in SMM. SMRAM copy of RDI saved by SMI
**/
#define MSR_SMRAM_R15 0x00000C1C

/**
  Available only in SMM. SMRAM copy of EVENT_CTL, HLT flag and IO flag saved by SMI
**/
#define MSR_SMRAM_EVENT_CTL_HLT_IO 0x00000C1F

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 IoFlag : 16;

                            /* Bits[15:0], Access Type=RW, default=None*/

                            /* Copy of IO Flag */
    UINT32 HltFlag : 16;

                            /* Bits[31:16], Access Type=RW, default=None*/

                            /* Copy of HLT Flag */
    UINT32 EventCtl : 16;

                            /* Bits[47:32], Access Type=RW, default=None*/

                            /* Copy of EVENT_CTL */
    UINT32 Rsvd48 : 16;

                            /* Bits[63:48], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_EVENT_CTL_HLT_IO_REGISTER;

/**
  Available only in SMM. SMRAM copy of SMBASE saved by SMI
**/
#define MSR_SMRAM_SMBASE 0x00000C20

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Smbase : 32;

                            /* Bits[31:0], Access Type=RW, default=None*/

                            /* Copy of SMBASE */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_SMBASE_REGISTER;

/**
  Available only in SMM. SMRAM copy of SMM_REVID saved by SMI
**/
#define MSR_SMRAM_SMM_REVID 0x00000C21

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 SmmRevid : 32;

                            /* Bits[31:0], Access Type=RW, default=None*/

                            /* Copy of SMM_REVID */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_SMM_REVID_REGISTER;

/**
  Available only in SMM. SMRAM copy of IEDBASE saved by SMI
**/
#define MSR_SMRAM_IEDBASE 0x00000C22

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 32;

                            /* Bits[31:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Iedbase : 32;

                            /* Bits[63:32], Access Type=RW, default=None*/

                            /* Copy of IEDBASE */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_IEDBASE_REGISTER;

/**
  Available only in SMM. SMRAM copy of EPTP_ENABLE saved by SMI
**/
#define MSR_SMRAM_EPTP_ENABLE 0x00000C23

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 EptpEnable : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* Copy of EPTP_ENABLE */
    UINT32 EnclaveInterruption : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* Copy of ENCLAVE_INTERRUPTION */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_EPTP_ENABLE_REGISTER;
/**
  Available only in SMM. SMRAM copy of EPTP saved by SMI
**/
#define MSR_SMRAM_EPTP 0x00000C24
/**
  Available only in SMM. SMRAM copy of BNDCFGS saved by SMI
**/
#define MSR_SMRAM_BNDCFGS 0x00000C25
/**
  Available only in SMM. SMRAM copy of LDTR_BASE saved by SMI
**/
#define MSR_SMRAM_LDTR_BASE 0x00000C2C
/**
  Available only in SMM. SMRAM copy of IDTR_BASE saved by SMI
**/
#define MSR_SMRAM_IDTR_BASE 0x00000C2D
/**
  Available only in SMM. SMRAM copy of IDTR_BASE saved by SMI
**/
#define MSR_SMRAM_GDTR_BASE 0x00000C2E

/**
  Available only in SMM. SMRAM copy of CR0 saved by SMI
**/
#define MSR_SMRAM_CR4 0x00000C37

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Vme : 1;

                            /* Bits[0:0], Access Type=RW, default=None*/

                            /* Enables virtual 8086-mode extensions */
    UINT32 Pvi : 1;

                            /* Bits[1:1], Access Type=RW, default=None*/

                            /* Protected-Mode Virtual Interrupts */
    UINT32 Tsd : 1;

                            /* Bits[2:2], Access Type=RW, default=None*/

                            /* Time Stamp Disable */
    UINT32 De : 1;

                            /* Bits[3:3], Access Type=RW, default=None*/

                            /* Debugging Extensions */
    UINT32 Pse : 1;

                            /* Bits[4:4], Access Type=RW, default=None*/

                            /* Page Size Extensions */
    UINT32 Pae : 1;

                            /* Bits[5:5], Access Type=RW, default=None*/

                            /* Physical Address Extension */
    UINT32 Mce : 1;

                            /* Bits[6:6], Access Type=RW, default=None*/

                            /* Machine check Enable */
    UINT32 Pge : 1;

                            /* Bits[7:7], Access Type=RW, default=None*/

                            /* Page Global Enable */
    UINT32 Pce : 1;

                            /* Bits[8:8], Access Type=RW, default=None*/

                            /* Performance-monitoring Counter Enable */
    UINT32 Osfxsr : 1;

                            /* Bits[9:9], Access Type=RW, default=None*/

                            /* Enables the fast FXsave and FXrestore */
    UINT32 Xmmexc : 1;

                            /* Bits[10:10], Access Type=RW, default=None*/

                            /* Enables the exceptions for Katmia */
    UINT32 Umip : 1;

                            /* Bits[11:11], Access Type=RW, default=None*/

                            /* UMIP Enable */
    UINT32 Rsvd12 : 1;

                            /* Bits[12:12], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 VmxEnable : 1;

                            /* Bits[13:13], Access Type=RW, default=None*/

                            /* Logic 1 indicates that VMX is enabled */
    UINT32 SmxEnable : 1;

                            /* Bits[14:14], Access Type=RW, default=None*/

                            /* Logic 1 indicates that SMX is enabled */
    UINT32 Slc64 : 1;

                            /* Bits[15:15], Access Type=RW, default=None*/

                            /* Logic 1 indicates that SLC64 is enabled */
    UINT32 FsGsBase : 1;

                            /* Bits[16:16], Access Type=RW, default=None*/

                            /*
                               Logic 1 indicates that Ring3 Segment Base Access
                               is enabled. This allows reading/writing the
                               FS/GS segment bases through instructions
                               RDFSBASE. WRFSBASE, RDGSBASE or WRGSBASE.
                            */
    UINT32 Pcide : 1;

                            /* Bits[17:17], Access Type=RW, default=None*/

                            /* Logic 1 indicates that PCID is enabled */
    UINT32 Osxsave : 1;

                            /* Bits[18:18], Access Type=RW, default=None*/

                            /* Logic 1 indicates that XSAVE is enabled */
    UINT32 Rsvd19 : 4;

                            /* Bits[22:19], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 La57 : 1;

                            /* Bits[23:23], Access Type=RW, default=None*/

                            /* Logic 1 indicates that VA of 57 width is enabled */
    UINT32 Rsvd24 : 8;

                            /* Bits[31:24], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_SMRAM_CR4_REGISTER;
/**
  Available only in SMM. SMRAM copy of IO_RSI saved by SMI
**/
#define MSR_SMRAM_IO_RSI 0x00000C40
/**
  Available only in SMM. SMRAM copy of IO_RCX saved by SMI
**/
#define MSR_SMRAM_IO_RCX 0x00000C41
/**
  Available only in SMM. SMRAM copy of IO_RIP saved by SMI
**/
#define MSR_SMRAM_IO_RIP 0x00000C42
/**
  Available only in SMM. SMRAM copy of IO_RDI saved by SMI
**/
#define MSR_SMRAM_IO_RDI 0x00000C43

/**
  CDP enable
**/
#define MSR_PQOS_CDP_ENABLE 0x00000C81

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Cdp : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* enable */
    UINT32 Rsvd1 : 31;

                            /* Bits[31:1], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_PQOS_CDP_ENABLE_REGISTER;

/**
  IO QOS cfg
**/
#define MSR_IO_QOS_CFG 0x00000C83

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 IoQosEnf : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* IIO qos enf enable */
    UINT32 IoQosMon : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* IIO qos mon enable - RSVD in ICX */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_IO_QOS_CFG_REGISTER;

/**
  MBA (mem bandwidth alloc) cfg
**/
#define MSR_MBA_CFG 0x00000C84

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 MinMaxDelay : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Min (0) or Max (1) of per-core CLOS delays */
    UINT32 MbaEn : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* MBA hardware ctrlr enable */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_MBA_CFG_REGISTER;

/**
  way mask for locked LLC ways. If the hit way intersects this mask, LLC to SF migration is disabled
**/
#define MSR_L3_PROTECTED_WAYS 0x00000C85

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Mask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x00000000*/

                            /* way mask */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_L3_PROTECTED_WAYS_REGISTER;

/**
  model specific msr to enable maksing of events that MBM counts
**/
#define MSR_MBM_CFG_3DXP 0x00000C86

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Mbmcountnonddrt : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* dram bw included in count */
    UINT32 Mbmcountddrt : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /* 3dxp bw included in count */
    UINT32 Rsvd2 : 30;

                            /* Bits[31:2], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 32;

                            /* Bits[63:32], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_MBM_CFG_3DXP_REGISTER;

/**
  uCR: LRU Update values for various opcodes that update the LRU bits.
**/
#define MSR_QLRU_CONFIG 0x00000C8C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Cr0 : 2;

                            /* Bits[1:0], Access Type=RW, default=0x00000003*/

                            /* LRU Age Update value for CRd/Monitor on LLC Hit */
    UINT32 Cr1 : 2;

                            /* Bits[3:2], Access Type=RW, default=0x00000003*/

                            /*
                               LRU Age Update value for Prefetch Code (to MLC)
                               on LLC Hit
                            */
    UINT32 Cr2 : 2;

                            /* Bits[5:4], Access Type=RW, default=0x00000002*/

                            /*
                               LRU Age Update value for Prefetch Code (to LLC)
                               on LLC Hit
                            */
    UINT32 Cr3 : 2;

                            /* Bits[7:6], Access Type=RW, default=0x00000002*/

                            /*
                               LRU Age Update value for DRd/RFO/DRdPTE/ItoM on
                               LLC Hit
                            */
    UINT32 Cr4 : 2;

                            /* Bits[9:8], Access Type=RW, default=0x00000002*/

                            /*
                               LRU Age Update value for Prefetch data (to MLC)
                               on LLC Hit
                            */
    UINT32 Cr5 : 2;

                            /* Bits[11:10], Access Type=RW, default=0x00000002*/

                            /*
                               LRU Age Update value for PrefRFO / PrefData (to
                               LLC) on LLC Hit
                            */
    UINT32 Cr6 : 2;

                            /* Bits[13:12], Access Type=RW, default=0x00000003*/

                            /*
                               LRU Age Update value for CRd / Monitor on LLC
                               Miss (Normal Fill)
                            */
    UINT32 Cr7 : 2;

                            /* Bits[15:14], Access Type=RW, default=0x00000003*/

                            /*
                               LRU Age Update value for Prefetch Code (to MLC)
                               on LLC Miss (Normal Fill)
                            */
    UINT32 Cr8 : 2;

                            /* Bits[17:16], Access Type=RW, default=0x00000001*/

                            /*
                               LRU Age Update value for Prefetch Code (to LLC)
                               on LLC Miss (Normal Fill)
                            */
    UINT32 Cr9 : 2;

                            /* Bits[19:18], Access Type=RW, default=0x00000002*/

                            /*
                               LRU Age Update value for DRd / RFO / DRdPTE /
                               ItoM on LLC Miss (Normal Fill)
                            */
    UINT32 CrB : 2;

                            /* Bits[21:20], Access Type=RW, default=0x00000001*/

                            /*
                               LRU Age Update value for Prefetch data (to MLC)
                               on LLC Miss (Normal Fill)
                            */
    UINT32 CrD : 2;

                            /* Bits[23:22], Access Type=RW, default=0x00000001*/

                            /*
                               LRU Age Update value for PrefRFO / PrefData (to
                               LLC) on LLC Miss (Normal Fill)
                            */
    UINT32 CrF : 2;

                            /* Bits[25:24], Access Type=RW, default=0x00000003*/

                            /*
                               LRU Age Update value for demand read and MLC
                               prefetche on LLC Hit, when the current age is
                               2/3.
                            */
    UINT32 Cr10 : 2;

                            /* Bits[27:26], Access Type=RW, default=0x00000002*/

                            /* LRU Age update value for IIO requests on LLC Hit */
    UINT32 Cr11 : 2;

                            /* Bits[29:28], Access Type=RW, default=0x00000001*/

                            /* LRU Age update for IIO requests on LLC Miss */
    UINT32 Cr12 : 2;

                            /* Bits[31:30], Access Type=RW, default=0x00000001*/

                            /* LRU Age update for Writebacks */
    UINT32 Cr13 : 2;

                            /* Bits[33:32], Access Type=RW, default=0x00000003*/

                            /* LRU Age update for WbPushHint */
    UINT32 Rsvd34 : 10;

                            /* Bits[43:34], Access Type=RW, default=0x00000000*/

                            /* LRU Age update for WbPushHint */
    UINT32 Cr6Llc : 2;

                            /* Bits[45:44], Access Type=RW, default=0x00000001*/

                            /*
                               LRU Age Update value for CRd / Monitor on LLC
                               allocate
                            */
    UINT32 Cr7Llc : 2;

                            /* Bits[47:46], Access Type=RW, default=0x00000001*/

                            /*
                               LRU Age Update value for Prefetch Code (to MLC)
                               on LLC allocate
                            */
    UINT32 Rsvd48 : 2;

                            /* Bits[49:48], Access Type=RW, default=0x00000001*/

                            /* Rserved */
    UINT32 Cr9Llc : 2;

                            /* Bits[51:50], Access Type=RW, default=0x00000001*/

                            /*
                               LRU Age Update value for DRd / RFO / DRdPTE /
                               ItoM on LLC Miss (Vulnerable Fill)
                            */
    UINT32 CrBLlc : 2;

                            /* Bits[53:52], Access Type=RW, default=0x00000001*/

                            /*
                               LRU Age Update value for Prefetch data (to MLC)
                               on LLC Miss (Vulnerable Fill)
                            */
    UINT32 Cr14 : 2;

                            /* Bits[55:54], Access Type=RW, default=0x00000000*/

                            /* LRU Age update for CLCleanse */
    UINT32 Cr15 : 2;

                            /* Bits[57:56], Access Type=RW, default=0x00000003*/

                            /* LRU Age update for LLC allocation from SF Victim */
    UINT32 Cr16 : 2;

                            /* Bits[59:58], Access Type=RW, default=0x00000000*/

                            /* LRU Age update for Remote Requests */
    UINT32 Rsvd60 : 2;

                            /* Bits[61:60], Access Type=RW, default=0x00000001*/

                            /* Rserved */
    UINT32 Rsvd62 : 2;

                            /* Bits[63:62], Access Type=RW, default=0x00000000*/

                            /* Rserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QLRU_CONFIG_REGISTER;

/**
  MSR that is used to receive query id from software for which data will be looked up by another MSR
**/
#define MSR_QOSEVTSEL 0x00000C8D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Evtid : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /*
                               0x01 for LLC occupancy monitoring, 0x00 for no
                               monitoring, remaining for future extensibility
                            */
    UINT32 Rsvd8 : 24;

                            /* Bits[31:8], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rmid : 10;

                            /* Bits[41:32], Access Type=RW, default=0x00000000*/

                            /* 1 = unquiesce initiated */
    UINT32 Rsvd42 : 22;

                            /* Bits[63:42], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOSEVTSEL_REGISTER;

/**
  MSR that is used to convey the counter value for the RMID queried by the QOSEVTSEL MSR.  This is a Read only MSR.
**/
#define MSR_QMC 0x00000C8E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 MonitoringData0 : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* Data for corresponding RMID is populated in this */
    UINT32 MonitoringData1 : 30;

                            /* Bits[61:32], Access Type=RW, default=0x00000000*/

                            /* Data for corresponding RMID is populated in this */
    UINT32 Availability : 1;

                            /* Bits[62:62], Access Type=RW, default=0x00000000*/

                            /* 1 = if data available, 0 if data not available */
    UINT32 Error : 1;

                            /* Bits[63:63], Access Type=RW, default=0x00000000*/

                            /* 1 = Error, 0 = no error */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QMC_REGISTER;

/**
  available ways vectors for class of service of IA core
**/
#define MSR_LLC_QOS_MASK_0 0x00000C90

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_0_REGISTER;

/**
  available ways vectors for class of service of IA core
**/
#define MSR_LLC_QOS_MASK_1 0x00000C91

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_1_REGISTER;

/**
  available ways vectors for class of service of IA core
**/
#define MSR_LLC_QOS_MASK_2 0x00000C92

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_2_REGISTER;

/**
  available ways vectors for class of service of IA core
**/
#define MSR_LLC_QOS_MASK_3 0x00000C93

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_3_REGISTER;

/**
  available ways vectors for class of service of IA core
  " seq has 12 instances in addresses range 0x94 to 0x9F"
**/
#define MSR_LLC_QOS_MASK_4_4 0x00000C94

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_4_4_REGISTER;

/**
  available ways vectors for class of service of IA core
  " seq has 12 instances in addresses range 0x94 to 0x9F"
**/
#define MSR_LLC_QOS_MASK_5_5 0x00000C95

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_5_5_REGISTER;

/**
  available ways vectors for class of service of IA core
  " seq has 12 instances in addresses range 0x94 to 0x9F"
**/
#define MSR_LLC_QOS_MASK_6_6 0x00000C96

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_6_6_REGISTER;

/**
  available ways vectors for class of service of IA core
  " seq has 12 instances in addresses range 0x94 to 0x9F"
**/
#define MSR_LLC_QOS_MASK_7_7 0x00000C97

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_7_7_REGISTER;

/**
  available ways vectors for class of service of IA core
  " seq has 12 instances in addresses range 0x94 to 0x9F"
**/
#define MSR_LLC_QOS_MASK_8_8 0x00000C98

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_8_8_REGISTER;

/**
  available ways vectors for class of service of IA core
  " seq has 12 instances in addresses range 0x94 to 0x9F"
**/
#define MSR_LLC_QOS_MASK_9_9 0x00000C99

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_9_9_REGISTER;

/**
  available ways vectors for class of service of IA core
  " seq has 12 instances in addresses range 0x94 to 0x9F"
**/
#define MSR_LLC_QOS_MASK_10_10 0x00000C9A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_10_10_REGISTER;

/**
  available ways vectors for class of service of IA core
  " seq has 12 instances in addresses range 0x94 to 0x9F"
**/
#define MSR_LLC_QOS_MASK_11_11 0x00000C9B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_11_11_REGISTER;

/**
  available ways vectors for class of service of IA core
  " seq has 12 instances in addresses range 0x94 to 0x9F"
**/
#define MSR_LLC_QOS_MASK_12_12 0x00000C9C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_12_12_REGISTER;

/**
  available ways vectors for class of service of IA core
  " seq has 12 instances in addresses range 0x94 to 0x9F"
**/
#define MSR_LLC_QOS_MASK_13_13 0x00000C9D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_13_13_REGISTER;

/**
  available ways vectors for class of service of IA core
  " seq has 12 instances in addresses range 0x94 to 0x9F"
**/
#define MSR_LLC_QOS_MASK_14_14 0x00000C9E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CosWaysMask : 20;

                            /* Bits[19:0], Access Type=RW, default=0x000FFFFF*/

                            /*
                               available ways vectors for class of service of
                               IA core restrictions: Only contiguous 1s are
                               allowed.
                            */
    UINT32 Rsvd20 : 12;

                            /* Bits[31:20], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LLC_QOS_MASK_14_14_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_0_0 0x00000D50

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_0_0_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_1_1 0x00000D51

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_1_1_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_2_2 0x00000D52

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_2_2_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_3_3 0x00000D53

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_3_3_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_4_4 0x00000D54

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_4_4_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_5_5 0x00000D55

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_5_5_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_6_6 0x00000D56

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_6_6_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_7_7 0x00000D57

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_7_7_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_8_8 0x00000D58

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_8_8_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_9_9 0x00000D59

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_9_9_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_10_10 0x00000D5A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_10_10_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_11_11 0x00000D5B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_11_11_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_12_12 0x00000D5C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_12_12_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_13_13 0x00000D5D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_13_13_REGISTER;

/**
  This MSR is used for Memory BW enforcement
  " seq has 16 instances in addresses range 0xD50 to 0xD5F"
**/
#define MSR_QOS_EXT_BW_THRTL_14_14 0x00000D5E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 RbeEnforcementVal : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* The mem bw thrtl value */
    UINT32 Reserved16 : 16;

                            /* Bits[31:16], Access Type=RW, default=0x00000000*/

                            /* Reserved */
    UINT32 Reserved32 : 32;

                            /* Bits[63:32], Access Type=RW, default=0x00000000*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_QOS_EXT_BW_THRTL_14_14_REGISTER;
/**
  Accumulates value of THREAD_TSC_SAMPLE_PRE_OPD_ENTER on every OPD_EXIT when transitioning back to C0
**/
#define MSR_THREAD_STALL_COUNTER 0x00000DB2

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_0_0 0x00000DC0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_0_0_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_1_1 0x00000DC1

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_1_1_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_2_2 0x00000DC2

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_2_2_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_3_3 0x00000DC3

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_3_3_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_4_4 0x00000DC4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_4_4_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_5_5 0x00000DC5

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_5_5_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_6_6 0x00000DC6

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_6_6_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_7_7 0x00000DC7

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_7_7_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_8_8 0x00000DC8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_8_8_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_9_9 0x00000DC9

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_9_9_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_10_10 0x00000DCA

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_10_10_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_11_11 0x00000DCB

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_11_11_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_12_12 0x00000DCC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_12_12_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_13_13 0x00000DCD

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_13_13_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_14_14 0x00000DCE

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_14_14_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_15_15 0x00000DCF

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_15_15_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_16_16 0x00000DD0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_16_16_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_17_17 0x00000DD1

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_17_17_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_18_18 0x00000DD2

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_18_18_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_19_19 0x00000DD3

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_19_19_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_20_20 0x00000DD4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_20_20_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_21_21 0x00000DD5

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_21_21_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_22_22 0x00000DD6

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_22_22_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_23_23 0x00000DD7

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_23_23_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_24_24 0x00000DD8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_24_24_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_25_25 0x00000DD9

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_25_25_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_26_26 0x00000DDA

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_26_26_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_27_27 0x00000DDB

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_27_27_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_28_28 0x00000DDC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_28_28_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_29_29 0x00000DDD

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_29_29_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_30_30 0x00000DDE

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_30_30_REGISTER;

/**
  LBR MSR that holds non-IP information
**/
#define MSR_LBR_INFO_31_31 0x00000DDF

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 CycleCount : 16;

                            /* Bits[15:0], Access Type=RW_V, default=None*/

                            /* core-clocks elapsed since last LBR array update */
    UINT32 Rsvd16 : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Rsvd32 : 29;

                            /* Bits[60:32], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 HleAbort : 1;

                            /* Bits[61:61], Access Type=RW_V, default=None*/

                            /* HLE/+ TX Abort occured */
    UINT32 InTx : 1;

                            /* Bits[62:62], Access Type=RW_V, default=None*/

                            /* Executing in HLE/+ TX */
    UINT32 Mispred : 1;

                            /* Bits[63:63], Access Type=RW_V, default=None*/

                            /* Misprediction bit */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_LBR_INFO_31_31_REGISTER;

/**
  Address Match Range Register - Physical Base Control Register for Hidden Lake
  " seq has 1 instances in addresses range 0xF00 to 0xF00"
**/
#define MSR_AMRR_BASE_0_0 0x00000F00

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 TmeEn : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enable TME masking */
    UINT32 Rsvd1 : 11;

                            /* Bits[11:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /*
                               The 4K-aligned platform physical base addresses
                               of the 3 AMRR registers for debugging. These
                               registers are programmed like MTRRs with base
                               and mask. Address matches of an AMRR can be
                               programmed to cause an "assist" or "abort".
                               Assists invoke the address match ucode handler
                               and populate the RR_MATCH_ADDR and
                               RR_MATCH_RESULT CREGs with useful information
                               about the access. Aborts force the memory type
                               to UC and redirect the access to the abort page
                               (causing it to get garbage data from the
                               uncore). See AMRR_MASK bits for more information
                               on how to program. See the PRF register
                               definition for how to resume AMRR assist
                               matches. restrictions : Set corresponding
                               AMRR_MASK appropriately for the address.
                            */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /*
                               The 4K-aligned platform physical base addresses
                               of the 3 AMRR registers for debugging. These
                               registers are programmed like MTRRs with base
                               and mask. Address matches of an AMRR can be
                               programmed to cause an "assist" or "abort".
                               Assists invoke the address match ucode handler
                               and populate the RR_MATCH_ADDR and
                               RR_MATCH_RESULT CREGs with useful information
                               about the access. Aborts force the memory type
                               to UC and redirect the access to the abort page
                               (causing it to get garbage data from the
                               uncore). See AMRR_MASK bits for more information
                               on how to program. See the PRF register
                               definition for how to resume AMRR assist
                               matches. restrictions : Set corresponding
                               AMRR_MASK appropriately for the address.
                            */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AMRR_BASE_0_0_REGISTER;

/**
  Address Match Range Register - Physical Mask Control Register for Hidden Lake
  " seq has 1 instances in addresses range 0xF01 to 0xF01"
**/
#define MSR_AMRR_MASK_0_0 0x00000F01

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 3;

                            /* Bits[2:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 IgnorePw : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting the AMRR on a stuffed load will
                               be ignored and will not cause assist nor abort.
                               Only the real PA (on redispatch) can cause an
                               assist if matches. restrictions :
                            */
    UINT32 PhysegOvrd : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting the AMRR with PhySegSupOvr is
                               allowed, and will not cause assist or abort
                               restrictions :
                            */
    UINT32 ForceWb : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting AMRR legally (see above bit),
                               will also force WB memtype. This is subject to
                               memtype priorities and can be overridden due to
                               higher priority mem types restrictions :
                            */
    UINT32 Rsvd6 : 2;

                            /* Bits[7:6], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Ifetch : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               If set, allow AMRR assist matches for both
                               I-side and D-side, else assist match D-side
                               only. Pagewalk accesses (stuffed loads and
                               loadpxelocks) always count as D-side. This bit
                               has no effect on abort matches. restrictions :
                               Set corresponding AMRR_BASE appropriately for
                               the address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Assist : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               If set, AMRR matches to the programmed address
                               will invoke ucode's address match handler. If
                               clear, AMRR matches will "abort" and redirect
                               the access to the abort page and a UC memory
                               type. restrictions : Set corresponding AMRR_BASE
                               appropriately for the address. Set VLD, ASSIST,
                               IFETCH, and MASK.
                            */
    UINT32 L : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Lock bit for the AMRR */
    UINT32 Rsvd11 : 1;

                            /* Bits[11:11], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mask0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /*
                               The mask value used in MTRR-like address
                               matching of platform. Minimum granularity for
                               matches is 4K (aligned), but the ucode handler
                               can use RR_MATCH_ADDR and the resume capability
                               (see the PRF register definition) to achieve
                               narrower checking. restrictions : Set
                               corresponding AMRR_BASE appropriately for the
                               address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Mask1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /*
                               The mask value used in MTRR-like address
                               matching of platform. Minimum granularity for
                               matches is 4K (aligned), but the ucode handler
                               can use RR_MATCH_ADDR and the resume capability
                               (see the PRF register definition) to achieve
                               narrower checking. restrictions : Set
                               corresponding AMRR_BASE appropriately for the
                               address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AMRR_MASK_0_0_REGISTER;

/**
  Address Match Range Register - Physical Base Control Register for Hidden Lake
  " seq has 2 instances in addresses range 0xF02 to 0xF04"
**/
#define MSR_AMRR_BASE_1_1 0x00000F02

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 TmeEn : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enable TME masking */
    UINT32 Rsvd1 : 11;

                            /* Bits[11:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /*
                               The 4K-aligned platform physical base addresses
                               of the 3 AMRR registers for debugging. These
                               registers are programmed like MTRRs with base
                               and mask. Address matches of an AMRR can be
                               programmed to cause an "assist" or "abort".
                               Assists invoke the address match ucode handler
                               and populate the RR_MATCH_ADDR and
                               RR_MATCH_RESULT CREGs with useful information
                               about the access. Aborts force the memory type
                               to UC and redirect the access to the abort page
                               (causing it to get garbage data from the
                               uncore). See AMRR_MASK bits for more information
                               on how to program. See the PRF register
                               definition for how to resume AMRR assist
                               matches. restrictions : Set corresponding
                               AMRR_MASK appropriately for the address.
                            */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /*
                               The 4K-aligned platform physical base addresses
                               of the 3 AMRR registers for debugging. These
                               registers are programmed like MTRRs with base
                               and mask. Address matches of an AMRR can be
                               programmed to cause an "assist" or "abort".
                               Assists invoke the address match ucode handler
                               and populate the RR_MATCH_ADDR and
                               RR_MATCH_RESULT CREGs with useful information
                               about the access. Aborts force the memory type
                               to UC and redirect the access to the abort page
                               (causing it to get garbage data from the
                               uncore). See AMRR_MASK bits for more information
                               on how to program. See the PRF register
                               definition for how to resume AMRR assist
                               matches. restrictions : Set corresponding
                               AMRR_MASK appropriately for the address.
                            */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AMRR_BASE_1_1_REGISTER;

/**
  Address Match Range Register - Physical Mask Control Register for Hidden Lake
  " seq has 2 instances in addresses range 0xF03 to 0xF05"
**/
#define MSR_AMRR_MASK_1_1 0x00000F03

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 3;

                            /* Bits[2:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 IgnorePw : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting the AMRR on a stuffed load will
                               be ignored and will not cause assist nor abort.
                               Only the real PA (on redispatch) can cause an
                               assist if matches. restrictions :
                            */
    UINT32 PhysegOvrd : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting the AMRR with PhySegSupOvr is
                               allowed, and will not cause assist or abort
                               restrictions :
                            */
    UINT32 ForceWb : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting AMRR legally (see above bit),
                               will also force WB memtype. This is subject to
                               memtype priorities and can be overridden due to
                               higher priority mem types restrictions :
                            */
    UINT32 Rsvd6 : 2;

                            /* Bits[7:6], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Ifetch : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               If set, allow AMRR assist matches for both
                               I-side and D-side, else assist match D-side
                               only. Pagewalk accesses (stuffed loads and
                               loadpxelocks) always count as D-side. This bit
                               has no effect on abort matches. restrictions :
                               Set corresponding AMRR_BASE appropriately for
                               the address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Assist : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               If set, AMRR matches to the programmed address
                               will invoke ucode's address match handler. If
                               clear, AMRR matches will "abort" and redirect
                               the access to the abort page and a UC memory
                               type. restrictions : Set corresponding AMRR_BASE
                               appropriately for the address. Set VLD, ASSIST,
                               IFETCH, and MASK.
                            */
    UINT32 L : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Lock bit for the AMRR */
    UINT32 Rsvd11 : 1;

                            /* Bits[11:11], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mask0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /*
                               The mask value used in MTRR-like address
                               matching of platform. Minimum granularity for
                               matches is 4K (aligned), but the ucode handler
                               can use RR_MATCH_ADDR and the resume capability
                               (see the PRF register definition) to achieve
                               narrower checking. restrictions : Set
                               corresponding AMRR_BASE appropriately for the
                               address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Mask1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /*
                               The mask value used in MTRR-like address
                               matching of platform. Minimum granularity for
                               matches is 4K (aligned), but the ucode handler
                               can use RR_MATCH_ADDR and the resume capability
                               (see the PRF register definition) to achieve
                               narrower checking. restrictions : Set
                               corresponding AMRR_BASE appropriately for the
                               address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AMRR_MASK_1_1_REGISTER;

/**
  Address Match Range Register - Physical Base Control Register for Hidden Lake
  " seq has 2 instances in addresses range 0xF02 to 0xF04"
**/
#define MSR_AMRR_BASE_2_2 0x00000F04

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 TmeEn : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enable TME masking */
    UINT32 Rsvd1 : 11;

                            /* Bits[11:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /*
                               The 4K-aligned platform physical base addresses
                               of the 3 AMRR registers for debugging. These
                               registers are programmed like MTRRs with base
                               and mask. Address matches of an AMRR can be
                               programmed to cause an "assist" or "abort".
                               Assists invoke the address match ucode handler
                               and populate the RR_MATCH_ADDR and
                               RR_MATCH_RESULT CREGs with useful information
                               about the access. Aborts force the memory type
                               to UC and redirect the access to the abort page
                               (causing it to get garbage data from the
                               uncore). See AMRR_MASK bits for more information
                               on how to program. See the PRF register
                               definition for how to resume AMRR assist
                               matches. restrictions : Set corresponding
                               AMRR_MASK appropriately for the address.
                            */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /*
                               The 4K-aligned platform physical base addresses
                               of the 3 AMRR registers for debugging. These
                               registers are programmed like MTRRs with base
                               and mask. Address matches of an AMRR can be
                               programmed to cause an "assist" or "abort".
                               Assists invoke the address match ucode handler
                               and populate the RR_MATCH_ADDR and
                               RR_MATCH_RESULT CREGs with useful information
                               about the access. Aborts force the memory type
                               to UC and redirect the access to the abort page
                               (causing it to get garbage data from the
                               uncore). See AMRR_MASK bits for more information
                               on how to program. See the PRF register
                               definition for how to resume AMRR assist
                               matches. restrictions : Set corresponding
                               AMRR_MASK appropriately for the address.
                            */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AMRR_BASE_2_2_REGISTER;

/**
  Address Match Range Register - Physical Mask Control Register for Hidden Lake
  " seq has 2 instances in addresses range 0xF03 to 0xF05"
**/
#define MSR_AMRR_MASK_2_2 0x00000F05

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 3;

                            /* Bits[2:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 IgnorePw : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting the AMRR on a stuffed load will
                               be ignored and will not cause assist nor abort.
                               Only the real PA (on redispatch) can cause an
                               assist if matches. restrictions :
                            */
    UINT32 PhysegOvrd : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting the AMRR with PhySegSupOvr is
                               allowed, and will not cause assist or abort
                               restrictions :
                            */
    UINT32 ForceWb : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting AMRR legally (see above bit),
                               will also force WB memtype. This is subject to
                               memtype priorities and can be overridden due to
                               higher priority mem types restrictions :
                            */
    UINT32 Rsvd6 : 2;

                            /* Bits[7:6], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Ifetch : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               If set, allow AMRR assist matches for both
                               I-side and D-side, else assist match D-side
                               only. Pagewalk accesses (stuffed loads and
                               loadpxelocks) always count as D-side. This bit
                               has no effect on abort matches. restrictions :
                               Set corresponding AMRR_BASE appropriately for
                               the address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Assist : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               If set, AMRR matches to the programmed address
                               will invoke ucode's address match handler. If
                               clear, AMRR matches will "abort" and redirect
                               the access to the abort page and a UC memory
                               type. restrictions : Set corresponding AMRR_BASE
                               appropriately for the address. Set VLD, ASSIST,
                               IFETCH, and MASK.
                            */
    UINT32 L : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Lock bit for the AMRR */
    UINT32 Rsvd11 : 1;

                            /* Bits[11:11], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mask0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /*
                               The mask value used in MTRR-like address
                               matching of platform. Minimum granularity for
                               matches is 4K (aligned), but the ucode handler
                               can use RR_MATCH_ADDR and the resume capability
                               (see the PRF register definition) to achieve
                               narrower checking. restrictions : Set
                               corresponding AMRR_BASE appropriately for the
                               address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Mask1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /*
                               The mask value used in MTRR-like address
                               matching of platform. Minimum granularity for
                               matches is 4K (aligned), but the ucode handler
                               can use RR_MATCH_ADDR and the resume capability
                               (see the PRF register definition) to achieve
                               narrower checking. restrictions : Set
                               corresponding AMRR_BASE appropriately for the
                               address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AMRR_MASK_2_2_REGISTER;

/**
  Address Match Range Register - Physical Base Control Register for Hidden Lake
  " seq has 2 instances in addresses range 0xF06 to 0xF08"
**/
#define MSR_AMRR_BASE_3_3 0x00000F06

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 TmeEn : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enable TME masking */
    UINT32 Rsvd1 : 11;

                            /* Bits[11:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /*
                               The 4K-aligned platform physical base addresses
                               of the 3 AMRR registers for debugging. These
                               registers are programmed like MTRRs with base
                               and mask. Address matches of an AMRR can be
                               programmed to cause an "assist" or "abort".
                               Assists invoke the address match ucode handler
                               and populate the RR_MATCH_ADDR and
                               RR_MATCH_RESULT CREGs with useful information
                               about the access. Aborts force the memory type
                               to UC and redirect the access to the abort page
                               (causing it to get garbage data from the
                               uncore). See AMRR_MASK bits for more information
                               on how to program. See the PRF register
                               definition for how to resume AMRR assist
                               matches. restrictions : Set corresponding
                               AMRR_MASK appropriately for the address.
                            */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /*
                               The 4K-aligned platform physical base addresses
                               of the 3 AMRR registers for debugging. These
                               registers are programmed like MTRRs with base
                               and mask. Address matches of an AMRR can be
                               programmed to cause an "assist" or "abort".
                               Assists invoke the address match ucode handler
                               and populate the RR_MATCH_ADDR and
                               RR_MATCH_RESULT CREGs with useful information
                               about the access. Aborts force the memory type
                               to UC and redirect the access to the abort page
                               (causing it to get garbage data from the
                               uncore). See AMRR_MASK bits for more information
                               on how to program. See the PRF register
                               definition for how to resume AMRR assist
                               matches. restrictions : Set corresponding
                               AMRR_MASK appropriately for the address.
                            */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AMRR_BASE_3_3_REGISTER;

/**
  Address Match Range Register - Physical Mask Control Register for Hidden Lake
  " seq has 2 instances in addresses range 0xF07 to 0xF09"
**/
#define MSR_AMRR_MASK_3_3 0x00000F07

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 3;

                            /* Bits[2:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 IgnorePw : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting the AMRR on a stuffed load will
                               be ignored and will not cause assist nor abort.
                               Only the real PA (on redispatch) can cause an
                               assist if matches. restrictions :
                            */
    UINT32 PhysegOvrd : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting the AMRR with PhySegSupOvr is
                               allowed, and will not cause assist or abort
                               restrictions :
                            */
    UINT32 ForceWb : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting AMRR legally (see above bit),
                               will also force WB memtype. This is subject to
                               memtype priorities and can be overridden due to
                               higher priority mem types restrictions :
                            */
    UINT32 Rsvd6 : 2;

                            /* Bits[7:6], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Ifetch : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               If set, allow AMRR assist matches for both
                               I-side and D-side, else assist match D-side
                               only. Pagewalk accesses (stuffed loads and
                               loadpxelocks) always count as D-side. This bit
                               has no effect on abort matches. restrictions :
                               Set corresponding AMRR_BASE appropriately for
                               the address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Assist : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               If set, AMRR matches to the programmed address
                               will invoke ucode's address match handler. If
                               clear, AMRR matches will "abort" and redirect
                               the access to the abort page and a UC memory
                               type. restrictions : Set corresponding AMRR_BASE
                               appropriately for the address. Set VLD, ASSIST,
                               IFETCH, and MASK.
                            */
    UINT32 L : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Lock bit for the AMRR */
    UINT32 Rsvd11 : 1;

                            /* Bits[11:11], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mask0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /*
                               The mask value used in MTRR-like address
                               matching of platform. Minimum granularity for
                               matches is 4K (aligned), but the ucode handler
                               can use RR_MATCH_ADDR and the resume capability
                               (see the PRF register definition) to achieve
                               narrower checking. restrictions : Set
                               corresponding AMRR_BASE appropriately for the
                               address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Mask1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /*
                               The mask value used in MTRR-like address
                               matching of platform. Minimum granularity for
                               matches is 4K (aligned), but the ucode handler
                               can use RR_MATCH_ADDR and the resume capability
                               (see the PRF register definition) to achieve
                               narrower checking. restrictions : Set
                               corresponding AMRR_BASE appropriately for the
                               address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AMRR_MASK_3_3_REGISTER;

/**
  Address Match Range Register - Physical Base Control Register for Hidden Lake
  " seq has 2 instances in addresses range 0xF06 to 0xF08"
**/
#define MSR_AMRR_BASE_4_4 0x00000F08

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 TmeEn : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /* Enable TME masking */
    UINT32 Rsvd1 : 11;

                            /* Bits[11:1], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Base0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /*
                               The 4K-aligned platform physical base addresses
                               of the 3 AMRR registers for debugging. These
                               registers are programmed like MTRRs with base
                               and mask. Address matches of an AMRR can be
                               programmed to cause an "assist" or "abort".
                               Assists invoke the address match ucode handler
                               and populate the RR_MATCH_ADDR and
                               RR_MATCH_RESULT CREGs with useful information
                               about the access. Aborts force the memory type
                               to UC and redirect the access to the abort page
                               (causing it to get garbage data from the
                               uncore). See AMRR_MASK bits for more information
                               on how to program. See the PRF register
                               definition for how to resume AMRR assist
                               matches. restrictions : Set corresponding
                               AMRR_MASK appropriately for the address.
                            */
    UINT32 Base1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /*
                               The 4K-aligned platform physical base addresses
                               of the 3 AMRR registers for debugging. These
                               registers are programmed like MTRRs with base
                               and mask. Address matches of an AMRR can be
                               programmed to cause an "assist" or "abort".
                               Assists invoke the address match ucode handler
                               and populate the RR_MATCH_ADDR and
                               RR_MATCH_RESULT CREGs with useful information
                               about the access. Aborts force the memory type
                               to UC and redirect the access to the abort page
                               (causing it to get garbage data from the
                               uncore). See AMRR_MASK bits for more information
                               on how to program. See the PRF register
                               definition for how to resume AMRR assist
                               matches. restrictions : Set corresponding
                               AMRR_MASK appropriately for the address.
                            */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AMRR_BASE_4_4_REGISTER;

/**
  Address Match Range Register - Physical Mask Control Register for Hidden Lake
  " seq has 2 instances in addresses range 0xF07 to 0xF09"
**/
#define MSR_AMRR_MASK_4_4 0x00000F09

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 Rsvd0 : 3;

                            /* Bits[2:0], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 IgnorePw : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting the AMRR on a stuffed load will
                               be ignored and will not cause assist nor abort.
                               Only the real PA (on redispatch) can cause an
                               assist if matches. restrictions :
                            */
    UINT32 PhysegOvrd : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting the AMRR with PhySegSupOvr is
                               allowed, and will not cause assist or abort
                               restrictions :
                            */
    UINT32 ForceWb : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               If set, hitting AMRR legally (see above bit),
                               will also force WB memtype. This is subject to
                               memtype priorities and can be overridden due to
                               higher priority mem types restrictions :
                            */
    UINT32 Rsvd6 : 2;

                            /* Bits[7:6], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Ifetch : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               If set, allow AMRR assist matches for both
                               I-side and D-side, else assist match D-side
                               only. Pagewalk accesses (stuffed loads and
                               loadpxelocks) always count as D-side. This bit
                               has no effect on abort matches. restrictions :
                               Set corresponding AMRR_BASE appropriately for
                               the address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Assist : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               If set, AMRR matches to the programmed address
                               will invoke ucode's address match handler. If
                               clear, AMRR matches will "abort" and redirect
                               the access to the abort page and a UC memory
                               type. restrictions : Set corresponding AMRR_BASE
                               appropriately for the address. Set VLD, ASSIST,
                               IFETCH, and MASK.
                            */
    UINT32 L : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /* Lock bit for the AMRR */
    UINT32 Rsvd11 : 1;

                            /* Bits[11:11], Access Type=RO, default=None*/

                            /* Reserved */
    UINT32 Mask0 : 20;

                            /* Bits[31:12], Access Type=RW, default=0x00000000*/

                            /*
                               The mask value used in MTRR-like address
                               matching of platform. Minimum granularity for
                               matches is 4K (aligned), but the ucode handler
                               can use RR_MATCH_ADDR and the resume capability
                               (see the PRF register definition) to achieve
                               narrower checking. restrictions : Set
                               corresponding AMRR_BASE appropriately for the
                               address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Mask1 : 20;

                            /* Bits[51:32], Access Type=RW, default=0x00000000*/

                            /*
                               The mask value used in MTRR-like address
                               matching of platform. Minimum granularity for
                               matches is 4K (aligned), but the ucode handler
                               can use RR_MATCH_ADDR and the resume capability
                               (see the PRF register definition) to achieve
                               narrower checking. restrictions : Set
                               corresponding AMRR_BASE appropriately for the
                               address. Set VLD, ASSIST, IFETCH, and MASK.
                            */
    UINT32 Rsvd52 : 12;

                            /* Bits[63:52], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;

  UINT32 Uint32;
  UINT64 Uint64;

} MSR_AMRR_MASK_4_4_REGISTER;
/**
  Spare core MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. CNL issue 1351559
  " seq has 3 instances in addresses range 0x1001 to 0x1003"
**/
#define MSR_CORE_SPECIFIC_13_BIT_SPARE_0_0 0x00001001
/**
  Spare core MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. CNL issue 1351559
  " seq has 3 instances in addresses range 0x1001 to 0x1003"
**/
#define MSR_CORE_SPECIFIC_13_BIT_SPARE_1_1 0x00001002
/**
  Spare core MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. CNL issue 1351559
  " seq has 3 instances in addresses range 0x1001 to 0x1003"
**/
#define MSR_CORE_SPECIFIC_13_BIT_SPARE_2_2 0x00001003
/**
  Spare Thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. CNL issue 1351559
  " seq has 3 instances in addresses range 0x1004 to 0x1006"
**/
#define MSR_THREAD_SPECIFIC_13_BIT_SPARE_0_0 0x00001004
/**
  Spare Thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. CNL issue 1351559
  " seq has 3 instances in addresses range 0x1004 to 0x1006"
**/
#define MSR_THREAD_SPECIFIC_13_BIT_SPARE_1_1 0x00001005
/**
  Spare Thread MSRs supported by the cregpla. Ucode (instead of the PLA) will signal #GP on access. CNL issue 1351559
  " seq has 3 instances in addresses range 0x1004 to 0x1006"
**/
#define MSR_THREAD_SPECIFIC_13_BIT_SPARE_2_2 0x00001006
#endif /* _COMMONMSR_h */