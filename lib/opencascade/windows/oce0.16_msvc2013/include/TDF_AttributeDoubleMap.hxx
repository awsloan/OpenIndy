// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_AttributeDoubleMap_HeaderFile
#define _TDF_AttributeDoubleMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_DoubleMapNodeOfAttributeDoubleMap_HeaderFile
#include <Handle_TDF_DoubleMapNodeOfAttributeDoubleMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_MultiplyDefined;
class Standard_NoSuchObject;
class TDF_Attribute;
class TColStd_MapTransientHasher;
class TDF_DoubleMapNodeOfAttributeDoubleMap;
class TDF_DoubleMapIteratorOfAttributeDoubleMap;



class TDF_AttributeDoubleMap  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TDF_AttributeDoubleMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TDF_AttributeDoubleMap& Assign(const TDF_AttributeDoubleMap& Other) ;
    TDF_AttributeDoubleMap& operator =(const TDF_AttributeDoubleMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TDF_AttributeDoubleMap()
{
  Clear();
}
  
  Standard_EXPORT     void Bind(const Handle(TDF_Attribute)& K1,const Handle(TDF_Attribute)& K2) ;
  
  Standard_EXPORT     Standard_Boolean AreBound(const Handle(TDF_Attribute)& K1,const Handle(TDF_Attribute)& K2) const;
  
  Standard_EXPORT     Standard_Boolean IsBound1(const Handle(TDF_Attribute)& K) const;
  
  Standard_EXPORT     Standard_Boolean IsBound2(const Handle(TDF_Attribute)& K) const;
  
  Standard_EXPORT    const Handle_TDF_Attribute& Find1(const Handle(TDF_Attribute)& K) const;
  
  Standard_EXPORT    const Handle_TDF_Attribute& Find2(const Handle(TDF_Attribute)& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind1(const Handle(TDF_Attribute)& K) ;
  
  Standard_EXPORT     Standard_Boolean UnBind2(const Handle(TDF_Attribute)& K) ;





protected:





private:

  
  Standard_EXPORT   TDF_AttributeDoubleMap(const TDF_AttributeDoubleMap& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
