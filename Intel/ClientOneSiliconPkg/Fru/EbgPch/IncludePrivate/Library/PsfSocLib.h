/** @file
  This file contains internal header for PSF lib usage

@copyright
  INTEL CONFIDENTIAL
  Copyright 2020 Intel Corporation.

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

#ifndef _PSF_SOC_LIB_H_
#define _PSF_SOC_LIB_H_

#include <Register/PchPcrRegs.h>

typedef struct {
  PCH_SBI_PID  PsfPid;
  UINT32       RegisterAddress;
  UINT8        Fro;
} PSF_PORT_RELAXED_ORDERING_CONFIG_REG;

/**
  Get list of supported PSF segments.

  @param[out] PsfTable        Array of supported PSF segments
  @param[out] PsfTableLength  Length of PsfTable
**/
VOID
PsfSegments (
  OUT PSF_SEGMENT  **PsfTable,
  OUT UINT32       *PsfTableLength
  );

/**
  Return PSF_PORT for SerialIO I2C device

  @param[in] I2cNum  Serial IO I2C device (I2C0, I2C1, ....)

  @retval  PsfPort   PSF PORT structure for SerialIO I2C device
**/
PSF_PORT
PsfSerialIoI2cPort (
  IN UINT32  I2cNum
  );

/**
  Return PSF_PORT for SerialIO SPI device

  @param[in] SpiNum  Serial IO SPI device (SPI0, SPI1, ....)

  @retval  PsfPort   PSF PORT structure for SerialIO SPI device
**/
PSF_PORT
PsfSerialIoSpiPort (
  IN UINT32  SpiNum
  );

/**
  Return PSF_PORT for SerialIO UART device

  @param[in] UartNum  Serial IO UART device (UART0, UART1, ....)

  @retval  PsfPort    PSF PORT structure for SerialIO UART device
**/
PSF_PORT
PsfSerialIoUartPort (
  IN UINT32  UartNum
  );

/**
  Return PSF_PORT for TraceHub device

  @retval    PsfPort         PSF PORT structure for TraceHub device
**/
PSF_PORT
PsfTraceHubPort (
  VOID
  );

/**
  This procedure will return PSF_PORT for TraceHub ACPI device

  @retval    PsfPort         PSF PORT structure for TraceHub ACPI device
**/
PSF_PORT
PsfTraceHubAcpiDevPort (
  VOID
  );

/**
  Return PSF_PORT for HECI device

  @param[in] HeciDevice      HECIx Device (HECI1-4)

  @retval    PsfPort         PSF PORT structure for HECI device
**/
PSF_PORT
PsfHeciPort (
  IN UINT8      HeciDevice
  );

/**
  This procedure will return PSF_PORT for SOL device

  @retval    PsfPort         PSF PORT structure for SOL device
**/
PSF_PORT
PsfSolPort (
  VOID
  );


/**
  Disable IDER device at PSF level
**/
VOID
PsfDisableIderDevice (
  VOID
  );

/**
  Disable HDAudio device at PSF level
**/
VOID
PsfDisableHdaDevice (
  VOID
  );

/**
  Disable Dsp bar at PSF level
**/
VOID
PsfDisableDspBar (
  VOID
  );

/**
  Disable xDCI device at PSF level
**/
VOID
PsfDisableXdciDevice (
  VOID
  );

/**
  Disable xHCI device at PSF level
**/
VOID
PsfDisableXhciDevice (
  VOID
  );

/**
  Disable xHCI VTIO Phantom device at PSF level
**/
VOID
PsfDisableXhciVtioDevice (
  VOID
  );

/**
  Return PSF_PORT for PMC device

  @retval    PsfPort         PSF PORT structure for PMC device
**/
PSF_PORT
PsfPmcPort (
  VOID
  );

/**
  Disable GbE device at PSF level
**/
VOID
PsfDisableGbeDevice (
  VOID
  );

/**
  Disable SMBUS device at PSF level
**/
VOID
PsfDisableSmbusDevice (
  VOID
  );

/**
  Return second level PSF_PORT to which PCIE Root Port device is connected (directly)

  @param[in] RpIndex        PCIe Root Port Index (0 based)

  @retval    PsfPort        PSF PORT structure for PCIe
**/
PSF_PORT
PsfPcieSecondLevelPort (
  IN UINT32  RpIndex
  );

