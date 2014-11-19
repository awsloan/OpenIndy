// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepFEA_RWElementRepresentation_HeaderFile
#define _RWStepFEA_RWElementRepresentation_HeaderFile

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
#ifndef _Handle_StepFEA_ElementRepresentation_HeaderFile
#include <Handle_StepFEA_ElementRepresentation.hxx>
#endif
class StepData_StepReaderData;
class Interface_Check;
class StepFEA_ElementRepresentation;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write tool for ElementRepresentation <br>
class RWStepFEA_RWElementRepresentation  {
public:

  DEFINE_STANDARD_ALLOC

  //! Empty constructor <br>
  Standard_EXPORT   RWStepFEA_RWElementRepresentation();
  //! Reads ElementRepresentation <br>
  Standard_EXPORT     void ReadStep(const Handle(StepData_StepReaderData)& data,const Standard_Integer num,Handle(Interface_Check)& ach,const Handle(StepFEA_ElementRepresentation)& ent) const;
  //! Writes ElementRepresentation <br>
  Standard_EXPORT     void WriteStep(StepData_StepWriter& SW,const Handle(StepFEA_ElementRepresentation)& ent) const;
  //! Fills data for graph (shared items) <br>
  Standard_EXPORT     void Share(const Handle(StepFEA_ElementRepresentation)& ent,Interface_EntityIterator& iter) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
