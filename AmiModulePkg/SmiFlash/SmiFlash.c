//***********************************************************************
//*                                                                     *
//*   Copyright (c) 1985-2019, American Megatrends International LLC.   *
//*                                                                     *
//*      All rights reserved. Subject to AMI licensing agreement.       *
//*                                                                     *
//***********************************************************************

/** @file
  SmiFlash SMM Driver File.
**/

//----------------------------------------------------------------------
// header includes

#include <Token.h>
#include <PiSmm.h>

#include <Protocol/DevicePath.h>
#include <Protocol/LoadedImage.h>
#include <Protocol/SmmCpu.h>
#include <Protocol/SmmSwDispatch2.h>

#include <Protocol/AmiFlash.h>
#include <Protocol/AmiSmiFlash.h>
#if defined(NVRAM_MIGRATION) && (NVRAM_MIGRATION == 1)
#include <Protocol/AmiNvramUpdate.h>
#endif

#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/HobLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/SmmServicesTableLib.h>

#include <Library/AmiRomLayoutLib.h>
#include <Library/AmiBufferValidationLib.h>

#include <AmiDxeLib.h>
#include <AmiSmm.h>
#include <Setup.h>
#include <SMIFlashELinks.h>

#define NVRAM_HOB_GUID \
    { 0xc0ec00fd, 0xc2f8, 0x4e47, 0x90, 0xef, 0x9c, 0x81, 0x55, 0x28, 0x5b, 0xec }

#define SMIFLASH_NVRAM_SAFE_UPDATE_GUID \
    { 0xae0ec0e1, 0x45f7, 0x49d0, 0xba, 0xac, 0xbf, 0x0f, 0xc6, 0x91, 0x3b, 0x67 }

#define SMIFLASH_EMPTY_NVAR_GUID \
    { 0xffffffff, 0xffff, 0xffff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff }

//61C0F511-A691-4F54-974F-B9A42172CE53
#define AMI_FV_BB_GUID \
    { \
        0x61C0F511, 0xA691, 0x4F54, { 0x97, 0x4F, 0xB9, 0xA4, 0x21, 0x72, 0xCE, 0x53 } \
    }

//5C60F367-A505-419A-859E-2A4FF6CA6FE5
#define AMI_FV_MAIN_GUID \
    { \
        0x5C60F367, 0xA505, 0x419A, { 0x85, 0x9E, 0x2A, 0x4F, 0xF6, 0xCA, 0x6F, 0xE5 } \
    }

//4F1C52D3-D824-4D2A-A2F0-EC40C23C5916
#define AMI_FV_MAIN_WRAPPER_GUID \
    { \
        0x4F1C52D3, 0xD824, 0x4D2A, { 0xA2, 0xF0, 0xEC, 0x40, 0xC2, 0x3C, 0x59, 0x16 } \
    }

//----------------------------------------------------------------------
// component MACROs
#define FLASH_EMPTY_BYTE (UINT8)(-FLASH_ERASE_POLARITY)
#define STR(a) CONVERT_TO_STRING(a)
#define NUMBER_OF_BLOCKS (FLASH_SIZE/FLASH_BLOCK_SIZE)
#define FlashDeviceBase (UINTN)(((UINT64)FLASH_MAX_MEM_ADDR + 1) - (UINT64)FLASH_DEVICE_RANGE)

#if FLASH_MAX_MEM_ADDR > 0X80000000
 #define SMIFLASH_FV_BB_BASE             (FV_BB_BASE)
 #define SMIFLASH_FV_MAIN_BASE           (FV_MAIN_BASE)
 #define SMIFLASH_NVRAM_ADDRESS          (NVRAM_ADDRESS)
 #if FAULT_TOLERANT_NVRAM_UPDATE
  #define SMIFLASH_NVRAM_BACKUP_ADDRESS   (NVRAM_BACKUP_ADDRESS)
 #endif
 #if EC_FIRMWARE_UPDATE_INTERFACE_SUPPORT && SMI_FLASH_INTERFACE_VERSION > 10
  #define SMIFLASH_AMI_EC_BASE            (AMI_EC_BASE)
 #endif
#else
 #define SMIFLASH_FV_BB_BASE             (FV_BB_BASE - FLASH_BASE)
 #define SMIFLASH_FV_MAIN_BASE           (FV_MAIN_BASE - FLASH_BASE)
 #define SMIFLASH_NVRAM_ADDRESS          (NVRAM_ADDRESS - FLASH_BASE)
 #if FAULT_TOLERANT_NVRAM_UPDATE
  #define SMIFLASH_NVRAM_BACKUP_ADDRESS   (NVRAM_BACKUP_ADDRESS - FLASH_BASE)
 #endif
 #if EC_FIRMWARE_UPDATE_INTERFACE_SUPPORT && SMI_FLASH_INTERFACE_VERSION > 10
  #define SMIFLASH_AMI_EC_BASE            (AMI_EC_BASE - FLASH_BASE)
 #endif 
#endif 

#pragma pack(1)
// Define SmiFlash rom area structure
typedef struct{
    EFI_GUID                        Guid;
    EFI_PHYSICAL_ADDRESS            Address;
    UINT32                          Offset;
    UINT32                          Size;
    AMI_SMI_FLASH_FLASH_BLOCK_TYPE  Type;
    UINT32                          Attributes;
}SMI_FLASH_ROM_AREA;
#pragma pack()

#if defined(NVRAM_MIGRATION) && (NVRAM_MIGRATION == 1)
typedef struct{
    EFI_HOB_GUID_TYPE       Header;
    EFI_PHYSICAL_ADDRESS    NvramAddress;
    EFI_PHYSICAL_ADDRESS    BackupAddress;
    UINT32                  NvramSize;
    UINT32                  HeaderLength;
    UINT32                  NvramMode;
}NVRAM_HOB;
#endif

//----------------------------------------------------------------------
// Module specific global variable
EFI_GUID AmiNvramHobGuid = NVRAM_HOB_GUID;
#if NVRAM_MIGRATION
EFI_GUID AmiSmmNvramUpdateProtocolGuid = AMI_SMM_NVRAM_UPDATE_PROTOCOL_GUID;
#endif


// oem flash write enable/disable list creation code must be in this order
typedef VOID (SMIFLASH_UPDATE) (VOID);
extern SMIFLASH_UPDATE SMIFLASH_PRE_UPDATE_LIST EndOfSMIFlashList;
extern SMIFLASH_UPDATE SMIFLASH_END_UPDATE_LIST EndOfSMIFlashList;
SMIFLASH_UPDATE* SMIFlashPreUpdate[] = {SMIFLASH_PRE_UPDATE_LIST NULL};
SMIFLASH_UPDATE* SMIFlashEndUpdate[] = {SMIFLASH_END_UPDATE_LIST NULL};

typedef VOID (SMIFLASH_HANDLER_HOOK) (UINT8 Date, UINT64 pInfoBlock);
extern SMIFLASH_HANDLER_HOOK SMIFLASH_PRE_HANDLER_LIST EndOfPreHandlerList;
extern SMIFLASH_HANDLER_HOOK SMIFLASH_END_HANDLER_LIST EndOfEndHandlerList;
SMIFLASH_HANDLER_HOOK* SMIFlashPreHandler[] = {SMIFLASH_PRE_HANDLER_LIST NULL};
SMIFLASH_HANDLER_HOOK* SMIFlashEndHandler[] = {SMIFLASH_END_HANDLER_LIST NULL};

