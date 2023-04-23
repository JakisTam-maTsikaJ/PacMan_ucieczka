#ifndef GRACZ_H
#define GRACZ_H
#include <wx/msgdlg.h>
#include <wx/statbmp.h>
#include <wx/animate.h>

class pac_manDialog;

class gracz
{
    public:

        gracz();
        gracz(wxAnimationCtrl *animacja);                                                                ///2 konstruktor, zeby klasa dziedziczaca duszki dzialala

        virtual ~gracz();

        void poruszanie(wxControl** tab, wxAnimationCtrl* gracz, int ile_p, wxControl** teleport);       /// zmiania polozenie gracza na mapie (polozenie w pixelach)

        bool kolizja_gora(wxControl** tab, wxAnimationCtrl* gracz, int ile_p, bool czy_zmiana);
        bool kolizja_dol(wxControl** tab, wxAnimationCtrl* gracz, int ile_p, bool czy_zmiana);
        bool kolizja_lewo(wxControl** tab, wxAnimationCtrl* gracz, int ile_p, bool czy_zmiana);
        bool kolizja_prawo(wxControl** tab, wxAnimationCtrl* gracz, int ile_p, bool czy_zmiana);         ///sprawdza czy nie dochodzi kolozji od podanej strony w nazwie funkcji


        int get_pozycja_x();                                                                             ///zwraca pozyche gracza
        int get_pozycja_y();

        void set_gora(bool x);                                                                          ///ustawia kierunek
        void set_dol(bool x);
        void set_lewo(bool x);
        void set_prawo(bool x);
        void set_wszystko(bool x);

        void set_kolizja(bool x);                                                                       /// ustawia czy nastepuje kolizja

        bool get_gora();
        bool get_dol();
        bool get_lewo();
        bool get_prawo();                                                                               ///zwraca czy kieruje sie w danym kierunku gracz



    protected:

        bool gora;
        bool dol;
        bool lewo;
        bool prawo;                                                                                     /// czy idze w danym kierunku


        int pozcyja_x;
        int pozcyja_y;                                                                                  ///poyzcje gracza


        bool kolizja;                                                                                   ///czy nastapila z czyms kolizja

};

#endif // GRACZ_H
