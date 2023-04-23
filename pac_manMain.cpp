/***************************************************************
 * Name:      pac_manMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    kubus ()
 * Created:   2023-02-27
 * Copyright: kubus ()
 * License:
 **************************************************************/

#include <iostream>
#include <conio.h>
#include "pac_manMain.h"
#include <wx/msgdlg.h>



//(*InternalHeaders(pac_manDialog)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(pac_manDialog)
const long pac_manDialog::ID_STATICBITMAP1 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP2 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP3 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP4 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP5 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP6 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP7 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP8 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP9 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP10 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP11 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP12 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP13 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP14 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP15 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP16 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP17 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP18 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP19 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP20 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP21 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP22 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP23 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP24 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP25 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP26 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP27 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP28 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP29 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP30 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP31 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP32 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP33 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP34 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP35 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP36 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP37 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP38 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP39 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP40 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP41 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP42 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP43 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP44 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP45 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP46 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP47 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP48 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP49 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP50 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP51 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP52 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP53 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP54 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP55 = wxNewId();
const long pac_manDialog::ID_ANIMATIONCTRL1 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP56 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP57 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP58 = wxNewId();
const long pac_manDialog::ID_STATICBITMAP59 = wxNewId();
const long pac_manDialog::ID_ANIMATIONCTRL2 = wxNewId();
const long pac_manDialog::ID_ANIMATIONCTRL3 = wxNewId();
const long pac_manDialog::ID_ANIMATIONCTRL4 = wxNewId();
const long pac_manDialog::ID_ANIMATIONCTRL5 = wxNewId();
const long pac_manDialog::ID_STATICTEXT1 = wxNewId();
const long pac_manDialog::ID_STATICTEXT2 = wxNewId();
const long pac_manDialog::ID_TIMER1 = wxNewId();
const long pac_manDialog::ID_TIMER2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(pac_manDialog,wxDialog)
    //(*EventTable(pac_manDialog)
    //*)
END_EVENT_TABLE()

