// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PShort_VArrayNodeOfFieldOfHArray1OfShortReal_HeaderFile
#define _PShort_VArrayNodeOfFieldOfHArray1OfShortReal_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PShort_VArrayNodeOfFieldOfHArray1OfShortReal_HeaderFile
#include <Handle_PShort_VArrayNodeOfFieldOfHArray1OfShortReal.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class PShort_FieldOfHArray1OfShortReal;
class PShort_VArrayTNodeOfFieldOfHArray1OfShortReal;


class PShort_VArrayNodeOfFieldOfHArray1OfShortReal : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PShort_VArrayNodeOfFieldOfHArray1OfShortReal();
  
  Standard_EXPORT   PShort_VArrayNodeOfFieldOfHArray1OfShortReal(const Standard_ShortReal& aValue);
  
  Standard_EXPORT     void SetValue(const Standard_ShortReal& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PShort_VArrayNodeOfFieldOfHArray1OfShortReal(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Standard_ShortReal _CSFDB_GetPShort_VArrayNodeOfFieldOfHArray1OfShortRealmyValue() const { return myValue; }
    void _CSFDB_SetPShort_VArrayNodeOfFieldOfHArray1OfShortRealmyValue(const Standard_ShortReal p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PShort_VArrayNodeOfFieldOfHArray1OfShortReal)

protected:




private: 


Standard_ShortReal myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
