// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Sweep_NumShapeIterator_HeaderFile
#define _Sweep_NumShapeIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Sweep_NumShape_HeaderFile
#include <Sweep_NumShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class Sweep_NumShape;


//! This class provides iteration services required by <br>
//!          the   Swept Primitives  for   a Directing NumShape <br>
//!          Line. <br>
//! <br>
class Sweep_NumShapeIterator  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Sweep_NumShapeIterator();
  //! Resest the NumShapeIterator on sub-shapes of <aShape>. <br>
  Standard_EXPORT     void Init(const Sweep_NumShape& aShape) ;
  //! Returns True if there is a current sub-shape. <br>
//! <br>
        Standard_Boolean More() const;
  //! Moves to the next sub-shape. <br>
  Standard_EXPORT     void Next() ;
  //! Returns the current sub-shape. <br>
       const Sweep_NumShape& Value() const;
  //! Returns the orientation of the current sub-shape. <br>
        TopAbs_Orientation Orientation() const;





protected:





private:



Sweep_NumShape myNumShape;
Sweep_NumShape myCurrentNumShape;
Standard_Integer myCurrentRange;
Standard_Boolean myMore;
TopAbs_Orientation myCurrentOrientation;


};


#include <Sweep_NumShapeIterator.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
