// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_IndexedMapNodeOfIndexedMapOfAsciiString_HeaderFile
#define _Interface_IndexedMapNodeOfIndexedMapOfAsciiString_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Interface_IndexedMapNodeOfIndexedMapOfAsciiString_HeaderFile
#include <Handle_Interface_IndexedMapNodeOfIndexedMapOfAsciiString.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
class TCollection_AsciiString;
class Interface_MapAsciiStringHasher;
class Interface_IndexedMapOfAsciiString;



class Interface_IndexedMapNodeOfIndexedMapOfAsciiString : public TCollection_MapNode {

public:

  
      Interface_IndexedMapNodeOfIndexedMapOfAsciiString(const TCollection_AsciiString& K1,const Standard_Integer K2,const TCollection_MapNodePtr& n1,const TCollection_MapNodePtr& n2);
  
        TCollection_AsciiString& Key1() const;
  
        Standard_Integer& Key2() const;
  
        TCollection_MapNodePtr& Next2() const;




  DEFINE_STANDARD_RTTI(Interface_IndexedMapNodeOfIndexedMapOfAsciiString)

protected:




private: 


TCollection_AsciiString myKey1;
Standard_Integer myKey2;
TCollection_MapNodePtr myNext2;


};

#define TheKey TCollection_AsciiString
#define TheKey_hxx <TCollection_AsciiString.hxx>
#define Hasher Interface_MapAsciiStringHasher
#define Hasher_hxx <Interface_MapAsciiStringHasher.hxx>
#define TCollection_IndexedMapNode Interface_IndexedMapNodeOfIndexedMapOfAsciiString
#define TCollection_IndexedMapNode_hxx <Interface_IndexedMapNodeOfIndexedMapOfAsciiString.hxx>
#define Handle_TCollection_IndexedMapNode Handle_Interface_IndexedMapNodeOfIndexedMapOfAsciiString
#define TCollection_IndexedMapNode_Type_() Interface_IndexedMapNodeOfIndexedMapOfAsciiString_Type_()
#define TCollection_IndexedMap Interface_IndexedMapOfAsciiString
#define TCollection_IndexedMap_hxx <Interface_IndexedMapOfAsciiString.hxx>

#include <TCollection_IndexedMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_hxx
#undef Handle_TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_Type_
#undef TCollection_IndexedMap
#undef TCollection_IndexedMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
