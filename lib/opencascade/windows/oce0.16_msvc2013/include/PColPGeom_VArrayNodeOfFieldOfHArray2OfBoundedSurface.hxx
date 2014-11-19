// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColPGeom_VArrayNodeOfFieldOfHArray2OfBoundedSurface_HeaderFile
#define _PColPGeom_VArrayNodeOfFieldOfHArray2OfBoundedSurface_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColPGeom_VArrayNodeOfFieldOfHArray2OfBoundedSurface_HeaderFile
#include <Handle_PColPGeom_VArrayNodeOfFieldOfHArray2OfBoundedSurface.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_PGeom_BoundedSurface_HeaderFile
#include <Handle_PGeom_BoundedSurface.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class PGeom_BoundedSurface;
class PColPGeom_FieldOfHArray2OfBoundedSurface;
class PColPGeom_VArrayTNodeOfFieldOfHArray2OfBoundedSurface;


class PColPGeom_VArrayNodeOfFieldOfHArray2OfBoundedSurface : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PColPGeom_VArrayNodeOfFieldOfHArray2OfBoundedSurface();
  
  Standard_EXPORT   PColPGeom_VArrayNodeOfFieldOfHArray2OfBoundedSurface(const Handle(PGeom_BoundedSurface)& aValue);
  
  Standard_EXPORT     void SetValue(const Handle(PGeom_BoundedSurface)& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PColPGeom_VArrayNodeOfFieldOfHArray2OfBoundedSurface(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Handle(PGeom_BoundedSurface) _CSFDB_GetPColPGeom_VArrayNodeOfFieldOfHArray2OfBoundedSurfacemyValue() const { return myValue; }
    void _CSFDB_SetPColPGeom_VArrayNodeOfFieldOfHArray2OfBoundedSurfacemyValue(const Handle(PGeom_BoundedSurface)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PColPGeom_VArrayNodeOfFieldOfHArray2OfBoundedSurface)

protected:




private: 


Handle_PGeom_BoundedSurface myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