pac_manDialog::pac_manDialog(wxWindow* parent,wxWindowID id)
{
    wxMessageBox("Po wyswietleniu mapy, trzeba kliknac strzalke do gory aby moza bylo sie poruszyc postacia (czasem pare razy) \n pracuje nad naprawieniem tego \n gra jeszcze nie jest skonczona ale mimo to chcialbym ja przedstawic w CV, nazwijmy to wersja beta ;)");
    wxMessageBox("Przetrwaj 2.5 min - 30 rund (wyswietlaja sie po prawej stronie)");

    ile_przeszkod = 56;
    sciany = new wxControl*[ile_przeszkod];
    teleportacja = new wxControl *[2];
    anim_duch = new wxControl*[4];



    //(*Initialize(pac_manDialog)
    Create(parent, wxID_ANY, _("wxWidgets app"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(760,544));
    mapa = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("pacman_layout.jpg")).Rescale(wxSize(760,544).GetWidth(),wxSize(760,544).GetHeight())), wxDefaultPosition, wxSize(760,544), 0, _T("ID_STATICBITMAP1"));
    mapa->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BACKGROUND));
    StaticBitmap2 = new wxStaticBitmap(this, ID_STATICBITMAP2, wxNullBitmap, wxPoint(80,48), wxSize(14,144), 0, _T("ID_STATICBITMAP2"));
    StaticBitmap3 = new wxStaticBitmap(this, ID_STATICBITMAP3, wxNullBitmap, wxPoint(80,40), wxSize(568,16), 0, _T("ID_STATICBITMAP3"));
    StaticBitmap4 = new wxStaticBitmap(this, ID_STATICBITMAP4, wxNullBitmap, wxPoint(637,48), wxSize(8,136), 0, _T("ID_STATICBITMAP4"));
    StaticBitmap5 = new wxStaticBitmap(this, ID_STATICBITMAP5, wxNullBitmap, wxPoint(538,184), wxSize(110,8), 0, _T("ID_STATICBITMAP5"));
    StaticBitmap6 = new wxStaticBitmap(this, ID_STATICBITMAP6, wxNullBitmap, wxPoint(537,184), wxSize(8,48), 0, _T("ID_STATICBITMAP6"));
    StaticBitmap7 = new wxStaticBitmap(this, ID_STATICBITMAP7, wxNullBitmap, wxPoint(537,232), wxSize(110,9), 0, _T("ID_STATICBITMAP7"));
    StaticBitmap8 = new wxStaticBitmap(this, ID_STATICBITMAP8, wxNullBitmap, wxPoint(88,184), wxSize(96,8), 0, _T("ID_STATICBITMAP8"));
    StaticBitmap9 = new wxStaticBitmap(this, ID_STATICBITMAP9, wxNullBitmap, wxPoint(184,184), wxSize(8,48), 0, _T("ID_STATICBITMAP9"));
    StaticBitmap10 = new wxStaticBitmap(this, ID_STATICBITMAP10, wxNullBitmap, wxPoint(80,232), wxSize(112,9), 0, _T("ID_STATICBITMAP10"));
    StaticBitmap11 = new wxStaticBitmap(this, ID_STATICBITMAP11, wxNullBitmap, wxPoint(80,272), wxSize(104,8), 0, _T("ID_STATICBITMAP11"));
    StaticBitmap12 = new wxStaticBitmap(this, ID_STATICBITMAP12, wxNullBitmap, wxPoint(184,272), wxSize(8,48), 0, _T("ID_STATICBITMAP12"));
    StaticBitmap13 = new wxStaticBitmap(this, ID_STATICBITMAP13, wxNullBitmap, wxPoint(88,320), wxSize(104,8), 0, _T("ID_STATICBITMAP13"));
    StaticBitmap14 = new wxStaticBitmap(this, ID_STATICBITMAP14, wxNullBitmap, wxPoint(80,320), wxSize(16,168), 0, _T("ID_STATICBITMAP14"));
    StaticBitmap15 = new wxStaticBitmap(this, ID_STATICBITMAP15, wxNullBitmap, wxPoint(88,488), wxSize(552,8), 0, _T("ID_STATICBITMAP15"));
    StaticBitmap16 = new wxStaticBitmap(this, ID_STATICBITMAP16, wxNullBitmap, wxPoint(640,328), wxSize(8,160), 0, _T("ID_STATICBITMAP16"));
    StaticBitmap17 = new wxStaticBitmap(this, ID_STATICBITMAP17, wxNullBitmap, wxPoint(544,320), wxSize(104,8), 0, _T("ID_STATICBITMAP17"));
    StaticBitmap18 = new wxStaticBitmap(this, ID_STATICBITMAP18, wxNullBitmap, wxPoint(537,272), wxSize(8,56), 0, _T("ID_STATICBITMAP18"));
    StaticBitmap19 = new wxStaticBitmap(this, ID_STATICBITMAP19, wxNullBitmap, wxPoint(538,272), wxSize(104,8), 0, _T("ID_STATICBITMAP19"));
    StaticBitmap20 = new wxStaticBitmap(this, ID_STATICBITMAP20, wxNullBitmap, wxPoint(133,83), wxSize(59,26), 0, _T("ID_STATICBITMAP20"));
    StaticBitmap21 = new wxStaticBitmap(this, ID_STATICBITMAP21, wxNullBitmap, wxPoint(234,83), wxSize(80,26), 0, _T("ID_STATICBITMAP21"));
    StaticBitmap22 = new wxStaticBitmap(this, ID_STATICBITMAP22, wxNullBitmap, wxPoint(416,83), wxSize(80,26), 0, _T("ID_STATICBITMAP22"));
    StaticBitmap23 = new wxStaticBitmap(this, ID_STATICBITMAP23, wxNullBitmap, wxPoint(537,83), wxSize(59,26), 0, _T("ID_STATICBITMAP23"));
    StaticBitmap24 = new wxStaticBitmap(this, ID_STATICBITMAP24, wxNullBitmap, wxPoint(133,141), wxSize(59,11), 0, _T("ID_STATICBITMAP24"));
    StaticBitmap25 = new wxStaticBitmap(this, ID_STATICBITMAP25, wxNullBitmap, wxPoint(297,141), wxSize(136,10), 0, _T("ID_STATICBITMAP25"));
    StaticBitmap26 = new wxStaticBitmap(this, ID_STATICBITMAP26, wxNullBitmap, wxPoint(356,150), wxSize(17,47), 0, _T("ID_STATICBITMAP26"));
    StaticBitmap27 = new wxStaticBitmap(this, ID_STATICBITMAP27, wxNullBitmap, wxPoint(537,141), wxSize(59,11), 0, _T("ID_STATICBITMAP27"));
    StaticBitmap28 = new wxStaticBitmap(this, ID_STATICBITMAP28, wxNullBitmap, wxPoint(234,141), wxSize(18,100), 0, _T("ID_STATICBITMAP28"));
    StaticBitmap29 = new wxStaticBitmap(this, ID_STATICBITMAP29, wxNullBitmap, wxPoint(248,184), wxSize(64,13), 0, _T("ID_STATICBITMAP29"));
    StaticBitmap30 = new wxStaticBitmap(this, ID_STATICBITMAP30, wxNullBitmap, wxPoint(478,141), wxSize(15,98), 0, _T("ID_STATICBITMAP30"));
    StaticBitmap31 = new wxStaticBitmap(this, ID_STATICBITMAP31, wxNullBitmap, wxPoint(417,184), wxSize(72,13), 0, _T("ID_STATICBITMAP31"));
    StaticBitmap32 = new wxStaticBitmap(this, ID_STATICBITMAP32, wxNullBitmap, wxPoint(234,272), wxSize(18,55), 0, _T("ID_STATICBITMAP32"));
    StaticBitmap33 = new wxStaticBitmap(this, ID_STATICBITMAP33, wxNullBitmap, wxPoint(478,272), wxSize(15,56), 0, _T("ID_STATICBITMAP33"));
    StaticBitmap34 = new wxStaticBitmap(this, ID_STATICBITMAP34, wxNullBitmap, wxPoint(296,276), wxSize(139,8), 0, _T("ID_STATICBITMAP34"));
    StaticBitmap35 = new wxStaticBitmap(this, ID_STATICBITMAP35, wxNullBitmap, wxPoint(424,232), wxSize(11,48), 0, _T("ID_STATICBITMAP35"));
    StaticBitmap36 = new wxStaticBitmap(this, ID_STATICBITMAP36, wxNullBitmap, wxPoint(392,224), wxSize(43,8), 0, _T("ID_STATICBITMAP36"));
    StaticBitmap37 = new wxStaticBitmap(this, ID_STATICBITMAP37, wxNullBitmap, wxPoint(296,224), wxSize(8,52), 0, _T("ID_STATICBITMAP37"));
    StaticBitmap38 = new wxStaticBitmap(this, ID_STATICBITMAP38, wxNullBitmap, wxPoint(296,224), wxSize(96,8), 0, _T("ID_STATICBITMAP38"));
    StaticBitmap39 = new wxStaticBitmap(this, ID_STATICBITMAP39, wxNullBitmap, wxPoint(88,400), wxSize(40,16), 0, _T("ID_STATICBITMAP39"));
    StaticBitmap40 = new wxStaticBitmap(this, ID_STATICBITMAP40, wxNullBitmap, wxPoint(600,400), wxSize(40,16), 0, _T("ID_STATICBITMAP40"));
    StaticBitmap41 = new wxStaticBitmap(this, ID_STATICBITMAP41, wxNullBitmap, wxPoint(352,328), wxSize(24,42), 0, _T("ID_STATICBITMAP41"));
    StaticBitmap42 = new wxStaticBitmap(this, ID_STATICBITMAP42, wxNullBitmap, wxPoint(296,316), wxSize(139,12), 0, _T("ID_STATICBITMAP42"));
    StaticBitmap43 = new wxStaticBitmap(this, ID_STATICBITMAP43, wxNullBitmap, wxPoint(355,408), wxSize(20,50), 0, _T("ID_STATICBITMAP43"));
    StaticBitmap44 = new wxStaticBitmap(this, ID_STATICBITMAP44, wxNullBitmap, wxPoint(296,403), wxSize(136,13), 0, _T("ID_STATICBITMAP44"));
    StaticBitmap45 = new wxStaticBitmap(this, ID_STATICBITMAP45, wxNullBitmap, wxPoint(416,448), wxSize(176,10), 0, _T("ID_STATICBITMAP45"));
    StaticBitmap46 = new wxStaticBitmap(this, ID_STATICBITMAP46, wxNullBitmap, wxPoint(136,448), wxSize(176,10), 0, _T("ID_STATICBITMAP46"));
    StaticBitmap47 = new wxStaticBitmap(this, ID_STATICBITMAP47, wxNullBitmap, wxPoint(234,403), wxSize(20,45), 0, _T("ID_STATICBITMAP47"));
    StaticBitmap48 = new wxStaticBitmap(this, ID_STATICBITMAP48, wxNullBitmap, wxPoint(476,403), wxSize(20,45), 0, _T("ID_STATICBITMAP48"));
    StaticBitmap49 = new wxStaticBitmap(this, ID_STATICBITMAP49, wxNullBitmap, wxPoint(176,368), wxSize(16,48), 0, _T("ID_STATICBITMAP49"));
    StaticBitmap50 = new wxStaticBitmap(this, ID_STATICBITMAP50, wxNullBitmap, wxPoint(136,360), wxSize(56,12), 0, _T("ID_STATICBITMAP50"));
    StaticBitmap51 = new wxStaticBitmap(this, ID_STATICBITMAP51, wxNullBitmap, wxPoint(537,368), wxSize(18,48), 0, _T("ID_STATICBITMAP51"));
    StaticBitmap52 = new wxStaticBitmap(this, ID_STATICBITMAP52, wxNullBitmap, wxPoint(537,360), wxSize(56,12), 0, _T("ID_STATICBITMAP52"));
    StaticBitmap53 = new wxStaticBitmap(this, ID_STATICBITMAP53, wxNullBitmap, wxPoint(416,360), wxSize(80,10), 0, _T("ID_STATICBITMAP53"));
    StaticBitmap54 = new wxStaticBitmap(this, ID_STATICBITMAP54, wxNullBitmap, wxPoint(234,360), wxSize(80,10), 0, _T("ID_STATICBITMAP54"));
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP55, wxNullBitmap, wxPoint(355,48), wxSize(19,61), 0, _T("ID_STATICBITMAP55"));
    	wxAnimation anim_1(_T("pacman.gif"));
    AnimationCtrl1 = new wxAnimationCtrl(this, ID_ANIMATIONCTRL1, anim_1, wxPoint(104,64), wxSize(16,16), wxAC_DEFAULT_STYLE, _T("ID_ANIMATIONCTRL1"));
    AnimationCtrl1->Play();
    AnimationCtrl1->SetMaxSize(wxDLG_UNIT(this,wxSize(30,30)));
    AnimationCtrl1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BACKGROUND));
    StaticBitmap55 = new wxStaticBitmap(this, ID_STATICBITMAP56, wxNullBitmap, wxPoint(8,24), wxDefaultSize, 0, _T("ID_STATICBITMAP56"));
    StaticBitmap56 = new wxStaticBitmap(this, ID_STATICBITMAP57, wxNullBitmap, wxPoint(32,24), wxDefaultSize, 0, _T("ID_STATICBITMAP57"));
    StaticBitmap57 = new wxStaticBitmap(this, ID_STATICBITMAP58, wxNullBitmap, wxPoint(56,232), wxSize(24,48), 0, _T("ID_STATICBITMAP58"));
    StaticBitmap58 = new wxStaticBitmap(this, ID_STATICBITMAP59, wxNullBitmap, wxPoint(640,232), wxSize(24,48), 0, _T("ID_STATICBITMAP59"));
    	wxAnimation anim_2(_T("duch.gif"));
    AnimationCtrl2 = new wxAnimationCtrl(this, ID_ANIMATIONCTRL2, anim_2, wxPoint(576,464), wxSize(16,16), wxAC_DEFAULT_STYLE, _T("ID_ANIMATIONCTRL2"));
    AnimationCtrl2->Play();
    	wxAnimation anim_3(_T("duch.gif"));
    AnimationCtrl3 = new wxAnimationCtrl(this, ID_ANIMATIONCTRL3, anim_3, wxPoint(568,424), wxSize(16,16), wxAC_DEFAULT_STYLE, _T("ID_ANIMATIONCTRL3"));
    AnimationCtrl3->Play();
    	wxAnimation anim_4(_T("duch.gif"));
    AnimationCtrl4 = new wxAnimationCtrl(this, ID_ANIMATIONCTRL4, anim_4, wxPoint(608,464), wxSize(16,16), wxAC_DEFAULT_STYLE, _T("ID_ANIMATIONCTRL4"));
    AnimationCtrl4->Play();
    	wxAnimation anim_5(_T("duch.gif"));
    AnimationCtrl5 = new wxAnimationCtrl(this, ID_ANIMATIONCTRL5, anim_5, wxPoint(608,432), wxSize(16,16), wxAC_DEFAULT_STYLE, _T("ID_ANIMATIONCTRL5"));
    AnimationCtrl5->Play();
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Label"), wxPoint(680,160), wxSize(32,21), 0, _T("ID_STATICTEXT1"));
    StaticText1->SetMinSize(wxSize(40,-1));
    StaticText1->SetBackgroundColour(wxColour(192,192,192));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Label"), wxPoint(632,200), wxSize(84,21), 0, _T("ID_STATICTEXT2"));
    Timer1.SetOwner(this, ID_TIMER1);
    Timer1.Start(30, false);
    Timer2.SetOwner(this, ID_TIMER2);
    Timer2.Start(1, false);

    Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&pac_manDialog::OnTimer1Trigger);
    Connect(ID_TIMER2,wxEVT_TIMER,(wxObjectEventFunction)&pac_manDialog::OnTimer2Trigger);
    Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&pac_manDialog::OnInit);
    Connect(wxEVT_KEY_DOWN,(wxObjectEventFunction)&pac_manDialog::OnKeyDown);
    //*)



