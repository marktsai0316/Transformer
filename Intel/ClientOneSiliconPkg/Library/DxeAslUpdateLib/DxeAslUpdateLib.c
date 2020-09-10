/** @file
  Boot service DXE ASL update library implementation.

  These functions in this file can be called during DXE and cannot be called during runtime
  or in SMM which should use a RT or SMM library.

  This library uses the ACPI Support protocol.

@copyright
  INTEL CONFIDENTIAL
  Copyright 1999 - 2018 Intel Corporation.

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
#include <Base.h>
#include <Uefi/UefiBaseType.h>
#include <Uefi/UefiSpec.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>

#include <Library/AslUpdateLib.h>

//
// Function implemenations
//
static EFI_ACPI_SDT_PROTOCOL      *mAcpiSdt = NULL;
static EFI_ACPI_TABLE_PROTOCOL    *mAcpiTable = NULL;

/**
  Initialize the ASL update library state.
  This must be called prior to invoking other library functions.

  @retval EFI_SUCCESS          - The function completed successfully.
**/
EFI_STATUS
InitializeAslUpdateLib (
  VOID
  )
{
  EFI_STATUS  Status;

  ///
  /// Locate ACPI tables
  ///
  Status = gBS->LocateProtocol (&gEfiAcpiSdtProtocolGuid, NULL, (VOID **) &mAcpiSdt);
  ASSERT_EFI_ERROR (Status);
  Status = gBS->LocateProtocol (&gEfiAcpiTableProtocolGuid, NULL, (VOID **) &mAcpiTable);
  ASSERT_EFI_ERROR (Status);
  return Status;
}

/**
  This function calculates and updates an UINT8 checksum.

  @param  Buffer          Pointer to buffer to checksum
  @param  Size            Number of bytes to checksum
  @param  ChecksumOffset  Offset to place the checksum result in

  @return EFI_SUCCESS             The function completed successfully.

**/
EFI_STATUS
AcpiPlatformChecksum (
  IN VOID       *Buffer,
  IN UINTN      Size,
  IN UINTN      ChecksumOffset
  )
{
  UINT8 Sum;
  UINT8 *Ptr;

  Sum = 0;
  //
  // Initialize pointer
  //
  Ptr = Buffer;

  //
  // set checksum to 0 first
  //
  Ptr[ChecksumOffset] = 0;

  //
  // add all content of buffer
  //
  while ((Size--) != 0) {
    Sum = (UINT8) (Sum + (*Ptr++));
  }
  //
  // set checksum
  //
  Ptr                 = Buffer;
  Ptr[ChecksumOffset] = (UINT8) (0xff - Sum + 1);

  return EFI_SUCCESS;
}

