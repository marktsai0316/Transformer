#***********************************************************************
#*                                                                     *
#*   Copyright (c) 1985-2020, American Megatrends International LLC.   *
#*                                                                     *
#*      All rights reserved. Subject to AMI licensing agreement.       *
#*                                                                     *
#***********************************************************************
#***********************************************************************
#<AMI_FHDR_START>
#
# Name:	EagleStreamCrb.mak
#
# Description:	
#
#<AMI_FHDR_END>
#**********************************************************************

ifeq ($(BUILD_OS),$(BUILD_OS_WINDOWS))
	COPY_FLAG = /Y
endif

ifeq ("$(FITC_NM_FILE_NAME)", "")
   FITC_NM_FILE_NAME = "NULL"
endif

#Do not change the order of Platform configurations.
ifeq ($(CRB_FLAG_ENABLE), 1)
   CRB_EDKII_BUILD_OPTIONS = -D CRB_FLAG
else
   CRB_EDKII_BUILD_OPTIONS =
endif

ifeq ($(DEBUG_FLAGS_ENABLE), 1)
#EDKII_DEBUG_BUILD_OPTIONS = -D DEBUG_CODE_BLOCK=1  -D PLATFORM_VARIABLE_ATTRIBUTES=0x3  # Attributes are defined based on RT_ACCESS_SUPPORT_IN_HPKTOOL token.
	EDKII_DEBUG_BUILD_OPTIONS = -D DEBUG_CODE_BLOCK=1
else
#EDKII_DEBUG_BUILD_OPTIONS = -D MDEPKG_NDEBUG -D SILENT_MODE  -D PLATFORM_VARIABLE_ATTRIBUTES=0x3 # Core takes care of this.
	EDKII_DEBUG_BUILD_OPTIONS =
endif

#Define PLATFORM_VARIABLE_ATTRIBUTES based on RT_ACCESS_SUPPORT_IN_HPKTOOL token.
ifeq ($(RT_ACCESS_SUPPORT_IN_HPKTOOL), 1)
	EDKII_DEBUG_BUILD_OPTIONS += -D PLATFORM_VARIABLE_ATTRIBUTES=0x7
else
	EDKII_DEBUG_BUILD_OPTIONS += -D PLATFORM_VARIABLE_ATTRIBUTES=0x3
endif

ifeq ($(SDP_PLATFORM), 1)
	SDP_EDKII_BUILD_OPTIONS = -D SDP_FLAG -D SV_OR_SDP_FLAG
else
	SDP_EDKII_BUILD_OPTIONS =
endif

SV_EDKII_BUILD_OPTIONS = -D WHITLEY_FLAG -D EAGLESTREAM_FLAG

ifeq ($(XMLCLI_COMPILE), 1)
  SV_EDKII_BUILD_OPTIONS = $(SV_EDKII_BUILD_OPTIONS) -D XMLCLI_ENABLE
endif

ifeq ($(SOFTSIM_BIOS_ENABLE), 1)
	SOFTSIM_EDKII_BUILD_OPTIONS = -D SOFTSIM_FLAG
else
	SOFTSIM_EDKII_BUILD_OPTIONS =
endif

## APTIOV_SERVER_RC_OVERRIDE_START:
#Define based on INTEL_TXT_SUPPORT support
#LT_BUILD_OPTIONS = -D LT_FLAG
ifeq ($(INTEL_TXT_SUPPORT), 1)
	LT_BUILD_OPTIONS = -D LT_FLAG
else
	LT_BUILD_OPTIONS =
endif
## APTIOV_SERVER_RC_OVERRIDE_END:

ifeq ($(SPARING_SCRATCHPAD_ENABLE), 1)
	SPARING_SCRATCHPAD_OPTION = -D SPARING_SCRATCHPAD_SUPPORT
else
	SPARING_SCRATCHPAD_OPTIONS =
endif

ifeq ($(SCRATCHPAD_DEBUG), 1)
	SCRATCHPAD_DEBUG_OPTIONS = -D SCRATCHPAD_DEBUG
else
	SCRATCHPAD_DEBUG_OPTIONS =
endif

ifeq ($(TRAD_BIOS_ENABLE), 1)
	TRAD_BUILD_OPTION = -DTRAD_FLAG=1
