/////////////////////////////////////////////////////////////////////////////
// Name:        menu.cpp
// Purpose:     awxtest
// Author:      Joachim Buermann
// Id:          $Id$
// Copyright:   (c) 2004 Joachim Buermann
/////////////////////////////////////////////////////////////////////////////

#include "menu.h"

#include "../icons/ak_16x16x32.xpm"
wxIcon quit_icon(ak_16x16_xpm); /* 注意: ak_16x16_xpm 是 ak_16x16x32.xpm 檔內的變數名稱, 非檔名 */

// create a menu bar
wxMenuBar* CreateMenuBar()
{
  wxMenuBar *menuBar = new wxMenuBar();
  wxMenu *menu;
  wxMenuItem *item;

  // create a menu bar
  menu = new wxMenu;
  item = new wxMenuItem( menu, App_Quit, wxString( wxT("E&xit") ) + wxT('\t') + wxT("Alt-X"), wxT("Quit this program"), wxITEM_NORMAL );
  item->SetBitmap(quit_icon);
  menu->Append(item);
  menuBar->Append(menu, "&File");

  // the "About" item should be in the help menu
  menu = new wxMenu;
  menu->Append(App_About, "&About\tF1", "Show about dialog");
  menuBar->Append(menu, "&Help");

  return menuBar;
};
