// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_SolidClassifier_HeaderFile
#define _TopOpeBRepTool_SolidClassifier_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopOpeBRepTool_PSoClassif_HeaderFile
#include <TopOpeBRepTool_PSoClassif.hxx>
#endif
#ifndef _TopTools_IndexedDataMapOfShapeAddress_HeaderFile
#include <TopTools_IndexedDataMapOfShapeAddress.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _TopoDS_Shell_HeaderFile
#include <TopoDS_Shell.hxx>
#endif
#ifndef _TopoDS_Solid_HeaderFile
#include <TopoDS_Solid.hxx>
#endif
#ifndef _BRep_Builder_HeaderFile
#include <BRep_Builder.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopoDS_Solid;
class gp_Pnt;
class TopoDS_Shell;



class TopOpeBRepTool_SolidClassifier  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepTool_SolidClassifier();
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Destroy() ;
Standard_EXPORT  ~TopOpeBRepTool_SolidClassifier() {Destroy();}
  
  Standard_EXPORT     void LoadSolid(const TopoDS_Solid& S) ;
  //! compute the position of point <P> regarding with the <br>
//! geometric domain of the solid <S>. <br>
  Standard_EXPORT     TopAbs_State Classify(const TopoDS_Solid& S,const gp_Pnt& P,const Standard_Real Tol) ;
  
  Standard_EXPORT     void LoadShell(const TopoDS_Shell& S) ;
  //! compute the position of point <P> regarding with the <br>
//! geometric domain of the shell <S>. <br>
  Standard_EXPORT     TopAbs_State Classify(const TopoDS_Shell& S,const gp_Pnt& P,const Standard_Real Tol) ;
  
  Standard_EXPORT     TopAbs_State State() const;





protected:





private:



TopOpeBRepTool_PSoClassif myPClassifier;
TopTools_IndexedDataMapOfShapeAddress myShapeClassifierMap;
TopAbs_State myState;
TopoDS_Shell myShell;
TopoDS_Solid mySolid;
BRep_Builder myBuilder;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
