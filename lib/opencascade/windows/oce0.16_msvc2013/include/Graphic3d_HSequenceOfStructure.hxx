// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_HSequenceOfStructure_HeaderFile
#define _Graphic3d_HSequenceOfStructure_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_HSequenceOfStructure_HeaderFile
#include <Handle_Graphic3d_HSequenceOfStructure.hxx>
#endif

#ifndef _Graphic3d_SequenceOfStructure_HeaderFile
#include <Graphic3d_SequenceOfStructure.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Graphic3d_Structure_HeaderFile
#include <Handle_Graphic3d_Structure.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Graphic3d_Structure;
class Graphic3d_SequenceOfStructure;



class Graphic3d_HSequenceOfStructure : public MMgt_TShared {

public:

  
      Graphic3d_HSequenceOfStructure();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(Graphic3d_Structure)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(Graphic3d_HSequenceOfStructure)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(Graphic3d_Structure)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(Graphic3d_HSequenceOfStructure)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Graphic3d_Structure)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Graphic3d_HSequenceOfStructure)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Graphic3d_Structure)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Graphic3d_HSequenceOfStructure)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_Graphic3d_HSequenceOfStructure Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(Graphic3d_Structure)& anItem) ;
  
  Standard_EXPORT    const Handle_Graphic3d_Structure& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_Graphic3d_Structure& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const Graphic3d_SequenceOfStructure& Sequence() const;
  
        Graphic3d_SequenceOfStructure& ChangeSequence() ;
  
  Standard_EXPORT     Handle_Graphic3d_HSequenceOfStructure ShallowCopy() const;




  DEFINE_STANDARD_RTTI(Graphic3d_HSequenceOfStructure)

protected:




private: 


Graphic3d_SequenceOfStructure mySequence;


};

#define Item Handle_Graphic3d_Structure
#define Item_hxx <Graphic3d_Structure.hxx>
#define TheSequence Graphic3d_SequenceOfStructure
#define TheSequence_hxx <Graphic3d_SequenceOfStructure.hxx>
#define TCollection_HSequence Graphic3d_HSequenceOfStructure
#define TCollection_HSequence_hxx <Graphic3d_HSequenceOfStructure.hxx>
#define Handle_TCollection_HSequence Handle_Graphic3d_HSequenceOfStructure
#define TCollection_HSequence_Type_() Graphic3d_HSequenceOfStructure_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_Graphic3d_HSequenceOfStructure ShallowCopy(const Handle_Graphic3d_HSequenceOfStructure& me) {
 return me->ShallowCopy();
}



#endif
