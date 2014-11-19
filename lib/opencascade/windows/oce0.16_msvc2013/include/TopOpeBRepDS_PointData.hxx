// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_PointData_HeaderFile
#define _TopOpeBRepDS_PointData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopOpeBRepDS_Point_HeaderFile
#include <TopOpeBRepDS_Point.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopOpeBRepDS_GeometryData_HeaderFile
#include <TopOpeBRepDS_GeometryData.hxx>
#endif
class TopOpeBRepDS_DataStructure;
class TopOpeBRepDS_Point;



class TopOpeBRepDS_PointData  : public TopOpeBRepDS_GeometryData {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepDS_PointData();
  
  Standard_EXPORT   TopOpeBRepDS_PointData(const TopOpeBRepDS_Point& P);
  
  Standard_EXPORT   TopOpeBRepDS_PointData(const TopOpeBRepDS_Point& P,const Standard_Integer I1,const Standard_Integer I2);
  
  Standard_EXPORT     void SetShapes(const Standard_Integer I1,const Standard_Integer I2) ;
  
  Standard_EXPORT     void GetShapes(Standard_Integer& I1,Standard_Integer& I2) const;


friend class TopOpeBRepDS_DataStructure;



protected:





private:



TopOpeBRepDS_Point myPoint;
Standard_Integer myS1;
Standard_Integer myS2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
