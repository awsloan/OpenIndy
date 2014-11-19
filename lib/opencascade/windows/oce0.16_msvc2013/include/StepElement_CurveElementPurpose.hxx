// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_CurveElementPurpose_HeaderFile
#define _StepElement_CurveElementPurpose_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepData_SelectMember_HeaderFile
#include <Handle_StepData_SelectMember.hxx>
#endif
#ifndef _StepElement_EnumeratedCurveElementPurpose_HeaderFile
#include <StepElement_EnumeratedCurveElementPurpose.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class Standard_Transient;
class StepData_SelectMember;
class TCollection_HAsciiString;


//! Representation of STEP SELECT type CurveElementPurpose <br>
class StepElement_CurveElementPurpose  : public StepData_SelectType {
public:

  DEFINE_STANDARD_ALLOC

  //! Empty constructor <br>
  Standard_EXPORT   StepElement_CurveElementPurpose();
  //! Recognizes a kind of CurveElementPurpose select type <br>
//!          return 0 <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! Recognizes a items of select member CurveElementPurposeMember <br>
//!          1 -> EnumeratedCurveElementPurpose <br>
//!          2 -> ApplicationDefinedElementPurpose <br>
//!          0 else <br>
  Standard_EXPORT   virtual  Standard_Integer CaseMem(const Handle(StepData_SelectMember)& ent) const;
  //! Returns a new select member the type CurveElementPurposeMember <br>
  Standard_EXPORT   virtual  Handle_StepData_SelectMember NewMember() const;
  //! Set Value for EnumeratedCurveElementPurpose <br>
  Standard_EXPORT     void SetEnumeratedCurveElementPurpose(const StepElement_EnumeratedCurveElementPurpose aVal) ;
  //! Returns Value as EnumeratedCurveElementPurpose (or Null if another type) <br>
  Standard_EXPORT     StepElement_EnumeratedCurveElementPurpose EnumeratedCurveElementPurpose() const;
  //! Set Value for ApplicationDefinedElementPurpose <br>
  Standard_EXPORT     void SetApplicationDefinedElementPurpose(const Handle(TCollection_HAsciiString)& aVal) ;
  //! Returns Value as ApplicationDefinedElementPurpose (or Null if another type) <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString ApplicationDefinedElementPurpose() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
