// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPSelections_SelectFaces_HeaderFile
#define _STEPSelections_SelectFaces_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_STEPSelections_SelectFaces_HeaderFile
#include <Handle_STEPSelections_SelectFaces.hxx>
#endif

#ifndef _IFSelect_SelectExplore_HeaderFile
#include <IFSelect_SelectExplore.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class Standard_Transient;
class Interface_Graph;
class Interface_EntityIterator;
class TCollection_AsciiString;


//! This selection returns "STEP faces" <br>
class STEPSelections_SelectFaces : public IFSelect_SelectExplore {

public:

  
  Standard_EXPORT   STEPSelections_SelectFaces();
  //! Explores an entity, to take its faces <br>
//!           Works recursively <br>
  Standard_EXPORT     Standard_Boolean Explore(const Standard_Integer level,const Handle(Standard_Transient)& ent,const Interface_Graph& G,Interface_EntityIterator& explored) const;
  //! Returns a text defining the criterium : "Faces" <br>
  Standard_EXPORT     TCollection_AsciiString ExploreLabel() const;




  DEFINE_STANDARD_RTTI(STEPSelections_SelectFaces)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
