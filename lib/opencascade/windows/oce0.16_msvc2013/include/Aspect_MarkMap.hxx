// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_MarkMap_HeaderFile
#define _Aspect_MarkMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Aspect_MarkMap_HeaderFile
#include <Handle_Aspect_MarkMap.hxx>
#endif

#ifndef _Aspect_SequenceOfMarkMapEntry_HeaderFile
#include <Aspect_SequenceOfMarkMapEntry.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Aspect_BadAccess;
class Aspect_MarkMapEntry;
class Aspect_MarkerStyle;


//! This class defines a MarkMap object. <br>
class Aspect_MarkMap : public MMgt_TShared {

public:

  
  Standard_EXPORT   Aspect_MarkMap();
  //! Adds an entry in the mark map <me>. <br>
//!  Warning: Raises BadAccess if MarkMap size is exceeded. <br>
  Standard_EXPORT     void AddEntry(const Aspect_MarkMapEntry& AnEntry) ;
  //! Search an identical marker style entry in the mark map <me> <br>
//! and returns the MarkMapEntry Index if exist. <br>
//! Or add a new entry and returns the computed MarkMapEntry index used. <br>
  Standard_EXPORT     Standard_Integer AddEntry(const Aspect_MarkerStyle& aStyle) ;
  //! Returns the Allocated markmap Size <br>
  Standard_EXPORT     Standard_Integer Size() const;
  //! Returns the MarkMapEntry.Index of the MarkMap <br>
//!          at rank <aMarkmapIndex> . <br>
  Standard_EXPORT     Standard_Integer Index(const Standard_Integer aMarkmapIndex) const;
  
  Standard_EXPORT     void Dump() const;
  //! Returns the Mark map entry with the index <AnIndex>. <br>
//!  Warning: Raises BadAccess if the index less than 1 or <br>
//!	    greater than Size. <br>
  Standard_EXPORT     Aspect_MarkMapEntry Entry(const Standard_Integer AnIndex) const;




  DEFINE_STANDARD_RTTI(Aspect_MarkMap)

protected:


Aspect_SequenceOfMarkMapEntry mydata;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