typedef VOID (SMIFLASH_INIT) (VOID);
extern SMIFLASH_INIT SMIFLASH_IN_SMM_LIST EndOfInSmmList;
extern SMIFLASH_INIT SMIFLASH_NOT_IN_SMM_LIST EndOfNotInSmmList;
SMIFLASH_INIT* SMIFlashInSmm[] = {SMIFLASH_IN_SMM_LIST NULL};

#define AptioVProjectTagLength 5
#define FlashStringTagLength 8
#define BackupTypeTagLength 4
#ifdef FLASH_PART_STRING_LENGTH
VOID GetFlashPartInfomation(UINT8 *pBlockAddress, UINT8 *Buffer);
#define ExtraFlashInfoBlockSize (AptioVProjectTagLength + FlashStringTagLength + FLASH_PART_STRING_LENGTH + BackupTypeTagLength) 
#else
#define ExtraFlashInfoBlockSize (AptioVProjectTagLength + BackupTypeTagLength)
#endif

EFI_SMM_CPU_PROTOCOL    *gSmmCpu;
AMI_FLASH_PROTOCOL      *gAmiFlash;

SMI_FLASH_ROM_AREA          *gSmiFlashLayout;
UINTN                       gSmiFlashAreas = 0;
UINTN                       gNumberOfNcb = 0;
UINT64  CurNvramAddress = 0;
UINT64  CurNvramEndAddress = 0;
UINT64  CurNvramBackupAddress = 0;
UINT32  CurNvramSize = 0;
BOOLEAN DoNvramMigration = FALSE;
//----------------------------------------------------------------------
// externally defined variables

//----------------------------------------------------------------------
// Function definitions
EFI_STATUS
EFIAPI
GetFlashInfo(
    IN  OUT AMI_SMI_FLASH_INFO_BLOCK  *pInfoBlock
);

EFI_STATUS
EFIAPI
EnableFlashWrite(
    IN  OUT AMI_SMI_FLASH_FUNC_BLOCK  *pFuncBlock
);

EFI_STATUS
EFIAPI
DisableFlashWrite(
    IN  OUT AMI_SMI_FLASH_FUNC_BLOCK  *pFuncBlock
);

EFI_STATUS
EFIAPI
ReadFlash(
    IN  OUT AMI_SMI_FLASH_FUNC_BLOCK  *pFuncBlock
);

EFI_STATUS
EFIAPI
WriteFlash(
    IN  OUT AMI_SMI_FLASH_FUNC_BLOCK  *pFuncBlock
);

EFI_STATUS
EFIAPI
EraseFlash(
    IN  OUT AMI_SMI_FLASH_FUNC_BLOCK  *pFuncBlock
);

AMI_SMI_FLASH_PROTOCOL  SmiFlash = {
    GetFlashInfo,
    EnableFlashWrite,
    DisableFlashWrite,
    ReadFlash,
    WriteFlash,
    EraseFlash,
    FLASH_SIZE
};


EFI_STATUS EFIAPI SmiFlashValidateFlashRange(CONST VOID* Buffer, CONST UINTN BufferSize){

    UINTN BufferAddress;

    BufferAddress = (UINTN)Buffer;

    if ((BufferSize) != 0 && BufferAddress - 1 + BufferSize < BufferAddress)
        return EFI_INVALID_PARAMETER;

    if ( BufferAddress >= FlashDeviceBase && BufferAddress+BufferSize-1 <= FLASH_MAX_MEM_ADDR)
        return EFI_SUCCESS;
    else
        return EFI_ACCESS_DENIED;

}
/**
    Procedure to report the Flash Blocks Information.

    @param pInfoBlock parameter that specifies the where the blocks infomation to be stored.

    @retval pInfoBlock parameter that specifies the blocks infomation
**/
EFI_STATUS
RomLayoutMigrationHandler(
    IN  OUT AMI_SMI_FLASH_INFO_BLOCK  *pInfoBlock
)
{
#if NVRAM_MIGRATION
    BOOLEAN         IsNvramMigrated = FALSE;
    UINT8           *FvHeaderBuffer = NULL;
    UINT32          MaxBufferLength, Index;
    UINT64          NvramAddress = 0;
    UINT64          NvramBackupAddress = 0;
    UINTN           NvramSize = 0;
    AMI_NVRAM_UPDATE_PROTOCOL   *AmiNvramUpdate;
    AMI_ROM_LAYOUT_HEADER       *RomLayoutHdr = (AMI_ROM_LAYOUT_HEADER*)&pInfoBlock->Blocks[1];
    AMI_ROM_AREA                *RomLayout = (AMI_ROM_AREA*)((UINT8*)RomLayoutHdr + sizeof(AMI_ROM_LAYOUT_HEADER));

    if (RomLayoutHdr->Signature != AMI_ROM_LAYOUT_SIGNATURE) return EFI_INVALID_PARAMETER;

    MaxBufferLength = pInfoBlock->Length - sizeof(AMI_SMI_FLASH_BLOCK_DESC) - \
                EFI_FIELD_OFFSET(AMI_SMI_FLASH_INFO_BLOCK, Blocks) - sizeof(AMI_ROM_LAYOUT_HEADER);

    FvHeaderBuffer = (UINT8*)RomLayout + \
                        MaxBufferLength - sizeof(EFI_FIRMWARE_VOLUME_HEADER);
    if (FvHeaderBuffer <= ((UINT8*)RomLayout + RomLayoutHdr->DescriptorSize * \
                RomLayoutHdr->NumberOfDescriptors)) FvHeaderBuffer = NULL;

    // Reduce number of bytes used for header information
    for (Index = 0; Index < RomLayoutHdr->NumberOfDescriptors; Index++, RomLayout++) {
        if ((RomLayout >= (AMI_ROM_AREA*)((UINT8*)RomLayoutHdr + MaxBufferLength)) || \
            !RomLayout->Address || !RomLayout->Size) return EFI_INVALID_PARAMETER;

        if( CompareGuid( &(RomLayout->Guid), &gAmiNvramMainRomAreaGuid ) == TRUE )
        {
            NvramAddress = RomLayout->Address;
            NvramSize = RomLayout->Size;
            if (RomLayout->Size != NVRAM_SIZE) return EFI_INVALID_PARAMETER;
            if (RomLayout->Address != NVRAM_ADDRESS) IsNvramMigrated = TRUE;
        }
        if( CompareGuid( &(RomLayout->Guid), &gAmiNvramBackupRomAreaGuid ) == TRUE )
        {
            NvramBackupAddress = RomLayout->Address;
            if (RomLayout->Size != NVRAM_SIZE) return EFI_INVALID_PARAMETER;
#if defined(FAULT_TOLERANT_NVRAM_UPDATE) && (FAULT_TOLERANT_NVRAM_UPDATE == 1)
            if( RomLayout->Address != NVRAM_BACKUP_ADDRESS ) IsNvramMigrated = TRUE;
#endif
        }
        // Check and restore the Firmware Volume Header Signature if missing.
        if (FvHeaderBuffer && (RomLayout->Type == AmiRomAreaTypeFv)) {
            AMI_SMI_FLASH_FUNC_BLOCK    FuncBlock;
            // Read the FV HEADER back by new RomLayout.
            FuncBlock.BufAddr   = (UINT64)FvHeaderBuffer;
            FuncBlock.BlockAddr = RomLayout->Offset;
            FuncBlock.BlockSize = sizeof(EFI_FIRMWARE_VOLUME_HEADER);
            if (!EFI_ERROR(ReadFlash(&FuncBlock))) {
                EFI_FIRMWARE_VOLUME_HEADER  *FvHdr;
                FvHdr = (EFI_FIRMWARE_VOLUME_HEADER*)FvHeaderBuffer;
                // Restore the FV Signature if missing.
                if (!guidcmp(&FvHdr->FileSystemGuid, &gEfiFirmwareFileSystem2Guid) && \
                    (FvHdr->Signature == (UINT32)-1)) {
                    FvHdr->Signature = EFI_FVH_SIGNATURE;
                    FuncBlock.BufAddr   = (UINT64)&FvHdr->Signature;
                    FuncBlock.BlockSize = sizeof(EFI_FVH_SIGNATURE);
                    FuncBlock.BlockAddr = RomLayout->Offset + \
                        EFI_FIELD_OFFSET(EFI_FIRMWARE_VOLUME_HEADER, Signature);
                    WriteFlash(&FuncBlock);
                }
            }
        }
    }

    if(EFI_ERROR(SmiFlashValidateFlashRange((UINT8*)NvramAddress, NvramSize)) || 
        EFI_ERROR(SmiFlashValidateFlashRange((UINT8*)NvramBackupAddress, NvramSize))) {

        return EFI_SUCCESS;
    }

    if (IsNvramMigrated) {
        if (!EFI_ERROR(gSmst->SmmLocateProtocol (&AmiSmmNvramUpdateProtocolGuid, NULL, (VOID**)&AmiNvramUpdate))) {
            DoNvramMigration = FALSE; //Don't do Nvram migration again
            AmiNvramUpdate->MigrateNvram (AmiNvramUpdate, NvramAddress, NvramBackupAddress, NvramSize);
        }
    }
#endif  // #if NVRAM_MIGRATION
    return EFI_SUCCESS;
}