else
	TRAD_BUILD_OPTION =
endif

ifeq ($(ULT_BIOS_ENABLE) , 1)
	ULT_BUILD_OPTION = -DULT_FLAG=1
else
	ULT_BUILD_OPTION =
endif

ifeq ($(SERIAL_IO_ENABLE) , 1)
	SERIAL_IO_BUILD_OPTION = -DSERIAL_IO_FLAG=1
else
	SERIAL_IO_BUILD_OPTION =
endif

ifeq ($(SUS_WELL_RESTORE_ENABLE) , 1)
	SUS_WELL_RESTORE_BUILD_OPTION = -DSUS_WELL_RESTORE=1
else
	SUS_WELL_RESTORE_BUILD_OPTION =
endif

ifeq ($(ADSP_ENABLE) , 1)
	ADSP_BUILD_OPTION = -DADSP_FLAG=1
else
	ADSP_BUILD_OPTION =
endif

ifeq ($(WDT_SUPPORT_ENABLE) , 1)
	WDT_BUILD_OPTION = -DWDT_SUPPORT_ENABLED=1
else
	WDT_BUILD_OPTION =
endif

ifeq ($(USB_PRECONDITION_ENABLE) , 1)
	USB_PRECONDITION_BUILD_OPTION = -DUSB_PRECONDITION_ENABLE_FLAG=1
else
	USB_PRECONDITION_BUILD_OPTION =
endif

	EWL_BUILD_OPTION = -DENHANCED_WARNING_LOG=1	

ifeq ($(RSTE_TESTING) , 1)
	RSTE_BUILD_OPTION = -DRSTE_TEST=1
else
	RSTE_BUILD_OPTION =
endif

ifeq ($(PCH_SERVER_BIOS_ENABLE) , 1)
	PCH_BUILD_OPTION = -DPCH_SERVER_BIOS_FLAG=1
else
	PCH_BUILD_OPTION =
endif

ifeq ($(BTG_ENABLE) , 1)
	BTG_BUILD_OPTIONS = -DBTG_FLAG
else
	BTG_BUILD_OPTIONS =
endif

ifeq ($(SERVER_BIOS_ENABLE) , 1)
	SERVER_BUILD_OPTION = -DSERVER_BIOS_FLAG=1 
else
	SERVER_BUILD_OPTION =
endif

#Define based on Intel PlatformPkg.dsc support
    SC_PATH = -D SC_PATH="Pch/SouthClusterCdf"    
    SC_BUILD_OPTION = -DCDF_SC_FLAG=1 -DEBG_SC_FLAG=1


	ME_PATH_CONFIG = Me/MeSps.$(SPS_VER)
	ME_PATH = -D ME_PATH="$(ME_PATH_CONFIG)"
	IE_PATH_CONFIG = Ie/v1
 	IE_PATH = -D IE_PATH="$(IE_PATH_CONFIG)"

#SC_PATH_OPTION = -D SC_PATH="Pch/SouthClusterCdf"

#ME_PATH_OPTION = -D ME_PATH="Me/MeSps.$(SPS_VER)"

#IE_PATH_OPTION = -D IE_PATH="Ie/v1"

## APTIOV_SERVER_RC_OVERRIDE_START: To avoid errors if EDKII_PPO_PLATFORM_OPTIONS is not defined
	EDKII_PPO_PLATFORM_OPTIONS =
## APTIOV_SERVER_RC_OVERRIDE_END: To avoid errors if EDKII_PPO_PLATFORM_OPTIONS is not defined

## APTIOV_SERVER_RC_OVERRIDE_START: AMI IPMI module is used in source. Not required to define IPMI flags for Intel.
##ifeq ($(IPMI_SUPPORT) , 1)
##	IPMI_BUILD_OPTION = -D IPMI_SUPPORT
##else
##	IPMI_BUILD_OPTION =
##endif
## APTIOV_SERVER_RC_OVERRIDE_END: AMI IPMI module is used in source. Not required to define IPMI flags for Intel.

## APTIOV_SERVER_RC_OVERRIDE_START: PCI_IOV_SUPPORT, WHEA_SUPPORT, BIOSGUARD_BUILD_OPTION, HOTPLUG_SUPPORT & DYNAMIC_MMCFG_BASE_SUPPORT support flag are provided based on SDL tokens.
ifeq ($(WHEA_SUPPORT), 1)
	WHEA_SUPPORT_OPTION = -D WHEA_SUPPORT
