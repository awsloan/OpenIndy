// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_DataMapNodeOfDataMapOfAsciiStringInteger_HeaderFile
#define _TColStd_DataMapNodeOfDataMapOfAsciiStringInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColStd_DataMapNodeOfDataMapOfAsciiStringInteger_HeaderFile
#include <Handle_TColStd_DataMapNodeOfDataMapOfAsciiStringInteger.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TCollection_AsciiString;
class TColStd_DataMapOfAsciiStringInteger;
class TColStd_DataMapIteratorOfDataMapOfAsciiStringInteger;



class TColStd_DataMapNodeOfDataMapOfAsciiStringInteger : public TCollection_MapNode {

public:

  
      TColStd_DataMapNodeOfDataMapOfAsciiStringInteger(const TCollection_AsciiString& K,const Standard_Integer& I,const TCollection_MapNodePtr& n);
  
        TCollection_AsciiString& Key() const;
  
        Standard_Integer& Value() const;




  DEFINE_STANDARD_RTTI(TColStd_DataMapNodeOfDataMapOfAsciiStringInteger)

protected:




private: 


TCollection_AsciiString myKey;
Standard_Integer myValue;


};

#define TheKey TCollection_AsciiString
#define TheKey_hxx <TCollection_AsciiString.hxx>
#define TheItem Standard_Integer
#define TheItem_hxx <Standard_Integer.hxx>
#define Hasher TCollection_AsciiString
#define Hasher_hxx <TCollection_AsciiString.hxx>
#define TCollection_DataMapNode TColStd_DataMapNodeOfDataMapOfAsciiStringInteger
#define TCollection_DataMapNode_hxx <TColStd_DataMapNodeOfDataMapOfAsciiStringInteger.hxx>
#define TCollection_DataMapIterator TColStd_DataMapIteratorOfDataMapOfAsciiStringInteger
#define TCollection_DataMapIterator_hxx <TColStd_DataMapIteratorOfDataMapOfAsciiStringInteger.hxx>
#define Handle_TCollection_DataMapNode Handle_TColStd_DataMapNodeOfDataMapOfAsciiStringInteger
#define TCollection_DataMapNode_Type_() TColStd_DataMapNodeOfDataMapOfAsciiStringInteger_Type_()
#define TCollection_DataMap TColStd_DataMapOfAsciiStringInteger
#define TCollection_DataMap_hxx <TColStd_DataMapOfAsciiStringInteger.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