/**
  Return PSF_PORT at root PSF level to which PCIe Root Port device is connected

  @param[in] RpIndex        PCIe Root Port Index (0 based)

  @retval    PsfPort        PSF PORT structure for PCIe

**/
PSF_PORT
PsfRootPciePort (
  IN UINT32  RpIndex
  );

/**
  Return RS3 PSF_PORT at root PSF level to which PCIe Root Port device is connected

  @param[in] RpIndex        PCIe Root Port Index (0 based)

  @retval    PsfPort        PSF PORT structure for PCIe
**/
PSF_PORT
PsfRootRs3PciePort (
  IN UINT32  RpIndex
  );

/**
  Check if PCIe Root Port is enabled

  @param[in] RpIndex        PCIe Root Port Index (0 based)

  @retval TRUE              PCIe Root Port is enabled
          FALSE             PCIe Root Port is disabled
**/
BOOLEAN
PsfIsPcieRootPortEnabled (
  IN UINT32  RpIndex
  );

//
// Type of enpoint connected to PSF port.
// PsfNullPort is used for ports which do not exist
//
typedef enum {
  PsfNullPort,
  PsfToPsfPort,
  PsfPcieCtrlPort
} PSF_TOPO_PORT_TYPE;

//
// Structure for storing information on location in PSF topology
// Every PSF node is identified by PsfID and PsfPortId
//
typedef struct {
  UINT8         PsfId;
  UINT8         PortId;
} PSF_TOPO_PORT;

#define PSF_TOPO_PORT_NULL ((PSF_TOPO_PORT){0, 0})
#define PSF_IS_TOPO_PORT_NULL(PsfTopoPort) (((PsfTopoPort).PsfId == 0) && ((PsfTopoPort).PortId == 0))

//
// This is optional field containing PSF port specific data
//
typedef union {
  UINT32  PcieCtrlIndex;
} PSF_TOPO_PORT_DATA;

//
// Structure representing PSF port in PSF topology
// If port is of PsfToPsfPort type Child will point to the first
// port of sub PSF segment.
//
typedef struct PSF_TOPOLOGY {
  PSF_TOPO_PORT              PsfPort;
  PSF_TOPO_PORT_TYPE         PortType;
  CONST struct PSF_TOPOLOGY  *Child;
  PSF_TOPO_PORT_DATA         PortData;
} PSF_TOPOLOGY;

//
// Tag for identifying last element of PSF_TOPOLOGY type array
//
#define PSF_TOPOLOGY_END   {{0, 0}, PsfNullPort, NULL}

/**
  Get PSF Pcie Tree topology

  @param[in] PsfTopology          PSF Port from PSF PCIe tree topology

  @retval PsfTopology             PSF PCIe tree topology
**/
CONST PSF_TOPOLOGY*
PsfGetRootPciePsfTopology (
  VOID
  );

//
// Structure for storing data on PCIe controller to PSF assignment and GrantCount register offsets
//
typedef struct {
  PCH_SBI_PID  PsfPid;
  UINT16       DevGntCnt0Base;
  UINT16       TargetGntCntPg1Tgt0Base;
} PSF_GRANT_COUNT_REG;

/**
  Grant count regs data for PSF that is directly connected to PCIe Root Ports

  @param[in]  Controller     PCIe Root Port Controller index (0 based)
  @param[out] GrantCountReg  Structure with PSF Grant Count register data
**/
VOID
PsfPcieGrantCountBaseReg (
  IN  UINT8                Controller,
  OUT PSF_GRANT_COUNT_REG  *GrantCountReg
  );

/**
  Get Grant Count number (Device Grant Count and Target Grant Count)
  for PSF that is directly connected to PCIe Root Ports

  @param[in]  Controller    PCIe Root Port Controller index
  @param[in]  Channel       PCIe Root Port Channel index
  @param[out] DgcrNo        Device Grant Count number
  @param[out] PgTgtNo       Target Grant Count number
**/
VOID
PsfPcieGrantCountNumber (
  IN  UINT8 Controller,
  IN  UINT8 Channel,
  OUT UINT8 *DgcrNo,
  OUT UINT8 *PgTgtNo
  );

/**
  Grant count regs data for a given PSF-to-PSF port.

  @param[in] PsfTopoPort         PSF-to-PSF port

  @param[out] GrantCountReg      Structure with PSF Grant Count register data
**/
VOID
PsfSegmentGrantCountBaseReg (
  IN PSF_TOPO_PORT         PsfTopoPort,
  OUT PSF_GRANT_COUNT_REG  *GrantCountReg
  );

