// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder_HeaderFile
#define _BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder_HeaderFile
#include <Handle_BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder.hxx>
#endif

#ifndef _BRepFill_EdgeFaceAndOrder_HeaderFile
#include <BRepFill_EdgeFaceAndOrder.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class BRepFill_EdgeFaceAndOrder;
class BRepFill_SequenceOfEdgeFaceAndOrder;



class BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder : public TCollection_SeqNode {

public:

  
      BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder(const BRepFill_EdgeFaceAndOrder& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        BRepFill_EdgeFaceAndOrder& Value() const;




  DEFINE_STANDARD_RTTI(BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder)

protected:




private: 


BRepFill_EdgeFaceAndOrder myValue;


};

#define SeqItem BRepFill_EdgeFaceAndOrder
#define SeqItem_hxx <BRepFill_EdgeFaceAndOrder.hxx>
#define TCollection_SequenceNode BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder
#define TCollection_SequenceNode_hxx <BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder.hxx>
#define Handle_TCollection_SequenceNode Handle_BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder
#define TCollection_SequenceNode_Type_() BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder_Type_()
#define TCollection_Sequence BRepFill_SequenceOfEdgeFaceAndOrder
#define TCollection_Sequence_hxx <BRepFill_SequenceOfEdgeFaceAndOrder.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
