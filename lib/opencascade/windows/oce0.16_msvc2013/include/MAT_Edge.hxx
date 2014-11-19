// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_Edge_HeaderFile
#define _MAT_Edge_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MAT_Edge_HeaderFile
#include <Handle_MAT_Edge.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MAT_Bisector_HeaderFile
#include <Handle_MAT_Bisector.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class MAT_Bisector;



class MAT_Edge : public MMgt_TShared {

public:

  
  Standard_EXPORT   MAT_Edge();
  
  Standard_EXPORT     void EdgeNumber(const Standard_Integer anumber) ;
  
  Standard_EXPORT     void FirstBisector(const Handle(MAT_Bisector)& abisector) ;
  
  Standard_EXPORT     void SecondBisector(const Handle(MAT_Bisector)& abisector) ;
  
  Standard_EXPORT     void Distance(const Standard_Real adistance) ;
  
  Standard_EXPORT     void IntersectionPoint(const Standard_Integer apoint) ;
  
  Standard_EXPORT     Standard_Integer EdgeNumber() const;
  
  Standard_EXPORT     Handle_MAT_Bisector FirstBisector() const;
  
  Standard_EXPORT     Handle_MAT_Bisector SecondBisector() const;
  
  Standard_EXPORT     Standard_Real Distance() const;
  
  Standard_EXPORT     Standard_Integer IntersectionPoint() const;
  
  Standard_EXPORT     void Dump(const Standard_Integer ashift,const Standard_Integer alevel) const;




  DEFINE_STANDARD_RTTI(MAT_Edge)

protected:




private: 


Standard_Integer theedgenumber;
Handle_MAT_Bisector thefirstbisector;
Handle_MAT_Bisector thesecondbisector;
Standard_Real thedistance;
Standard_Integer theintersectionpoint;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
