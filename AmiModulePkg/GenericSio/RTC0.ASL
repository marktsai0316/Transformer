//*************************************************************************
//*************************************************************************
//**                                                                     **
//**        (C)Copyright 1985-2017, American Megatrends, Inc.            **
//**                                                                     **
//**                       All Rights Reserved.                          **
//**                                                                     **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093           **
//**                                                                     **
//**                       Phone: (770)-246-8600                         **
//**                                                                     **
//*************************************************************************
//*************************************************************************
/** @file RTC0.ASL

    Define ACPI method or namespce For Super IO.
*/

//-------------------------
// Real Time Clock Device.PC/AT RTC/CMOS compatible devices
//-------------------------
Device(RTC0) {
	Name(_HID, EISAID("PNP0B00"))
	Name (_CRS, ResourceTemplate()
	{
		IO(Decode16, 0x70, 0x70, 0, 0x2)
		IRQNoFlags(){8}
	})
}	// End RTC

//*************************************************************************
//*************************************************************************
//**                                                                     **
//**        (C)Copyright 1985-2017, American Megatrends, Inc.            **
//**                                                                     **
//**                       All Rights Reserved.                          **
//**                                                                     **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093           **
//**                                                                     **
//**                       Phone: (770)-246-8600                         **
//**                                                                     **
//*************************************************************************
//*************************************************************************
