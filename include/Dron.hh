#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <unistd.h>
#include "lacze_do_gnuplota.hh"
#include "Prostopadloscian.hh"
#include "Graniastoslup.hh"
#include "Macierz3x3.hh"






class dron
{

Prostopadloscian *Pr;
Graniastoslup *Sm[4];
 PzG::LaczeDoGNUPlota  &Lacze;
public:
static int id;
    dron(PzG::LaczeDoGNUPlota  &Lacze);
    bool obsluga_drona();


void zapis_do_plikow();

bool ZapiszDrona(
    double       Kat_st = 0,
    double       x_trans = 0,
    double       y_trans = 0,
    double       z_trans = 0
);
bool AnimacjaRuchuDrona(PzG::LaczeDoGNUPlota  & Lacze,unsigned int IloscIteracji,double Kat_Zmiana_st,double x_Zmiana,double y_Zmiana,double z_Zmiana);
};