sciany[0] = StaticBitmap1;
sciany[1] = StaticBitmap2;
sciany[2] = StaticBitmap3;
sciany[3] = StaticBitmap4;
sciany[4] = StaticBitmap5;
sciany[5] = StaticBitmap6;
sciany[6] = StaticBitmap7;
sciany[7] = StaticBitmap8;
sciany[8] = StaticBitmap9;
sciany[9] = StaticBitmap10;
sciany[10] = StaticBitmap11;
sciany[11] = StaticBitmap12;
sciany[12] = StaticBitmap13;
sciany[13] = StaticBitmap14;
sciany[14] = StaticBitmap15;
sciany[15] = StaticBitmap16;
sciany[16] = StaticBitmap17;
sciany[17] = StaticBitmap18;
sciany[18] = StaticBitmap19;
sciany[19] = StaticBitmap20;
sciany[20] = StaticBitmap21;
sciany[21] = StaticBitmap22;
sciany[22] = StaticBitmap23;
sciany[23] = StaticBitmap24;
sciany[24] = StaticBitmap25;
sciany[25] = StaticBitmap26;
sciany[26] = StaticBitmap27;
sciany[27] = StaticBitmap28;
sciany[28] = StaticBitmap29;
sciany[29] = StaticBitmap30;
sciany[30] = StaticBitmap31;
sciany[31] = StaticBitmap32;
sciany[32] = StaticBitmap33;
sciany[33] = StaticBitmap34;
sciany[34] = StaticBitmap35;
sciany[35] = StaticBitmap36;
sciany[36] = StaticBitmap37;
sciany[37] = StaticBitmap38;
sciany[38] = StaticBitmap39;
sciany[39] = StaticBitmap40;
sciany[40] = StaticBitmap41;
sciany[41] = StaticBitmap42;
sciany[42] = StaticBitmap43;
sciany[43] = StaticBitmap44;
sciany[44] = StaticBitmap45;
sciany[45] = StaticBitmap46;
sciany[46] = StaticBitmap47;
sciany[47] = StaticBitmap48;
sciany[48] = StaticBitmap49;
sciany[49] = StaticBitmap50;
sciany[50] = StaticBitmap51;
sciany[51] = StaticBitmap52;
sciany[52] = StaticBitmap53;
sciany[53] = StaticBitmap54;
sciany[54] = StaticBitmap55;
sciany[55] = StaticBitmap56;

