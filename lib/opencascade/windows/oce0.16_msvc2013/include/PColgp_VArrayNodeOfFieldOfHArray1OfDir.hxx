// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayNodeOfFieldOfHArray1OfDir_HeaderFile
#define _PColgp_VArrayNodeOfFieldOfHArray1OfDir_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColgp_VArrayNodeOfFieldOfHArray1OfDir_HeaderFile
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray1OfDir.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class gp_Dir;
class PColgp_FieldOfHArray1OfDir;
class PColgp_VArrayTNodeOfFieldOfHArray1OfDir;


class PColgp_VArrayNodeOfFieldOfHArray1OfDir : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PColgp_VArrayNodeOfFieldOfHArray1OfDir();
  
  Standard_EXPORT   PColgp_VArrayNodeOfFieldOfHArray1OfDir(const gp_Dir& aValue);
  
  Standard_EXPORT     void SetValue(const gp_Dir& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PColgp_VArrayNodeOfFieldOfHArray1OfDir(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    const gp_Dir& _CSFDB_GetPColgp_VArrayNodeOfFieldOfHArray1OfDirmyValue() const { return myValue; }



  DEFINE_STANDARD_RTTI(PColgp_VArrayNodeOfFieldOfHArray1OfDir)

protected:




private: 


gp_Dir myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
