// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draft_DataMapNodeOfDataMapOfFaceFaceInfo_HeaderFile
#define _Draft_DataMapNodeOfDataMapOfFaceFaceInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Draft_DataMapNodeOfDataMapOfFaceFaceInfo_HeaderFile
#include <Handle_Draft_DataMapNodeOfDataMapOfFaceFaceInfo.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Draft_FaceInfo_HeaderFile
#include <Draft_FaceInfo.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopoDS_Face;
class Draft_FaceInfo;
class TopTools_ShapeMapHasher;
class Draft_DataMapOfFaceFaceInfo;
class Draft_DataMapIteratorOfDataMapOfFaceFaceInfo;



class Draft_DataMapNodeOfDataMapOfFaceFaceInfo : public TCollection_MapNode {

public:

  
      Draft_DataMapNodeOfDataMapOfFaceFaceInfo(const TopoDS_Face& K,const Draft_FaceInfo& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Face& Key() const;
  
        Draft_FaceInfo& Value() const;




  DEFINE_STANDARD_RTTI(Draft_DataMapNodeOfDataMapOfFaceFaceInfo)

protected:




private: 


TopoDS_Face myKey;
Draft_FaceInfo myValue;


};

#define TheKey TopoDS_Face
#define TheKey_hxx <TopoDS_Face.hxx>
#define TheItem Draft_FaceInfo
#define TheItem_hxx <Draft_FaceInfo.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode Draft_DataMapNodeOfDataMapOfFaceFaceInfo
#define TCollection_DataMapNode_hxx <Draft_DataMapNodeOfDataMapOfFaceFaceInfo.hxx>
#define TCollection_DataMapIterator Draft_DataMapIteratorOfDataMapOfFaceFaceInfo
#define TCollection_DataMapIterator_hxx <Draft_DataMapIteratorOfDataMapOfFaceFaceInfo.hxx>
#define Handle_TCollection_DataMapNode Handle_Draft_DataMapNodeOfDataMapOfFaceFaceInfo
#define TCollection_DataMapNode_Type_() Draft_DataMapNodeOfDataMapOfFaceFaceInfo_Type_()
#define TCollection_DataMap Draft_DataMapOfFaceFaceInfo
#define TCollection_DataMap_hxx <Draft_DataMapOfFaceFaceInfo.hxx>

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
