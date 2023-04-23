/***************************************************************
 * Name:      pac_manMain.h
 * Purpose:   Defines Application Frame
 * Author:    kubus ()
 * Created:   2023-02-27
 * Copyright: kubus ()
 * License:
 **************************************************************/

#ifndef PAC_MANMAIN_H
#define PAC_MANMAIN_H
#include "gracz.h"
#include "duszki.h"

//(*Headers(pac_manDialog)
#include <wx/animate.h>
#include <wx/dialog.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/timer.h>
//*)

class pac_manDialog: public wxDialog
{
    public:

        pac_manDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~pac_manDialog();

        void przekaz_ruch();                                ///ustawia gify i przekazuje info o ruchu instacji klasy gracz

        void koniec_gry();                                  ///funkcja ktora konczy gre w przypadku zderzenia sie z duchem

        void zderzenia_duchow();                            ///zeby duchy nie nachodzily na siebie, odbijaja sie sie (bez tego nachodza na siebie i dzieje sie rozne dziwne rzeczy)

    private:
        wxPanel* mainPane;                                  ///zeby przechwytywac klawisze ktore kliknal gracz
        gracz *gr;
        duszki **duch;                                      /// tablica istancji klasy duch

        char poprzednie_klikniecie;                         /// potrzebne zeby bylo wiadomo czy zmieniac gif czy nie (jakby ktos klika ciagle jeden przycisk w kolko ladowalby sie gif)
        bool czy_przekazac;                                 ///zeby zadziala funkcja przekaz_ruch()

        int ile_przeszkod;                                  ///ile jest scian
        wxControl **sciany;                                 ///tablica wszystkich scian
        wxControl **teleportacja;                           ///sklada sie z 2 eleentow, miejsc ktore przenosza gracza
        wxControl **anim_duch;                              ///tablica z animacjami duchow

        int iteracja;                                       ///liczy kazdy interwal zegara 1, potrzebne zeby duchy chodzily szybciej w kazdej rundzie i do wyswietlania ile sekund juz leci gra


        //(*Handlers(pac_manDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnInit(wxInitDialogEvent& event);
        void OnKeyDown(wxKeyEvent& event);
        void OnKeyUp(wxKeyEvent& event);
        void OnTimer1Trigger(wxTimerEvent& event);
        void OnRadioButton10Select(wxCommandEvent& event);
        void OnRadioButton13Select(wxCommandEvent& event);
        void OnRadioButton24Select(wxCommandEvent& event);
        void OnRadioButton66Select(wxCommandEvent& event);
        void OnRadioButton94Select(wxCommandEvent& event);
        void OnTimer2Trigger(wxTimerEvent& event);
        //*)

        //(*Identifiers(pac_manDialog)
        static const long ID_STATICBITMAP1;
        static const long ID_STATICBITMAP2;
        static const long ID_STATICBITMAP3;
        static const long ID_STATICBITMAP4;
        static const long ID_STATICBITMAP5;
        static const long ID_STATICBITMAP6;
        static const long ID_STATICBITMAP7;
        static const long ID_STATICBITMAP8;
        static const long ID_STATICBITMAP9;
        static const long ID_STATICBITMAP10;
        static const long ID_STATICBITMAP11;
        static const long ID_STATICBITMAP12;
        static const long ID_STATICBITMAP13;
        static const long ID_STATICBITMAP14;
        static const long ID_STATICBITMAP15;
        static const long ID_STATICBITMAP16;
        static const long ID_STATICBITMAP17;
        static const long ID_STATICBITMAP18;
        static const long ID_STATICBITMAP19;
        static const long ID_STATICBITMAP20;
        static const long ID_STATICBITMAP21;
        static const long ID_STATICBITMAP22;
        static const long ID_STATICBITMAP23;
        static const long ID_STATICBITMAP24;
        static const long ID_STATICBITMAP25;
        static const long ID_STATICBITMAP26;
        static const long ID_STATICBITMAP27;
        static const long ID_STATICBITMAP28;
        static const long ID_STATICBITMAP29;
        static const long ID_STATICBITMAP30;
        static const long ID_STATICBITMAP31;
        static const long ID_STATICBITMAP32;
        static const long ID_STATICBITMAP33;
        static const long ID_STATICBITMAP34;
        static const long ID_STATICBITMAP35;
        static const long ID_STATICBITMAP36;
        static const long ID_STATICBITMAP37;
        static const long ID_STATICBITMAP38;
        static const long ID_STATICBITMAP39;
        static const long ID_STATICBITMAP40;
        static const long ID_STATICBITMAP41;
        static const long ID_STATICBITMAP42;
        static const long ID_STATICBITMAP43;
        static const long ID_STATICBITMAP44;
        static const long ID_STATICBITMAP45;
        static const long ID_STATICBITMAP46;
        static const long ID_STATICBITMAP47;
        static const long ID_STATICBITMAP48;
        static const long ID_STATICBITMAP49;
        static const long ID_STATICBITMAP50;
        static const long ID_STATICBITMAP51;
        static const long ID_STATICBITMAP52;
        static const long ID_STATICBITMAP53;
        static const long ID_STATICBITMAP54;
        static const long ID_STATICBITMAP55;
        static const long ID_ANIMATIONCTRL1;
        static const long ID_STATICBITMAP56;
        static const long ID_STATICBITMAP57;
        static const long ID_STATICBITMAP58;
        static const long ID_STATICBITMAP59;
        static const long ID_ANIMATIONCTRL2;
        static const long ID_ANIMATIONCTRL3;
        static const long ID_ANIMATIONCTRL4;
        static const long ID_ANIMATIONCTRL5;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_TIMER1;
        static const long ID_TIMER2;
        //*)

