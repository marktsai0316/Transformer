//
// Automatically generated by GenNvs ver 2.4.5
// Please DO NOT modify !!!
//

/**@file

@copyright
  INTEL CONFIDENTIAL
  Copyright 2013 - 2018 Intel Corporation.

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

  //
  // Define PCH NVS Area operatino region.
  //
#ifndef _PCH_NVS_AREA_DEF_H_
#define _PCH_NVS_AREA_DEF_H_

#pragma pack (push,1)
typedef struct {
  UINT16   PchSeries;                               ///< Offset 0       PCH Series
  UINT16   PchGeneration;                           ///< Offset 2       PCH Generation
  UINT16   PchStepping;                             ///< Offset 4       PCH Stepping
  UINT32   RpAddress[24];                           ///< Offset 6       Root Port address 1
                                                    ///< Offset 10      Root Port address 2
                                                    ///< Offset 14      Root Port address 3
                                                    ///< Offset 18      Root Port address 4
                                                    ///< Offset 22      Root Port address 5
                                                    ///< Offset 26      Root Port address 6
                                                    ///< Offset 30      Root Port address 7
                                                    ///< Offset 34      Root Port address 8
                                                    ///< Offset 38      Root Port address 9
                                                    ///< Offset 42      Root Port address 10
                                                    ///< Offset 46      Root Port address 11
                                                    ///< Offset 50      Root Port address 12
                                                    ///< Offset 54      Root Port address 13
                                                    ///< Offset 58      Root Port address 14
                                                    ///< Offset 62      Root Port address 15
                                                    ///< Offset 66      Root Port address 16
                                                    ///< Offset 70      Root Port address 17
                                                    ///< Offset 74      Root Port address 18
                                                    ///< Offset 78      Root Port address 19
                                                    ///< Offset 82      Root Port address 20
                                                    ///< Offset 86      Root Port address 21
                                                    ///< Offset 90      Root Port address 22
                                                    ///< Offset 94      Root Port address 23
                                                    ///< Offset 98      Root Port address 24
  UINT64   NHLA;                                    ///< Offset 102     HD-Audio NHLT ACPI address
  UINT32   NHLL;                                    ///< Offset 110     HD-Audio NHLT ACPI length
  UINT32   ADFM;                                    ///< Offset 114     HD-Audio DSP Feature Mask
  UINT8    SWQ0;                                    ///< Offset 118     HD-Audio SoundWire Link #1 quirk mask
  UINT8    SWQ1;                                    ///< Offset 119     HD-Audio SoundWire Link #2 quirk mask
  UINT8    SWQ2;                                    ///< Offset 120     HD-Audio SoundWire Link #3 quirk mask
  UINT8    SWQ3;                                    ///< Offset 121     HD-Audio SoundWire Link #4 quirk mask
  UINT8    ACS0;                                    ///< Offset 122     HD-Audio SoundWire Link #1 Autonomous Clock Stop
  UINT8    ACS1;                                    ///< Offset 123     HD-Audio SoundWire Link #2 Autonomous Clock Stop
  UINT8    ACS2;                                    ///< Offset 124     HD-Audio SoundWire Link #3 Autonomous Clock Stop
  UINT8    ACS3;                                    ///< Offset 125     HD-Audio SoundWire Link #4 Autonomous Clock Stop
  UINT8    DAI0;                                    ///< Offset 126     HD-Audio SoundWire Link #1 Data On Active Interval Select
  UINT8    DAI1;                                    ///< Offset 127     HD-Audio SoundWire Link #2 Data On Active Interval Select
  UINT8    DAI2;                                    ///< Offset 128     HD-Audio SoundWire Link #3 Data On Active Interval Select
  UINT8    DAI3;                                    ///< Offset 129     HD-Audio SoundWire Link #4 Data On Active Interval Select
  UINT8    DOD0;                                    ///< Offset 130     HD-Audio SoundWire Link #1 Data On Delay Select
  UINT8    DOD1;                                    ///< Offset 131     HD-Audio SoundWire Link #2 Data On Delay Select
  UINT8    DOD2;                                    ///< Offset 132     HD-Audio SoundWire Link #3 Data On Delay Select
  UINT8    DOD3;                                    ///< Offset 133     HD-Audio SoundWire Link #4 Data On Delay Select
  UINT8    XTAL;                                    ///< Offset 134     XTAL frequency: 0: 24MHz; 1: 38.4MHz; 2: Unsupported
  UINT32   DSPM;                                    ///< Offset 135     HD-Audio DSP Stolen Memory Base Address (@todo: Remove after CNL-LP B0)
  UINT32   SBRG;                                    ///< Offset 139     SBREG_BAR
  UINT8    GEI0;                                    ///< Offset 143     GPIO GroupIndex mapped to GPE_DW0
  UINT8    GEI1;                                    ///< Offset 144     GPIO GroupIndex mapped to GPE_DW1
  UINT8    GEI2;                                    ///< Offset 145     GPIO GroupIndex mapped to GPE_DW2
  UINT8    GED0;                                    ///< Offset 146     GPIO DW part of group mapped to GPE_DW0
  UINT8    GED1;                                    ///< Offset 147     GPIO DW part of group mapped to GPE_DW1
  UINT8    GED2;                                    ///< Offset 148     GPIO DW part of group mapped to GPE_DW2
  UINT16   PcieLtrMaxSnoopLatency[24];              ///< Offset 149     PCIE LTR max snoop Latency 1
                                                    ///< Offset 151     PCIE LTR max snoop Latency 2
                                                    ///< Offset 153     PCIE LTR max snoop Latency 3
                                                    ///< Offset 155     PCIE LTR max snoop Latency 4
                                                    ///< Offset 157     PCIE LTR max snoop Latency 5
                                                    ///< Offset 159     PCIE LTR max snoop Latency 6
                                                    ///< Offset 161     PCIE LTR max snoop Latency 7
                                                    ///< Offset 163     PCIE LTR max snoop Latency 8
                                                    ///< Offset 165     PCIE LTR max snoop Latency 9
                                                    ///< Offset 167     PCIE LTR max snoop Latency 10
                                                    ///< Offset 169     PCIE LTR max snoop Latency 11
                                                    ///< Offset 171     PCIE LTR max snoop Latency 12
                                                    ///< Offset 173     PCIE LTR max snoop Latency 13
                                                    ///< Offset 175     PCIE LTR max snoop Latency 14
                                                    ///< Offset 177     PCIE LTR max snoop Latency 15
                                                    ///< Offset 179     PCIE LTR max snoop Latency 16
                                                    ///< Offset 181     PCIE LTR max snoop Latency 17
                                                    ///< Offset 183     PCIE LTR max snoop Latency 18
                                                    ///< Offset 185     PCIE LTR max snoop Latency 19
                                                    ///< Offset 187     PCIE LTR max snoop Latency 20
                                                    ///< Offset 189     PCIE LTR max snoop Latency 21
                                                    ///< Offset 191     PCIE LTR max snoop Latency 22
                                                    ///< Offset 193     PCIE LTR max snoop Latency 23
                                                    ///< Offset 195     PCIE LTR max snoop Latency 24
  UINT16   PcieLtrMaxNoSnoopLatency[24];            ///< Offset 197     PCIE LTR max no snoop Latency 1
                                                    ///< Offset 199     PCIE LTR max no snoop Latency 2
                                                    ///< Offset 201     PCIE LTR max no snoop Latency 3
                                                    ///< Offset 203     PCIE LTR max no snoop Latency 4
                                                    ///< Offset 205     PCIE LTR max no snoop Latency 5
                                                    ///< Offset 207     PCIE LTR max no snoop Latency 6
                                                    ///< Offset 209     PCIE LTR max no snoop Latency 7
                                                    ///< Offset 211     PCIE LTR max no snoop Latency 8
                                                    ///< Offset 213     PCIE LTR max no snoop Latency 9
                                                    ///< Offset 215     PCIE LTR max no snoop Latency 10
                                                    ///< Offset 217     PCIE LTR max no snoop Latency 11
                                                    ///< Offset 219     PCIE LTR max no snoop Latency 12
                                                    ///< Offset 221     PCIE LTR max no snoop Latency 13
                                                    ///< Offset 223     PCIE LTR max no snoop Latency 14
                                                    ///< Offset 225     PCIE LTR max no snoop Latency 15
                                                    ///< Offset 227     PCIE LTR max no snoop Latency 16
                                                    ///< Offset 229     PCIE LTR max no snoop Latency 17
                                                    ///< Offset 231     PCIE LTR max no snoop Latency 18
                                                    ///< Offset 233     PCIE LTR max no snoop Latency 19
                                                    ///< Offset 235     PCIE LTR max no snoop Latency 20
                                                    ///< Offset 237     PCIE LTR max no snoop Latency 21
                                                    ///< Offset 239     PCIE LTR max no snoop Latency 22
                                                    ///< Offset 241     PCIE LTR max no snoop Latency 23
                                                    ///< Offset 243     PCIE LTR max no snoop Latency 24
  UINT8    XHPC;                                    ///< Offset 245     Number of HighSpeed ports implemented in XHCI controller
  UINT8    XRPC;                                    ///< Offset 246     Number of USBR ports implemented in XHCI controller
  UINT8    XSPC;                                    ///< Offset 247     Number of SuperSpeed ports implemented in XHCI controller
  UINT8    XSPA;                                    ///< Offset 248     Address of 1st SuperSpeed port
  UINT32   HPTB;                                    ///< Offset 249     HPET base address
  UINT8    HPTE;                                    ///< Offset 253     HPET enable
  //SerialIo block
  UINT8    SM0[3];                                  ///< Offset 254     SerialIo SPI Controller 0 Mode
                                                    ///< Offset 255     SerialIo SPI Controller 1 Mode
                                                    ///< Offset 256     SerialIo SPI Controller 2 Mode
  UINT64   SC0[3];                                  ///< Offset 257     SerialIo SPI Controller 0 Pci Config
                                                    ///< Offset 265     SerialIo SPI Controller 1 Pci Config
                                                    ///< Offset 273     SerialIo SPI Controller 2 Pci Config
  UINT8    IM0[6];                                  ///< Offset 281     SerialIo I2C Controller 0 Mode
                                                    ///< Offset 282     SerialIo I2C Controller 1 Mode
                                                    ///< Offset 283     SerialIo I2C Controller 2 Mode
                                                    ///< Offset 284     SerialIo I2C Controller 3 Mode
                                                    ///< Offset 285     SerialIo I2C Controller 4 Mode
                                                    ///< Offset 286     SerialIo I2C Controller 5 Mode
  UINT64   IC0[6];                                  ///< Offset 287     SerialIo I2C Controller 0 Pci Config
                                                    ///< Offset 295     SerialIo I2C Controller 1 Pci Config
                                                    ///< Offset 303     SerialIo I2C Controller 2 Pci Config
                                                    ///< Offset 311     SerialIo I2C Controller 3 Pci Config
                                                    ///< Offset 319     SerialIo I2C Controller 4 Pci Config
                                                    ///< Offset 327     SerialIo I2C Controller 5 Pci Config
  UINT8    UM0[3];                                  ///< Offset 335     SerialIo UART Controller 0 Mode
                                                    ///< Offset 336     SerialIo UART Controller 1 Mode
                                                    ///< Offset 337     SerialIo UART Controller 2 Mode
  UINT64   UC0[3];                                  ///< Offset 338     SerialIo UART Controller 0 Pci Config
                                                    ///< Offset 346     SerialIo UART Controller 1 Pci Config
                                                    ///< Offset 354     SerialIo UART Controller 2 Pci Config
  UINT8    UD0[3];                                  ///< Offset 362     SerialIo UART Controller 0 DmaEnable
                                                    ///< Offset 363     SerialIo UART Controller 1 DmaEnable
                                                    ///< Offset 364     SerialIo UART Controller 2 DmaEnable
  UINT8    UP0[3];                                  ///< Offset 365     SerialIo UART Controller 0 Power Gating
                                                    ///< Offset 366     SerialIo UART Controller 1 Power Gating
                                                    ///< Offset 367     SerialIo UART Controller 2 Power Gating
  UINT8    UI0[3];                                  ///< Offset 368     SerialIo UART Controller 0 Irq
                                                    ///< Offset 369     SerialIo UART Controller 1 Irq
                                                    ///< Offset 370     SerialIo UART Controller 2 Irq
  //end of SerialIo block
  UINT8    SGIR;                                    ///< Offset 371     GPIO IRQ
  UINT8    GPHD;                                    ///< Offset 372     Hide GPIO ACPI device
  UINT8    RstPcieStorageInterfaceType[3];          ///< Offset 373     RST PCIe Storage Cycle Router#1 Interface Type
                                                    ///< Offset 374     RST PCIe Storage Cycle Router#2 Interface Type
                                                    ///< Offset 375     RST PCIe Storage Cycle Router#3 Interface Type
  UINT8    RstPcieStoragePmCapPtr[3];               ///< Offset 376     RST PCIe Storage Cycle Router#1 Power Management Capability Pointer
                                                    ///< Offset 377     RST PCIe Storage Cycle Router#2 Power Management Capability Pointer
                                                    ///< Offset 378     RST PCIe Storage Cycle Router#3 Power Management Capability Pointer
  UINT8    RstPcieStoragePcieCapPtr[3];             ///< Offset 379     RST PCIe Storage Cycle Router#1 PCIe Capabilities Pointer
                                                    ///< Offset 380     RST PCIe Storage Cycle Router#2 PCIe Capabilities Pointer
                                                    ///< Offset 381     RST PCIe Storage Cycle Router#3 PCIe Capabilities Pointer
  UINT16   RstPcieStorageL1ssCapPtr[3];             ///< Offset 382     RST PCIe Storage Cycle Router#1 L1SS Capability Pointer
                                                    ///< Offset 384     RST PCIe Storage Cycle Router#2 L1SS Capability Pointer
                                                    ///< Offset 386     RST PCIe Storage Cycle Router#3 L1SS Capability Pointer
  UINT8    RstPcieStorageEpL1ssControl2[3];         ///< Offset 388     RST PCIe Storage Cycle Router#1 Endpoint L1SS Control Data2
                                                    ///< Offset 389     RST PCIe Storage Cycle Router#2 Endpoint L1SS Control Data2
                                                    ///< Offset 390     RST PCIe Storage Cycle Router#3 Endpoint L1SS Control Data2
  UINT32   RstPcieStorageEpL1ssControl1[3];         ///< Offset 391     RST PCIe Storage Cycle Router#1 Endpoint L1SS Control Data1
                                                    ///< Offset 395     RST PCIe Storage Cycle Router#2 Endpoint L1SS Control Data1
                                                    ///< Offset 399     RST PCIe Storage Cycle Router#3 Endpoint L1SS Control Data1
  UINT16   RstPcieStorageLtrCapPtr[3];              ///< Offset 403     RST PCIe Storage Cycle Router#1 LTR Capability Pointer
                                                    ///< Offset 405     RST PCIe Storage Cycle Router#2 LTR Capability Pointer
                                                    ///< Offset 407     RST PCIe Storage Cycle Router#3 LTR Capability Pointer
  UINT32   RstPcieStorageEpLtrData[3];              ///< Offset 409     RST PCIe Storage Cycle Router#1 Endpoint LTR Data
                                                    ///< Offset 413     RST PCIe Storage Cycle Router#2 Endpoint LTR Data
                                                    ///< Offset 417     RST PCIe Storage Cycle Router#3 Endpoint LTR Data
  UINT16   RstPcieStorageEpLctlData16[3];           ///< Offset 421     RST PCIe Storage Cycle Router#1 Endpoint LCTL Data
                                                    ///< Offset 423     RST PCIe Storage Cycle Router#2 Endpoint LCTL Data
                                                    ///< Offset 425     RST PCIe Storage Cycle Router#3 Endpoint LCTL Data
  UINT16   RstPcieStorageEpDctlData16[3];           ///< Offset 427     RST PCIe Storage Cycle Router#1 Endpoint DCTL Data
                                                    ///< Offset 429     RST PCIe Storage Cycle Router#2 Endpoint DCTL Data
                                                    ///< Offset 431     RST PCIe Storage Cycle Router#3 Endpoint DCTL Data
  UINT16   RstPcieStorageEpDctl2Data16[3];          ///< Offset 433     RST PCIe Storage Cycle Router#1 Endpoint DCTL2 Data
                                                    ///< Offset 435     RST PCIe Storage Cycle Router#2 Endpoint DCTL2 Data
                                                    ///< Offset 437     RST PCIe Storage Cycle Router#3 Endpoint DCTL2 Data
  UINT16   RstPcieStorageRpDctl2Data16[3];          ///< Offset 439     RST PCIe Storage Cycle Router#1 RootPort DCTL2 Data
                                                    ///< Offset 441     RST PCIe Storage Cycle Router#2 RootPort DCTL2 Data
                                                    ///< Offset 443     RST PCIe Storage Cycle Router#3 RootPort DCTL2 Data
  UINT32   RstPcieStorageUniqueTableBar[3];         ///< Offset 445     RST PCIe Storage Cycle Router#1 Endpoint unique MSI-X Table BAR
                                                    ///< Offset 449     RST PCIe Storage Cycle Router#2 Endpoint unique MSI-X Table BAR
                                                    ///< Offset 453     RST PCIe Storage Cycle Router#3 Endpoint unique MSI-X Table BAR
  UINT32   RstPcieStorageUniqueTableBarValue[3];    ///< Offset 457     RST PCIe Storage Cycle Router#1 Endpoint unique MSI-X Table BAR value
                                                    ///< Offset 461     RST PCIe Storage Cycle Router#2 Endpoint unique MSI-X Table BAR value
                                                    ///< Offset 465     RST PCIe Storage Cycle Router#3 Endpoint unique MSI-X Table BAR value
  UINT32   RstPcieStorageUniquePbaBar[3];           ///< Offset 469     RST PCIe Storage Cycle Router#1 Endpoint unique MSI-X PBA BAR
                                                    ///< Offset 473     RST PCIe Storage Cycle Router#2 Endpoint unique MSI-X PBA BAR
                                                    ///< Offset 477     RST PCIe Storage Cycle Router#3 Endpoint unique MSI-X PBA BAR
  UINT32   RstPcieStorageUniquePbaBarValue[3];      ///< Offset 481     RST PCIe Storage Cycle Router#1 Endpoint unique MSI-X PBA BAR value
                                                    ///< Offset 485     RST PCIe Storage Cycle Router#2 Endpoint unique MSI-X PBA BAR value
                                                    ///< Offset 489     RST PCIe Storage Cycle Router#3 Endpoint unique MSI-X PBA BAR value
  UINT32   RstPcieStorageRootPortNum[3];            ///< Offset 493     RST PCIe Storage Cycle Router#1 Root Port number
                                                    ///< Offset 497     RST PCIe Storage Cycle Router#2 Root Port number
                                                    ///< Offset 501     RST PCIe Storage Cycle Router#3 Root Port number
  UINT8    EMH4;                                    ///< Offset 505     eMMC HS400 mode enabled
  UINT8    EMDS;                                    ///< Offset 506     eMMC Driver Strength
  UINT8    CpuSku;                                  ///< Offset 507     CPU SKU
  UINT16   IoTrapAddress[4];                        ///< Offset 508
  UINT8    IoTrapStatus[4];                         ///< Offset 516
  UINT16   PMBS;                                    ///< Offset 520     ACPI IO BASE address
  UINT32   PWRM;                                    ///< Offset 522     PWRM MEM BASE address
  // CNVi specific
  UINT8    CnviMode;                                ///< Offset 526     CNVi mode
  UINT8    CnviBtCore;                              ///< Offset 527     CNVi BT Core
  UINT8    CnviBtAudioOffload;                      ///< Offset 528     CNVi BT Audio Offload
  //Voltage Margining
  UINT8    DynamicS0i3Support;                      ///< Offset 529     Dynamic S0i3 Support
  // PCH Trace Hub
  UINT8    PchTraceHubMode;                         ///< Offset 530     PCH Trace Hub Mode
  // PCH PS_ON support
  UINT8    PsOnEnable;                              ///< Offset 531     PCH PS_ON enable
  //
  // These are for PchApciTablesSelfTest use
  //
  UINT8    LtrEnable[24];                           ///< Offset 532     Latency Tolerance Reporting Enable
                                                    ///< Offset 533     Latency Tolerance Reporting Enable
                                                    ///< Offset 534     Latency Tolerance Reporting Enable
                                                    ///< Offset 535     Latency Tolerance Reporting Enable
                                                    ///< Offset 536     Latency Tolerance Reporting Enable
                                                    ///< Offset 537     Latency Tolerance Reporting Enable
                                                    ///< Offset 538     Latency Tolerance Reporting Enable
                                                    ///< Offset 539     Latency Tolerance Reporting Enable
                                                    ///< Offset 540     Latency Tolerance Reporting Enable
                                                    ///< Offset 541     Latency Tolerance Reporting Enable
                                                    ///< Offset 542     Latency Tolerance Reporting Enable
                                                    ///< Offset 543     Latency Tolerance Reporting Enable
                                                    ///< Offset 544     Latency Tolerance Reporting Enable
                                                    ///< Offset 545     Latency Tolerance Reporting Enable
                                                    ///< Offset 546     Latency Tolerance Reporting Enable
                                                    ///< Offset 547     Latency Tolerance Reporting Enable
                                                    ///< Offset 548     Latency Tolerance Reporting Enable
                                                    ///< Offset 549     Latency Tolerance Reporting Enable
                                                    ///< Offset 550     Latency Tolerance Reporting Enable
                                                    ///< Offset 551     Latency Tolerance Reporting Enable
                                                    ///< Offset 552     Latency Tolerance Reporting Enable
                                                    ///< Offset 553     Latency Tolerance Reporting Enable
                                                    ///< Offset 554     Latency Tolerance Reporting Enable
                                                    ///< Offset 555     Latency Tolerance Reporting Enable
  UINT8    GBES;                                    ///< Offset 556     GbE Support
  UINT32   PchxDCIPwrDnScale;                       ///< Offset 557     PCH xDCI Power Down Scale Value, DWC_USB3_GCTL_INIT[31:19]
  UINT8    SdCardPowerEnableActiveHigh;             ///< Offset 561     SD_PWREN# active high indication
  UINT8    EmmcEnabled;                             ///< Offset 562     Set to indicate that eMMC is enabled
  UINT8    SdCardEnabled;                           ///< Offset 563     Set to indicate that SD card is enabled
  #ifdef RESTRICTED_FLAG
  UINT8    CnviBtInterface;                         ///< Offset 564     CNVi BT interface
  UINT8    CnviBtUartType;                          ///< Offset 565     CNVi BT UART type
  #endif
  UINT8    PIR[8];                                  ///< Offset 566     PIRQA -> IRQx mapping
                                                    ///< Offset 567     PIRQB -> IRQx mapping
                                                    ///< Offset 568     PIRQC -> IRQx mapping
                                                    ///< Offset 569     PIRQD -> IRQx mapping
                                                    ///< Offset 570     PIRQE -> IRQx mapping
                                                    ///< Offset 571     PIRQF -> IRQx mapping
                                                    ///< Offset 572     PIRQG -> IRQx mapping
                                                    ///< Offset 573     PIRQH -> IRQx mapping
  UINT32   MmCfgAddress;                            ///< Offset 574     PCI Express BAR (PcieMmCfgBaseAddress)
} PCH_NVS_AREA;

#pragma pack(pop)
#endif
