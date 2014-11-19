// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_CcDesignSecurityClassification_HeaderFile
#define _StepAP203_CcDesignSecurityClassification_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepAP203_CcDesignSecurityClassification_HeaderFile
#include <Handle_StepAP203_CcDesignSecurityClassification.hxx>
#endif

#ifndef _Handle_StepAP203_HArray1OfClassifiedItem_HeaderFile
#include <Handle_StepAP203_HArray1OfClassifiedItem.hxx>
#endif
#ifndef _StepBasic_SecurityClassificationAssignment_HeaderFile
#include <StepBasic_SecurityClassificationAssignment.hxx>
#endif
#ifndef _Handle_StepBasic_SecurityClassification_HeaderFile
#include <Handle_StepBasic_SecurityClassification.hxx>
#endif
class StepAP203_HArray1OfClassifiedItem;
class StepBasic_SecurityClassification;


//! Representation of STEP entity CcDesignSecurityClassification <br>
class StepAP203_CcDesignSecurityClassification : public StepBasic_SecurityClassificationAssignment {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepAP203_CcDesignSecurityClassification();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(StepBasic_SecurityClassification)& aSecurityClassificationAssignment_AssignedSecurityClassification,const Handle(StepAP203_HArray1OfClassifiedItem)& aItems) ;
  //! Returns field Items <br>
  Standard_EXPORT     Handle_StepAP203_HArray1OfClassifiedItem Items() const;
  //! Set field Items <br>
  Standard_EXPORT     void SetItems(const Handle(StepAP203_HArray1OfClassifiedItem)& Items) ;




  DEFINE_STANDARD_RTTI(StepAP203_CcDesignSecurityClassification)

protected:




private: 


Handle_StepAP203_HArray1OfClassifiedItem theItems;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
