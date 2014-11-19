// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QADraw_HeaderFile
#define _QADraw_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

class Draw_Interpretor;



class QADraw  {
public:

  DEFINE_STANDARD_ALLOC

  //! Define specicial commands for AIS. <br>
  Standard_EXPORT   static  void CommonCommands(Draw_Interpretor& DI) ;
  
  Standard_EXPORT   static  void AdditionalCommands(Draw_Interpretor& DI) ;
  //! Loads all QA Draw commands. Used for plugin. <br>
  Standard_EXPORT   static  void Factory(Draw_Interpretor& DI) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