/**
  This procedure will update immediate value assigned to a Name

  @param[in] AslSignature      - The signature of Operation Region that we want to update.
  @param[in] Buffer            - source of data to be written over original aml
  @param[in] Length            - length of data to be overwritten

  @retval EFI_SUCCESS          - The function completed successfully.
  @retval EFI_NOT_FOUND        - Failed to locate AcpiTable.
**/
EFI_STATUS
UpdateNameAslCode (
  IN     UINT32               AslSignature,
  IN     VOID                 *Buffer,
  IN     UINTN                Length
  )
{
  EFI_STATUS                  Status;
  EFI_ACPI_DESCRIPTION_HEADER *Table;
  UINT8                       *CurrPtr;
  UINT8                       *EndPtr;
  UINT32                      *Signature;
  UINT8                       *DsdtPointer;
  UINTN                       Handle;
  UINT8                       DataSize;
// APTIOV_SERVER_OVERRIDE_RC_START
  EFI_ACPI_DESCRIPTION_HEADER *NewTable;
// APTIOV_SERVER_OVERRIDE_RC_END

  if (mAcpiTable == NULL) {
    InitializeAslUpdateLib ();
    if (mAcpiTable == NULL) {
      return EFI_NOT_READY;
    }
  }

  ///
  /// Locate table with matching ID
  ///
  Handle = 0;
  Status = LocateAcpiTableBySignature (
             EFI_ACPI_3_0_DIFFERENTIATED_SYSTEM_DESCRIPTION_TABLE_SIGNATURE,
             (EFI_ACPI_DESCRIPTION_HEADER **) &Table,
             &Handle
             );
  if (EFI_ERROR (Status)) {
    return Status;
  }

  ///
  /// Point to the beginning of the DSDT table
  ///
  CurrPtr = (UINT8 *) Table;
  if (CurrPtr == NULL) {
    return EFI_NOT_FOUND;
  }

  //
  // EndPtr = beginning of table + length of table
  //
  EndPtr = CurrPtr + ((EFI_ACPI_COMMON_HEADER *) CurrPtr)->Length;

  ///
  /// Loop through the ASL looking for values that we must fix up.
  ///
  for (DsdtPointer = CurrPtr; DsdtPointer < EndPtr; DsdtPointer++) {
    ///
    /// Get a pointer to compare for signature
    ///
    Signature = (UINT32 *) DsdtPointer;
    ///
    /// Check if this is the Device Object signature we are looking for
    ///
    if ((*Signature) == AslSignature) {
      ///
      /// Look for Name Encoding
      ///
      if (*(DsdtPointer-1) == AML_NAME_OP) {
        ///
        /// Check if size of new and old data is the same
        ///
        DataSize = *(DsdtPointer+4);
        if ((Length == 1 && DataSize == 0xA) ||
            (Length == 2 && DataSize == 0xB) ||
            (Length == 4 && DataSize == 0xC)) {
          CopyMem (DsdtPointer+5, Buffer, Length);
        } else if (Length == 1 && ((*(UINT8*) Buffer) == 0 || (*(UINT8*) Buffer) == 1) && (DataSize == 0 || DataSize == 1)) {
          CopyMem (DsdtPointer+4, Buffer, Length);
        } else {
          FreePool (Table);
          return EFI_BAD_BUFFER_SIZE;
        }
// APTIOV_SERVER_OVERRIDE_RC_START
        NewTable = AllocateRuntimeZeroPool (Table->Length);
        CopyMem (NewTable, Table, (Table->Length));
// APTIOV_SERVER_OVERRIDE_RC_END
        Status = mAcpiTable->UninstallAcpiTable (
                               mAcpiTable,
                               Handle
                               );
        Handle = 0;
        Status = mAcpiTable->InstallAcpiTable (
                               mAcpiTable,
                               // APTIOV_SERVER_OVERRIDE_RC_START
                               NewTable,
                               NewTable->Length,
                               // APTIOV_SERVER_OVERRIDE_RC_END
                               &Handle
                               );
// APTIOV_SERVER_OVERRIDE_RC_START
        FreePool (NewTable);
// APTIOV_SERVER_OVERRIDE_RC_END
        return Status;
      }
    }
  }
  return EFI_NOT_FOUND;
}

/**
  This procedure will update immediate value assigned to a Name in SSDT table

  @param[in] TableId           - Pointer to an ASCII string containing the OEM Table ID from the ACPI table header
  @param[in] TableIdSize       - Length of the TableId to match.  Table ID are 8 bytes long, this function
  @param[in] Buffer            - source of data to be written over original aml
  @param[in] Length            - length of data to be overwritten

  @retval EFI_SUCCESS          - The function completed successfully.
  @retval EFI_NOT_FOUND        - Failed to locate AcpiTable.
**/
EFI_STATUS
UpdateSsdtNameAslCode (
  IN     UINT8                         *TableId,
  IN     UINT8                         TableIdSize,
  IN     UINT32                        AslSignature,
  IN     VOID                          *Buffer,
  IN     UINTN                         Length
  )
{
  EFI_STATUS                  Status;
  EFI_ACPI_DESCRIPTION_HEADER *Table;
  UINT8                       *CurrPtr;
  UINT32                      *Signature;
  UINT8                       *SsdtPointer;
  UINTN                       Handle;
  UINT8                       DataSize;

  if (mAcpiTable == NULL) {
    InitializeAslUpdateLib ();
    if (mAcpiTable == NULL) {
      return EFI_NOT_READY;
    }
  }

  ///
  /// Locate table with matching ID
  ///
  Handle = 0;
  Status = LocateAcpiTableByOemTableId (
             TableId,
             TableIdSize,
             (EFI_ACPI_DESCRIPTION_HEADER **) &Table,
             &Handle
             );
  if (EFI_ERROR (Status)) {
    return Status;
  }

  ///
  /// Point to the beginning of the DSDT table
  ///
  CurrPtr = (UINT8 *) Table;
  if (CurrPtr == NULL) {
    return EFI_NOT_FOUND;
  }

  ///
  /// Loop through the ASL looking for values that we must fix up.
  ///
  for (SsdtPointer = CurrPtr; SsdtPointer <= (CurrPtr + ((EFI_ACPI_COMMON_HEADER *) CurrPtr)->Length); SsdtPointer++) {
    ///
    /// Get a pointer to compare for signature
    ///
    Signature = (UINT32 *) SsdtPointer;
    ///
    /// Check if this is the Device Object signature we are looking for
    ///
    if ((*Signature) == AslSignature) {
      ///
      /// Look for Name Encoding
      ///
      if (*(SsdtPointer-1) == AML_NAME_OP) {
        ///
        /// Check if size of new and old data is the same
        ///
        DataSize = *(SsdtPointer+4);
        if ((Length == 1 && DataSize == 0xA) ||
            (Length == 2 && DataSize == 0xB) ||
            (Length == 4 && DataSize == 0xC)) {
          CopyMem (SsdtPointer+5, Buffer, Length);
        } else if (Length == 1 && ((*(UINT8*) Buffer) == 0 || (*(UINT8*) Buffer) == 1) && (DataSize == 0 || DataSize == 1)) {
          CopyMem (SsdtPointer+4, Buffer, Length);
        } else {
          return EFI_BAD_BUFFER_SIZE;
        }
        AcpiPlatformChecksum (
            Table,
            Table->Length,
            OFFSET_OF (EFI_ACPI_DESCRIPTION_HEADER,
            Checksum)
            );
        return Status;
      }
    }
  }
  return EFI_NOT_FOUND;
}

