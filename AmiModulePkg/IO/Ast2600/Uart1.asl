//***********************************************************************
//*                                                                     *
//*   Copyright (c) 1985-2019, American Megatrends International LLC.   *
//*                                                                     *
//*      All rights reserved. Subject to AMI licensing agreement.       *
//*                                                                     *
//***********************************************************************
//*************************************************************************
// $Header: $
//
// $Revision: $
//
// $Date: $
//*************************************************************************
//<AMI_FHDR_START>
//
// Name:  <UART1.ASL>
//
// Description: Define ACPI method or namespce For Super IO
//
//<AMI_FHDR_END>
//*************************************************************************
// UART1 //
// Category # :0x00
//Device(UAR1) {
//  Name(_HID, EISAID("PNP0501"))    //PnP Device ID 16550 Type
//  Name(_UID, 1)   //Generic ID for COMA

// Use the following if not using SI1P or only have 1 SIO   
//  Method(_HID, 0) {Return(^^SIO1.UHID(0))}    //PnP Device ID
    Method(_STA, 0) {Return(^^SIO1.DSTA(0))}    //Get UART status
    Method(_DIS, 0) {^^SIO1.DCNT(0, 0)}         //Disable UART
    Method(_CRS, 0) {Return(^^SIO1.DCRS(0, 0))} //Get UART current resources
    Method(_SRS, 1) {^^SIO1.DSRS(Arg0, 0)}      //Set UART recources

// Use the following if using SI1P
//  Method(_HID, 0) {   //PnP Device ID
//      if(SI1P){Return(^^SIO1.UHID(0))}
//      else{Return(^^SIO2.UHID(0))}
//  }
//  Method(_STA, 0) {   //Get UART status
//      if(SI1P){Return(^^SIO1.DSTA(0))}
//      else{Return(^^SIO2.DSTA(0))}
//  }
//  Method(_DIS, 0) {   //Disable UART
//      if(SI1P){^^SIO1.DCNT(0, 0)}
//      else{^^SIO2.DCNT(0, 0)}
//  }
//  Method(_CRS, 0) {   //Get UART current resources
//      if(SI1P){Return(^^SIO1.DCRS(0, 0))}
//      else{Return(^^SIO2.DCRS(0, 0))}
//  }
//  Method(_SRS, 1) {   //Set UART resources
//      if(SI1P){^^SIO1.DSRS(Arg0, 0)}
//      else{^^SIO2.DSRS(Arg0, 0)}
//  }

//-----------------------------------------------------------------------
// UART1 Possible Resources
//-----------------------------------------------------------------------
//NOTE: _PRS MUST be the NAME not a METHOD object 
//to have GENERICSIO.C working right! 
//-----------------------------------------------------------------------
    Name(_PRS, ResourceTemplate() {
#if ASL_AST2600_INTERFACE_SELECT     
        StartDependentFn(0, 0) {
            IO(Decode16, 0x3F8, 0x3F8, 1, 8)
            IRQNoFlags() {4}
            DMA(Compatibility, NotBusMaster, Transfer8) {}
        }
        StartDependentFnNoPri() {
            IO(Decode16, 0x3F8, 0x3F8, 1, 8)
            IRQNoFlags() {4}
            DMA(Compatibility, NotBusMaster, Transfer8) {}
        }
        StartDependentFnNoPri() {
            IO(Decode16, 0x2F8, 0x2F8, 1, 8)
            IRQNoFlags() {4}
            DMA(Compatibility, NotBusMaster, Transfer8) {}
        }
        StartDependentFnNoPri() {
            IO(Decode16, 0x3E8, 0x3E8, 1, 8)
            IRQNoFlags() {4}
            DMA(Compatibility, NotBusMaster, Transfer8) {}
        }
        StartDependentFnNoPri() {
            IO(Decode16, 0x2E8, 0x2E8, 1, 8)
            IRQNoFlags() {4}
            DMA(Compatibility, NotBusMaster, Transfer8) {}
        }
        EndDependentFn()
       
#else
        StartDependentFn(0, 0) {
            IO(Decode16, 0x3F8, 0x3F8, 1, 8)
            IRQNoFlags() {4}
            DMA(Compatibility, NotBusMaster, Transfer8) {}
        }
        StartDependentFnNoPri() {
            IO(Decode16, 0x3F8, 0x3F8, 1, 8)
            IRQNoFlags() {3,4,5,7,9,10,11,12}
            DMA(Compatibility, NotBusMaster, Transfer8) {}
        }
        StartDependentFnNoPri() {
            IO(Decode16, 0x2F8, 0x2F8, 1, 8)
            IRQNoFlags() {3,4,5,7,9,10,11,12}
            DMA(Compatibility, NotBusMaster, Transfer8) {}
        }
        StartDependentFnNoPri() {
            IO(Decode16, 0x3E8, 0x3E8, 1, 8)
            IRQNoFlags() {3,4,5,7,9,10,11,12}
            DMA(Compatibility, NotBusMaster, Transfer8) {}
        }
        StartDependentFnNoPri() {
            IO(Decode16, 0x2E8, 0x2E8, 1, 8)
            IRQNoFlags() {3,4,5,7,9,10,11,12}
            DMA(Compatibility, NotBusMaster, Transfer8) {}
        }
        EndDependentFn()
        
#endif 
    })
//} // End Of UAR1
//-----------------------------------------------------------------------
