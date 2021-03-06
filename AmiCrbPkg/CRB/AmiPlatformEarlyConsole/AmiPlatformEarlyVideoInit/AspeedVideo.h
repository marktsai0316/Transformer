//***********************************************************************
//*                                                                     *
//*   Copyright (c) 1985-2019, American Megatrends International LLC.   *
//*                                                                     *
//*      All rights reserved. Subject to AMI licensing agreement.       *
//*                                                                     *
//***********************************************************************

/** @file AspeedVideo.h
    Aspeed related definitions for initializing early video output.  Based
    on C sample code provided by Aspeed for initializing AST video device,
    ported to UEFI by AMI.
**/
#ifndef __ASPEED_VIDEO__H__
#define __ASPEED_VIDEO__H__

#define PCIE_REG_ADDR(Bus,Device,Function,Offset) \
  (((Offset) & 0xfff) | (((Function) & 0x07) << 12) | (((Device) & 0x1f) << 15) | (((Bus) & 0xff) << 20))

/*
 * Init Mode
 */
#define Init_IO			0x00000001
#define Init_MEM		0x00000002
#define Init_DVO		0x00000004
#define Init_DP501		0x00000008
#define Init_DP501_HW   0x00000010
#define Init_ITE66121   0x00000020

#define TIMEOUT              5000000
#define CRTC_PORT_OFFSET 0x54
#define REGTBL_NUM           17
#define REGIDX_010           0
#define REGIDX_014           1
#define REGIDX_018           2
#define REGIDX_020           3
#define REGIDX_024           4
#define REGIDX_02C           5
#define REGIDX_030           6
#define REGIDX_214           7
#define REGIDX_2E0           8
#define REGIDX_2E4           9
#define REGIDX_2E8           10
#define REGIDX_2EC           11
#define REGIDX_2F0           12
#define REGIDX_2F4           13
#define REGIDX_2F8           14
#define REGIDX_RFC           15
#define REGIDX_PLL           16

#define AR_PORT_WRITE       0x3c0   //(dinfo->usRelocateIOBase + 0x40)
#define MISC_PORT_WRITE     0x3c2   //(dinfo->usRelocateIOBase + 0x42)
#define VGA_ENABLE          0x3c3   //(dinfo->usRelocateIOBase + 0x43)
#define SEQ_PORT            0x3c4   //(dinfo->usRelocateIOBase + 0x44)
#define DAC_INDEX_WRITE     0x3c8   //(dinfo->usRelocateIOBase + 0x48)
#define DAC_DATA            0x3c9   //(dinfo->usRelocateIOBase + 0x49)
#define BANK0               0x3cd   //(dinfo->usRelocateIOBase + 0x4d)
#define BANK1               0x3cb   //(dinfo->usRelocateIOBase + 0x4b)
#define GR_PORT             0x3ce   //(dinfo->usRelocateIOBase + 0x4E)
#define CRTC_PORT           0x3d4   //(dinfo->usRelocateIOBase + 0x54)
#define INPUT_STATUS1_READ  0x3da   //(dinfo->usRelocateIOBase + 0x5A)

/* Std. Table Index Definition */
#define TextModeIndex 		0
#define EgaModeIndex 		1
#define VgaModeIndex 		2
#define HicModeIndex 		3
#define TruecModeIndex 		4

/* DCLK Index */
#define VCLK25_175          0x00
#define VCLK28_322          0x01
#define VCLK31_5            0x02
#define VCLK36              0x03
#define VCLK40              0x04
#define VCLK49_5            0x05
#define VCLK50              0x06
#define VCLK56_25           0x07
#define VCLK65              0x08
#define VCLK75              0x09
#define VCLK78_75           0x0A
#define VCLK94_5            0x0B
#define VCLK108             0x0C
#define VCLK135             0x0D
#define VCLK157_5           0x0E
#define VCLK162             0x0F
#define VCLK154             0x10
#define VCLK83_5            0x11
#define VCLK106_5           0x12
#define VCLK146_25          0x13
#define VCLK148_5           0x14
#define VCLK71              0x15
#define VCLK88_75           0x16
#define VCLK119             0x17
#define VCLK85_5            0x18
#define VCLK97_75           0x19
#define VCLK118_25          0x1A
#define VCLK79_5            0x1B