/**
  This procedure will update the name of ASL Method

  @param[in] AslSignature      - The signature of Operation Region that we want to update.
  @param[in] Buffer            - source of data to be written over original aml
  @param[in] Length            - length of data to be overwritten

  @retval EFI_SUCCESS          - The function completed successfully.
  @retval EFI_NOT_FOUND        - Failed to locate AcpiTable.
**/
EFI_STATUS
UpdateMethodAslCode (
  IN     UINT32                        AslSignature,
  IN     VOID                          *Buffer,
  IN     UINTN                         Length
  )
{
  EFI_STATUS                  Status;
  EFI_ACPI_DESCRIPTION_HEADER *Table;
  UINT8                       *CurrPtr;
  UINT32                      *Signature;
  UINT8                       *DsdtPointer;
  UINTN                       Handle;

  if (mAcpiTable == NULL) {
    InitializeAslUpdateLib ();
    if (mAcpiTable == NULL) {
      return EFI_NOT_READY;
    }
  }

  ///
  /// Locate table with matching ID
  ///
  Handle = 0;
  Status = LocateAcpiTableBySignature (
             EFI_ACPI_3_0_DIFFERENTIATED_SYSTEM_DESCRIPTION_TABLE_SIGNATURE,
             (EFI_ACPI_DESCRIPTION_HEADER **) &Table,
             &Handle
             );
  if (EFI_ERROR (Status)) {
    return Status;
  }

  ///
  /// Point to the beginning of the DSDT table
  ///
  CurrPtr = (UINT8 *) Table;
  if (CurrPtr == NULL) {
    return EFI_NOT_FOUND;
  }

  ///
  /// Loop through the ASL looking for values that we must fix up.
  ///
  for (DsdtPointer = CurrPtr; DsdtPointer <= (CurrPtr + ((EFI_ACPI_COMMON_HEADER *) CurrPtr)->Length); DsdtPointer++) {
    ///
    /// Get a pointer to compare for signature
    ///
    Signature = (UINT32 *) DsdtPointer;
    ///
    /// Check if this is the Device Object signature we are looking for
    ///
    if ((*Signature) == AslSignature) {
      ///
      /// Look for Name Encoding
      ///
      if ((*(DsdtPointer-3) == AML_METHOD_OP)
         || (*(DsdtPointer-2) == AML_METHOD_OP)
         )
      {
        CopyMem (DsdtPointer, Buffer, Length);
        Status = mAcpiTable->UninstallAcpiTable (
                               mAcpiTable,
                               Handle
                               );
        Handle = 0;
        Status = mAcpiTable->InstallAcpiTable (
                               mAcpiTable,
                               Table,
                               Table->Length,
                               &Handle
                               );
        FreePool (Table);
        return Status;
      }
    }
  }
  return EFI_NOT_FOUND;
}

