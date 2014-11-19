// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_DescrGeneral_HeaderFile
#define _StepData_DescrGeneral_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepData_DescrGeneral_HeaderFile
#include <Handle_StepData_DescrGeneral.hxx>
#endif

#ifndef _Handle_StepData_Protocol_HeaderFile
#include <Handle_StepData_Protocol.hxx>
#endif
#ifndef _StepData_GeneralModule_HeaderFile
#include <StepData_GeneralModule.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class StepData_Protocol;
class Standard_Transient;
class Interface_EntityIterator;
class Interface_ShareTool;
class Interface_Check;
class Interface_CopyTool;


//! Works with a Protocol by considering its entity descriptions <br>
class StepData_DescrGeneral : public StepData_GeneralModule {

public:

  
  Standard_EXPORT   StepData_DescrGeneral(const Handle(StepData_Protocol)& proto);
  
  Standard_EXPORT     void FillSharedCase(const Standard_Integer CN,const Handle(Standard_Transient)& ent,Interface_EntityIterator& iter) const;
  
  Standard_EXPORT     void CheckCase(const Standard_Integer CN,const Handle(Standard_Transient)& ent,const Interface_ShareTool& shares,Handle(Interface_Check)& ach) const;
  
  Standard_EXPORT     void CopyCase(const Standard_Integer CN,const Handle(Standard_Transient)& entfrom,const Handle(Standard_Transient)& entto,Interface_CopyTool& TC) const;
  
  Standard_EXPORT     Standard_Boolean NewVoid(const Standard_Integer CN,Handle(Standard_Transient)& ent) const;




  DEFINE_STANDARD_RTTI(StepData_DescrGeneral)

protected:




private: 


Handle_StepData_Protocol theproto;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
