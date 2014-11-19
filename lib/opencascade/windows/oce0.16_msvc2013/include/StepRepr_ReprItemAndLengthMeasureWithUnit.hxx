// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_ReprItemAndLengthMeasureWithUnit_HeaderFile
#define _StepRepr_ReprItemAndLengthMeasureWithUnit_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepRepr_ReprItemAndLengthMeasureWithUnit_HeaderFile
#include <Handle_StepRepr_ReprItemAndLengthMeasureWithUnit.hxx>
#endif

#ifndef _Handle_StepBasic_LengthMeasureWithUnit_HeaderFile
#include <Handle_StepBasic_LengthMeasureWithUnit.hxx>
#endif
#ifndef _Handle_StepRepr_MeasureRepresentationItem_HeaderFile
#include <Handle_StepRepr_MeasureRepresentationItem.hxx>
#endif
#ifndef _Handle_StepBasic_MeasureWithUnit_HeaderFile
#include <Handle_StepBasic_MeasureWithUnit.hxx>
#endif
#ifndef _StepRepr_RepresentationItem_HeaderFile
#include <StepRepr_RepresentationItem.hxx>
#endif
#ifndef _Handle_StepRepr_RepresentationItem_HeaderFile
#include <Handle_StepRepr_RepresentationItem.hxx>
#endif
class StepBasic_LengthMeasureWithUnit;
class StepRepr_MeasureRepresentationItem;
class StepBasic_MeasureWithUnit;
class StepRepr_RepresentationItem;



class StepRepr_ReprItemAndLengthMeasureWithUnit : public StepRepr_RepresentationItem {

public:

  
  Standard_EXPORT   StepRepr_ReprItemAndLengthMeasureWithUnit();
  
  Standard_EXPORT     void Init(const Handle(StepBasic_MeasureWithUnit)& aMWU,const Handle(StepRepr_RepresentationItem)& aRI) ;
  
  Standard_EXPORT     void SetLengthMeasureWithUnit(const Handle(StepBasic_LengthMeasureWithUnit)& aLMWU) ;
  
  Standard_EXPORT     Handle_StepBasic_LengthMeasureWithUnit GetLengthMeasureWithUnit() const;
  
  Standard_EXPORT     Handle_StepRepr_MeasureRepresentationItem GetMeasureRepresentationItem() const;
  
  Standard_EXPORT     void SetMeasureWithUnit(const Handle(StepBasic_MeasureWithUnit)& aMWU) ;
  
  Standard_EXPORT     Handle_StepBasic_MeasureWithUnit GetMeasureWithUnit() const;
  
  Standard_EXPORT     Handle_StepRepr_RepresentationItem GetRepresentationItem() const;




  DEFINE_STANDARD_RTTI(StepRepr_ReprItemAndLengthMeasureWithUnit)

protected:




private: 


Handle_StepBasic_LengthMeasureWithUnit myLengthMeasureWithUnit;
Handle_StepRepr_MeasureRepresentationItem myMeasureRepresentationItem;
Handle_StepBasic_MeasureWithUnit myMeasureWithUnit;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
