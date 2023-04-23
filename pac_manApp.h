/***************************************************************
 * Name:      pac_manApp.h
 * Purpose:   Defines Application Class
 * Author:    kubus ()
 * Created:   2023-02-27
 * Copyright: kubus ()
 * License:
 **************************************************************/

#ifndef PAC_MANAPP_H
#define PAC_MANAPP_H

#include <wx/app.h>

class pac_manApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // PAC_MANAPP_H
