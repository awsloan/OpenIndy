// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepRepr_RWRepresentationRelationshipWithTransformation_HeaderFile
#define _RWStepRepr_RWRepresentationRelationshipWithTransformation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepData_StepReaderData_HeaderFile
#include <Handle_StepData_StepReaderData.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Handle_StepRepr_RepresentationRelationshipWithTransformation_HeaderFile
#include <Handle_StepRepr_RepresentationRelationshipWithTransformation.hxx>
#endif
class StepData_StepReaderData;
class Interface_Check;
class StepRepr_RepresentationRelationshipWithTransformation;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write Module for RepresentationRelationshipWithTransformation <br>
class RWStepRepr_RWRepresentationRelationshipWithTransformation  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   RWStepRepr_RWRepresentationRelationshipWithTransformation();
  
  Standard_EXPORT     void ReadStep(const Handle(StepData_StepReaderData)& data,const Standard_Integer num,Handle(Interface_Check)& ach,const Handle(StepRepr_RepresentationRelationshipWithTransformation)& ent) const;
  
  Standard_EXPORT     void WriteStep(StepData_StepWriter& SW,const Handle(StepRepr_RepresentationRelationshipWithTransformation)& ent) const;
  
  Standard_EXPORT     void Share(const Handle(StepRepr_RepresentationRelationshipWithTransformation)& ent,Interface_EntityIterator& iter) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
