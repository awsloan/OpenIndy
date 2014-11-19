// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_FeaMoistureAbsorption_HeaderFile
#define _StepFEA_FeaMoistureAbsorption_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_FeaMoistureAbsorption_HeaderFile
#include <Handle_StepFEA_FeaMoistureAbsorption.hxx>
#endif

#ifndef _StepFEA_SymmetricTensor23d_HeaderFile
#include <StepFEA_SymmetricTensor23d.hxx>
#endif
#ifndef _StepFEA_FeaMaterialPropertyRepresentationItem_HeaderFile
#include <StepFEA_FeaMaterialPropertyRepresentationItem.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TCollection_HAsciiString;
class StepFEA_SymmetricTensor23d;


//! Representation of STEP entity FeaMoistureAbsorption <br>
class StepFEA_FeaMoistureAbsorption : public StepFEA_FeaMaterialPropertyRepresentationItem {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_FeaMoistureAbsorption();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aRepresentationItem_Name,const StepFEA_SymmetricTensor23d& aFeaConstants) ;
  //! Returns field FeaConstants <br>
  Standard_EXPORT     StepFEA_SymmetricTensor23d FeaConstants() const;
  //! Set field FeaConstants <br>
  Standard_EXPORT     void SetFeaConstants(const StepFEA_SymmetricTensor23d& FeaConstants) ;




  DEFINE_STANDARD_RTTI(StepFEA_FeaMoistureAbsorption)

protected:




private: 


StepFEA_SymmetricTensor23d theFeaConstants;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
