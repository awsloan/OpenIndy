// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MPrsStd_HeaderFile
#define _MPrsStd_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_MDF_ASDriverHSequence_HeaderFile
#include <Handle_MDF_ASDriverHSequence.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _Handle_MDF_ARDriverHSequence_HeaderFile
#include <Handle_MDF_ARDriverHSequence.hxx>
#endif
class MDF_ASDriverHSequence;
class CDM_MessageDriver;
class MDF_ARDriverHSequence;
class MPrsStd_AISPresentationStorageDriver;
class MPrsStd_PositionStorageDriver;
class MPrsStd_AISPresentationRetrievalDriver;
class MPrsStd_AISPresentationRetrievalDriver_1;
class MPrsStd_PositionRetrievalDriver;


//! Storage    and  Retrieval  drivers   for graphic <br>
//!          attributes.   Transient  attributes are defined in <br>
//!          package TPrsStd and persistent one are defined in <br>
//!          package PPrsStd <br>
class MPrsStd  {
public:

  DEFINE_STANDARD_ALLOC

  //! Adds the attribute storage drivers to <aDriverTable>. <br>
  Standard_EXPORT   static  void AddStorageDrivers(const Handle(MDF_ASDriverHSequence)& aDriverTable,const Handle(CDM_MessageDriver)& theMessageDriver) ;
  //! Adds the attribute retrieval drivers to <aDriverTable>. <br>
  Standard_EXPORT   static  void AddRetrievalDrivers(const Handle(MDF_ARDriverHSequence)& aDriverTable,const Handle(CDM_MessageDriver)& theMessageDriver) ;





protected:





private:




friend class MPrsStd_AISPresentationStorageDriver;
friend class MPrsStd_PositionStorageDriver;
friend class MPrsStd_AISPresentationRetrievalDriver;
friend class MPrsStd_AISPresentationRetrievalDriver_1;
friend class MPrsStd_PositionRetrievalDriver;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