/**
    Procedure to get Nvram and NvBackup address from HOB
**/
VOID 
GetCurrentNvramInfo (
    VOID
)
{
#if NVRAM_MIGRATION
    VOID        *GuidHob;
    NVRAM_HOB   *NvramHob;

    GuidHob = GetFirstGuidHob (&AmiNvramHobGuid);

    if (GuidHob != NULL) {
        NvramHob = (NVRAM_HOB *)GuidHob;
        CurNvramAddress = NvramHob->NvramAddress;
        CurNvramBackupAddress = NvramHob->BackupAddress;
        CurNvramSize = NvramHob->NvramSize;
        CurNvramEndAddress = CurNvramAddress + CurNvramSize;
    }
#endif
}
/**
    Procedure to generate the Flash Blocks Information Descriptors.

    @param pInfoBlock parameter that specifies the where the blocks infomation to be stored.

    @retval pInfoBlock parameter that specifies the blocks infomation
**/
EFI_STATUS
GenBlockInfoDescriptors(
    IN  OUT AMI_SMI_FLASH_INFO_BLOCK  *pInfoBlock
)
{
    UINT32                      BuffLen = 0;
    UINT64                      BlkOff;
    UINT16                      Index;
    UINT32                      Add;
    UINT32                      Flash4GBMapStart;
    UINT16                      NumBlocks;
    UINT16                      LastNcb = 0xFFFF;
    UINT8                       NcbType = AMI_SMI_FLASH_NC_BLOCK;
    UINT8                       i;
    UINT8                       InRomLayout;
    UINT16                      *StartBlock, *EndBlock;
    EFI_STATUS                  Status;
    AMI_SMI_FLASH_BLOCK_DESC    *pBlock;

    // Total buffer length
    // BuffLen = pInfoBlock->Length;

    // Reduce number of bytes used for header information
    BuffLen = pInfoBlock->Length - EFI_FIELD_OFFSET(AMI_SMI_FLASH_INFO_BLOCK, Blocks);

    // Get the total block count
    pInfoBlock->TotalBlocks = NumBlocks = NUMBER_OF_BLOCKS;

    // Calculate the flash mapping start address. This is calculated
    // as follows:
    //  1. Find the total size of the flash (FLASH_BLOCK_SIZE *
    //      pInfoBlock->TotalBlocks)
    //  2. Subtract the total flash size from 4GB
    // If flash doesn't map to any MMIO space, i.e. FlashDeviceBase equals to 0, 
    // mapping address(Flash4GBMapStart) is zero.
    if (FlashDeviceBase != 0) {
        Flash4GBMapStart = 0xFFFFFFFF - (FLASH_BLOCK_SIZE * NumBlocks);
        Flash4GBMapStart ++;
    } else {
        Flash4GBMapStart = 0;
    }

    BlkOff = (UINT64)&pInfoBlock->Blocks;

    // Chek whether we have enough buffer space
    if (BuffLen < (sizeof (AMI_SMI_FLASH_BLOCK_DESC) * NumBlocks)) {
        pInfoBlock->TotalBlocks = 0;
        pInfoBlock->Implemented = 1;
        return EFI_BUFFER_TOO_SMALL;
    }

    //Calculate RomLayout's start ant end block
    Status = gSmst->SmmAllocatePool (
                        EfiRuntimeServicesData,
                        gSmiFlashAreas * sizeof(UINT16),
                        (VOID**)&StartBlock );
    if (EFI_ERROR(Status)) return Status;
    Status = gSmst->SmmAllocatePool (
                        EfiRuntimeServicesData,
                        gSmiFlashAreas * sizeof(UINT16),
                        (VOID**)&EndBlock );
    if (EFI_ERROR(Status)) return Status;
    for( i = 0; i < gSmiFlashAreas; i++ )
    {
        StartBlock[i] = (UINT16)(gSmiFlashLayout[i].Offset / FLASH_BLOCK_SIZE);
        EndBlock[i] = StartBlock[i] + (UINT16)(gSmiFlashLayout[i].Size / FLASH_BLOCK_SIZE) - 1;
    }

    //Assign types
    NcbType = NcbType + (UINT8)gNumberOfNcb - 1;
    for (pBlock = NULL, Index = 0; Index < NumBlocks; Index++) {

        pBlock = (AMI_SMI_FLASH_BLOCK_DESC *)BlkOff;
        Add = Index * FLASH_BLOCK_SIZE;

        pBlock->StartAddress = Add;
        Add |= Flash4GBMapStart;
        pBlock->BlockSize = FLASH_BLOCK_SIZE;

        InRomLayout = 0;
        for( i = 0; i < gSmiFlashAreas; i++ )
        {
            if( Index >= StartBlock[i] && Index <= EndBlock[i] )
            {
                pBlock->Type = gSmiFlashLayout[i].Type;
                InRomLayout = 1;
                break;
            }
        }

        if ( InRomLayout == 0 )
        {
            if (LastNcb+1 != Index) NcbType++;
            pBlock->Type = NcbType;
            LastNcb=Index;
        }
        BlkOff += sizeof (AMI_SMI_FLASH_BLOCK_DESC);
    }

    gSmst->SmmFreePool(StartBlock);
    gSmst->SmmFreePool(EndBlock);

    // Info AFU Project Tag length.
    if (((UINT64)pInfoBlock + pInfoBlock->Length) > (BlkOff + AptioVProjectTagLength))
    {
        CHAR8   *ProjectTag = STR(PROJECT_TAG);
        UINTN   TagLength;
        UINT8   ProjectTagSign[4] = {'$','B','P','T'};

        TagLength = Strlen(ProjectTag);

        CopyMem( (VOID*)BlkOff, (VOID*)ProjectTagSign, 4 );
        BlkOff += sizeof (UINT32);
        *(UINT8*)BlkOff++ = (UINT8)TagLength;
        // Added for AFU to identify the Core Version.
        *(UINT8*)BlkOff = 'V';
    }

#if defined (FLASH_PART_STRING_LENGTH) && (FLASH_PART_STRING_LENGTH != 0)
    if (((UINT64)pInfoBlock + pInfoBlock->Length) > (++BlkOff + FLASH_PART_STRING_LENGTH + FlashStringTagLength))
        GetFlashPartInfomation ( (UINT8*)((UINTN)Flash4GBMapStart), (UINT8*)BlkOff );

    BlkOff += (FlashStringTagLength + FLASH_PART_STRING_LENGTH - 1); // BlkOff points to the end of current buffer
#endif

    if (((UINT64)pInfoBlock + pInfoBlock->Length) > (++BlkOff + BackupTypeTagLength)) {

#if SmiFlashBackupType_SUPPORT
        UINT8   BackupSupportTagSign[4] = {'$','B','T','S'};
#else
        UINT8   BackupSupportTagSign[4] = {0, 0, 0, 0};
#endif
        CopyMem ( (VOID*)BlkOff, (VOID*)BackupSupportTagSign, BackupTypeTagLength );
    }
    return EFI_SUCCESS;
}
/**
  Procedure to report the Flash Blocks Information.

  @param pInfoBlock     specifies the where the blocks infomation to be stored.

  @retval EFI_SUCCESS             The information of flash blocks are reported 
  @retval EFI_BUFFER_TOO_SMALL    The given buffer is too small for flash block information
**/
EFI_STATUS
EFIAPI
GetFlashInfo(
    IN  OUT AMI_SMI_FLASH_INFO_BLOCK  *pInfoBlock
)
{
    EFI_STATUS  Status;
    IoWrite8( 0x80,0x25 );
    pInfoBlock->Version = SMI_FLASH_INTERFACE_VERSION;
    //pInfoBlock->Implemented = 0;
#if SMI_FLASH_INTERFACE_VERSION > 10
#if EC_FIRMWARE_UPDATE_INTERFACE_SUPPORT
    pInfoBlock->ECVersionOffset = EC_VERSION_OFFSET;
    pInfoBlock->ECVersionMask = EC_VERSION_MASK;
#else
    pInfoBlock->ECVersionOffset = 0;
    pInfoBlock->ECVersionMask = 0;
#endif
#endif
#if SMI_FLASH_INTERFACE_VERSION >= 14
    pInfoBlock->BaseBlockSize = 0;
    pInfoBlock->BiosRomSize = 0;
    MemSet( &(pInfoBlock->Reserved[0]), sizeof(pInfoBlock->Reserved), 0 );
#endif
    switch( pInfoBlock->Implemented )
    {
        // Rom Layout migration handle.
        case 2 :
            Status = RomLayoutMigrationHandler( pInfoBlock );
            break;
        // Generate Block Infomation Descripters
        default :
            Status = GenBlockInfoDescriptors( pInfoBlock);
    }
    if (!EFI_ERROR(Status)) pInfoBlock->Implemented = 0;
    return Status;
}

