#ifndef DRON_HH
#define DRON_HH

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <unistd.h>
#include "Macierz3x3.hh"
#include "lacze_do_gnuplota.hh"
#include "Graniastoslup.hh"
#include "Prostopadloscian.hh"

#define NAZWA_PLIKU__PROSTOPADLOSCIAN  "../datasets/Prostopadloscian.dat"

class Dron
{
  PzG::LaczeDoGNUPlota  Lacze;
Prostopadloscian Pr;

double kat, droga;
    Macierz3x3 M_drogi;
       Macierz3x3 M;
    Wektor3D Wek;
    double suma_katow=0;
public:

Dron();
bool AnimacjaRuchuDrona(unsigned int IloscIteracji,double Kat_Zmiana_st,double x_Zmiana,double       y_trans,double z_Zmiana);
void ruch();
bool ZapiszDrona( double       Kat_st,double       x_trans ,double       y_trans,double       z_trans );
void zapisz();
bool zmien( double       Kat_st ,double       x_trans,  double       y_trans ,double       z_trans );


};


#endif