teleportacja[0] = StaticBitmap57;
teleportacja[1] = StaticBitmap58;


anim_duch[0] = AnimationCtrl2;
anim_duch[1] = AnimationCtrl3;
anim_duch[2] = AnimationCtrl4;
anim_duch[3] = AnimationCtrl5;



teleportacja[0]->Hide();
teleportacja[1]->Hide();

    for(int i = 0; i<=53; i++)
        sciany[i]->Hide();

    mainPane = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxWANTS_CHARS);
    mainPane->Bind(wxEVT_CHAR_HOOK, &pac_manDialog::OnKeyDown, this);


    gr = new gracz(AnimationCtrl1);

    duch = new duszki*[4];

    duch[0] = new duszki(AnimationCtrl2);
    duch[1] = new duszki(AnimationCtrl3);
    duch[2] = new duszki(AnimationCtrl4);
    duch[3] = new duszki(AnimationCtrl5);
    iteracja = 0;


    czy_przekazac = false;

}

pac_manDialog::~pac_manDialog()
{
    for(int i = 0; i <=53; i++)
        delete sciany[i];
    delete sciany;

    for(int i = 0; i <= 3; i++)
    {
        delete duch[i];
        delete anim_duch[i];
    }
    delete anim_duch;


    delete teleportacja[0];
    delete teleportacja[1];
    delete teleportacja;


    delete mainPane;
    delete gr;
    delete duch;

}