/**
  Procedure to enable the ability to write to the flash

  @param FuncBlock    Contain the block information for flash write enable 

  @retval EFI_SUCCESS    Enable the ability to write to the flash successfully
**/
EFI_STATUS
EFIAPI
EnableFlashWrite(
    IN  OUT AMI_SMI_FLASH_FUNC_BLOCK  *pFuncBlock
)
{
    return gAmiFlash->DeviceWriteEnable();
}

/**
  Procedure to disable the ability to write to the flash

  @param FuncBlock    Contain the block information for flash write disable 

  @retval EFI_SUCCESS    Disable the ability to write to the flash successfully          
**/
EFI_STATUS
EFIAPI
DisableFlashWrite(
    IN  OUT AMI_SMI_FLASH_FUNC_BLOCK  *pFuncBlock
)
{
    return gAmiFlash->DeviceWriteDisable();
}

/**
  Procedure to erase Flash block.
  
  @param FuncBlock      Contain the block information for flash erase
  
  @retval EFI_SUCCESS    Flash block erase successfully
**/
EFI_STATUS
EFIAPI
EraseFlash(
    IN  OUT AMI_SMI_FLASH_FUNC_BLOCK  *pFuncBlock
)
{
    EFI_STATUS  Status;
    UINT8       *BlockAddress;
    UINTN       EraseSize;

    EraseSize = (UINTN)(pFuncBlock->BlockSize);
    if (FlashDeviceBase != 0) {
        BlockAddress = (UINT8*)(UINTN)(pFuncBlock->BlockAddr + (0xFFFFFFFF - SmiFlash.FlashCapacity + 1));
        BlockAddress = (UINT8*)((UINTN)BlockAddress & (0xFFFFFFFF - EraseSize + 1));
    } else {
        BlockAddress = (UINT8*)(UINTN)(pFuncBlock->BlockAddr);
        BlockAddress = (UINT8*)((UINTN)BlockAddress & (0xFFFFFFFF - EraseSize + 1));
    }

    // Checking access rang for avoiding the privilege escalation into SMM 
    // via Smiflash driver.
    if(EFI_ERROR(SmiFlashValidateFlashRange( BlockAddress, EraseSize ))){
        pFuncBlock->ErrorCode = 1;
        return EFI_ACCESS_DENIED;
    }
#if NVRAM_MIGRATION
    //Do Nvram migration if Nvram block was erased
    if (!DoNvramMigration && ((UINT64)BlockAddress >= CurNvramAddress) && ((UINT64)BlockAddress < CurNvramEndAddress))
        DoNvramMigration = TRUE;

#if SMIFLASH_NV_BLOCK_FAULT_TOLERANT_UPDATE

    //Move variable data to NV_BACKUP when erase NV_MAIN if NV_MAIN is active NVRAM block and NV_BACKUP area exsits
    if (NVRAM_BACKUP_ADDRESS != 0 && (UINT64)BlockAddress == NVRAM_ADDRESS && CurNvramSize != 0) {

        EFI_GUID    SmiFlashNvramSaveUpdateGuid = SMIFLASH_NVRAM_SAFE_UPDATE_GUID;
        EFI_GUID    SmiFlashEmptyNvarGuid = SMIFLASH_EMPTY_NVAR_GUID;
        EFI_GUID    *VarGuid = (EFI_GUID*)(NVRAM_ADDRESS + CurNvramSize - sizeof(EFI_GUID));
        BOOLEAN     MoveNvramData = FALSE;
        UINT32      NvEraseFlag = 1;
        UINT32      VarAttr = EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS | EFI_VARIABLE_RUNTIME_ACCESS;
        AMI_NVRAM_UPDATE_PROTOCOL   *AmiNvramUpdate = NULL;

        Status = gSmst->SmmLocateProtocol(&AmiSmmNvramUpdateProtocolGuid, NULL, (VOID**)&AmiNvramUpdate);
        if (!EFI_ERROR(Status)) { 

            //Use NvErase variable to detect current active NVRAM block
            Status = pRS->SetVariable (L"NvErase", &SmiFlashNvramSaveUpdateGuid, VarAttr, sizeof(UINT32), &NvEraseFlag);

            if (!EFI_ERROR(Status)) {
                //If SmiFlashNvramSaveUpdateGuid can be found in NV_MAIN guid area means NV_MAIN is current active NVRAM BLOCK
                for( ; !CompareGuid(&SmiFlashEmptyNvarGuid, VarGuid) && VarGuid > (EFI_GUID*)NVRAM_ADDRESS; VarGuid--) {

                    if (CompareGuid(&SmiFlashNvramSaveUpdateGuid, VarGuid)) { 
                        //NV_MAIN is active, move NV data from main to backup
                        Status = pRS->SetVariable (L"NvErase", &SmiFlashNvramSaveUpdateGuid, VarAttr, 0, &NvEraseFlag);
                        MoveNvramData = TRUE;
                        break;
                    }
                }
                if (MoveNvramData) {
                    //Use MigrateNvram and UpdateNvram functions to move NVRAM data
                    AmiNvramUpdate->MigrateNvram (AmiNvramUpdate, NVRAM_BACKUP_ADDRESS, NVRAM_ADDRESS, CurNvramSize);
                    AmiNvramUpdate->UpdateNvram(AmiNvramUpdate, (VOID*)NVRAM_ADDRESS, CurNvramSize, TRUE);
                }
            }
        }
    }

    //Do not erase NV_BACKUP area, will do this in flash write function later
    if (((UINT64)BlockAddress >= NVRAM_BACKUP_ADDRESS) && ((UINT64)BlockAddress < NVRAM_BACKUP_ADDRESS + CurNvramSize)) {
        pFuncBlock->ErrorCode = 0;
        return EFI_SUCCESS;
    }
#endif
#endif
    Status = gAmiFlash->Erase( (VOID*)BlockAddress, EraseSize );
    pFuncBlock->ErrorCode = EFI_ERROR(Status) != 0;
    return Status;
}

