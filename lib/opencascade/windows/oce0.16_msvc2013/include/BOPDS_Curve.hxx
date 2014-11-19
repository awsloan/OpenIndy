// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPDS_Curve_HeaderFile
#define _BOPDS_Curve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPCol_BaseAllocator_HeaderFile
#include <BOPCol_BaseAllocator.hxx>
#endif
#ifndef _IntTools_Curve_HeaderFile
#include <IntTools_Curve.hxx>
#endif
#ifndef _BOPDS_ListOfPaveBlock_HeaderFile
#include <BOPDS_ListOfPaveBlock.hxx>
#endif
#ifndef _BOPCol_ListOfInteger_HeaderFile
#include <BOPCol_ListOfInteger.hxx>
#endif
#ifndef _Bnd_Box_HeaderFile
#include <Bnd_Box.hxx>
#endif
#ifndef _Handle_BOPDS_PaveBlock_HeaderFile
#include <Handle_BOPDS_PaveBlock.hxx>
#endif
#ifndef _BOPDS_PaveBlock_HeaderFile
#include <BOPDS_PaveBlock.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IntTools_Curve;
class Bnd_Box;
class BOPDS_PaveBlock;



//! The class BOPDS_Curve is to store <br>
//! the information about intersection curve <br>
class BOPDS_Curve  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Empty contructor <br>
//! <br>
      BOPDS_Curve();
virtual ~BOPDS_Curve();
  
//!  Contructor <br>
//!  <theAllocator> - the allocator to manage the memory <br>
//! <br>
      BOPDS_Curve(const BOPCol_BaseAllocator& theAllocator);
  
//! Modifier <br>
//! Sets the curve <theC> <br>
        void SetCurve(const IntTools_Curve& theC) ;
  
//! Selector <br>
//! Returns the curve <br>
       const IntTools_Curve& Curve() const;
  
//! Modifier <br>
//! Sets the bounding box <theBox> of the curve <br>
        void SetBox(const Bnd_Box& theBox) ;
  
//! Selector <br>
//! Returns the bounding box of the curve <br>
       const Bnd_Box& Box() const;
  
//! Selector/Modifier <br>
//! Returns the bounding box of the curve <br>
        Bnd_Box& ChangeBox() ;
  
  Standard_EXPORT     void SetPaveBlocks(const BOPDS_ListOfPaveBlock& theLPB) ;
  
//! Selector <br>
//! Returns the list of pave blocks <br>
//! of the curve <br>
       const BOPDS_ListOfPaveBlock& PaveBlocks() const;
  
//! Selector/Modifier <br>
//! Returns the list of pave blocks <br>
//! of the curve <br>
        BOPDS_ListOfPaveBlock& ChangePaveBlocks() ;
  
//! Creates  initial pave block <br>
//! of the curve <br>
        void InitPaveBlock1() ;
  
//! Selector/Modifier <br>
//! Returns  initial pave block <br>
//! of the curve <br>
        Handle_BOPDS_PaveBlock& ChangePaveBlock1() ;
  
//! Selector <br>
//! Returns list of indices of technologic vertices <br>
//! of the curve <br>
       const BOPCol_ListOfInteger& TechnoVertices() const;
  
//! Selector/Modifier <br>
//! Returns list of indices of technologic vertices <br>
//! of the curve <br>
        BOPCol_ListOfInteger& ChangeTechnoVertices() ;
  
//! Query <br>
//! Returns true if at least one pave block of the curve <br>
//!  has edge <br>
        Standard_Boolean HasEdge() const;





protected:



BOPCol_BaseAllocator myAllocator;
IntTools_Curve myCurve;
BOPDS_ListOfPaveBlock myPaveBlocks;
BOPCol_ListOfInteger myTechnoVertices;
Bnd_Box myBox;


private:





};


#include <BOPDS_Curve.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
