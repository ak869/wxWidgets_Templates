
/******************************* Copyright (c)  ********************************
                               --- [ Ah kun ] ---
----------------------------------- File Info ----------------------------------
   File name:           main.h
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
#ifndef __AhKun_MAIN_H
#define __AhKun_MAIN_H

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

class MyFrame : public wxFrame
{
public:
    // ctor(s)
    MyFrame(const wxString& title);

    // event handlers (these functions should _not_ be virtual)
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);

private:
    // any class wishing to process wxWidgets events must use this macro
    wxDECLARE_EVENT_TABLE();
};

#endif /* end __AhKun_MAIN_H */

/******************************************************************************
**                            End Of File
******************************************************************************/
