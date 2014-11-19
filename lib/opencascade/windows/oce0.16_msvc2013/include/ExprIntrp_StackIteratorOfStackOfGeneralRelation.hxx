// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_StackIteratorOfStackOfGeneralRelation_HeaderFile
#define _ExprIntrp_StackIteratorOfStackOfGeneralRelation_HeaderFile

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
#ifndef _Handle_Expr_GeneralRelation_HeaderFile
#include <Handle_Expr_GeneralRelation.hxx>
#endif
#ifndef _Handle_ExprIntrp_StackNodeOfStackOfGeneralRelation_HeaderFile
#include <Handle_ExprIntrp_StackNodeOfStackOfGeneralRelation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class Expr_GeneralRelation;
class ExprIntrp_StackOfGeneralRelation;
class ExprIntrp_StackNodeOfStackOfGeneralRelation;



class ExprIntrp_StackIteratorOfStackOfGeneralRelation  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   ExprIntrp_StackIteratorOfStackOfGeneralRelation();
  
  Standard_EXPORT   ExprIntrp_StackIteratorOfStackOfGeneralRelation(const ExprIntrp_StackOfGeneralRelation& S);
  
  Standard_EXPORT     void Initialize(const ExprIntrp_StackOfGeneralRelation& S) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT    const Handle_Expr_GeneralRelation& Value() const;





protected:





private:



Standard_Address current;


};

#define Item Handle_Expr_GeneralRelation
#define Item_hxx <Expr_GeneralRelation.hxx>
#define TCollection_StackNode ExprIntrp_StackNodeOfStackOfGeneralRelation
#define TCollection_StackNode_hxx <ExprIntrp_StackNodeOfStackOfGeneralRelation.hxx>
#define TCollection_StackIterator ExprIntrp_StackIteratorOfStackOfGeneralRelation
#define TCollection_StackIterator_hxx <ExprIntrp_StackIteratorOfStackOfGeneralRelation.hxx>
#define Handle_TCollection_StackNode Handle_ExprIntrp_StackNodeOfStackOfGeneralRelation
#define TCollection_StackNode_Type_() ExprIntrp_StackNodeOfStackOfGeneralRelation_Type_()
#define TCollection_Stack ExprIntrp_StackOfGeneralRelation
#define TCollection_Stack_hxx <ExprIntrp_StackOfGeneralRelation.hxx>

#include <TCollection_StackIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_StackNode
#undef TCollection_StackNode_hxx
#undef TCollection_StackIterator
#undef TCollection_StackIterator_hxx
#undef Handle_TCollection_StackNode
#undef TCollection_StackNode_Type_
#undef TCollection_Stack
#undef TCollection_Stack_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