else
	WHEA_SUPPORT_OPTION =
endif

ifeq ($(TRACE_HUB_DEBUG_ENABLE),1)
	TRACE_HUB_DEBUG_OPTIONS = -D TRACE_HUB_DEBUG_FLAG
else
	TRACE_HUB_DEBUG_OPTIONS =
endif

ifeq ($(TRACE_HUB_ENABLE),1)
	TRACE_HUB_OPTIONS = -D TRACE_HUB_FLAG
else
	TRACE_HUB_OPTIONS =
endif

#ifeq ($(HALO_ENABLE), 1)
#	HALO_ENABLE_OPTIONS = -D HALO_BUILD
#else
#	HALO_ENABLE_OPTIONS =
#endif

ifeq ($(HOTPLUG_SUPPORT), 1)
	HOTPLUG_SUPPORT_OPTION = -D HOTPLUG_FLAG
else
	HOTPLUG_SUPPORT_OPTION =
endif

ifeq ($(DYNAMIC_MMCFG_BASE_SUPPORT), 1)
	DYNAMIC_MMCFG_OPTION = -D DYNAMIC_MMCFG_BASE_FLAG
else
	DYNAMIC_MMCFG_OPTION =
endif

ifeq ($(PCI_IOV_SUPPORT), 1)
	PCI_IOV_OPTION = -D EFI_PCI_IOV_SUPPORT
else
	PCI_IOV_OPTION =
endif

ifeq ($(BIOSGUARD_EC_ENABLE) , 1)
	BIOSGUARD_BUILD_OPTION = -DBIOSGUARD_FLAG=1 -DBIOSGUARD_EC_FLAG=1
else
	BIOSGUARD_BUILD_OPTION = -DBIOSGUARD_FLAG=1
endif

## APTIOV_SERVER_RC_OVERRIDE_END: PCI_IOV_SUPPORT, WHEA_SUPPORT, BIOSGUARD_BUILD_OPTION, HOTPLUG_SUPPORT & DYNAMIC_MMCFG_BASE_SUPPORT support flag are provided based on SDL tokens.

	PCH_PKG_OPTIONS =

ifeq ($(SPR_PO_FLAG) , 1)
	EDKII_PO_FLAG = -D SPR_PO_FLAG
else
	EDKII_PO_FLAG =
endif

ifeq ($(SPR_CWVPO_FLAG) , 1)
    EDKII_CWVPO_FLAG = -D CWV_A0_REMOVE_POST_PO -D CWV_A0_REFACTOR_POST_PO
else
    EDKII_CWVPO_FLAG =
endif

ifeq ($(PCH_PO_FLAG), 1)
   EDKII_PCH_PO_FLAG = -D PCH_PO_FLAG
else
   EDKII_PCH_PO_FLAG =
endif

ifeq ($(NVDIMM_ENABLE) , 1)
	NVDIMM_OPTIONS = -D MEM_NVDIMM_EN 
else
	NVDIMM_OPTIONS =
endif

#MrcCommonConfig.dsc start
ifeq ($(DDR5_ENABLE), 1)
	DDR5_OPTIONS = -D DDR5_SUPPORT
else
	DDR5_OPTIONS =
endif

ifeq ($(BUILD_FSP_BINARY), 1)
override EDKII_FLAGS += -D PCD_DYNAMIC_AS_DYNAMICEX -y report_FSP_PCD.txt
endif

ifeq ($(FSP_SUPPORT_IN_BIOS), 1)
override EDKII_FLAGS += -D PCD_DYNAMIC_AS_DYNAMICEX -y report_Project_PCD.txt
endif