/**
  Procedure to disable the ability to write to the flash

  @param FuncBlock    Contain the block information for flash write disable 

  @retval EFI_SUCCESS    Disable the ability to write to the flash successfully
**/
EFI_STATUS
EFIAPI
ReadFlash(
    IN  OUT AMI_SMI_FLASH_FUNC_BLOCK  *pFuncBlock
)
{
    UINT32      Flash4GBMapStart;
    EFI_STATUS  Status;

    if (FlashDeviceBase != 0) {
        Flash4GBMapStart = 0xFFFFFFFF - (FLASH_BLOCK_SIZE * NUMBER_OF_BLOCKS);
        Flash4GBMapStart++;
    } else {
        Flash4GBMapStart = 0;
    }

    // Checking access rang for avoiding the privilege escalation into SMM
    // via Smiflash driver.
    if (EFI_ERROR(SmiFlashValidateFlashRange ((UINT8*)(UINTN)(Flash4GBMapStart + pFuncBlock->BlockAddr),  pFuncBlock->BlockSize))) {
        pFuncBlock->ErrorCode = 1;
        return EFI_ACCESS_DENIED;
    }

    if (EFI_ERROR(AmiValidateMemoryBuffer ((UINT8*)pFuncBlock->BufAddr, pFuncBlock->BlockSize))){
        pFuncBlock->ErrorCode = 1;
        return EFI_ACCESS_DENIED;
    }

    Status = gAmiFlash->Read(
                    (VOID*)(UINTN)(Flash4GBMapStart + pFuncBlock->BlockAddr),
                    pFuncBlock->BlockSize,
                    (VOID*)pFuncBlock->BufAddr );
    pFuncBlock->ErrorCode = EFI_ERROR(Status) != 0;
    return Status;
}

/**
  Procedure to write Flash block.

  @param FuncBlock    Contain the block information for flash write

  @retval EFI_SUCCESS    Flash block write successfully
**/
EFI_STATUS
EFIAPI
WriteFlash(
    IN  OUT AMI_SMI_FLASH_FUNC_BLOCK  *pFuncBlock
)
{
    EFI_STATUS  Status;
    UINT8       *FlashAddress;

    if (FlashDeviceBase != 0)
        FlashAddress = (UINT8*)(UINTN)(pFuncBlock->BlockAddr + (0xFFFFFFFF - SmiFlash.FlashCapacity + 1));
    else
        FlashAddress =  (UINT8*)(UINTN)(pFuncBlock->BlockAddr);

    // Checking access rang for avoiding the privilege escalation into SMM 
    // via Smiflash driver.
    if (EFI_ERROR(SmiFlashValidateFlashRange((UINT8*)FlashAddress, pFuncBlock->BlockSize))){
        pFuncBlock->ErrorCode = 1;
        return EFI_ACCESS_DENIED;
    }
    if (EFI_ERROR(AmiValidateMemoryBuffer ((UINT8*)pFuncBlock->BufAddr, pFuncBlock->BlockSize))){
        pFuncBlock->ErrorCode = 1;
        return EFI_ACCESS_DENIED;
    }

#if SMIFLASH_NV_BLOCK_FAULT_TOLERANT_UPDATE
    //Since NV_BACKUP erase is skip, erase it here
    if (((UINT64)FlashAddress >= NVRAM_BACKUP_ADDRESS) && ((UINT64)FlashAddress < NVRAM_BACKUP_ADDRESS + CurNvramSize)) {
        Status = gAmiFlash->Erase( (VOID*)FlashAddress, FlashBlockSize );
        if (EFI_ERROR(Status)) {
            pFuncBlock->ErrorCode = EFI_ERROR(Status) != 0;
            return Status;
        }
    }
#endif

    Status = gAmiFlash->Write(
                        (VOID*)FlashAddress,
                        pFuncBlock->BlockSize,
                        (VOID*)pFuncBlock->BufAddr );
    pFuncBlock->ErrorCode = (EFI_ERROR(Status) != 0);
    return Status;
}


#if SMI_FLASH_INTERFACE_VERSION >= 14
/**
    Procedure to sync up the content of the new AMI_SMI_FLASH_INFO_BLOCK buffer

    @param OrgInfoBlock   The original input buffer pointer that comes from flash tools
    @param NewInfoBlock   The new InfoBlock buffer pointer
    @param NewBufferSize  New InfoBlock buffer size

**/
VOID
SyncBufferContent(
    IN      AMI_SMI_FLASH_INFO_BLOCK    *OrgInfoBlock,
    IN  OUT AMI_SMI_FLASH_INFO_BLOCK    *NewInfoBlock,
    IN      UINT32 NewBufferSize
)
{
    UINTN   CopySize;

    if( OrgInfoBlock->Length > NewBufferSize )
        CopySize = NewBufferSize;
    else
        CopySize = OrgInfoBlock->Length;

    CopyMem( (VOID*)NewInfoBlock, (VOID*)OrgInfoBlock, CopySize );
    //Update Buffer length of New Buffer
    NewInfoBlock->Length = NewBufferSize;
}

