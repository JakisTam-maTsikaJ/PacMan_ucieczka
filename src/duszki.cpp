#include "duszki.h"
#include<cstdlib>
#include<time.h>

duszki::duszki(wxAnimationCtrl* x)
{
    pozcyja_x = x->GetPosition().x;
    pozcyja_y = x->GetPosition().y;


    gora = true;
    lewo = false;
    dol = false;
    prawo = false;

    kolizja = false;

}

duszki::~duszki()
{
    //dtor
}


void duszki::losowanie_ustawianie_kierunku(int zmienna_1, int zmienna_2, wxAnimationCtrl* gracz, wxControl* duch, wxControl** tab, int ile_p, wxStaticText *a)
{
    bool zmiana = false;                                                                                     ///uzywam aby w razie braku wymuszonej zmiany kierunku, duch wiedzial ze moze sam sobie skrecic

    if(poprzednie_polozenie[0] == duch->GetPosition().x && poprzednie_polozenie[1] == duch->GetPosition().y) ///robie po to by w razie zaciecia sie ducha, zmienil pozycje (sytuacja awaryjne)
    {
        int liczba;

        srand(time(NULL));
        liczba = (rand()*zmienna_2 + zmienna_1)%4;

        if(liczba == 0)
        {
            set_wszystko(false);
            gora = true;
        }

        if(liczba == 1)
        {
            set_wszystko(false);
            dol = true;
        }

        if(liczba == 2)
        {
            set_wszystko(false);
            gora = lewo;
        }

        if(liczba == 3)
        {
            set_wszystko(false);
            gora = prawo;
        }
        zmiana = true;
    }


    else if(kolizja == true)
    {

        int liczba;

        srand(time(NULL));
        liczba = (rand()*zmienna_2 + zmienna_1)%4;

        if(duch->GetPosition().x < gracz->GetPosition().x)          ///gdy gracz jest na prawo od ducha
        {
            if(duch->GetPosition().y > gracz->GetPosition().y)      ///gdy gracz jest prawo i wyzej niz duch
            {
                if(kolizja_gora(tab, gracz, ile_p, false) == false && dol == false)
                {
                    set_wszystko(false);

                    set_gora(true);

                    set_kolizja(false);
                }
                else if(kolizja_prawo(tab, gracz, ile_p, false) == false && lewo == false)
                {
                    set_wszystko(false);

                    set_prawo(true);

                    set_kolizja(false);
                }


                else if(liczba == 0)
                {
                    set_wszystko(false);

                    set_dol(true);

                    set_kolizja(false);
                }
                else if(liczba == 1)
                {
                    set_wszystko(false);

                    set_lewo(true);

                    set_kolizja(false);
                }
                else if(liczba == 2)
                {
                    set_wszystko(false);

                    set_prawo(true);

                    set_kolizja(false);
                }
                else
                {
                    set_wszystko(false);

                    set_gora(true);

                    set_kolizja(false);
                }
            }


            if(duch->GetPosition().y <= gracz->GetPosition().y)    ///gdy gracz jest na prawo i nizej lub na tej samej wys co duch
            {
                if(kolizja_dol(tab, gracz, ile_p, false) == false && gora == false)
                {
                    set_wszystko(false);

                    set_dol(true);

                    set_kolizja(false);
                }
                else if(kolizja_prawo(tab, gracz, ile_p, false) == false && lewo == false)
                {
                    set_wszystko(false);

                    set_prawo(true);

                    set_kolizja(false);
                }
                else if(liczba == 0)
                {
                    set_wszystko(false);

                    set_dol(true);

                    set_kolizja(false);
                }
                else if(liczba == 1)
                {
                    set_wszystko(false);

                    set_lewo(true);

                    set_kolizja(false);
                }
                else if(liczba == 2)
                {
                    set_wszystko(false);

                    set_prawo(true);

                    set_kolizja(false);
                }
                else
                {
                    set_wszystko(false);

                    set_gora(true);

                    set_kolizja(false);
                }
            }
        }

        if(duch->GetPosition().x >= gracz->GetPosition().x)    ///gdy gracz jest na lewo lub tak samo jak duch
        {

            if(duch->GetPosition().y > gracz->GetPosition().y)      ///gdy gracz jest lewo i wyzej niz duch
            {
                if(kolizja_gora(tab, gracz, ile_p, false) == false && dol == false)
                {
                    set_wszystko(false);

                    set_gora(true);

                    set_kolizja(false);
                }
                else if(kolizja_lewo(tab, gracz, ile_p, false) == false && prawo == false)
                {
                    set_wszystko(false);

                    set_lewo(true);

                    set_kolizja(false);
                }
                else if(liczba == 0)
                {
                    set_wszystko(false);

                    set_dol(true);

                    set_kolizja(false);
                }
                else if(liczba == 1)
                {
                    set_wszystko(false);

                    set_lewo(true);

                    set_kolizja(false);
                }
                else if(liczba == 2)
                {
                    set_wszystko(false);

                    set_prawo(true);

                    set_kolizja(false);
                }
                else
                {
                    set_wszystko(false);

                    set_gora(true);

                    set_kolizja(false);
                }
            }


            if(duch->GetPosition().y <= gracz->GetPosition().y)    ///gdy gracz jest na lewo i nizej lub na tej samej wys co duch
            {
                if(kolizja_dol(tab, gracz, ile_p, false) == false && gora == false)
                {
                    set_wszystko(false);

                    set_dol(true);

                    set_kolizja(false);
                }
                else if(kolizja_lewo(tab, gracz, ile_p, false) == false && prawo == false)
                {
                    set_wszystko(false);

                    set_lewo(true);

                    set_kolizja(false);
                }
                else if(liczba == 0)
                {
                    set_wszystko(false);

                    set_dol(true);

                    set_kolizja(false);
                }
                else if(liczba == 1)
                {
                    set_wszystko(false);

                    set_lewo(true);

                    set_kolizja(false);
                }
                else if(liczba == 2)
                {
                    set_wszystko(false);

                    set_prawo(true);

                    set_kolizja(false);
                }
                else
                {
                    set_wszystko(false);

                    set_gora(true);

                    set_kolizja(false);
                }
            }
        }

        poprzednie_polozenie[0] = duch->GetPosition().x;
        poprzednie_polozenie[1] = duch->GetPosition().y;

        zmiana = true;
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    if(zmiana == false  && (duch->GetPosition().y + duch->GetSize().y < gracz->GetPosition().y || gracz->GetPosition().y + gracz->GetSize().y < duch->GetPosition().y )
                   && (duch->GetPosition().x-duch->GetSize().x < gracz->GetPosition().x || gracz->GetPosition().x + gracz->GetSize().x < duch->GetPosition().x))
    {


        if(duch->GetPosition().x < gracz->GetPosition().x)          ///gdy gracz jest na prawo od ducha
        {
            if(duch->GetPosition().y > gracz->GetPosition().y)     ///gdy gracz jest prawo i wyzej niz duch
            {
                if(kolizja_gora(tab, gracz, ile_p, false) == false && dol == false)
                {
                    set_wszystko(false);

                    set_gora(true);

                    set_kolizja(false);

                }
                else if(kolizja_prawo(tab, gracz, ile_p, false) == false && lewo == false)
                {
                    set_wszystko(false);

                    set_prawo(true);

                    set_kolizja(false);

                }
            }


            if(duch->GetPosition().y <= gracz->GetPosition().y)   ///gdy gracz jest na prawo i nizej lub na tej samej wys co duch
            {
                if(kolizja_dol(tab, gracz, ile_p, false) == false && gora == false)
                {
                    set_wszystko(false);

                    set_dol(true);

                    set_kolizja(false);

                }
                else if(kolizja_prawo(tab, gracz, ile_p, false) == false && lewo == false)
                {
                    set_wszystko(false);

                    set_prawo(true);

                    set_kolizja(false);

                }
            }
        }

        if(duch->GetPosition().x >= gracz->GetPosition().x)    ///gdy gracz jest na lewo lub tak samo jak duch
        {

            if(duch->GetPosition().y > gracz->GetPosition().y)      ///gdy gracz jest lewo i wyzej niz duch
            {
                if(kolizja_gora(tab, gracz, ile_p, false) == false && dol == false)
                {
                    set_wszystko(false);

                    set_gora(true);

                    set_kolizja(false);
                }
                else if(kolizja_lewo(tab, gracz, ile_p, false) == false && prawo == false)
                {
                    set_wszystko(false);

                    set_lewo(true);

                    set_kolizja(false);

                }
            }


            if(duch->GetPosition().y <= gracz->GetPosition().y)    ///gdy gracz jest na lewo i nizej lub na tej samej wys co duch
            {
                if(kolizja_dol(tab, gracz, ile_p, false) == false && gora == false)
                {
                    set_wszystko(false);

                    set_dol(true);

                    set_kolizja(false);

                }
                else if(kolizja_lewo(tab, gracz, ile_p, false) == false && prawo == false)
                {
                    set_wszystko(false);

                    set_lewo(true);

                    set_kolizja(false);
                }
            }
        }

        poprzednie_polozenie[0] = duch->GetPosition().x;
        poprzednie_polozenie[1] = duch->GetPosition().y;
    }

}
