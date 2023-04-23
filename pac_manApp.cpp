/***************************************************************
 * Name:      pac_manApp.cpp
 * Purpose:   Code for Application Class
 * Author:    kubus ()
 * Created:   2023-02-27
 * Copyright: kubus ()
 * License:
 **************************************************************/

#include "pac_manApp.h"

//(*AppHeaders
#include "pac_manMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(pac_manApp);

bool pac_manApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	pac_manDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
