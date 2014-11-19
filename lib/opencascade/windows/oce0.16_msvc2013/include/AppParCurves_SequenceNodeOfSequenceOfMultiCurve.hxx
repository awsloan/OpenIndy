// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppParCurves_SequenceNodeOfSequenceOfMultiCurve_HeaderFile
#define _AppParCurves_SequenceNodeOfSequenceOfMultiCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AppParCurves_SequenceNodeOfSequenceOfMultiCurve_HeaderFile
#include <Handle_AppParCurves_SequenceNodeOfSequenceOfMultiCurve.hxx>
#endif

#ifndef _AppParCurves_MultiCurve_HeaderFile
#include <AppParCurves_MultiCurve.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class AppParCurves_MultiCurve;
class AppParCurves_SequenceOfMultiCurve;



class AppParCurves_SequenceNodeOfSequenceOfMultiCurve : public TCollection_SeqNode {

public:

  
      AppParCurves_SequenceNodeOfSequenceOfMultiCurve(const AppParCurves_MultiCurve& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        AppParCurves_MultiCurve& Value() const;




  DEFINE_STANDARD_RTTI(AppParCurves_SequenceNodeOfSequenceOfMultiCurve)

protected:




private: 


AppParCurves_MultiCurve myValue;


};

#define SeqItem AppParCurves_MultiCurve
#define SeqItem_hxx <AppParCurves_MultiCurve.hxx>
#define TCollection_SequenceNode AppParCurves_SequenceNodeOfSequenceOfMultiCurve
#define TCollection_SequenceNode_hxx <AppParCurves_SequenceNodeOfSequenceOfMultiCurve.hxx>
#define Handle_TCollection_SequenceNode Handle_AppParCurves_SequenceNodeOfSequenceOfMultiCurve
#define TCollection_SequenceNode_Type_() AppParCurves_SequenceNodeOfSequenceOfMultiCurve_Type_()
#define TCollection_Sequence AppParCurves_SequenceOfMultiCurve
#define TCollection_Sequence_hxx <AppParCurves_SequenceOfMultiCurve.hxx>

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