void pac_manDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

void pac_manDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void pac_manDialog::OnInit(wxInitDialogEvent& event)
{

}

void pac_manDialog::przekaz_ruch()
{
    if(czy_przekazac == true)
    {

        if(poprzednie_klikniecie == 'W' && gr->kolizja_gora(sciany, AnimationCtrl1, ile_przeszkod, true) == false)
        {
            if(gr->get_gora() == false)
            {
                AnimationCtrl1->LoadFile("pacman_gora.gif");
                AnimationCtrl1->Play();
            }


            gr->set_wszystko(false);

            gr->set_gora(true);


        }

        if(poprzednie_klikniecie == 'S' && gr->kolizja_dol(sciany, AnimationCtrl1, ile_przeszkod, true) == false)
        {
            if(gr->get_dol() == false)
            {
                AnimationCtrl1->LoadFile("pacman_dol.gif");
                AnimationCtrl1->Play();
            }


            gr->set_wszystko(false);

            gr->set_dol(true);


        }

        if(poprzednie_klikniecie == 'A' && gr->kolizja_lewo(sciany, AnimationCtrl1, ile_przeszkod, true) == false)
        {
            if(gr->get_lewo() == false)
            {
                AnimationCtrl1->LoadFile("pacman_lewo.gif");
                AnimationCtrl1->Play();
            }


            gr->set_wszystko(false);

            gr->set_lewo(true);
        }

        if(poprzednie_klikniecie == 'D' && gr->kolizja_prawo(sciany, AnimationCtrl1, ile_przeszkod, true) == false)
        {
            if(gr->get_prawo() == false)
            {
                AnimationCtrl1->LoadFile("pacman.gif");
                AnimationCtrl1->Play();
            }

            gr->set_wszystko(false);

            gr->set_prawo(true);
        }
    }
}



