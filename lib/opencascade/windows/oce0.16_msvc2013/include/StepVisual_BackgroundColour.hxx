// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_BackgroundColour_HeaderFile
#define _StepVisual_BackgroundColour_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepVisual_BackgroundColour_HeaderFile
#include <Handle_StepVisual_BackgroundColour.hxx>
#endif

#ifndef _StepVisual_AreaOrView_HeaderFile
#include <StepVisual_AreaOrView.hxx>
#endif
#ifndef _StepVisual_Colour_HeaderFile
#include <StepVisual_Colour.hxx>
#endif
class StepVisual_AreaOrView;



class StepVisual_BackgroundColour : public StepVisual_Colour {

public:

  //! Returns a BackgroundColour <br>
  Standard_EXPORT   StepVisual_BackgroundColour();
  
  Standard_EXPORT   virtual  void Init(const StepVisual_AreaOrView& aPresentation) ;
  
  Standard_EXPORT     void SetPresentation(const StepVisual_AreaOrView& aPresentation) ;
  
  Standard_EXPORT     StepVisual_AreaOrView Presentation() const;




  DEFINE_STANDARD_RTTI(StepVisual_BackgroundColour)

protected:




private: 


StepVisual_AreaOrView presentation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
