// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccAna_Lin2dTanPar_HeaderFile
#define _GccAna_Lin2dTanPar_HeaderFile

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
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TColgp_Array1OfLin2d_HeaderFile
#include <TColgp_Array1OfLin2d.hxx>
#endif
#ifndef _GccEnt_Array1OfPosition_HeaderFile
#include <GccEnt_Array1OfPosition.hxx>
#endif
#ifndef _TColgp_Array1OfPnt2d_HeaderFile
#include <TColgp_Array1OfPnt2d.hxx>
#endif
#ifndef _TColStd_Array1OfReal_HeaderFile
#include <TColStd_Array1OfReal.hxx>
#endif
#ifndef _GccEnt_Position_HeaderFile
#include <GccEnt_Position.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_OutOfRange;
class GccEnt_BadQualifier;
class StdFail_NotDone;
class gp_Pnt2d;
class gp_Lin2d;
class GccEnt_QualifiedCirc;


//! This class implements the algorithms used to create 2d <br>
//!          line tangent to a circle or a point and parallel to <br>
//!          another line. <br>
//!          The solution has the same orientation as the <br>
//!          second argument. <br>
//! Describes functions for building a 2D line parallel to a line and: <br>
//! -   tangential to a circle, or <br>
//! -   passing through a point. <br>
//! A Lin2dTanPar object provides a framework for: <br>
//! -   defining the construction of 2D line(s), <br>
//! -   implementing the construction algorithm, and consulting the result(s). <br>
class GccAna_Lin2dTanPar  {
public:

  DEFINE_STANDARD_ALLOC

  //! This method implements the algorithms used to create a 2d <br>
//!          line passing through a point and parallel to <br>
//!          another line. <br>
  Standard_EXPORT   GccAna_Lin2dTanPar(const gp_Pnt2d& ThePoint,const gp_Lin2d& Lin1);
  //! This method implements the algorithms used to create a 2d <br>
//!          line tangent to a circle and parallel to another line. <br>
//!          It raises BadQualifier in case of EnclosedCirc. <br>
//! Exceptions <br>
//!  GccEnt_BadQualifier if a qualifier is inconsistent with <br>
//! the argument it qualifies (for example, enclosed for a circle). <br>
  Standard_EXPORT   GccAna_Lin2dTanPar(const GccEnt_QualifiedCirc& Qualified1,const gp_Lin2d& Lin1);
  //! Returns True if the algorithm succeeded. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the number of solutions. <br>
//! Raises NotDone if the construction algorithm  didn't succeed. <br>
  Standard_EXPORT     Standard_Integer NbSolutions() const;
  //! Returns the solution number Index and raises OutOfRange <br>
//!           exception if Index is greater than the number of solutions. <br>
//!           Be careful: the Index is only a way to get all the <br>
//!           solutions, but is not associated to those outside the <br>
//!           context of the algorithm-object. <br>
//! raises NotDone if the construction algorithm <br>
//!          didn't succeed. <br>
//!          It raises OutOfRange if Index is greater than the <br>
//!          number of solutions. <br>
  Standard_EXPORT     gp_Lin2d ThisSolution(const Standard_Integer Index) const;
  //! Returns the informations about the qualifiers of the <br>
//!          tangency arguments concerning the solution number Index. <br>
//!          It returns the real qualifiers (the qualifiers given to the <br>
//!          constructor method in case of enclosed, enclosing and outside <br>
//!          and the qualifiers computed in case of unqualified). <br>
//! Raises NotDone if the construction algorithm <br>
//!          didn't succeed. <br>
//!          It raises OutOfRange if Index is greater than the <br>
//!          number of solutions. <br>
  Standard_EXPORT     void WhichQualifier(const Standard_Integer Index,GccEnt_Position& Qualif1) const;
  //! Returns informations about the tangency point between the <br>
//!           result number Index and the first argument. <br>
//!           ParSol is the intrinsic parameter of the point on the <br>
//!           solution curv. <br>
//!           ParArg is the intrinsic parameter of the point on the <br>
//!           argument curv. <br>
//!           ParArg is equal 0 when the solution is passing thrue <br>
//!           a point. Raises NotDone if the construction algorithm <br>
//!          didn't succeed. <br>
//!          It raises OutOfRange if Index is greater than the <br>
//!          number of solutions. <br>
  Standard_EXPORT     void Tangency1(const Standard_Integer Index,Standard_Real& ParSol,Standard_Real& ParArg,gp_Pnt2d& Pnt) const;





protected:





private:



Standard_Boolean WellDone;
Standard_Integer NbrSol;
TColgp_Array1OfLin2d linsol;
GccEnt_Array1OfPosition qualifier1;
TColgp_Array1OfPnt2d pnttg1sol;
TColStd_Array1OfReal par1sol;
TColStd_Array1OfReal pararg1;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
