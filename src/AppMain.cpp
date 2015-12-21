
/******************************* Copyright (c)  ********************************
                               --- [ Ah kun ] ---
----------------------------------- File Info ----------------------------------
   File name:           AppMain.cpp
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
#include "AppMain.h"
#include "main.h"

// Create a new application object: this macro will allow wxWidgets to create
// the application object during program execution (it's better than using a
// static object for many reasons) and also implements the accessor function
// wxGetApp() which will return the reference of the right type (i.e. MyApp and
// not wxApp)
IMPLEMENT_APP(MyApp)

// 'Main program' equivalent: the program execution "starts" here
bool MyApp::OnInit()
{
    // call the base class initialization method, currently it only parses a
    // few common command-line options but it could be do more in the future
    if ( !wxApp::OnInit() )
        return false;

    // create the main application window
    MyFrame *frame = new MyFrame("Minimal wxWidgets App");

    // and show it (the frames, unlike simple controls, are not shown when
    // created initially)
    frame->Show(true);

    // success: wxApp::OnRun() will be called which will enter the main message
    // loop and the application will run. If we returned false here, the
    // application would exit immediately.
    return true;
}

/******************************************************************************
**                            End Of File
******************************************************************************/
