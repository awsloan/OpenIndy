// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_Chronometer_HeaderFile
#define _Draw_Chronometer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Draw_Chronometer_HeaderFile
#include <Handle_Draw_Chronometer.hxx>
#endif

#ifndef _OSD_Timer_HeaderFile
#include <OSD_Timer.hxx>
#endif
#ifndef _Draw_Drawable3D_HeaderFile
#include <Draw_Drawable3D.hxx>
#endif
#ifndef _Handle_Draw_Drawable3D_HeaderFile
#include <Handle_Draw_Drawable3D.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class OSD_Timer;
class Draw_Display;
class Draw_Drawable3D;
class Draw_Interpretor;


//! Class to store chronometer variables. <br>
class Draw_Chronometer : public Draw_Drawable3D {

public:

  
  Standard_EXPORT   Draw_Chronometer();
  
  Standard_EXPORT     OSD_Timer& Timer() ;
  //! Does nothhing, <br>
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;
  //! For variable copy. <br>
  Standard_EXPORT   virtual  Handle_Draw_Drawable3D Copy() const;
  //! For variable dump. <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& S) const;
  //! For variable whatis command. <br>
  Standard_EXPORT   virtual  void Whatis(Draw_Interpretor& I) const;




  DEFINE_STANDARD_RTTI(Draw_Chronometer)

protected:




private: 


OSD_Timer myTimer;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