/* Flags Definition */
#define Charx8Dot               0x00000001
#define HalfDCLK                0x00000002
#define DoubleScanMode          0x00000004
#define LineCompareOff          0x00000008
#define SyncPP                  0x00000000
#define SyncPN                  0x00000040
#define SyncNP                  0x00000080
#define SyncNN                  0x000000C0
#define HBorderFlag             0x00000020
#define VBorderFlag             0x00000010

/* DAC Definition */
#define DAC_NUM_TEXT			64
#define DAC_NUM_EGA				64
#define DAC_NUM_VGA				256

#define VGA_LOAD_PALETTE_INDEX(IoBase, Index, Red, Green, Blue) \
{ \
    UINT8 Junk;				\
    SetReg(IoBase + DAC_INDEX_WRITE,(UINT8)(Index));	\
    Junk = GetReg(IoBase + SEQ_PORT);			\
    SetReg(IoBase + DAC_DATA,(UINT8)(Red));		\
    Junk = GetReg(IoBase + SEQ_PORT);			\
    SetReg(IoBase + DAC_DATA,(UINT8)(Green));		\
    Junk = GetReg(IoBase + SEQ_PORT);			\
    SetReg(IoBase + DAC_DATA,(UINT8)(Blue));		\
    Junk = GetReg(IoBase + SEQ_PORT);      		\
}

typedef struct {
    UINT8 Index;
    UINT8 Data;
} ast_ExtRegInfo;

typedef struct {
    UINT8 Misc;	
    UINT8 Seq[4];
    UINT8 Crtc[25];
    UINT8 Ar[20];	    
    UINT8 Gr[9];
} VBIOS_STDTABLE_STRUCT, *PVBIOS_STDTABLE_STRUCT;

typedef struct {
    UINT8 Dacr;
    UINT8 Dacg;
    UINT8 Dacb;	
} VBIOS_DAC_INFO, *PVBIOS_DAC_INFO;

typedef struct {
    UINT8 Param1;
    UINT8 Param2;
    UINT8 Param3;	
} VBIOS_DCLK_INFO, *PVBIOS_DCLK_INFO;

typedef struct {
    UINT32 Ht;
    UINT32 Hde;
    UINT32 Hfp;
    UINT32 Hsync;
    UINT32 Vt;
    UINT32 Vde;
    UINT32 Vfp;
    UINT32 Vsync;
    UINT32 DclkIndex;        
    UINT32 Flags;

    UINT32 RefreshRate;
    UINT32 RefreshRateIndex;
    UINT32 ModeID;
} VBIOS_ENHTABLE_STRUCT, *PVBIOS_ENHTABLE_STRUCT;

typedef struct {
    UINT32 Xres;
    UINT32 Yres;
    UINT32 Bpp;
    UINT32 Vsync;
    	
    PVBIOS_STDTABLE_STRUCT pStdTableEntry;
    PVBIOS_ENHTABLE_STRUCT pEnhTableEntry;
    	
} VBIOS_MODE_INFO, *PVBIOS_MODE_INFO;

/**
    Initializes Aspeed video controller with VGA standard init. 

    @param   Parameters - VIDEO_PARAMETERS structure specifying parameters for video initialization
             vBus - Bus Number of the video controller 

    @retval  VIDEO_SUCCESS if everything worked, or one of the video error
             codes if something did not work or bad input was provided.
**/
UINT32 
AspeedVgaInit (
    VIDEO_PARAMETERS    Parameters, 
    UINT8               vBus
);
#endif