#
# Size of NvramData structure, per socket
#
     ifeq ($(GNR_HOST_FLAG), 1)
    	EXTRA_NVDATA_SIZE_PER_SOCKET =  -D DDRIO_DATA_1S=49936
     else
    	EXTRA_NVDATA_SIZE_PER_SOCKET =  -D DDRIO_DATA_1S=45952
     endif
     
     ifeq ($(MAX_SOCKET),4)
        EXTRA_NVDATA_SIZE_PER_SOCKET +=  -D DRAM_DATA_1S=28000 -D RCD_DATA_1S=11528 -D LRDIMM_DB_DATA_1S=28372
     else   
        EXTRA_NVDATA_SIZE_PER_SOCKET +=  -D DRAM_DATA_1S=28000 -D RCD_DATA_1S=11528 
     endif
     
      # for SPR both DDR4/DDR5 will all set SUB_CH into 2 for register setting reason
      NUMBER_OF_SUB_CHANNELS = -D SUB_CH=2
	 ifeq ($(DNT_HOST_FLAG), 1)
  		NUMBER_OF_SUB_CHANNELS = -D SUB_CH=1
	 endif


    ifeq ($(DDR5_ENABLE), 1)
        # SPR DDR5 RDIMM rank mapping:
        #   DIMM0 Rank 0   -   DDRIO Rank 0
        #   DIMM0 Rank 1   -   DDRIO Rank 1
        #   DIMM1 Rank 0   -   DDRIO Rank 2
        #   DIMM1 Rank 1   -   DDRIO Rank 3
        NUMBER_OF_MAX_RANK_DIMM = -D MAX_RANK_DIMM=2
        NUMBER_OF_MAX_RANK_CH   = -D MAX_RANK_CH=4
    else
        NUMBER_OF_MAX_RANK_DIMM = -D MAX_RANK_DIMM=4
        NUMBER_OF_MAX_RANK_CH   = -D MAX_RANK_CH=8
    endif


#MrcCommonConfig.dsc start

	CPU_TYPE_OPTIONS =  -D SPR_HOST -D SPRA0_HOST -D SPRB0_HOST  -D SPRHBM_HOST -D SPRC0_HOST -D SPRMCC_HOST -D SPRUCC_HOST 
	DDR5_SPEC_OPTIONS = -D USE_LATEST_DRAM_SPEC -D USE_LATEST_RCD_SPEC -D USE_LATEST_DB_SPEC		
	MRC_OPTIONS = -D LRDIMM_SUPPORT -D DDRT_SUPPORT
	ifeq ($(DDR5_ENABLE), 1)
		DDR5_SUPPORT_OPTIONS = -D DDR5_SUPPORT
	else
		DDR5_SUPPORT_OPTIONS =
	endif
	MRC_OPTIONS += $(EXTRA_NVDATA_SIZE_PER_SOCKET)
	MAX_IMC_CH_OPTIONS = -D MAX_IMC=4 -D MAX_MC_CH=2
	MAX_SAD_RULE_OPTION = -D MAX_SAD_RULES=16 -D MAX_DRAM_CLUSTERS=4
	KTI_OPTIONS = -D MAX_KTI_PORTS=4
	IIO_STACK_OPTIONS = -D MAX_IIO_STACK=12 -D MAX_LOGIC_IIO_STACK=14
	
	
	MAX_SOCKET_CORE_THREAD_OPTIONS = -D MAX_SOCKET=$(MAX_SOCKET) -D MAX_CORE=$(MAX_CORE) -D MAX_THREAD=$(MAX_THREAD)
	
	## FSP_DISPATCH_MODE_ENABLE this token part of intel build and source has changes in it
ifeq ($(FSP_SUPPORT_IN_BIOS), 1)
	FSP_OPTIONS += -DFSP_DISPATCH_MODE_ENABLE=1
endif

ifeq ($(BUILD_FSP_BINARY), 1)
	FSP_OPTIONS += -DFSP_VER=$(FSP_VER) -DFSP_BUILD=1 -DFSP_DISPATCH_MODE_ENABLE=1
endif

	EDKII_ALL_PPO_OPTIONS = $(EDKII_CPU_BUILD_OPTIONS) $(EDKII_PPO_PLATFORM_OPTIONS) $(EDKII_PO_FLAG)  $(EDKII_CWVPO_FLAG)

	PCH_BIOS_BUILD_OPTIONS = $(TRAD_BUILD_OPTION) $(ULT_BUILD_OPTION) $(SERIAL_IO_BUILD_OPTION) $(PCH_BUILD_OPTION) $(SC_PATH) $(SUS_WELL_RESTORE_BUILD_OPTION) $(ADSP_BUILD_OPTION) $(USB_PRECONDITION_BUILD_OPTION) $(WDT_BUILD_OPTION) $(SERVER_BUILD_OPTION) $(EDKII_PCH_PO_FLAG) $(SC_BUILD_OPTION)

