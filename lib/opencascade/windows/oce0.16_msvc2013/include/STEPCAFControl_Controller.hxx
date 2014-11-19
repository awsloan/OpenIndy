// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_Controller_HeaderFile
#define _STEPCAFControl_Controller_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_STEPCAFControl_Controller_HeaderFile
#include <Handle_STEPCAFControl_Controller.hxx>
#endif

#ifndef _STEPControl_Controller_HeaderFile
#include <STEPControl_Controller.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif


//! Extends Controller from STEPControl in order to provide <br>
//!          ActorWrite adapted for writing assemblies from DECAF <br>
//!          Note that ActorRead from STEPControl is used for reading <br>
//!          (inherited automatically) <br>
class STEPCAFControl_Controller : public STEPControl_Controller {

public:

  //! Initializes the use of STEP Norm (the first time) <br>
  Standard_EXPORT   STEPCAFControl_Controller();
  //! Standard Initialisation. It creates a Controller for STEP-XCAF <br>
//!           and records it to various names, available to select it later <br>
//!           Returns True when done, False if could not be done <br>
  Standard_EXPORT   static  Standard_Boolean Init() ;




  DEFINE_STANDARD_RTTI(STEPCAFControl_Controller)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
