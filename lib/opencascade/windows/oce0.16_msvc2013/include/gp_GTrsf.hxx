// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_GTrsf_HeaderFile
#define _gp_GTrsf_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Mat_HeaderFile
#include <gp_Mat.hxx>
#endif
#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
#ifndef _gp_TrsfForm_HeaderFile
#include <gp_TrsfForm.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Trsf_HeaderFile
#include <gp_Trsf.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_ConstructionError;
class Standard_OutOfRange;
class gp_Trsf;
class gp_Mat;
class gp_XYZ;
class gp_Ax1;
class gp_Ax2;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_GTrsf);


//!  Defines a non-persistent transformation in 3D space. <br>
//!  This transformation is a general transformation. <br>
//!  It can be a Trsf from gp, an affinity, or you can define <br>
//!  your own transformation giving the matrix of transformation. <br>
//! <br>
//!  With a Gtrsf you can transform only a triplet of coordinates <br>
//!  XYZ. It is not possible to transform other geometric objects <br>
//!  because these transformations can change the nature of non- <br>
//!  elementary geometric objects. <br>
//!  The transformation GTrsf can be represented as follow : <br>
//! <br>
//!       V1   V2   V3    T       XYZ        XYZ <br>
//!    | a11  a12  a13   a14 |   | x |      | x'| <br>
//!    | a21  a22  a23   a24 |   | y |      | y'| <br>
//!    | a31  a32  a33   a34 |   | z |   =  | z'| <br>
//!    |  0    0    0     1  |   | 1 |      | 1 | <br>
//! <br>
//!    where {V1, V2, V3} define the vectorial part of the <br>
//!    transformation and T defines the translation part of the <br>
//!    transformation. <br>
//!  Warning <br>
//! A GTrsf transformation is only applicable to <br>
//! coordinates. Be careful if you apply such a <br>
//! transformation to all points of a geometric object, as <br>
//! this can change the nature of the object and thus <br>
//! render it incoherent! <br>
//! Typically, a circle is transformed into an ellipse by an <br>
//! affinity transformation. To avoid modifying the nature of <br>
//! an object, use a gp_Trsf transformation instead, as <br>
//! objects of this class respect the nature of geometric objects. <br>
class gp_GTrsf  {

public:

  DEFINE_STANDARD_ALLOC

  //! Returns the Identity transformation. <br>
      gp_GTrsf();
  
//!  Converts the gp_Trsf transformation T into a <br>
//!   general transformation, i.e. Returns a GTrsf with <br>
//! the same matrix of coefficients as the Trsf T. <br>
      gp_GTrsf(const gp_Trsf& T);
  
//!  Creates a transformation based on the matrix M and the <br>
//!    vector V where M defines the vectorial part of <br>
//!    the transformation, and V the translation part, or <br>
      gp_GTrsf(const gp_Mat& M,const gp_XYZ& V);
  //! Changes this transformation into an affinity of ratio Ratio <br>
//! with respect to the axis A1. <br>
//!   Note: an affinity is a point-by-point transformation that <br>
//! transforms any point P into a point P' such that if H is <br>
//! the orthogonal projection of P on the axis A1 or the <br>
//! plane A2, the vectors HP and HP' satisfy: <br>
//! HP' = Ratio * HP. <br>
        void SetAffinity(const gp_Ax1& A1,const Standard_Real Ratio) ;
  //! Changes this transformation into an affinity of ratio Ratio <br>
//! with respect to  the plane defined by the origin, the "X Direction" and <br>
//!   the "Y Direction" of coordinate system A2. <br>
//!   Note: an affinity is a point-by-point transformation that <br>
//! transforms any point P into a point P' such that if H is <br>
//! the orthogonal projection of P on the axis A1 or the <br>
//! plane A2, the vectors HP and HP' satisfy: <br>
//! HP' = Ratio * HP. <br>
        void SetAffinity(const gp_Ax2& A2,const Standard_Real Ratio) ;
  
//!  Replaces  the coefficient (Row, Col) of the matrix representing <br>
//! this transformation by Value.  Raises OutOfRange <br>
//! if  Row < 1 or Row > 3 or Col < 1 or Col > 4 <br>
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const Standard_Real Value) ;
  //! Replaces the vectorial part of this transformation by Matrix. <br>
        void SetVectorialPart(const gp_Mat& Matrix) ;
  //! Replaces the translation part of <br>
//! this transformation by the coordinates of the number triple Coord. <br>
  Standard_EXPORT     void SetTranslationPart(const gp_XYZ& Coord) ;
  //!  Assigns the vectorial and translation parts of T to this transformation. <br>
        void SetTrsf(const gp_Trsf& T) ;
  
//!   Returns true if the determinant of the vectorial part of <br>
//! this transformation is negative. <br>
        Standard_Boolean IsNegative() const;
  
