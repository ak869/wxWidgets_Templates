
/******************************* Copyright (c)  ********************************
                               --- [ Ah kun ] ---
----------------------------------- File Info ----------------------------------
   File name:           main.cpp
   Last modified Date:  2015-04-26
   Last Version:        V0.00.0001
   Descriptions:

----------------------- --------------------------------------------------------
   Created by:          Ahkun
   Created date:        2015-04-26
   Version:             V0.00.0001
   Descriptions:

----------------------- --------------------------------------------------------
*******************************************************************************/
#include "main.h"
#include "menu.h"

// program icon
#include "../icons/ak_32x32x32.xpm"
wxIcon app_icon(ak_32x32_xpm); /* 注意: ak_32x32_xpm 是 ak_32x32x32.xpm 檔內的變數名稱, 非檔名 */

// ----------------------------------------------------------------------------
// event tables and other macros for wxWidgets
// ----------------------------------------------------------------------------

// the event tables connect the wxWidgets events with the functions (event
// handlers) which process them. It can be also done at run-time, but for the
// simple menu events like this the static method is much simpler.
wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_MENU(App_Quit,  MyFrame::OnQuit)
    EVT_MENU(App_About, MyFrame::OnAbout)
wxEND_EVENT_TABLE()

// frame constructor
MyFrame::MyFrame(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title)
{
  // set the frame icon
  //SetIcon(wxICON(ak_icon));
  //SetIcon(wxIcon(ak_32x32_xpm));
  SetIcon(app_icon);

#if wxUSE_MENUS
    SetMenuBar(CreateMenuBar());
#endif // wxUSE_MENUS

#if wxUSE_STATUSBAR
    // create a status bar just for fun (by default with 1 pane only)
    CreateStatusBar(2);
    SetStatusText("Welcome to wxWidgets!");
#endif // wxUSE_STATUSBAR
}


// event handlers

void MyFrame::OnQuit(wxCommandEvent& WXUNUSED(event))
{
    // true is to force the frame to close
    Close(true);
}

void MyFrame::OnAbout(wxCommandEvent& WXUNUSED(event))
{
    wxMessageBox(wxString::Format
                 (
                    "Welcome to %s!\n"
                    "\n"
                    "This is the minimal wxWidgets sample\n"
                    "running under %s.",
                    wxVERSION_STRING,
                    wxGetOsDescription()
                 ),
                 "About wxWidgets minimal sample",
                 wxOK | wxICON_INFORMATION,
                 this);
}

/******************************************************************************
**                            End Of File
******************************************************************************/
