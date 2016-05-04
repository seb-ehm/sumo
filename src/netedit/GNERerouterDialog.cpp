/****************************************************************************/
/// @file    GNERerouterDialog.cpp
/// @author  Pablo Alvarez Lopez
/// @date    April 2016
/// @version $Id: GNERerouterDialog.cpp 20472 2016-04-15 15:36:45Z palcraft $
///
/// Dialog for edit rerouters
/****************************************************************************/
// SUMO, Simulation of Urban MObility; see http://sumo-sim.org/
// Copyright (C) 2001-2013 DLR (http://www.dlr.de/) and contributors
/****************************************************************************/
//
//   This file is part of SUMO.
//   SUMO is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation; either version 3 of the License, or
//   (at your option) any later version.
//
/****************************************************************************/

// ===========================================================================
// included modules
// ===========================================================================
#ifdef _MSC_VER
#include <windows_config.h>
#else
#include <config.h>
#endif

#include <iostream>
#include <utils/gui/windows/GUIAppEnum.h>
#include "GNERerouterDialog.h"
#include "GNERerouter.h"

#ifdef CHECK_MEMORY_LEAKS
#include <foreign/nvwa/debug_new.h>
#endif

// ===========================================================================
// FOX callback mapping
// ===========================================================================

FXDEFMAP(GNERerouterDialog) GNERerouterDialogMap[] = {
    FXMAPFUNC(SEL_COMMAND, MID_GNE_MODE_ADDITIONALDIALOG_ACCEPT, GNERerouterDialog::onCmdAccept),
    FXMAPFUNC(SEL_COMMAND, MID_GNE_MODE_ADDITIONALDIALOG_CANCEL, GNERerouterDialog::onCmdCancel),
    FXMAPFUNC(SEL_COMMAND, MID_GNE_MODE_ADDITIONALDIALOG_RESET,  GNERerouterDialog::onCmdReset),
};

// Object implementation
FXIMPLEMENT(GNERerouterDialog, FXDialogBox, GNERerouterDialogMap, ARRAYNUMBER(GNERerouterDialogMap))

// ===========================================================================
// static member definitions
// ===========================================================================


// ===========================================================================
// member method definitions
// ===========================================================================

GNERerouterDialog::GNERerouterDialog(GNERerouter *rerouterParent) : 
    GNEAdditionalDialog(rerouterParent),
    myRerouterParent(rerouterParent) {
}


GNERerouterDialog::~GNERerouterDialog() {
}


long 
GNERerouterDialog::onCmdAccept(FXObject*, FXSelector, void*) {
    // Close dialog
    closeAdditionalDialog();
    return 1;
}


long 
GNERerouterDialog::onCmdCancel(FXObject*, FXSelector, void*) {
    // Close dialog
    closeAdditionalDialog();
    return 1;
}


long
GNERerouterDialog::onCmdReset(FXObject*, FXSelector, void*) {
    return 1;
}

/****************************************************************************/