//!  Returns true if this transformation is singular (and <br>
//! therefore, cannot be inverted). <br>
//! Note: The Gauss LU decomposition is used to invert the <br>
//! transformation matrix. Consequently, the transformation <br>
//! is considered as singular if the largest pivot found is less <br>
//! than or equal to gp::Resolution(). <br>
//! Warning <br>
//! If this transformation is singular, it cannot be inverted. <br>
        Standard_Boolean IsSingular() const;
  
//!  Returns the nature of the transformation.  It can be an <br>
//! identity transformation, a rotation, a translation, a mirror <br>
//! transformation (relative to a point, an axis or a plane), a <br>
//! scaling transformation, a compound transformation or <br>
//! some other type of transformation. <br>
  Standard_EXPORT     gp_TrsfForm Form() const;
  
//!  verify and set the shape of the GTrsf Other or CompoundTrsf <br>
//!  Ex : <br>
//!  myGTrsf.SetValue(row1,col1,val1); <br>
//!  myGTrsf.SetValue(row2,col2,val2); <br>
//!  ... <br>
//!  myGTrsf.SetForm(); <br>
  Standard_EXPORT     void SetForm() ;
  //!  Returns the translation part of the GTrsf. <br>
       const gp_XYZ& TranslationPart() const;
  
//!  Computes the vectorial part of the GTrsf. The returned Matrix <br>
//!  is a  3*3 matrix. <br>
       const gp_Mat& VectorialPart() const;
  
//!  Returns the coefficients of the global matrix of transformation. <br>
//! Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 4 <br>
        Standard_Real Value(const Standard_Integer Row,const Standard_Integer Col) const;
      Standard_Real operator()(const Standard_Integer Row,const Standard_Integer Col) const
{
  return Value(Row,Col);
}
  
  Standard_EXPORT     void Invert() ;
  
//!  Computes the reverse transformation. <br>
//!  Raises an exception if the matrix of the transformation <br>
//!  is not inversible. <br>
        gp_GTrsf Inverted() const;
  
//!  Computes the transformation composed from T and <me>. <br>
//!  In a C++ implementation you can also write Tcomposed = <me> * T. <br>
//! Example : <br>
//!      GTrsf T1, T2, Tcomp; ............... <br>
//!      //composition : <br>
//!        Tcomp = T2.Multiplied(T1);         // or   (Tcomp = T2 * T1) <br>
//!      // transformation of a point <br>
//!        XYZ P(10.,3.,4.); <br>
//!        XYZ P1(P); <br>
//!        Tcomp.Transforms(P1);               //using Tcomp <br>
//!        XYZ P2(P); <br>
//!        T1.Transforms(P2);                  //using T1 then T2 <br>
//!        T2.Transforms(P2);                  // P1 = P2 !!! <br>
//! C++: alias operator *= <br>
  Standard_EXPORT     void Multiply(const gp_GTrsf& T) ;
  
//!  Computes the transformation composed with <me> and T. <br>
//!  <me> = T * <me> <br>
        gp_GTrsf Multiplied(const gp_GTrsf& T) const;
  
//! Computes the product of the transformation T and this <br>
//! transformation and assigns the result to this transformation. <br>
//! this = T * this <br>
  Standard_EXPORT     void PreMultiply(const gp_GTrsf& T) ;
  
  Standard_EXPORT     void Power(const Standard_Integer N) ;
  
//!  Computes: <br>
//!  -   the product of this transformation multiplied by itself <br>
//!   N times, if N is positive, or <br>
//! -   the product of the inverse of this transformation <br>
//!   multiplied by itself |N| times, if N is negative. <br>
//!   If N equals zero, the result is equal to the Identity <br>
//!  transformation. <br>
//!  I.e.:  <me> * <me> * .......* <me>, N time. <br>
//!  if N =0 <me> = Identity <br>
//!  if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse(). <br>
//! <br>
//!  Raises an exception if N < 0 and if the matrix of the <br>
//!  transformation not inversible. <br>
        gp_GTrsf Powered(const Standard_Integer N) const;
  
        void Transforms(gp_XYZ& Coord) const;
  //! Transforms a triplet XYZ with a GTrsf. <br>
        void Transforms(Standard_Real& X,Standard_Real& Y,Standard_Real& Z) const;
  
        gp_Trsf Trsf() const;
    const gp_Mat& _CSFDB_Getgp_GTrsfmatrix() const { return matrix; }
    const gp_XYZ& _CSFDB_Getgp_GTrsfloc() const { return loc; }
    gp_TrsfForm _CSFDB_Getgp_GTrsfshape() const { return shape; }
    void _CSFDB_Setgp_GTrsfshape(const gp_TrsfForm p) { shape = p; }
    Standard_Real _CSFDB_Getgp_GTrsfscale() const { return scale; }
    void _CSFDB_Setgp_GTrsfscale(const Standard_Real p) { scale = p; }



protected:




private: 


gp_Mat matrix;
gp_XYZ loc;
gp_TrsfForm shape;
Standard_Real scale;


};


#include <gp_GTrsf.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif