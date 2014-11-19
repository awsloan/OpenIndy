// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_IndexedFaceSet_HeaderFile
#define _Vrml_IndexedFaceSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Vrml_IndexedFaceSet_HeaderFile
#include <Handle_Vrml_IndexedFaceSet.hxx>
#endif

#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TColStd_HArray1OfInteger;


//! defines a IndexedFaceSet node of VRML specifying geometry shapes. <br>
//!  This node represents a 3D shape formed by constructing faces (polygons) from <br>
//!  vertices located at the current coordinates. IndexedFaceSet uses the indices <br>
//!  in its coordIndex to define polygonal faces. An index of -1 separates faces <br>
//!  (so a -1 at the end of the list is optional). <br>
class Vrml_IndexedFaceSet : public MMgt_TShared {

public:

  
  Standard_EXPORT   Vrml_IndexedFaceSet(const Handle(TColStd_HArray1OfInteger)& aCoordIndex,const Handle(TColStd_HArray1OfInteger)& aMaterialIndex,const Handle(TColStd_HArray1OfInteger)& aNormalIndex,const Handle(TColStd_HArray1OfInteger)& aTextureCoordIndex);
  
  Standard_EXPORT   Vrml_IndexedFaceSet();
  
  Standard_EXPORT     void SetCoordIndex(const Handle(TColStd_HArray1OfInteger)& aCoordIndex) ;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfInteger CoordIndex() const;
  
  Standard_EXPORT     void SetMaterialIndex(const Handle(TColStd_HArray1OfInteger)& aMaterialIndex) ;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfInteger MaterialIndex() const;
  
  Standard_EXPORT     void SetNormalIndex(const Handle(TColStd_HArray1OfInteger)& aNormalIndex) ;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfInteger NormalIndex() const;
  
  Standard_EXPORT     void SetTextureCoordIndex(const Handle(TColStd_HArray1OfInteger)& aTextureCoordIndex) ;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfInteger TextureCoordIndex() const;
  
  Standard_EXPORT     Standard_OStream& Print(Standard_OStream& anOStream) const;




  DEFINE_STANDARD_RTTI(Vrml_IndexedFaceSet)

protected:




private: 


Handle_TColStd_HArray1OfInteger myCoordIndex;
Handle_TColStd_HArray1OfInteger myMaterialIndex;
Handle_TColStd_HArray1OfInteger myNormalIndex;
Handle_TColStd_HArray1OfInteger myTextureCoordIndex;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