## APTIOV_SERVER_RC_OVERRIDE_START: PCI_IOV_SUPPORT, WHEA_SUPPORT, HOTPLUG_SUPPORT, BIOSGUARD_BUILD_OPTION & DYNAMIC_MMCFG_BASE_SUPPORT support flag are provided based on SDL tokens.
##                                  DISABLE_NEW_DEPRECATED_INTERFACES are removed for build errors.
#DEFINE EDKII_DSC_FEATURE_BUILD_OPTIONS = $(SDP_EDKII_BUILD_OPTIONS) $(CRB_EDKII_BUILD_OPTIONS) $(EDKII_DEBUG_BUILD_OPTIONS) $(SV_EDKII_BUILD_OPTIONS) $(IPMI_BUILD_OPTION) $(SOFTSIM_EDKII_BUILD_OPTIONS) $(PCH_BIOS_BUILD_OPTIONS)  $(PCH_PKG_OPTIONS) $(EDKII_ALL_PPO_OPTIONS) $(MAX_SOCKET_CORE_THREAD_OPTIONS) $(MAX_IMC_CH_OPTIONS) $(MAX_SAD_RULE_OPTION) $(KTI_OPTIONS) $(IIO_STACK_OPTIONS) $(LT_BUILD_OPTIONS) $(BTG_BUILD_OPTIONS) $(SPARING_SCRATCHPAD_OPTION) $(SCRATCHPAD_DEBUG_OPTION) $(TRACE_HUB_DEBUG_BUILD_OPTIONS) $(TRACE_HUB_INIT_BUILD_OPTIONS) $(NVDIMM_OPTIONS) $(DDR5_SUPPORT_OPTIONS) $(EWL_BUILD_OPTION) -D EFI_PCI_IOV_SUPPORT -D WHEA_SUPPORT $(CPU_TYPE_OPTIONS) -D MMCFG_BASE_ADDRESS=0x80000000 -D DISABLE_NEW_DEPRECATED_INTERFACES $(MRC_OPTIONS) $(DRAM_SPEC_OPITONS) $(DDR5_RCD_SPEC_OPITONS)
    EDKII_DSC_FEATURE_BUILD_OPTIONS = $(SDP_EDKII_BUILD_OPTIONS) $(CRB_EDKII_BUILD_OPTIONS) $(EDKII_DEBUG_BUILD_OPTIONS) $(SV_EDKII_BUILD_OPTIONS) $(IPMI_BUILD_OPTION) $(SOFTSIM_EDKII_BUILD_OPTIONS) $(PCH_BIOS_BUILD_OPTIONS)  $(PCH_PKG_OPTIONS) $(EDKII_ALL_PPO_OPTIONS) $(MAX_SOCKET_CORE_THREAD_OPTIONS) $(MAX_IMC_CH_OPTIONS) $(MAX_SAD_RULE_OPTION) $(KTI_OPTIONS) $(IIO_STACK_OPTIONS) $(LT_BUILD_OPTIONS) $(BTG_BUILD_OPTIONS) $(SPARING_SCRATCHPAD_OPTION) $(SCRATCHPAD_DEBUG_OPTION) $(TRACE_HUB_DEBUG_BUILD_OPTIONS) $(TRACE_HUB_INIT_BUILD_OPTIONS) $(NVDIMM_OPTIONS) $(DDR5_SUPPORT_OPTIONS) $(EWL_BUILD_OPTION) $(PCI_IOV_OPTION) $(WHEA_SUPPORT_OPTION) $(CPU_TYPE_OPTIONS) -D MMCFG_BASE_ADDRESS=0x80000000 $(MRC_OPTIONS) $(DDR5_SPEC_OPTIONS)
	EDKII_DSC_FEATURE_BUILD_OPTIONS += $(DYNAMIC_MMCFG_OPTION) $(HOTPLUG_SUPPORT_OPTION) $(BIOSGUARD_BUILD_OPTION) $(TRACE_HUB_DEBUG_OPTIONS) $(TRACE_HUB_OPTIONS) $(IE_PATH) #AMI overrides
