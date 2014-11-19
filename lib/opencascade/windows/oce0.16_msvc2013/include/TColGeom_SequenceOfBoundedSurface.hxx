// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom_SequenceOfBoundedSurface_HeaderFile
#define _TColGeom_SequenceOfBoundedSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Geom_BoundedSurface_HeaderFile
#include <Handle_Geom_BoundedSurface.hxx>
#endif
#ifndef _Handle_TColGeom_SequenceNodeOfSequenceOfBoundedSurface_HeaderFile
#include <Handle_TColGeom_SequenceNodeOfSequenceOfBoundedSurface.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Geom_BoundedSurface;
class TColGeom_SequenceNodeOfSequenceOfBoundedSurface;



class TColGeom_SequenceOfBoundedSurface  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      TColGeom_SequenceOfBoundedSurface();
  
  Standard_EXPORT     void Clear() ;
~TColGeom_SequenceOfBoundedSurface()
{
  Clear();
}
  
  Standard_EXPORT    const TColGeom_SequenceOfBoundedSurface& Assign(const TColGeom_SequenceOfBoundedSurface& Other) ;
   const TColGeom_SequenceOfBoundedSurface& operator =(const TColGeom_SequenceOfBoundedSurface& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Geom_BoundedSurface)& T) ;
  
        void Append(TColGeom_SequenceOfBoundedSurface& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Geom_BoundedSurface)& T) ;
  
        void Prepend(TColGeom_SequenceOfBoundedSurface& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Geom_BoundedSurface)& T) ;
  
        void InsertBefore(const Standard_Integer Index,TColGeom_SequenceOfBoundedSurface& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Geom_BoundedSurface)& T) ;
  
        void InsertAfter(const Standard_Integer Index,TColGeom_SequenceOfBoundedSurface& S) ;
  
  Standard_EXPORT    const Handle_Geom_BoundedSurface& First() const;
  
  Standard_EXPORT    const Handle_Geom_BoundedSurface& Last() const;
  
        void Split(const Standard_Integer Index,TColGeom_SequenceOfBoundedSurface& Sub) ;
  
  Standard_EXPORT    const Handle_Geom_BoundedSurface& Value(const Standard_Integer Index) const;
   const Handle_Geom_BoundedSurface& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Geom_BoundedSurface)& I) ;
  
  Standard_EXPORT     Handle_Geom_BoundedSurface& ChangeValue(const Standard_Integer Index) ;
    Handle_Geom_BoundedSurface& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   TColGeom_SequenceOfBoundedSurface(const TColGeom_SequenceOfBoundedSurface& Other);




};

#define SeqItem Handle_Geom_BoundedSurface
#define SeqItem_hxx <Geom_BoundedSurface.hxx>
#define TCollection_SequenceNode TColGeom_SequenceNodeOfSequenceOfBoundedSurface
#define TCollection_SequenceNode_hxx <TColGeom_SequenceNodeOfSequenceOfBoundedSurface.hxx>
#define Handle_TCollection_SequenceNode Handle_TColGeom_SequenceNodeOfSequenceOfBoundedSurface
#define TCollection_SequenceNode_Type_() TColGeom_SequenceNodeOfSequenceOfBoundedSurface_Type_()
#define TCollection_Sequence TColGeom_SequenceOfBoundedSurface
#define TCollection_Sequence_hxx <TColGeom_SequenceOfBoundedSurface.hxx>

#include <TCollection_Sequence.lxx>

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