/**
    Procedure to check if we need to enlarge the AMI_SMI_FLASH_INFO_BLOCK buffer and 

    @param pInfoBlock      The original input buffer pointer that comes from flash tools
    @param TempCommBuffer  The new InfoBlock buffer pointer
    @param TempBufferSize  New InfoBlock buffer size

**/
BOOLEAN
NeedPreEnlargeSyncBuffer(
    IN AMI_SMI_FLASH_INFO_BLOCK  *pInfoBlock,
    OUT UINT64 *TempCommBuffer
)
{
    UINT32          BuffLen;
    UINT8           Version;
    UINT32          BufferSize;
    EFI_STATUS      BufferStatus;
    BOOLEAN         AfuNewFormat = FALSE;
    UINT64          *Buffer = NULL;
    static BOOLEAN  RetryBufferTooSmall = FALSE;

    BuffLen = pInfoBlock->Length - EFI_FIELD_OFFSET(AMI_SMI_FLASH_INFO_BLOCK, Blocks);
    Version = pInfoBlock->Version;

    // Use the SMI_FLASH_INTERFACE_VERSION to check if the AFU or SmiFlash
    // support the Flash part that is equal or bigger than 32Mbyte.
    if ((Version >=14) && RetryBufferTooSmall) {
        AfuNewFormat = TRUE;
    }else{
        AfuNewFormat = FALSE;
        if (BuffLen < (sizeof (AMI_SMI_FLASH_BLOCK_DESC) * NUMBER_OF_BLOCKS))
            RetryBufferTooSmall = TRUE;
        return FALSE;
    }

    // Only support for the new version flash tool
    if ( RetryBufferTooSmall && AfuNewFormat ){
        BufferSize = sizeof (AMI_SMI_FLASH_BLOCK_DESC) * NUMBER_OF_BLOCKS + EFI_FIELD_OFFSET(AMI_SMI_FLASH_INFO_BLOCK, Blocks) + ExtraFlashInfoBlockSize;
        BufferStatus = gSmst->SmmAllocatePool (
            EfiRuntimeServicesData,
            BufferSize,
            (VOID**)&Buffer );
        if (EFI_ERROR(BufferStatus)){
            return FALSE;
        }
        *TempCommBuffer = (UINT64)Buffer;
        SyncBufferContent( pInfoBlock, (AMI_SMI_FLASH_INFO_BLOCK *)Buffer, BufferSize);
        return TRUE;
    }
    return FALSE;
}

/**
    Procedure to patch the return buffer for Tool Compatibility 

    @param pInfoBlock      The buffer pointer that will send back to flash tools
**/
VOID
PatchFlashToolCompatibility (
  IN AMI_SMI_FLASH_INFO_BLOCK  *pInfoBlock
  )
{
    UINT32  TargetSize;
    // Checking the the return info_blocks is the fixed or unfixed info_blocks
    // BaseBlockSize, BiosRomSize are "0" in the fixed size formate
    if ((pInfoBlock->BaseBlockSize ==0) && (pInfoBlock->BiosRomSize == 0)){
        TargetSize = sizeof (AMI_SMI_FLASH_BLOCK_DESC)* NUMBER_OF_BLOCKS + ExtraFlashInfoBlockSize;

        if (TargetSize >= pInfoBlock->Length)
            TargetSize = pInfoBlock->Length - EFI_FIELD_OFFSET(AMI_SMI_FLASH_INFO_BLOCK, BiosRomSize);
        CopyMem( (VOID*)(&(pInfoBlock->BiosRomSize)), (VOID*)(&(pInfoBlock->Blocks[0])), TargetSize );
    }
}

/**
    Procedure to update the AMI_SMI_FLASH_BLOCK_DESC

    @param Target      The destination AMI_SMI_FLASH_INFO_BLOCK pointer 
    @param Source      The source AMI_SMI_FLASH_INFO_BLOCK pointer
    @param SourceIdx   The source buffer index
    @param TargetIdx   The destination buffer index
**/
VOID
UpdateInfoBlocks (
    OUT AMI_SMI_FLASH_INFO_BLOCK    *Target,
    IN  AMI_SMI_FLASH_INFO_BLOCK    *Source,
    IN  UINT32                      SourceIdx,
    IN  UINT32                      TargetIdx
)
{
    Target->Blocks[TargetIdx].StartAddress = Source->Blocks[SourceIdx].StartAddress;
    Target->Blocks[TargetIdx].BlockSize = Source->Blocks[SourceIdx].BlockSize;
    Target->Blocks[TargetIdx].Type = Source->Blocks[SourceIdx].Type;
}

/**
    Procedure to update the AMI_SMI_FLASH_BLOCK_DESC

    @param Target      The destination AMI_SMI_FLASH_INFO_BLOCK pointer 
    @param Source      The source AMI_SMI_FLASH_INFO_BLOCK pointer
**/
VOID
MergeInfoBloksToUnfixedSize (
    OUT AMI_SMI_FLASH_INFO_BLOCK    *Target,
    IN  AMI_SMI_FLASH_INFO_BLOCK    *Source
)
{
    UINT32  Counter = 0;
    UINT32  Base = 0;
    UINT32  Index;

    for(Index = 1; Index < Source->TotalBlocks; Index++){
        if (Source->Blocks[Base].Type != Source->Blocks[Index].Type){
            UpdateInfoBlocks(Target, Source, Base, Counter);
            Counter++;
            Base = Index;
            // if the Base Block is the last one, then add to 
            if (Base == (UINT32)(Source->TotalBlocks-1)){
                UpdateInfoBlocks(Target, Source, Base, Counter);
                Counter++;
            }
        }else{
            Source->Blocks[Base].BlockSize += Source->Blocks[Index].BlockSize;
            if (Index == (UINT32)(Source->TotalBlocks-1)){
                UpdateInfoBlocks(Target, Source, Base, Counter);
                Counter++;
            }
        }
    }

    // Update Header information of AMI_SMI_FLASH_INFO_BLOCK
    CopyMem( (VOID*)Target, (VOID*)Source, EFI_FIELD_OFFSET(AMI_SMI_FLASH_INFO_BLOCK, Blocks) );

    // Update TotalBlocks, BiosRomSize, BaseBlockSize
    Target->TotalBlocks = (UINT16)Counter;
    Target->BiosRomSize = NUMBER_OF_BLOCKS * FLASH_BLOCK_SIZE;
    Target->BaseBlockSize = FLASH_BLOCK_SIZE;

    // Copy extra Flash infomation
    CopyMem(
        (VOID*)(&(Target->Blocks[Target->TotalBlocks])),
        (VOID*)(&(Source->Blocks[Source->TotalBlocks])),
        ExtraFlashInfoBlockSize );
}
#endif

