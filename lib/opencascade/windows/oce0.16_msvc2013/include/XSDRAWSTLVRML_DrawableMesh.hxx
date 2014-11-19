// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSDRAWSTLVRML_DrawableMesh_HeaderFile
#define _XSDRAWSTLVRML_DrawableMesh_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XSDRAWSTLVRML_DrawableMesh_HeaderFile
#include <Handle_XSDRAWSTLVRML_DrawableMesh.hxx>
#endif

#ifndef _Handle_MeshVS_Mesh_HeaderFile
#include <Handle_MeshVS_Mesh.hxx>
#endif
#ifndef _Draw_Drawable3D_HeaderFile
#include <Draw_Drawable3D.hxx>
#endif
class MeshVS_Mesh;
class Draw_Display;



class XSDRAWSTLVRML_DrawableMesh : public Draw_Drawable3D {

public:

  
  Standard_EXPORT   XSDRAWSTLVRML_DrawableMesh(const Handle(MeshVS_Mesh)& aMesh);
  
  Standard_EXPORT   virtual  void DrawOn(Draw_Display& dis) const;
  
  Standard_EXPORT     Handle_MeshVS_Mesh GetMesh() const;




  DEFINE_STANDARD_RTTI(XSDRAWSTLVRML_DrawableMesh)

protected:




private: 


Handle_MeshVS_Mesh myMesh;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
