// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dynamic_SequenceNodeOfSeqOfMethodDefinitions_HeaderFile
#define _Dynamic_SequenceNodeOfSeqOfMethodDefinitions_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Dynamic_SequenceNodeOfSeqOfMethodDefinitions_HeaderFile
#include <Handle_Dynamic_SequenceNodeOfSeqOfMethodDefinitions.hxx>
#endif

#ifndef _Handle_Dynamic_MethodDefinition_HeaderFile
#include <Handle_Dynamic_MethodDefinition.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class Dynamic_MethodDefinition;
class Dynamic_SeqOfMethodDefinitions;



class Dynamic_SequenceNodeOfSeqOfMethodDefinitions : public TCollection_SeqNode {

public:

  
      Dynamic_SequenceNodeOfSeqOfMethodDefinitions(const Handle(Dynamic_MethodDefinition)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_Dynamic_MethodDefinition& Value() const;




  DEFINE_STANDARD_RTTI(Dynamic_SequenceNodeOfSeqOfMethodDefinitions)

protected:




private: 


Handle_Dynamic_MethodDefinition myValue;


};

#define SeqItem Handle_Dynamic_MethodDefinition
#define SeqItem_hxx <Dynamic_MethodDefinition.hxx>
#define TCollection_SequenceNode Dynamic_SequenceNodeOfSeqOfMethodDefinitions
#define TCollection_SequenceNode_hxx <Dynamic_SequenceNodeOfSeqOfMethodDefinitions.hxx>
#define Handle_TCollection_SequenceNode Handle_Dynamic_SequenceNodeOfSeqOfMethodDefinitions
#define TCollection_SequenceNode_Type_() Dynamic_SequenceNodeOfSeqOfMethodDefinitions_Type_()
#define TCollection_Sequence Dynamic_SeqOfMethodDefinitions
#define TCollection_Sequence_hxx <Dynamic_SeqOfMethodDefinitions.hxx>

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