/**
    Procedure to SmiFlash SMI handler.

    @param DispatchHandle   The unique handle assigned to this handler by SmiHandlerRegister().
    @param Context          Points to an optional handler context which was specified when the
                            handler was registered.
    @param CommBuffer       A pointer to a collection of data in memory that will
                            be conveyed from a non-SMM environment into an SMM environment.
    @param CommBufferSize   The size of the CommBuffer.

    @retval EFI_SUCCESS Command is handled successfully.
**/
EFI_STATUS
EFIAPI
SMIFlashSMIHandler(
    IN      EFI_HANDLE  DispatchHandle,
    IN      CONST VOID  *Context OPTIONAL,
    IN  OUT VOID        *CommBuffer OPTIONAL,
    IN  OUT UINTN       *CommBufferSize OPTIONAL
)
{

    EFI_STATUS  Status = EFI_SUCCESS;
    UINT8       Data = 0;
    UINT64      pCommBuff;
#if SMI_FLASH_INTERFACE_VERSION >= 14
    UINT64      OrgCommBuff = 0;
    UINT32      OrgBufferSize = 0;
    UINT64      NewBuffer = 0;
    BOOLEAN     UseUnfixedSizeInfo = FALSE;
#endif
    UINT32      HighBufferAddress = 0;
    UINT32      LowBufferAddress = 0;
    UINTN       Cpu = (UINTN)-1, i = 0;

    if (CommBuffer != NULL && CommBufferSize != NULL) {
        Cpu = ((EFI_SMM_SW_CONTEXT*)CommBuffer)->SwSmiCpuIndex;
        Data = ((EFI_SMM_SW_CONTEXT*)CommBuffer)->CommandPort;
    }
    //
    // Found Invalid CPU number, return 
    //
    if(Cpu == (UINTN)-1) return Status;

    Status = gSmmCpu->ReadSaveState ( gSmmCpu,
                                      4,
                                      EFI_SMM_SAVE_STATE_REGISTER_RBX,
                                      Cpu,
                                      &LowBufferAddress );

    Status = gSmmCpu->ReadSaveState ( gSmmCpu,
                                      4,
                                      EFI_SMM_SAVE_STATE_REGISTER_RCX,
                                      Cpu,
                                      &HighBufferAddress );

    pCommBuff           = HighBufferAddress;
    pCommBuff           = Shl64(pCommBuff, 32);
    pCommBuff           += LowBufferAddress;

    // Checking access rang for avoiding the privilege escalation into SMM 
    // via Smiflash driver.
    if(Data == AMI_SMI_FLASH_GET_FLASH_INFO_SMI) {
        Status = AmiValidateMemoryBuffer((UINT8*)pCommBuff, sizeof(AMI_SMI_FLASH_INFO_BLOCK));
        if(!EFI_ERROR(Status))
            Status = AmiValidateMemoryBuffer((UINT8*)pCommBuff, ((AMI_SMI_FLASH_INFO_BLOCK *)pCommBuff)->Length);
    } else Status = AmiValidateMemoryBuffer((UINT8*)pCommBuff, sizeof(AMI_SMI_FLASH_FUNC_BLOCK));
    if(EFI_ERROR(Status)) return Status;

    // Initial Error code for blocking Flash Update from PreHandler eLink.
    if (Data != AMI_SMI_FLASH_GET_FLASH_INFO_SMI) ((AMI_SMI_FLASH_FUNC_BLOCK*)pCommBuff)->ErrorCode = 0;

    for (i = 0; SMIFlashPreHandler[i] != NULL; SMIFlashPreHandler[i++](Data, pCommBuff));
    // Process SmiFlash functions if GetFlashInfo call or No Error.
    if ((Data == AMI_SMI_FLASH_GET_FLASH_INFO_SMI) || \
        (((AMI_SMI_FLASH_FUNC_BLOCK*)pCommBuff)->ErrorCode == 0)) {

        switch (Data) {
            case AMI_SMI_FLASH_ENABLE_FLASH_SMI:      // Enable Flash
                for (i = 0; SMIFlashPreUpdate[i] != NULL; SMIFlashPreUpdate[i++]());
                EnableFlashWrite((AMI_SMI_FLASH_FUNC_BLOCK *)pCommBuff);
                break;

            case AMI_SMI_FLASH_DISABLE_FLASH_SMI:      // Disable Flash
#if NVRAM_MIGRATION
                if (DoNvramMigration) {
                    AMI_NVRAM_UPDATE_PROTOCOL   *AmiNvramUpdate;
                    DoNvramMigration = FALSE;
                    if (!EFI_ERROR(gSmst->SmmLocateProtocol (&AmiSmmNvramUpdateProtocolGuid, NULL, (VOID**)&AmiNvramUpdate))) {

                        AmiNvramUpdate->MigrateNvram (AmiNvramUpdate, CurNvramAddress, CurNvramBackupAddress, CurNvramSize);
                    }
                }
#endif
                for (i = 0; SMIFlashEndUpdate[i] != NULL; SMIFlashEndUpdate[i++]());
                DisableFlashWrite((AMI_SMI_FLASH_FUNC_BLOCK *)pCommBuff);
                break;

            case AMI_SMI_FLASH_ERASE_FLASH_SMI:      // Erase Flash
                EraseFlash((AMI_SMI_FLASH_FUNC_BLOCK *)pCommBuff);
                break;

            case AMI_SMI_FLASH_READ_FLASH_SMI:      // Read Flash
                ReadFlash((AMI_SMI_FLASH_FUNC_BLOCK *)pCommBuff);
                break;

            case AMI_SMI_FLASH_WRITE_FLASH_SMI:      // Write Flash
                WriteFlash((AMI_SMI_FLASH_FUNC_BLOCK *)pCommBuff);
                break;

            case AMI_SMI_FLASH_GET_FLASH_INFO_SMI:      // Get Flash Info
#if SMI_FLASH_INTERFACE_VERSION >= 14
                //Checking see if we need to enlarge the buffer
                OrgBufferSize = ((AMI_SMI_FLASH_INFO_BLOCK *)pCommBuff)->Length;
                UseUnfixedSizeInfo = NeedPreEnlargeSyncBuffer( (AMI_SMI_FLASH_INFO_BLOCK *)pCommBuff, &NewBuffer );
                if( UseUnfixedSizeInfo == TRUE ) {
                    OrgCommBuff = pCommBuff;
                    pCommBuff = NewBuffer;
                }
#endif
                GetFlashInfo((AMI_SMI_FLASH_INFO_BLOCK *)pCommBuff);
                break;
        }
    }
    for (i = 0; SMIFlashEndHandler[i] != NULL; SMIFlashEndHandler[i++](Data, pCommBuff));
#if SMI_FLASH_INTERFACE_VERSION >= 14
    if (Data == AMI_SMI_FLASH_GET_FLASH_INFO_SMI){
        if (UseUnfixedSizeInfo){
            //Merge the INFO_BLOCKs and convert it to new format
            MergeInfoBloksToUnfixedSize((AMI_SMI_FLASH_INFO_BLOCK *)OrgCommBuff, (AMI_SMI_FLASH_INFO_BLOCK *)pCommBuff);

            //Roll back the original buffer size before returnning back to the flash tool
            ((AMI_SMI_FLASH_INFO_BLOCK *)OrgCommBuff)->Length = OrgBufferSize;
            if (NewBuffer){
                gSmst->SmmFreePool((VOID *)NewBuffer);
                NewBuffer = 0;
                pCommBuff = OrgCommBuff;
            }
        }
        PatchFlashToolCompatibility((AMI_SMI_FLASH_INFO_BLOCK *)pCommBuff);
    }
#endif
    return Status;
}

