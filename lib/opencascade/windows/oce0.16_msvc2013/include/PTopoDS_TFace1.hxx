// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopoDS_TFace1_HeaderFile
#define _PTopoDS_TFace1_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PTopoDS_TFace1_HeaderFile
#include <Handle_PTopoDS_TFace1.hxx>
#endif

#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _PTopoDS_TShape1_HeaderFile
#include <PTopoDS_TShape1.hxx>
#endif


class PTopoDS_TFace1 : public PTopoDS_TShape1 {

public:

  //! the new TFace1 covers the whole 2D space. <br>
  Standard_EXPORT   PTopoDS_TFace1();
  
  Standard_EXPORT     TopAbs_ShapeEnum ShapeType() const;

PTopoDS_TFace1(const Storage_stCONSTclCOM& a) : PTopoDS_TShape1(a)
{
  
}



  DEFINE_STANDARD_RTTI(PTopoDS_TFace1)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
