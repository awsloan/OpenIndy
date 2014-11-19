// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_TheIWLineOfTheIWalkingOfContour_HeaderFile
#define _Contap_TheIWLineOfTheIWalkingOfContour_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Contap_TheIWLineOfTheIWalkingOfContour_HeaderFile
#include <Handle_Contap_TheIWLineOfTheIWalkingOfContour.hxx>
#endif

#ifndef _Handle_IntSurf_LineOn2S_HeaderFile
#include <Handle_IntSurf_LineOn2S.hxx>
#endif
#ifndef _IntSurf_SequenceOfCouple_HeaderFile
#include <IntSurf_SequenceOfCouple.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _IntSurf_PathPoint_HeaderFile
#include <IntSurf_PathPoint.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _IntSurf_Allocator_HeaderFile
#include <IntSurf_Allocator.hxx>
#endif
class IntSurf_LineOn2S;
class Standard_OutOfRange;
class Standard_DomainError;
class IntSurf_PathPoint;
class IntSurf_PntOn2S;
class gp_Vec;



class Contap_TheIWLineOfTheIWalkingOfContour : public MMgt_TShared {

public:

  
  Standard_EXPORT   Contap_TheIWLineOfTheIWalkingOfContour(const IntSurf_Allocator& theAllocator = 0);
  
  Standard_EXPORT     void Reverse() ;
  
        void Cut(const Standard_Integer Index) ;
  
        void AddPoint(const IntSurf_PntOn2S& P) ;
  
        void AddStatusFirst(const Standard_Boolean Closed,const Standard_Boolean HasFirst) ;
  
        void AddStatusFirst(const Standard_Boolean Closed,const Standard_Boolean HasLast,const Standard_Integer Index,const IntSurf_PathPoint& P) ;
  
        void AddStatusFirstLast(const Standard_Boolean Closed,const Standard_Boolean HasFirst,const Standard_Boolean HasLast) ;
  
        void AddStatusLast(const Standard_Boolean HasLast) ;
  
        void AddStatusLast(const Standard_Boolean HasLast,const Standard_Integer Index,const IntSurf_PathPoint& P) ;
  
        void AddIndexPassing(const Standard_Integer Index) ;
  
        void SetTangentVector(const gp_Vec& V,const Standard_Integer Index) ;
  
        void SetTangencyAtBegining(const Standard_Boolean IsTangent) ;
  
        void SetTangencyAtEnd(const Standard_Boolean IsTangent) ;
  
        Standard_Integer NbPoints() const;
  
       const IntSurf_PntOn2S& Value(const Standard_Integer Index) const;
  
       const Handle_IntSurf_LineOn2S& Line() const;
  
        Standard_Boolean IsClosed() const;
  
        Standard_Boolean HasFirstPoint() const;
  
        Standard_Boolean HasLastPoint() const;
  
       const IntSurf_PathPoint& FirstPoint() const;
  
        Standard_Integer FirstPointIndex() const;
  
       const IntSurf_PathPoint& LastPoint() const;
  
        Standard_Integer LastPointIndex() const;
  
        Standard_Integer NbPassingPoint() const;
  
        void PassingPoint(const Standard_Integer Index,Standard_Integer& IndexLine,Standard_Integer& IndexPnts) const;
  
       const gp_Vec& TangentVector(Standard_Integer& Index) const;
  
        Standard_Boolean IsTangentAtBegining() const;
  
        Standard_Boolean IsTangentAtEnd() const;




  DEFINE_STANDARD_RTTI(Contap_TheIWLineOfTheIWalkingOfContour)

protected:




private: 


Handle_IntSurf_LineOn2S line;
IntSurf_SequenceOfCouple couple;
Standard_Boolean closed;
Standard_Boolean hasFirst;
Standard_Boolean hasLast;
Standard_Integer firstIndex;
Standard_Integer lastIndex;
IntSurf_PathPoint theFirstPoint;
IntSurf_PathPoint theLastPoint;
Standard_Integer indextg;
gp_Vec vcttg;
Standard_Boolean istgtbeg;
Standard_Boolean istgtend;


};

#define TheStartPoint IntSurf_PathPoint
#define TheStartPoint_hxx <IntSurf_PathPoint.hxx>
#define IntWalk_IWLine Contap_TheIWLineOfTheIWalkingOfContour
#define IntWalk_IWLine_hxx <Contap_TheIWLineOfTheIWalkingOfContour.hxx>
#define Handle_IntWalk_IWLine Handle_Contap_TheIWLineOfTheIWalkingOfContour
#define IntWalk_IWLine_Type_() Contap_TheIWLineOfTheIWalkingOfContour_Type_()

#include <IntWalk_IWLine.lxx>

#undef TheStartPoint
#undef TheStartPoint_hxx
#undef IntWalk_IWLine
#undef IntWalk_IWLine_hxx
#undef Handle_IntWalk_IWLine
#undef IntWalk_IWLine_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
