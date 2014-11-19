// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppStd_Application_HeaderFile
#define _AppStd_Application_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AppStd_Application_HeaderFile
#include <Handle_AppStd_Application.hxx>
#endif

#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _TDocStd_Application_HeaderFile
#include <TDocStd_Application.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class CDM_MessageDriver;
class TColStd_SequenceOfExtendedString;



class AppStd_Application : public TDocStd_Application {

public:

  
  Standard_EXPORT   AppStd_Application();
  
  Standard_EXPORT   virtual  Handle_CDM_MessageDriver MessageDriver() ;
  //! returns supported format for application documents. <br>
  Standard_EXPORT   virtual  void Formats(TColStd_SequenceOfExtendedString& theFormats) ;
  //! returns   the file  name  which  contains  application <br>
//!          resources <br>
  Standard_EXPORT     Standard_CString ResourcesName() ;




  DEFINE_STANDARD_RTTI(AppStd_Application)

protected:




private: 


Handle_CDM_MessageDriver myMessageDriver;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
