/////////////////////////////////////////////////////////////////////////////
// Name:        menu.h
// Purpose:     awxtest
// Author:      Joachim Buermann
// Id:          $Id$
// Copyright:   (c) 2001-2003 Joachim Buermann
/////////////////////////////////////////////////////////////////////////////

#ifndef __MENU_H
#define __MENU_H

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

// IDs for the controls and the menu commands
enum
{
    // menu items
    App_Quit = wxID_EXIT,

    // it is important for the id corresponding to the "About" command to have
    // this standard value as otherwise it won't be handled properly under Mac
    // (where it is special and put into the "Apple" menu)
    App_About = wxID_ABOUT
};

wxMenuBar* CreateMenuBar();

#endif
