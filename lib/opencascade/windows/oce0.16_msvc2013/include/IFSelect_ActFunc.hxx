// Created on: 2000-02-29
// Created by: data exchange team
// Copyright (c) 2000-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _IFSelect_ActFunc_HeaderFile
#define _IFSelect_ActFunc_HeaderFile

#include <Standard_Type.hxx>
#include <Handle_IFSelect_SessionPilot.hxx>
#include <IFSelect_ReturnStatus.hxx>

typedef IFSelect_ReturnStatus (*IFSelect_ActFunc) (const Handle(IFSelect_SessionPilot)&);

Standard_EXPORT Handle(Standard_Type)& STANDARD_TYPE(IFSelect_ActFunc);

#endif
