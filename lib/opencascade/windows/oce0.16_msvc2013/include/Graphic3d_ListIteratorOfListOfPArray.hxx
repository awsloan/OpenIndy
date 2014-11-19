// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_ListIteratorOfListOfPArray_HeaderFile
#define _Graphic3d_ListIteratorOfListOfPArray_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_Graphic3d_ArrayOfPrimitives_HeaderFile
#include <Handle_Graphic3d_ArrayOfPrimitives.hxx>
#endif
#ifndef _Handle_Graphic3d_ListNodeOfListOfPArray_HeaderFile
#include <Handle_Graphic3d_ListNodeOfListOfPArray.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class Graphic3d_ListOfPArray;
class Graphic3d_ArrayOfPrimitives;
class Graphic3d_ListNodeOfListOfPArray;



class Graphic3d_ListIteratorOfListOfPArray  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Graphic3d_ListIteratorOfListOfPArray();
  
  Standard_EXPORT   Graphic3d_ListIteratorOfListOfPArray(const Graphic3d_ListOfPArray& L);
  
  Standard_EXPORT     void Initialize(const Graphic3d_ListOfPArray& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     Handle_Graphic3d_ArrayOfPrimitives& Value() const;


friend class Graphic3d_ListOfPArray;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item Handle_Graphic3d_ArrayOfPrimitives
#define Item_hxx <Graphic3d_ArrayOfPrimitives.hxx>
#define TCollection_ListNode Graphic3d_ListNodeOfListOfPArray
#define TCollection_ListNode_hxx <Graphic3d_ListNodeOfListOfPArray.hxx>
#define TCollection_ListIterator Graphic3d_ListIteratorOfListOfPArray
#define TCollection_ListIterator_hxx <Graphic3d_ListIteratorOfListOfPArray.hxx>
#define Handle_TCollection_ListNode Handle_Graphic3d_ListNodeOfListOfPArray
#define TCollection_ListNode_Type_() Graphic3d_ListNodeOfListOfPArray_Type_()
#define TCollection_List Graphic3d_ListOfPArray
#define TCollection_List_hxx <Graphic3d_ListOfPArray.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