## APTIOV_SERVER_RC_OVERRIDE_END: PCI_IOV_SUPPORT, WHEA_SUPPORT, HOTPLUG_SUPPORT, BIOSGUARD_BUILD_OPTION & DYNAMIC_MMCFG_BASE_SUPPORT support flag are provided based on SDL tokens.
##                                DISABLE_NEW_DEPRECATED_INTERFACES are removed for build errors.

ifeq ($(IE_ENABLE) , 1)
	IE_OPTIONS = -DIE_SUPPORT=1
else
	IE_OPTIONS =
endif

	EDKII_DSC_FEATURE_BUILD_OPTIONS += $(IE_OPTIONS) $(FSP_OPTIONS)

ifeq ($(ME_ENABLE) , 1)
	ME_OPTIONS = -DME_SUPPORT_FLAG=1 -DSPS_VERSION=$(SPS_VER) $(ME_PATH)
    ifeq ($(ME_SPS_ENABLE) , 1)
    	ME_OPTIONS += -DME_SPS_SUPPORT=1 
    endif
    ifeq ($(ME_TESTMENU) , 1)
    	ME_OPTIONS += -D ME_TESTMENU_FLAG=1 
    endif
    ifeq ($(ME_WS_ENABLE) , 1)
    	ME_OPTIONS += -DME_WS_SUPPORT=1 
        #ifeq ($(AMT_ENABLE) , 1)
        #	ME_OPTIONS += -DAMT_SUPPORT=1
        ifeq ($(WS_ICC_ENABLE) , 1)
        	ME_OPTIONS += -DWS_ICC_SUPPORT=1 
        endif
        ifeq ($(AMT_ENABLE), 1)
            ME_OPTIONS += -DAMT_SUPPORT=1
        endif
        ifeq ($(ASF_PEI_ENABLE) , 1)
        	ME_OPTIONS += -DASF_PEI=1 
        endif
     	#endif
	endif
else
	ME_OPTIONS = -DSPS_VERSION=$(SPS_VER) $(ME_PATH)
endif

#ifeq ($(ESPI_ENABLE) , 1)
#	ASPEED_ENABLE_BUILD_OPTIONS += -D ESPI_ENABLE
#else
#	ASPEED_ENABLE_BUILD_OPTIONS =
#endif
	ASPEED_ENABLE_BUILD_OPTIONS = -D ASPEED_ENABLE -D ESPI_ENABLE
	
ifeq ($(DEFINED_PLATFORM_FLAG) , "CLUSTER")
    CLUSTER_ENABLE_OPTIONS = -D CLUSTER_ENABLE=1
else
    CLUSTER_ENABLE_OPTIONS =
endif

	
	EDKII_DSC_FEATURE_BUILD_OPTIONS += $(ME_OPTIONS) $(ASPEED_ENABLE_BUILD_OPTIONS) $(CLUSTER_ENABLE_OPTIONS)
ifeq ($(BUILD_FSP_BINARY), 1)
	EDKII_DSC_FEATURE_BUILD_OPTIONS += -DBUILD_FSP_BINARY=1
endif
	
	export EDKII_DSC_FEATURE_BUILD_OPTIONS
	
	EDKII_RELEASE_SRCDBG_ASM_BUILD_OPTIONS   =
	EDKII_RELEASE_SRCDBG_CC_BUILD_OPTIONS    =
	EDKII_RELEASE_SRCDBG_DLINK_BUILD_OPTIONS =

Prepare: CLEAR_RCINCLUDE_FILE $(BUILD_DIR)/RcFlagsIncludeFile.txt
CLEAR_RCINCLUDE_FILE:
	$(RM) $(BUILD_DIR)\RcFlagsIncludeFile.txt

$(BUILD_DIR)/RcFlagsIncludeFile.txt:
	$(ECHO) " MSFT:*_*_*_CC_FLAGS = $(EDKII_DSC_FEATURE_BUILD_OPTIONS)  $(NUMBER_OF_SUB_CHANNELS) $(NUMBER_OF_MAX_RANK_DIMM) $(NUMBER_OF_MAX_RANK_CH) /wd4819 "\
