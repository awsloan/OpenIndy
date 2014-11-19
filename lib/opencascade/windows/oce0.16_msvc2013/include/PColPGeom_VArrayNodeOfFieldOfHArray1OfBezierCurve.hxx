// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve_HeaderFile
#define _PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve_HeaderFile
#include <Handle_PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_PGeom_BezierCurve_HeaderFile
#include <Handle_PGeom_BezierCurve.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class PGeom_BezierCurve;
class PColPGeom_FieldOfHArray1OfBezierCurve;
class PColPGeom_VArrayTNodeOfFieldOfHArray1OfBezierCurve;


class PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve();
  
  Standard_EXPORT   PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve(const Handle(PGeom_BezierCurve)& aValue);
  
  Standard_EXPORT     void SetValue(const Handle(PGeom_BezierCurve)& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Handle(PGeom_BezierCurve) _CSFDB_GetPColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurvemyValue() const { return myValue; }
    void _CSFDB_SetPColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurvemyValue(const Handle(PGeom_BezierCurve)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve)

protected:




private: 


Handle_PGeom_BezierCurve myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
