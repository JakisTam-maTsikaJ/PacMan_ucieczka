#include "gracz.h"
#include <conio.h>
#include <iostream>
#include <wx/msgdlg.h>

gracz::gracz()
{
}


gracz::gracz(wxAnimationCtrl *animacja)
{
    set_wszystko(false);


    int x = animacja->GetPosition().x;
    int y = animacja->GetPosition().y;

    pozcyja_x = x;
    pozcyja_y = y;
}


gracz::~gracz()
{

}


void gracz::poruszanie(wxControl** tab, wxAnimationCtrl* gracz, int ile_p, wxControl** teleport)
{
    set_kolizja(true);

    if(gora == true && kolizja_gora(tab, gracz, ile_p, false) == false)
    {
        pozcyja_x = pozcyja_x;
        pozcyja_y = pozcyja_y - 5;
        kolizja = false;
    }


    if(dol == true && kolizja_dol(tab, gracz, ile_p, false) == false)
    {
        pozcyja_x = pozcyja_x;
        pozcyja_y = pozcyja_y + 5;
        kolizja = false;
    }


    if(lewo == true && kolizja_lewo(tab, gracz, ile_p, false) == false)
    {
        pozcyja_x = pozcyja_x-5;
        pozcyja_y = pozcyja_y;
        kolizja = false;
    }


    if(prawo == true && kolizja_prawo(tab, gracz, ile_p, false) == false)
    {
        pozcyja_x = pozcyja_x+5;
        pozcyja_y = pozcyja_y;
        kolizja = false;
    }

/////////////////////////////////////////////////////////////////////////////////////////////////////
    if(lewo == true && kolizja_lewo(teleport, gracz, 2, false) == true)
    {
        pozcyja_x = teleport[1]->GetPosition().x - gracz->GetSize().x;
        pozcyja_y = pozcyja_y;
    }

    if(prawo == true && kolizja_prawo(teleport, gracz, 2, false) == true)
    {
        pozcyja_x = teleport[0]->GetPosition().x + teleport[0]->GetSize().x;
        pozcyja_y = pozcyja_y;
    }
/////////////////////////////////////////////////////////////////////////////////////////////////////



}


void gracz::set_dol(bool x)
{
    dol = x;
}


void gracz::set_gora(bool x)
{
    gora = x;
}


void gracz::set_lewo(bool x)
{
    lewo = x;
}


void gracz::set_prawo(bool x)
{
    prawo = x;
}


void gracz::set_wszystko(bool x)
{
    prawo = x;
    lewo = x;
    dol = x;
    gora = x;
}

int gracz::get_pozycja_x()
{
    return pozcyja_x;
}


int gracz::get_pozycja_y()
{
    return pozcyja_y;
}


bool gracz::kolizja_gora(wxControl** tab, wxAnimationCtrl* gracz, int ile_p, bool czy_zmiana)
{
    int w;

    if(czy_zmiana == true)
        w = 20;
    else
        w = 5;


    for(int i = 0; i <= ile_p-1; i++)
    {
        if(pozcyja_y-w <= tab[i]->GetPosition().y+tab[i]->GetSize().y &&
           tab[i]->GetPosition().y <= pozcyja_y &&
           pozcyja_x+gracz->GetSize().x >= tab[i]->GetPosition().x &&
           pozcyja_x <= tab[i]->GetPosition().x+tab[i]->GetSize().x)
                return true;
    }
    return false;
}


bool gracz::kolizja_dol(wxControl** tab, wxAnimationCtrl* gracz, int ile_p, bool czy_zmiana)
{
    int w;

    if(czy_zmiana == true)
        w = 20;
    else
        w = 5;


    for(int i = 0; i <= ile_p-1; i++)
    {
        if(pozcyja_y+gracz->GetSize().y+w >= tab[i]->GetPosition().y &&
           tab[i]->GetPosition().y >= pozcyja_y &&
           pozcyja_x+gracz->GetSize().x >= tab[i]->GetPosition().x &&
           pozcyja_x <= tab[i]->GetPosition().x+tab[i]->GetSize().x)
                return true;
    }
    return false;
}


bool gracz::kolizja_lewo(wxControl** tab, wxAnimationCtrl* gracz, int ile_p, bool czy_zmiana)
{
    int w;

    if(czy_zmiana == true)
        w = 20;
    else
        w = 5;


    for(int i = 0; i <= ile_p-1; i++)
    {
        if(pozcyja_y+gracz->GetSize().y >= tab[i]->GetPosition().y &&
           pozcyja_y <=tab[i]->GetPosition().y+tab[i]->GetSize().y &&
           pozcyja_x - w <= tab[i]->GetPosition().x+tab[i]->GetSize().x &&
           tab[i]->GetPosition().x + tab[i]->GetSize().x <= pozcyja_x)
                return true;
    }
    return false;
}


bool gracz::kolizja_prawo(wxControl** tab, wxAnimationCtrl* gracz, int ile_p, bool czy_zmiana)
{
    int w;

    if(czy_zmiana == true)
        w = 20;
    else
        w = 5;

    for(int i = 0; i <= ile_p-1; i++)
    {
        if(pozcyja_y+gracz->GetSize().y >= tab[i]->GetPosition().y &&
           pozcyja_y <=tab[i]->GetPosition().y+tab[i]->GetSize().y &&
           pozcyja_x+gracz->GetSize().x + w >= tab[i]->GetPosition().x &&
           tab[i]->GetPosition().x >= pozcyja_x+gracz->GetSize().x)
                return true;
    }
    return false;
}


bool gracz::get_gora()
{
    return gora;
}

bool gracz::get_dol()
{
    return dol;
}

bool gracz::get_lewo()
{
    return lewo;
}

bool gracz::get_prawo()
{
    return prawo;
}

void gracz::set_kolizja(bool x)
{
    kolizja = x;
}
