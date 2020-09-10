#***********************************************************************
#*                                                                     *
#*   Copyright (c) 1985-2019, American Megatrends International LLC.   *
#*                                                                     *
#*      All rights reserved. Subject to AMI licensing agreement.       *
#*                                                                     *
#***********************************************************************
#<AMI_FHDR_START>
#-----------------------------------------------------------------------
#
# Name:         BuildFspBin.mak
#
# Description: Build FSP mak
#
#-----------------------------------------------------------------------
#<AMI_FHDR_END>

BD_MACRO = \
-D CFG_OUTDIR=$(BUILD_DIR) -D TARGET=$(TARGET) $(EDKII_DSC_FEATURE_BUILD_OPTIONS)

ifeq ($(CFG_PREBUILD), 1)
BD_MACRO += -DCFG_PREBUILD
endif

#export PACKAGES_PATH variable as it is used by python script
export PACKAGES_PATH := $(WORKSPACE);$(WORKSPACE)$(PATH_SLASH)Intel;

FV_DIR_FSP_T_UPD_TOOL_GUID = \
$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV$(PATH_SLASH)$(FSP_T_UPD_TOOL_GUID)
FV_DIR_FSP_M_UPD_TOOL_GUID = \
$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV$(PATH_SLASH)$(FSP_M_UPD_TOOL_GUID)
FV_DIR_FSP_S_UPD_TOOL_GUID = \
$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV$(PATH_SLASH)$(FSP_S_UPD_TOOL_GUID)


.PHONY : BUILD_CFG_OPT DelFspUpdBins RunPatchFv 

Prepare : DelFspUpdBins BUILD_CFG_OPT

End : RunPatchFv

#Delete bin/map/txt as if already present, python informs and make will report as error
DelFspUpdBins:
ifeq ($(GEN_CFG_OPT_SUPPORT), 1)
  ifneq ("$(wildcard $(FV_DIR_FSP_T_UPD_TOOL_GUID).txt)","")
	$(info $(FV_DIR_FSP_T_UPD_TOOL_GUID).txt is existing)
	$(RM) $(FV_DIR_FSP_T_UPD_TOOL_GUID).txt
  endif
  ifneq ("$(wildcard $(FV_DIR_FSP_T_UPD_TOOL_GUID).map)","")
	$(info $(FV_DIR_FSP_T_UPD_TOOL_GUID).txt is existing)
	$(RM) $(FV_DIR_FSP_T_UPD_TOOL_GUID).map
  endif
  ifneq ("$(wildcard $(FV_DIR_FSP_T_UPD_TOOL_GUID).bin)","")
	$(info $(FV_DIR_FSP_T_UPD_TOOL_GUID).txt is existing)
	$(RM) $(FV_DIR_FSP_T_UPD_TOOL_GUID).bin
  endif
  ifneq ("$(wildcard $(FV_DIR_FSP_M_UPD_TOOL_GUID).txt)","")
	$(info $(FV_DIR_FSP_M_UPD_TOOL_GUID).txt is existing)
	$(RM) $(FV_DIR_FSP_M_UPD_TOOL_GUID).txt
  endif
  ifneq ("$(wildcard $(FV_DIR_FSP_M_UPD_TOOL_GUID).map)","")
	$(info $(FV_DIR_FSP_M_UPD_TOOL_GUID).txt is existing)
	$(RM) $(FV_DIR_FSP_M_UPD_TOOL_GUID).map
  endif
  ifneq ("$(wildcard $(FV_DIR_FSP_M_UPD_TOOL_GUID).bin)","")
	$(info $(FV_DIR_FSP_M_UPD_TOOL_GUID).txt is existing)
	$(RM) $(FV_DIR_FSP_M_UPD_TOOL_GUID).bin
  endif
  ifneq ("$(wildcard $(FV_DIR_FSP_S_UPD_TOOL_GUID).txt)","")
	$(info $(FV_DIR_FSP_S_UPD_TOOL_GUID).txt is existing)
	$(RM) $(FV_DIR_FSP_S_UPD_TOOL_GUID).txt
  endif
  ifneq ("$(wildcard $(FV_DIR_FSP_S_UPD_TOOL_GUID).map)","")
	$(info $(FV_DIR_FSP_S_UPD_TOOL_GUID).txt is existing)
	$(RM) $(FV_DIR_FSP_S_UPD_TOOL_GUID).map
  endif
  ifneq ("$(wildcard $(FV_DIR_FSP_S_UPD_TOOL_GUID).bin)","")
	$(info $(FV_DIR_FSP_S_UPD_TOOL_GUID).txt is existing)
	$(RM) $(FV_DIR_FSP_S_UPD_TOOL_GUID).bin
  endif
