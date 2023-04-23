#include "gracz.h"
#include <wx/stattext.h>

#ifndef DUSZKI_H
#define DUSZKI_H


class duszki :public gracz
{
    public:
        duszki(wxAnimationCtrl* x);
        virtual ~duszki();

        void losowanie_ustawianie_kierunku(int zmienna_1, int zmienna_2, wxAnimationCtrl* gracz, wxControl* duch, wxControl** tab, int ile_p, wxStaticText *a);
                                                ///losuje, zmienia i ustawia kierunek ruchu ducha

    private:

        int poprzednie_polozenie[2];           ///poprzednie polozenie ducha, potrzebne zeby sprawdzic czy duch nie utknal

};

#endif // DUSZKI_H
