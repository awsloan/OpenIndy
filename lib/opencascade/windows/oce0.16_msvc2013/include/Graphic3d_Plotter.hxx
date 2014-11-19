// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_Plotter_HeaderFile
#define _Graphic3d_Plotter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_Plotter_HeaderFile
#include <Handle_Graphic3d_Plotter.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Graphic3d_DataStructureManager_HeaderFile
#include <Handle_Graphic3d_DataStructureManager.hxx>
#endif
class Graphic3d_PlotterDefinitionError;
class Graphic3d_DataStructureManager;


//! This class allows the definition of a plotter <br>
class Graphic3d_Plotter : public MMgt_TShared {

public:

  //! Deletes the plotter <me>. <br>
  Standard_EXPORT   virtual  void Destroy() ;
~Graphic3d_Plotter()
{
  Destroy();
}
  
//!  Warning: Returns Standard_True if plotting is enabled in the view. <br>
//!	    Raises PlotterDefinitionError from Graphic3d <br>
//!	    if plotting has already started. <br>
  Standard_EXPORT   virtual  Standard_Boolean BeginPlot(const Handle(Graphic3d_DataStructureManager)& aProjector) ;
  //! Stops the plotting. <br>
//!  Warning: Raises PlotterDefinitionError from Graphic3d <br>
//!	    if plotting has not started yet. <br>
  Standard_EXPORT   virtual  void EndPlot() ;
  
  Standard_EXPORT   virtual  Standard_Boolean PlottingState() const = 0;



  DEFINE_STANDARD_RTTI(Graphic3d_Plotter)

protected:

  //! Initialise the constructor of the plotter. <br>
//!  Warning: Raises InitialisationError if the initialisation <br>
//!	    of the plotter failed. <br>
  Standard_EXPORT   Graphic3d_Plotter();

Standard_Boolean MyPlottingState;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