/**
  Grant Count number (Device Grant Count and Target Grant Count) for a given PSF-to-PSF port.

  @param[in] PsfTopoPort         PSF-to-PSF port
  @param[out] DgcrNo             Device Grant Count number
  @param[out] PgTgtNo            Target Grant Count number
**/
VOID
PsfSegmentGrantCountNumber (
  IN PSF_TOPO_PORT PsfTopoPort,
  OUT UINT8        *DgcrNo,
  OUT UINT8        *PgTgtNo
  );

//
// Do not override PSF Grant Count value and leave HW default setting
//
#define DEFAULT_PCIE_GRANT_COUNT 0xFF

/**
  Get EOI register data for given PSF ID

  @param[in]  PsfId           PSF ID (1 - PSF1, 2 - PSF2, ...)
  @param[out] EoiTargetBase   EOI Target register
  @param[out] EoiControlBase  EOI Control register

  @retval MaxTargets          Number of supported targets

**/
UINT8
PsfEoiRegData (
  UINT32        PsfId,
  UINT16        *EoiTargetBase,
  UINT16        *EoiControlBase
  );

/**
  Get MCTP register data for given PSF ID

  @param[in]  PsfId            PSF ID (1 - PSF1, 2 - PSF2, ...)
  @param[out] MctpTargetBase   MCTP Target register
  @param[out] MctpControlBase  MCTP Control register

  @retval MaxTargets           Number of supported targets

**/
UINT8
PsfMctpRegData (
  UINT32        PsfId,
  UINT16        *MctpTargetBase,
  UINT16        *MctpControlBase
  );

/**
  P2SB PSF port Destination ID (psf_id:port_group_id:port_id:channel_id)

  @retval P2SB Destination ID
**/
PSF_PORT_DEST_ID
PsfP2sbDestinationId (
  VOID
  );

/**
  DMI PSF port Destination ID (psf_id:port_group_id:port_id:channel_id)

  @retval DMI Destination ID
**/
PSF_PORT_DEST_ID
PsfDmiDestinationId (
  VOID
  );

/**
  Check if MCTP is supported

  @retval TRUE              MCTP is supported
          FALSE             MCTP is not supported
**/
BOOLEAN
PsfIsMctpSupported (
  VOID
  );

/**
  Return the PSF (Root level) Function Config PSF_PORT for PCIe Root Port

  @param[in] RpIndex        PCIe Root Port Index (0 based)

  @retval    PsfPort        PSF PORT structure for PCIe Function Config
**/
PSF_PORT
PsfRootPcieFunctionConfigPort (
  IN UINT32  RpIndex
  );

/**
  Return the PSF (Root level) RS3 Function Config PSF_PORT for PCIe Root Port

  @param[in] RpIndex        PCIe Root Port Index (0 based)

  @retval    PsfPort        PSF PORT structure for PCIe Function Config
**/
PSF_PORT
PsfRootRs3PcieFunctionConfigPort (
  IN UINT32  RpIndex
  );

/**
  Return the PSF Function Config Second Level PSF_PORT for PCIe Root Port

  @param[in] RpIndex        PCIe Root Port Index (0 based)

  @retval    PsfPort        PSF PORT structure for PCIe Function Config
**/
PSF_PORT
PsfPcieFunctionConfigSecondLevelPort (
  IN UINT32  RpIndex
  );

/**
  This function returns Psf Port Relaxed Ordering Configs

  @param[out] PsfPortRelaxedOrderingConfigRegs                          PCH Series specific table
  @param[out] PsfPortRelaxedOrderingConfigRegsTableSize                 PCH Series specific table size
  @param[out] PsfPortRelaxedOrderingConfigRegsPchTypeSpecific           PCH type specific table
  @param[out] PsfPortRelaxedOrderingConfigRegsPchTypeSpecificTableSize  PCH type specific table size
**/
VOID
GetPsfPortRelaxedOrderingTables (
  PSF_PORT_RELAXED_ORDERING_CONFIG_REG** PsfPortRelaxedOrderingConfigRegs,
  UINT32*                                PsfPortRelaxedOrderingConfigRegsTableSize,
  PSF_PORT_RELAXED_ORDERING_CONFIG_REG** PsfPortRelaxedOrderingConfigRegsPchTypeSpecific,
  UINT32*                                PsfPortRelaxedOrderingConfigRegsPchTypeSpecificTableSize
  );

#endif