/**
  This function uses the ACPI SDT protocol to locate an ACPI table.
  It is really only useful for finding tables that only have a single instance,
  e.g. FADT, FACS, MADT, etc.  It is not good for locating SSDT, etc.

  @param[in] Signature           - Pointer to an ASCII string containing the OEM Table ID from the ACPI table header
  @param[in, out] Table          - Updated with a pointer to the table
  @param[in, out] Handle         - AcpiSupport protocol table handle for the table found
  @param[in, out] Version        - The version of the table desired

  @retval EFI_SUCCESS            - The function completed successfully.
**/
EFI_STATUS
LocateAcpiTableBySignature (
  IN      UINT32                        Signature,
  IN OUT  EFI_ACPI_DESCRIPTION_HEADER   **Table,
  IN OUT  UINTN                         *Handle
  )
{
  EFI_STATUS                  Status;
  INTN                        Index;
  EFI_ACPI_TABLE_VERSION      Version;
  EFI_ACPI_DESCRIPTION_HEADER *OrgTable;

  if (mAcpiSdt == NULL) {
    InitializeAslUpdateLib ();
    if (mAcpiSdt == NULL) {
      return EFI_NOT_READY;
    }
  }

  ///
  /// Locate table with matching ID
  ///
  Version = 0;
  Index = 0;
  do {
    Status = mAcpiSdt->GetAcpiTable (Index, (EFI_ACPI_SDT_HEADER **)&OrgTable, &Version, Handle);
    if (Status == EFI_NOT_FOUND) {
      break;
    }
    ASSERT_EFI_ERROR (Status);
    Index++;
  } while (OrgTable->Signature != Signature);

  if (Status != EFI_NOT_FOUND) {
    *Table = AllocateCopyPool (OrgTable->Length, OrgTable);
    ASSERT (*Table);
  }

  ///
  /// If we found the table, there will be no error.
  ///
  return Status;
}

/**
  This function uses the ACPI SDT protocol to locate an ACPI SSDT table.

  @param[in] TableId           - Pointer to an ASCII string containing the OEM Table ID from the ACPI table header
  @param[in] TableIdSize       - Length of the TableId to match.  Table ID are 8 bytes long, this function
                                 will consider it a match if the first TableIdSize bytes match
  @param[in, out] Table        - Updated with a pointer to the table
  @param[in, out] Handle       - AcpiSupport protocol table handle for the table found
  @param[in, out] Version      - See AcpiSupport protocol, GetAcpiTable function for use

  @retval EFI_SUCCESS          - The function completed successfully.
**/
EFI_STATUS
LocateAcpiTableByOemTableId (
  IN      UINT8                         *TableId,
  IN      UINT8                         TableIdSize,
  IN OUT  EFI_ACPI_DESCRIPTION_HEADER   **Table,
  IN OUT  UINTN                         *Handle
  )
{
  EFI_STATUS                  Status;
  INTN                        Index;
  EFI_ACPI_TABLE_VERSION      Version;
  EFI_ACPI_DESCRIPTION_HEADER *OrgTable;

  if (mAcpiSdt == NULL) {
    InitializeAslUpdateLib ();
    if (mAcpiSdt == NULL) {
      return EFI_NOT_READY;
    }
  }
  ///
  /// Locate table with matching ID
  ///
  Version = 0;
  Index = 0;
  do {
    Status = mAcpiSdt->GetAcpiTable (Index, (EFI_ACPI_SDT_HEADER **)&OrgTable, &Version, Handle);
    if (Status == EFI_NOT_FOUND) {
      break;
    }
    ASSERT_EFI_ERROR (Status);
    Index++;
  } while (CompareMem (&(OrgTable->OemTableId), TableId, TableIdSize));

  if (Status != EFI_NOT_FOUND) {
    *Table = OrgTable;
    ASSERT (*Table);
  }

  ///
  /// If we found the table, there will be no error.
  ///
  return Status;
}

/**
  This function calculates and updates an UINT8 checksum.

  @param[in] Buffer          Pointer to buffer to checksum
  @param[in] Size            Number of bytes to checksum
  @param[in] ChecksumOffset  Offset to place the checksum result in

  @retval EFI_SUCCESS        The function completed successfully.
**/
EFI_STATUS
AcpiChecksum (
  IN VOID       *Buffer,
  IN UINTN      Size,
  IN UINTN      ChecksumOffset
  )
{
  UINT8 Sum;
  UINT8 *Ptr;

  Sum = 0;
  ///
  /// Initialize pointer
  ///
  Ptr = Buffer;

  ///
  /// set checksum to 0 first
  ///
  Ptr[ChecksumOffset] = 0;

  ///
  /// add all content of buffer
  ///
  while (Size--) {
    Sum = (UINT8) (Sum + (*Ptr++));
  }
  ///
  /// set checksum
  ///
  Ptr                 = Buffer;
  Ptr[ChecksumOffset] = (UINT8) (0xff - Sum + 1);

  return EFI_SUCCESS;
}
