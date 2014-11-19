// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_SequenceNodeOfSequenceOfPnt_HeaderFile
#define _TColgp_SequenceNodeOfSequenceOfPnt_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColgp_SequenceNodeOfSequenceOfPnt_HeaderFile
#include <Handle_TColgp_SequenceNodeOfSequenceOfPnt.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class gp_Pnt;
class TColgp_SequenceOfPnt;



class TColgp_SequenceNodeOfSequenceOfPnt : public TCollection_SeqNode {

public:

  
      TColgp_SequenceNodeOfSequenceOfPnt(const gp_Pnt& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        gp_Pnt& Value() const;




  DEFINE_STANDARD_RTTI(TColgp_SequenceNodeOfSequenceOfPnt)

protected:




private: 


gp_Pnt myValue;


};

#define SeqItem gp_Pnt
#define SeqItem_hxx <gp_Pnt.hxx>
#define TCollection_SequenceNode TColgp_SequenceNodeOfSequenceOfPnt
#define TCollection_SequenceNode_hxx <TColgp_SequenceNodeOfSequenceOfPnt.hxx>
#define Handle_TCollection_SequenceNode Handle_TColgp_SequenceNodeOfSequenceOfPnt
#define TCollection_SequenceNode_Type_() TColgp_SequenceNodeOfSequenceOfPnt_Type_()
#define TCollection_Sequence TColgp_SequenceOfPnt
#define TCollection_Sequence_hxx <TColgp_SequenceOfPnt.hxx>

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