/**
    Procedure to prepare Rom Layout information for reporting Flash Infomatoin used.

    @retval EFI_SUCCESS Flash read successfully.
**/
EFI_STATUS
PrepareSmiFlashLayout(
    VOID
)
{
    EFI_STATUS      Status;
    AMI_ROM_AREA    *AmiRomLayout;
    UINT32          RomAreaSize;
    UINT32          RomLayoutSize;
    UINT8           Index;

    //Get AmiRomLayout information
    Status = AmiGetRomLayout( &AmiRomLayout, NULL, &RomAreaSize, &RomLayoutSize );
    if( EFI_ERROR(Status) )
        return Status;

    gSmiFlashAreas = RomLayoutSize / RomAreaSize;

    gSmiFlashLayout = AllocatePool( gSmiFlashAreas * sizeof(SMI_FLASH_ROM_AREA) );
    if( gSmiFlashLayout == NULL )
        return EFI_OUT_OF_RESOURCES;

    for( Index = 0; Index < gSmiFlashAreas; Index++ )
    {
        CopyGuid( &gSmiFlashLayout[Index].Guid, &AmiRomLayout[Index].Guid );
        gSmiFlashLayout[Index].Address = AmiRomLayout[Index].Address;
        gSmiFlashLayout[Index].Offset = AmiRomLayout[Index].Offset;
        gSmiFlashLayout[Index].Size = AmiRomLayout[Index].Size;
        gSmiFlashLayout[Index].Type = (AMI_SMI_FLASH_FLASH_BLOCK_TYPE)AmiRomLayout[Index].Type;
        gSmiFlashLayout[Index].Attributes = AmiRomLayout[Index].Attributes;
    }

    //Sorting
    for( Index = 0; Index < gSmiFlashAreas; Index++ )
    {
        UINT8   Index2;

        for( Index2 = Index + 1; Index2 < gSmiFlashAreas; Index2++ )
        {
            if( gSmiFlashLayout[Index2].Offset < gSmiFlashLayout[Index].Offset )
            {
                UINTN               CopySize;
                SMI_FLASH_ROM_AREA  RomAreaBuffer;

                CopySize = sizeof(SMI_FLASH_ROM_AREA);
                CopyMem( (VOID*)&RomAreaBuffer, (VOID*)&gSmiFlashLayout[Index2], CopySize );
                CopyMem( (VOID*)&gSmiFlashLayout[Index2], (VOID*)&gSmiFlashLayout[Index], CopySize );
                CopyMem( (VOID*)&gSmiFlashLayout[Index], (VOID*)&RomAreaBuffer, CopySize );
            }
        }
    }

    //Prepare the AMI_SMI_FLASH_FLASH_BLOCK_TYPE
    for( Index = 0; Index < gSmiFlashAreas; Index++ )
    {
        SMI_FLASH_ROM_AREA  *SmiFlashArea;
        EFI_GUID            AmiFvBbGuid = AMI_FV_BB_GUID;
        EFI_GUID            AmiFvMainGuid = AMI_FV_MAIN_GUID;
        EFI_GUID            AmiFvMainWrapperGuid = AMI_FV_MAIN_WRAPPER_GUID;

        SmiFlashArea = &gSmiFlashLayout[Index];
        if( CompareGuid( &(SmiFlashArea->Guid), &AmiFvBbGuid ) == TRUE )
        {
            SmiFlashArea->Type = AMI_SMI_FLASH_BOOT_BLOCK;
        }
        else if( (CompareGuid( &(SmiFlashArea->Guid), &AmiFvMainGuid ) == TRUE) ||
                 (CompareGuid( &(SmiFlashArea->Guid), &AmiFvMainWrapperGuid ) == TRUE) )
        {
            SmiFlashArea->Type = AMI_SMI_FLASH_MAIN_BLOCK;
        }
        else if( (CompareGuid( &(SmiFlashArea->Guid), &gAmiNvramMainRomAreaGuid ) == TRUE) ||
                 (CompareGuid( &(SmiFlashArea->Guid), &gAmiNvramBackupRomAreaGuid ) == TRUE) )
        {
            SmiFlashArea->Type = AMI_SMI_FLASH_NV_BLOCK;
        }
        else
        {
            switch( SmiFlashArea->Address )
            {
#if (EC_FIRMWARE_UPDATE_INTERFACE_SUPPORT == 1) && (SMI_FLASH_INTERFACE_VERSION > 10)
                case SMIFLASH_AMI_EC_BASE:
                    SmiFlashArea->Type = AMI_SMI_FLASH_EC_BLOCK;
                    break;
#endif
                default:
                    SmiFlashArea->Type = AMI_SMI_FLASH_NC_BLOCK + gNumberOfNcb;
                    gNumberOfNcb++;
            }
        }
    }

    return Status;
}

/**
    In SMM Function for SmiFlash SMM driver.

    @param[in] ImageHandle  Image handle of this driver.
    @param[in] SystemTable  A Pointer to the EFI System Table.

    @retval EFI_SUCEESS
    @return Others          Some error occurs.
**/
EFI_STATUS
InSmmFunction(
    IN  EFI_HANDLE          ImageHandle,
    IN  EFI_SYSTEM_TABLE    *SystemTable
)
{
    EFI_STATUS                      Status;
    UINTN                           Index;
    EFI_HANDLE                      Handle;
    EFI_HANDLE                      DummyHandle;
    EFI_SMM_SW_DISPATCH2_PROTOCOL   *SwDispatch;

    Status = InitAmiSmmLib( ImageHandle, SystemTable );

    Status = gSmst->SmmLocateProtocol(
                    &gEfiSmmSwDispatch2ProtocolGuid,
                    NULL,
                    (VOID**)&SwDispatch );
    if( EFI_ERROR(Status) )
        return EFI_SUCCESS;

    Status = gSmst->SmmLocateProtocol(
                    &gEfiSmmCpuProtocolGuid,
                    NULL,
                    (VOID**)&gSmmCpu );
    if( EFI_ERROR(Status) )
        return EFI_SUCCESS;

    Status = gSmst->SmmLocateProtocol(
                    &gAmiSmmFlashProtocolGuid,
                    NULL,
                    (VOID**)&gAmiFlash );
    ASSERT_EFI_ERROR(Status);
    if( EFI_ERROR(Status) )
        return EFI_SUCCESS;

    DEBUG((DEBUG_INFO, "SmiFlash: Flash Protocol %X\n", gAmiFlash));

    for( Index = 0x20; Index < 0x26; Index++ )
    {
        EFI_SMM_SW_REGISTER_CONTEXT SwContext;

        SwContext.SwSmiInputValue = Index;
        Status  = SwDispatch->Register(
                                SwDispatch,
                                SMIFlashSMIHandler,
                                &SwContext,
                                &Handle );
        if( EFI_ERROR(Status) )
            return EFI_SUCCESS;
        //If any errors, unregister any registered SwSMI by this driver.
        //If error, and driver is unloaded, then a serious problem would exist.
    }

    DummyHandle = NULL;
    Status = gSmst->SmmInstallProtocolInterface(
                    &DummyHandle,
                    &gAmiSmiFlashProtocolGuid,
                    EFI_NATIVE_INTERFACE,
                    &SmiFlash );
    ASSERT_EFI_ERROR(Status);

    Status = PrepareSmiFlashLayout();
    ASSERT_EFI_ERROR(Status);

    GetCurrentNvramInfo();
    for( Index = 0; SMIFlashInSmm[Index] != NULL; SMIFlashInSmm[Index++]() );

    return EFI_SUCCESS;
}

/**
    Entry Point for SmiFlash SMM driver.

    @param[in] ImageHandle  Image handle of this driver.
    @param[in] SystemTable  A Pointer to the EFI System Table.

    @retval EFI_SUCEESS
    @return Others          Some error occurs.
**/
EFI_STATUS
EFIAPI
SMIFlashDriverEntryPoint(
    IN  EFI_HANDLE          ImageHandle,
    IN  EFI_SYSTEM_TABLE    *SystemTable
)
{
    InitAmiLib(ImageHandle, SystemTable);
    return InitSmmHandler (ImageHandle, \
                            SystemTable, InSmmFunction, NULL);
}