void pac_manDialog::OnKeyDown(wxKeyEvent& event)
{
    poprzednie_klikniecie = char(event.GetKeyCode());
    czy_przekazac = true;
}




void pac_manDialog::OnTimer1Trigger(wxTimerEvent& event)
{


    gr->poruszanie(sciany, AnimationCtrl1, ile_przeszkod, teleportacja);


    for(int i = 0; i <= 3; i++)
            duch[i]->losowanie_ustawianie_kierunku(i, iteracja, AnimationCtrl1, anim_duch[i], sciany, ile_przeszkod, StaticText1);

    duch[0]->poruszanie(sciany, AnimationCtrl2, ile_przeszkod, teleportacja);
    duch[1]->poruszanie(sciany, AnimationCtrl3, ile_przeszkod, teleportacja);
    duch[2]->poruszanie(sciany, AnimationCtrl4, ile_przeszkod, teleportacja);
    duch[3]->poruszanie(sciany, AnimationCtrl5, ile_przeszkod, teleportacja);

    przekaz_ruch();





    zderzenia_duchow();


    AnimationCtrl1->Move(gr->get_pozycja_x(), gr->get_pozycja_y());

    for(int i = 0; i<=3; i++)
        anim_duch[i]->Move(duch[i]->get_pozycja_x(), duch[i]->get_pozycja_y());


    if(gr->kolizja_gora(sciany, AnimationCtrl1, ile_przeszkod, false) == true)
        gr->set_gora(false);

    if(gr->kolizja_dol(sciany, AnimationCtrl1, ile_przeszkod, false) == true)
        gr->set_dol(false);

    if(gr->kolizja_prawo(sciany, AnimationCtrl1, ile_przeszkod, false) == true)
        gr->set_prawo(false);

    if(gr->kolizja_lewo(sciany, AnimationCtrl1, ile_przeszkod, false) == true)
        gr->set_lewo(false);


    koniec_gry();


}