> $(BUILD_DIR)/RcFlagsIncludeFile.txt
	$(ECHO) " GCC:*_*_*_CC_FLAGS = $(EDKII_DSC_FEATURE_BUILD_OPTIONS) $(NUMBER_OF_SUB_CHANNELS) $(NUMBER_OF_MAX_RANK_DIMM) $(NUMBER_OF_MAX_RANK_CH)$(EOL) \
	*_*_*_VFRPP_FLAGS   = $(EDKII_DSC_FEATURE_BUILD_OPTIONS) $(EOL) \
	*_*_*_APP_FLAGS   = $(EDKII_DSC_FEATURE_BUILD_OPTIONS)  $(EOL) \
	*_*_*_PP_FLAGS    = $(EDKII_DSC_FEATURE_BUILD_OPTIONS)  $(EOL) \
	*_*_*_ASLPP_FLAGS = $(EDKII_DSC_FEATURE_BUILD_OPTIONS)  $(EOL) \
	*_*_*_ASLCC_FLAGS = $(EDKII_DSC_FEATURE_BUILD_OPTIONS) $(EOL) "\
>> $(BUILD_DIR)/RcFlagsIncludeFile.txt

#
# Enable source level debugging for RELEASE build
#
ifeq ("$(TARGET)", "RELEASE")

	$(ECHO) " MSFT:*_*_*_ASM_FLAGS   = $(EDKII_RELEASE_SRCDBG_ASM_BUILD_OPTIONS) /Zi $(EOL) \
	MSFT:*_*_*_CC_FLAGS    = $(EDKII_RELEASE_SRCDBG_CC_BUILD_OPTIONS) /Zi /Gm $(EOL) \
	MSFT:*_*_*_DLINK_FLAGS = $(EDKII_RELEASE_SRCDBG_DLINK_BUILD_OPTIONS) /DEBUG $(EOL) \
	GCC:*_*_*_ASM_FLAGS    = $(EDKII_RELEASE_SRCDBG_ASM_BUILD_OPTIONS) $(EOL) \
	GCC:*_*_*_CC_FLAGS     = $(EDKII_RELEASE_SRCDBG_CC_BUILD_OPTIONS) $(EOL) \
	GCC:*_*_*_DLINK_FLAGS  = $(EDKII_RELEASE_SRCDBG_DLINK_BUILD_OPTIONS) " >> $(BUILD_DIR)/RcFlagsIncludeFile.txt
endif

#ifeq ($(WORKSTATION_SUPPORT),0)
#BeforeGenFds: CopyPtuRomCertificate

#CopyPtuRomCertificate:
#	@$(ECHO) "----- Copy PTU ROM Certificate to OEM Certificate folder -----"
#	$(CP) $(COPY_FLAG) $(FITC_PTU_DIR)$(PATH_SLASH)Whitley_SpsNMPTU_root.cer $(OemCert_DIR)$(PATH_SLASH)Whitley_SpsNMPTU_root.cer
##endif

ifneq ($(BUILD_FSP_BINARY),1)
Prepare: DeleteRomFile

Prepare: CreateAmlOffsetHeaderFile
endif

DeleteRomFile: 
ifeq ($(SecureMod_SUPPORT),1)
	if exist $(FWCAPSULE_FILE_NAME) $(RM) $(FWCAPSULE_FILE_NAME)
endif
ifeq ($(AUTO_MEUD_SUPPORT),0)
	if exist $(PROJECT_TAG)*.CAP $(RM) $(PROJECT_TAG)*.CAP
endif
	if exist $(PROJECT_TAG)*.ROM $(RM) $(PROJECT_TAG)*.ROM
	if exist *OutImage*.bin $(RM) *OutImage*.bin

ifneq ($(BUILD_FSP_BINARY),1)
End : CreateBinFile
endif

OUTPUT_DIR = $(OUTPUT_DIRECTORY)\$(TARGET)_$(TOOL_CHAIN_TAG)