        //(*Declarations(pac_manDialog)
        wxAnimationCtrl* AnimationCtrl1;
        wxAnimationCtrl* AnimationCtrl2;
        wxAnimationCtrl* AnimationCtrl3;
        wxAnimationCtrl* AnimationCtrl4;
        wxAnimationCtrl* AnimationCtrl5;
        wxStaticBitmap* StaticBitmap10;
        wxStaticBitmap* StaticBitmap11;
        wxStaticBitmap* StaticBitmap12;
        wxStaticBitmap* StaticBitmap13;
        wxStaticBitmap* StaticBitmap14;
        wxStaticBitmap* StaticBitmap15;
        wxStaticBitmap* StaticBitmap16;
        wxStaticBitmap* StaticBitmap17;
        wxStaticBitmap* StaticBitmap18;
        wxStaticBitmap* StaticBitmap19;
        wxStaticBitmap* StaticBitmap1;
        wxStaticBitmap* StaticBitmap20;
        wxStaticBitmap* StaticBitmap21;
        wxStaticBitmap* StaticBitmap22;
        wxStaticBitmap* StaticBitmap23;
        wxStaticBitmap* StaticBitmap24;
        wxStaticBitmap* StaticBitmap25;
        wxStaticBitmap* StaticBitmap26;
        wxStaticBitmap* StaticBitmap27;
        wxStaticBitmap* StaticBitmap28;
        wxStaticBitmap* StaticBitmap29;
        wxStaticBitmap* StaticBitmap2;
        wxStaticBitmap* StaticBitmap30;
        wxStaticBitmap* StaticBitmap31;
        wxStaticBitmap* StaticBitmap32;
        wxStaticBitmap* StaticBitmap33;
        wxStaticBitmap* StaticBitmap34;
        wxStaticBitmap* StaticBitmap35;
        wxStaticBitmap* StaticBitmap36;
        wxStaticBitmap* StaticBitmap37;
        wxStaticBitmap* StaticBitmap38;
        wxStaticBitmap* StaticBitmap39;
        wxStaticBitmap* StaticBitmap3;
        wxStaticBitmap* StaticBitmap40;
        wxStaticBitmap* StaticBitmap41;
        wxStaticBitmap* StaticBitmap42;
        wxStaticBitmap* StaticBitmap43;
        wxStaticBitmap* StaticBitmap44;
        wxStaticBitmap* StaticBitmap45;
        wxStaticBitmap* StaticBitmap46;
        wxStaticBitmap* StaticBitmap47;
        wxStaticBitmap* StaticBitmap48;
        wxStaticBitmap* StaticBitmap49;
        wxStaticBitmap* StaticBitmap4;
        wxStaticBitmap* StaticBitmap50;
        wxStaticBitmap* StaticBitmap51;
        wxStaticBitmap* StaticBitmap52;
        wxStaticBitmap* StaticBitmap53;
        wxStaticBitmap* StaticBitmap54;
        wxStaticBitmap* StaticBitmap55;
        wxStaticBitmap* StaticBitmap56;
        wxStaticBitmap* StaticBitmap57;
        wxStaticBitmap* StaticBitmap58;
        wxStaticBitmap* StaticBitmap5;
        wxStaticBitmap* StaticBitmap6;
        wxStaticBitmap* StaticBitmap7;
        wxStaticBitmap* StaticBitmap8;
        wxStaticBitmap* StaticBitmap9;
        wxStaticBitmap* mapa;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxTimer Timer1;
        wxTimer Timer2;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // PAC_MANMAIN_H