void pac_manDialog::koniec_gry()
{


    if(gr -> kolizja_gora(anim_duch, AnimationCtrl1, 4, false) || gr -> kolizja_dol(anim_duch, AnimationCtrl1, 4, false) ||
       gr -> kolizja_lewo(anim_duch, AnimationCtrl1, 4, false) || gr -> kolizja_prawo(anim_duch, AnimationCtrl1, 4, false))
    {
        Timer1.Stop();
        Timer2.Stop();

        AnimationCtrl1->LoadFile("koniec.gif");
        AnimationCtrl1->Play();
        AnimationCtrl1->Play(false);

        wxMessageBox("przegrales, gra w krotce bedzie skonczona, prosze byc cierpliwym:)");
    }

    if(Timer1.GetInterval() == 0)
    {
        Timer1.Stop();
        Timer2.Stop();

        wxMessageBox("WYGRALES!, gra w krotce bedzie skonczona, prosze byc cierpliwym:)");
    }


}


void pac_manDialog::OnTimer2Trigger(wxTimerEvent& event)
{
    iteracja++;

    StaticText1->SetLabel(wxString::Format(wxT("%i"), int(iteracja/100)) + "." + wxString::Format(wxT("%i"), iteracja%100));



    if(iteracja % 500 == 0 && iteracja != 0)
    {
        int i = Timer1.GetInterval();

        Timer1.Stop();
        Timer1.Start(i-1);
    }
    StaticText2->SetLabel("Do konca rund: " + wxString::Format(wxT("%i"), Timer1.GetInterval()));

}




void pac_manDialog::zderzenia_duchow()
{
    wxControl **kom_1;
    kom_1 = new wxControl *[3];
    kom_1[0] = AnimationCtrl3;
    kom_1[1] = AnimationCtrl4;
    kom_1[2] = AnimationCtrl5;

    wxControl **kom_2;
    kom_2 = new wxControl *[3];
    kom_2[0] = AnimationCtrl2;
    kom_2[1] = AnimationCtrl4;
    kom_2[2] = AnimationCtrl5;

    wxControl **kom_3;
    kom_3 = new wxControl *[3];
    kom_3[0] = AnimationCtrl2;
    kom_3[1] = AnimationCtrl3;
    kom_3[2] = AnimationCtrl5;

    wxControl **kom_4;
    kom_4 = new wxControl *[3];
    kom_4[0] = AnimationCtrl2;
    kom_4[1] = AnimationCtrl3;
    kom_4[2] = AnimationCtrl4;


    wxControl ***kom;
    kom = new wxControl**[4];
    kom[0] = kom_1;
    kom[1] = kom_2;
    kom[2] = kom_3;
    kom[3] = kom_4;


    for(int i = 0; i <= 3; i++)
    {
        if( (duch[i] -> kolizja_gora(kom[i], dynamic_cast<wxAnimationCtrl*>(anim_duch[i]), 3, false)))
        {
            duch[i]->set_wszystko(false);
            duch[i]->set_dol(true);
        }

        if(duch[i] -> kolizja_dol(kom[i], dynamic_cast<wxAnimationCtrl*>(anim_duch[i]), 3, false))
        {
            duch[i]->set_wszystko(false);
            duch[i]->set_gora(true);
        }

        if(duch[i] -> kolizja_lewo(kom[i], dynamic_cast<wxAnimationCtrl*>(anim_duch[i]), 3, false))
        {
            duch[i]->set_wszystko(false);
            duch[i]->set_prawo(true);
        }

        if(duch[i] -> kolizja_prawo(kom[i], dynamic_cast<wxAnimationCtrl*>(anim_duch[i]), 3, false))
        {
            duch[i]->set_wszystko(false);
            duch[i]->set_lewo(true);
        }
    }


    delete kom_1;
    delete kom_2;
    delete kom_3;
    delete kom_4;
    delete kom;


}















