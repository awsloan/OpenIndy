// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour_HeaderFile
#define _Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour_HeaderFile
#include <Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour.hxx>
#endif

#ifndef _Handle_Contap_TheIWLineOfTheIWalkingOfContour_HeaderFile
#include <Handle_Contap_TheIWLineOfTheIWalkingOfContour.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class Contap_TheIWLineOfTheIWalkingOfContour;
class Contap_SequenceOfIWLineOfTheIWalkingOfContour;



class Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour : public TCollection_SeqNode {

public:

  
      Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour(const Handle(Contap_TheIWLineOfTheIWalkingOfContour)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_Contap_TheIWLineOfTheIWalkingOfContour& Value() const;




  DEFINE_STANDARD_RTTI(Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour)

protected:




private: 


Handle_Contap_TheIWLineOfTheIWalkingOfContour myValue;


};

#define SeqItem Handle_Contap_TheIWLineOfTheIWalkingOfContour
#define SeqItem_hxx <Contap_TheIWLineOfTheIWalkingOfContour.hxx>
#define TCollection_SequenceNode Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour
#define TCollection_SequenceNode_hxx <Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour.hxx>
#define Handle_TCollection_SequenceNode Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour
#define TCollection_SequenceNode_Type_() Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour_Type_()
#define TCollection_Sequence Contap_SequenceOfIWLineOfTheIWalkingOfContour
#define TCollection_Sequence_hxx <Contap_SequenceOfIWLineOfTheIWalkingOfContour.hxx>

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
