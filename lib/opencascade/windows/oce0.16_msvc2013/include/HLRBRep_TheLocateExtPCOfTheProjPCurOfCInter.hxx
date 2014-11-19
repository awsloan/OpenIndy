// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter_HeaderFile
#define _HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter_HeaderFile
#include <HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_TypeMismatch;
class StdFail_NotDone;
class HLRBRep_CurveTool;
class Extrema_POnCurv2d;
class gp_Pnt2d;
class gp_Vec2d;
class HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter;
class HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter;



class HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter();
  
  Standard_EXPORT   HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter(const gp_Pnt2d& P,const Standard_Address& C,const Standard_Real U0,const Standard_Real TolU);
  
  Standard_EXPORT   HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter(const gp_Pnt2d& P,const Standard_Address& C,const Standard_Real U0,const Standard_Real Umin,const Standard_Real Usup,const Standard_Real TolU);
  
  Standard_EXPORT     void Initialize(const Standard_Address& C,const Standard_Real Umin,const Standard_Real Usup,const Standard_Real TolU) ;
  
  Standard_EXPORT     void Perform(const gp_Pnt2d& P,const Standard_Real U0) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     Standard_Real SquareDistance() const;
  
  Standard_EXPORT     Standard_Boolean IsMin() const;
  
  Standard_EXPORT    const Extrema_POnCurv2d& Point() const;





protected:





private:



Standard_Boolean myDone;
Standard_Real mytolU;
Standard_Real myumin;
Standard_Real myusup;
HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter myF;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
