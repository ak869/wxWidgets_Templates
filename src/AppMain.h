
/******************************* Copyright (c)  ********************************
                               --- [ Ah kun ] ---
----------------------------------- File Info ----------------------------------
   File name:           AppMain.h
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
#ifndef __AhKun_APPMAIN_H
#define __AhKun_APPMAIN_H

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

// ----------------------------------------------------------------------------
// private classes
// ----------------------------------------------------------------------------

// Define a new application type, each program should derive a class from wxApp
class MyApp : public wxApp
{
public:
    // override base class virtuals
    // ----------------------------

    // this one is called on application startup and is a good place for the app
    // initialization (doing it here and not in the ctor allows to have an error
    // return: if OnInit() returns false, the application terminates)
    virtual bool OnInit();
};

#endif /* end __AhKun_APPMAIN_H */

/******************************************************************************
**                            End Of File
******************************************************************************/