endif

BUILD_CFG_OPT:
# create a FV folder in Build folder.
  ifeq ("$(wildcard $(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV)","")
	$(MKDIR) $(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV
  endif
	$(ECHO) GenCfgOpt: Start of PreBuild ...
	python $(FSP_TOOLS_DIR)\GenCfgOpt.py UPDTXT \
		$(FSP_SOURCE_PKG_DIR)\$(FSP_UPD_DSC) \
		$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV \
		$(BD_MACRO)
	$(ECHO) GenCfgOpt: UPD TXT file was generated successfully !
	$(ECHO) GenCfgOpt: Generate VPD Header File ...
# using BPDG to generate binary
	$(EFI_TOOLS_DIR)\BPDG \
		$(FV_DIR_FSP_T_UPD_TOOL_GUID).txt \
		-o $(FV_DIR_FSP_T_UPD_TOOL_GUID).bin \
		-m $(FV_DIR_FSP_T_UPD_TOOL_GUID).map 
	$(EFI_TOOLS_DIR)\BPDG \
		$(FV_DIR_FSP_M_UPD_TOOL_GUID).txt \
		-o $(FV_DIR_FSP_M_UPD_TOOL_GUID).bin \
		-m $(FV_DIR_FSP_M_UPD_TOOL_GUID).map 
	$(EFI_TOOLS_DIR)\BPDG \
		$(FV_DIR_FSP_S_UPD_TOOL_GUID).txt \
		-o $(FV_DIR_FSP_S_UPD_TOOL_GUID).bin \
		-m $(FV_DIR_FSP_S_UPD_TOOL_GUID).map 
# using GenCfgOpt.py (HEADER)
	python $(FSP_TOOLS_DIR)\GenCfgOpt.py HEADER \
		$(FSP_SOURCE_PKG_DIR)\$(FSP_UPD_DSC) \
		$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV \
		$(FSP_SOURCE_PKG_DIR)\Include\BootLoaderPlatformData.h \
		$(BD_MACRO)
	$(ECHO) GenCfgOpt: Vpd header file was generated successfully !
#Generate BSF File
	$(ECHO) GenCfgOpt: Generate BSF File ...
	python $(FSP_TOOLS_DIR)\GenCfgOpt.py GENBSF \
		$(FSP_SOURCE_PKG_DIR)\$(FSP_UPD_DSC) \
		$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV \
		Intel\EagleStreamFspBinPkg\Fsp.bsf \
		$(BD_MACRO)
	$(ECHO) GenCfgOpt: BSF file was generated successfully !

	if exist  $(FSP_SOURCE_PKG_DIR)\Include\FspmUpd.h attrib -r $(FSP_SOURCE_PKG_DIR)\Include\FspmUpd.h
	if exist  $(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV\FspmUpd.h \
		$(CP) \
		$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV\FspmUpd.h \
		$(FSP_SOURCE_PKG_DIR)\Include\FspmUpd.h
		
	if exist  $(FSP_SOURCE_PKG_DIR)\Include\FspsUpd.h attrib -r $(FSP_SOURCE_PKG_DIR)\Include\FspsUpd.h
	if exist  $(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV\FspsUpd.h \
		$(CP) \
		$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV\FspsUpd.h \
		$(FSP_SOURCE_PKG_DIR)\Include\FspsUpd.h
		
	if exist  $(FSP_SOURCE_PKG_DIR)\Include\FsptUpd.h attrib -r $(FSP_SOURCE_PKG_DIR)\Include\FsptUpd.h
	if exist  $(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV\FsptUpd.h \
		$(CP) \
		$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV\FsptUpd.h \
		$(FSP_SOURCE_PKG_DIR)\Include\FsptUpd.h
		
	if exist  $(FSP_SOURCE_PKG_DIR)\Include\FspUpd.h attrib -r $(FSP_SOURCE_PKG_DIR)\Include\FspUpd.h
	if exist  $(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV\FspUpd.h \
		$(CP) \
		$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV\FspUpd.h \
		$(FSP_SOURCE_PKG_DIR)\Include\FspUpd.h

#PatchFv with proper address
RunPatchFv:
	$(ECHO) Patch FD Image ...
	$(ECHO) Copy a temp FD Image ...
	$(CP) \
	$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV\AMIROM.fd \
	$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV\TMP._d
	$(ECHO) ----- AMI FSP Binary set Timestamp as: 000000000000 to distinguish from Intel FSP Binary.-----
	$(ECHO) ----- Patch FSP-T Image Start -----
	python $(FSP_TOOLS_DIR)\PatchFv.py \
		$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV \
		FSP_T:AMIROM \
		"0x0000,            _BASE_FSP_T_,                                                                                       @Temporary Base" \
		"<[0x0000]>+0x00A0, ([<[0x0000]>+0x00A0] & 0xFFFFFFFF) | $(FSP_IMG_REV) | $(FSP_IMG_REV_BUILD_NUM),                		@FSP-T Image Revision" \
     	"<[0x0000]>+0x00AC, [<[0x0000]>+0x0020],                                                                                @FSP-T Size" \
     	"<[0x0000]>+0x00B0, [0x0000],                                                                                           @FSP-T Base" \
     	"<[0x0000]>+0x00B4, ([<[0x0000]>+0x00B4] & 0xFFFFFFFF) | 0x0000,                                                        @FSP-T Image Attribute" \
     	"<[0x0000]>+0x00B6, ([<[0x0000]>+0x00B6] & 0xFFFF0FFC) | 0x1000 | $(FSP_BUILD_TYPE) | $(FSP_RELEASE_TYPE),                @FSP-T Component Attribute" \
     	"<[0x0000]>+0x00B8, 70BCF6A5-FFB1-47D8-B1AE-EFE5508E23EA:0x1C - <[0x0000]>,                                             @FSP-T CFG Offset" \
     	"<[0x0000]>+0x00BC, [70BCF6A5-FFB1-47D8-B1AE-EFE5508E23EA:0x14] & 0xFFFFFF - 0x001C,                                    @FSP-T CFG Size" \
     	"<[0x0000]>+0x00C4, FspSecCoreT:_TempRamInitApi - [0x0000],                                                             @TempRamInit API" \
     	"0x0000,            0x00000000,                                                                                         @Restore the value" \
     	"FspSecCoreT:_FspInfoHeaderRelativeOff, FspSecCoreT:_AsmGetFspInfoHeader - {912740BE-2284-4734-B971-84B027353F0C:0x1C}, @FSP-T Header Offset"
	$(ECHO) ----- Patch FSP-T Image End -----

	$(ECHO) ----- Patch FSP-M Image Start -----
	python $(FSP_TOOLS_DIR)\PatchFv.py \
		$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV \
		FSP_M:AMIROM \
     	"0x0000,            _BASE_FSP_M_,                                                                                       @Temporary Base" \
     	"<[0x0000]>+0x00A0, ([<[0x0000]>+0x00A0] & 0xFFFFFFFF) | $(FSP_IMG_REV) | $(FSP_IMG_REV_BUILD_NUM),                		@FSP-M Image Revision" \
     	"<[0x0000]>+0x00AC, [<[0x0000]>+0x0020],                                                                                @FSP-M Size" \
     	"<[0x0000]>+0x00B0, [0x0000],                                                                                           @FSP-M Base" \
	    "<[0x0000]>+0x00B4, ([<[0x0000]>+0x00B4] & 0xFFFFFFFF) | 0x0000,                                                        @FSP-M Image Attribute" \
     	"<[0x0000]>+0x00B6, ([<[0x0000]>+0x00B6] & 0xFFFF0FFC) | 0x2000 | $(FSP_BUILD_TYPE) | $(FSP_RELEASE_TYPE),                @FSP-M Component Attribute" \
     	"<[0x0000]>+0x00B8, D5B86AEA-6AF7-40D4-8014-982301BC3D89:0x1C - <[0x0000]>,                                             @FSP-M CFG Offset" \
     	"<[0x0000]>+0x00BC, [D5B86AEA-6AF7-40D4-8014-982301BC3D89:0x14] & 0xFFFFFF - 0x001C,                                    @FSP-M CFG Size" \
     	"<[0x0000]>+0x00D0, FspSecCoreM:_FspMemoryInitApi - [0x0000],                                                           @MemoryInitApi API" \
     	"<[0x0000]>+0x00D4, FspSecCoreM:_TempRamExitApi - [0x0000],                                                             @TempRamExit API" \
     	"FspSecCoreM:_FspPeiCoreEntryOff, PeiCore:__ModuleEntryPoint - [0x0000],                                                @PeiCore Entry" \
     	"0x0000,            0x00000000,                                                                                         @Restore the value" \
     	"FspSecCoreM:_FspInfoHeaderRelativeOff, FspSecCoreM:_AsmGetFspInfoHeader - {912740BE-2284-4734-B971-84B027353F0C:0x1C}, @FSP-M Header Offset"
	$(ECHO) ----- Patch FSP-M Image End -----
		
	$(ECHO) ----- Patch FSP-S Image Start -----
	python $(FSP_TOOLS_DIR)\PatchFv.py \
		$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV \
		FSP_S:AMIROM \
     	"0x0000,            _BASE_FSP_S_,                                                                                       @Temporary Base" \
     	"<[0x0000]>+0x00A0, ([<[0x0000]>+0x00A0] & 0xFFFFFFFF) | $(FSP_IMG_REV) | $(FSP_IMG_REV_BUILD_NUM),                		@FSP-S Image Revision" \
     	"<[0x0000]>+0x00AC, [<[0x0000]>+0x0020],                                                                                @FSP-S Size" \
     	"<[0x0000]>+0x00B0, [0x0000],                                                                                           @FSP-S Base" \
     	"<[0x0000]>+0x00B4, ([<[0x0000]>+0x00B4] & 0xFFFFFFFF) | 0x0000,                                                        @FSP-S Image Attribute" \
     	"<[0x0000]>+0x00B6, ([<[0x0000]>+0x00B6] & 0xFFFF0FFC) | 0x3000 | $(FSP_BUILD_TYPE) | $(FSP_RELEASE_TYPE),                @FSP-S Component Attribute" \
     	"<[0x0000]>+0x00B8, E3CD9B18-998C-4F76-B65E-98B154E5446F:0x1C - <[0x0000]>,                                             @FSP-S CFG Offset" \
     	"<[0x0000]>+0x00BC, [E3CD9B18-998C-4F76-B65E-98B154E5446F:0x14] & 0xFFFFFF - 0x001C,                                    @FSP-S CFG Size" \
     	"<[0x0000]>+0x00D8, FspSecCoreS:_FspSiliconInitApi - [0x0000],                                                          @SiliconInit API" \
     	"<[0x0000]>+0x00CC, FspSecCoreS:_NotifyPhaseApi - [0x0000],                                                             @NotifyPhase API" \
     	"0x0000,            0x00000000,                                                                                         @Restore the value" \
	    "FspSecCoreS:_FspInfoHeaderRelativeOff, FspSecCoreS:_AsmGetFspInfoHeader - {912740BE-2284-4734-B971-84B027353F0C:0x1C}, @FSP-S Header Offset"
	$(ECHO) ----- Patch FSP-S Image End -----	
		
	$(ECHO) Delete the temp file ...
	$(RM) $(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV\TMP._d
	$(ECHO) Clone FSP binary to EagleStreamFspBinPkg
	
	if exist  $(FSP_BIN_PKG_DIR)\$(FSP_BINARY_NAME) attrib -r $(FSP_BIN_PKG_DIR)\$(FSP_BINARY_NAME)
	if exist  $(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV\AMIROM.fd \
		$(CP) \
		$(BUILD_DIR)$(PATH_SLASH)$(PLATFORM_NAME)$(PATH_SLASH)$(TARGET)_$(TOOL_CHAIN_TAG)$(PATH_SLASH)FV\AMIROM.fd \
		$(FSP_BIN_PKG_DIR)\$(FSP_BINARY_NAME)
#Right now no use of SplitFspBin rebase is not used, intel script dont use the SplitFspBin output image as FSP is not completely support API mode.\
# Supports only dispatch mode as of now.\
#$(ECHO) ----- Rebase the FSP Binary -----
#python $(FSP_TOOLS_DIR)\SplitFspBin.py rebase -f\