@$(ECHO)"@echo ----Test'$(OUTPUT_DIRECTORY)'$(EOL)\
@echo ----Test $(OUTPUT_DIRECTORY)\
@echo ----Test $(TARGET)\
@echo ----Test $(TOOL_CHAIN_TAG)\
@echo ----Test $(OUTPUT_DIR)
#@echo ----Test '$(OUTPUT_DIRECTORY)'$(EOL)\
@echo ----Test '$(TARGET)'$(EOL)\
@echo ----Test '$(TOOL_CHAIN_TAG)'$(EOL)\
@echo ----Test '$(OUTPUT_DIR)'$(EOL)\

export OUTPUT_DIR

@$(ECHO)"@echo ----Test1'$(OUTPUT_DIR)'$(EOL)\
#@echo ----Test '$(OUTPUT_DIR)'$(EOL)\

ifeq ($(AUTO_MEUD_SUPPORT),1)
CombineFwCapsule: RunFitUtility
endif

.PHONY : CreateBinFile
CreateBinFile:
ifeq ($(wildcard $(FWpriv)) $(SecureMod_SUPPORT) $(CREATE_FWCAPSULE), $(FWpriv) 1 1)
	@$(ECHO) "----- Copy Signed BIOS Image file to AMIROM.fd for RomImage"
	$(CP)  $(COPY_FLAG)  $(FWCAPSULE_FILE_NAME) $(OUTPUT_DIR)$(PATH_SLASH)FV$(PATH_SLASH)AMIROM.fd
else
	@$(ECHO) "----- Copy Unsigned BIOS Image file from AMIROM.fd"
	$(CP)  $(COPY_FLAG)  $(OUTPUT_DIR)$(PATH_SLASH)FV$(PATH_SLASH)AMIROM.fd $(BIOS_TAG).ROM
endif

ifeq ($(BUILD_OS),$(BUILD_OS_WINDOWS))
	if not exist $(OUTPUT_DIR)\ROM $(MKDIR) $(OUTPUT_DIR)\ROM
else
	if [ ! -d "$(OUTPUT_DIR)/ROM" ]; then $(MKDIR) $(OUTPUT_DIR)/ROM; fi
endif

#TODO: FINISH GCC Support >>>
ifeq ($(WORKSTATION_SUPPORT),1)
	@$(CP) $(COPY_FLAG) $(FTOOL_DIR)$(PATH_SLASH)$(ME_BIN) $(OUTPUT_DIR)$(PATH_SLASH)ROM$(PATH_SLASH)ME_11.bin
endif
	@$(CP) $(COPY_FLAG) $(FTOOL_DIR)$(PATH_SLASH)$(GBE_NVM_BIN) $(OUTPUT_DIR)$(PATH_SLASH)ROM$(PATH_SLASH)GBE_NVM.bin

	@$(ECHO) Generating $(CPUTARGET)OutImage.bin
	
ifeq ($(FPGA_SUPPORT),1)
	@call Intel$(PATH_SLASH)ServerPlatformPkg$(PATH_SLASH)SprBuildImage.bat $(FTOOL_DIR) $(FITC_XML_DIR) $(FITC_FILE_NAME) $(FITC_NM_FILE_NAME) FPGA
else
	@call Intel$(PATH_SLASH)ServerPlatformPkg$(PATH_SLASH)SprBuildImage.bat $(FTOOL_DIR) $(FITC_XML_DIR) $(FITC_FILE_NAME) $(FITC_NM_FILE_NAME)
endif

ifeq ("$(FITC_NM_FILE_NAME)", "NULL")
	@$(CP) $(OUTPUT_DIR)$(PATH_SLASH)ROM$(PATH_SLASH)OutImage.bin $(CPUTARGET)OutImage.bin	
else
	@$(CP) $(OUTPUT_DIR)$(PATH_SLASH)ROM$(PATH_SLASH)OutImage.bin $(CPUTARGET)OutImage.bin
	@$(CP) $(OUTPUT_DIR)$(PATH_SLASH)ROM$(PATH_SLASH)OutImage_NM.bin $(CPUTARGET)OutImage_NM.bin
endif	

ifeq ($(wildcard $(FWpriv)) $(SecureMod_SUPPORT) $(CREATE_FWCAPSULE), $(FWpriv) 1 1)
	@$(ECHO) $(CPUTARGET)OutImage.bin and $(FWCAPSULE_FILE_NAME) binaries created.
else
	@$(ECHO) $(CPUTARGET)OutImage.bin and $(BIOS_TAG).ROM binaries created.
endif