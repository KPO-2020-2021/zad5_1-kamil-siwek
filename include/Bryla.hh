#ifndef BRYLA_HH
#define BRYLA_HH

#include <iostream>
#include "Wektor3D.hh"
#include "Macierz3x3.hh"
#include <vector>

#define PROSTOKAT_X  10
#define PROSTOKAT_Y  12
#define PROSTOKAT_Z  5
#define ILOSC_WIERZCHOLKOW_GRANIATOSLUPA  6
#define PROMIEN_PODSTAWY                  10
#define GRUPOSC_ROTORA                    5.0

class Bryla
{
protected:
std::vector <Wektor3D> wierz;
Wektor3D srodek;
public:
Bryla(){}
Bryla(int roz)
{
wierz.resize(roz);
}
  void czysc_wektor(){wierz.clear();}
  void zamien_srodek(Wektor3D srodek);
  int get_size()const{ return wierz.size();}
    Wektor3D zwroc_srodek();
    Wektor3D &operator [](int i){ return  wierz[i]; }
  Wektor3D operator [](int i) const{ return  wierz[i]; }


void ZapiszTrzyWartosci(double w1, double w2, double w3)
{

   Wektor3D wek_pom;
  wek_pom[0]=w1;
   wek_pom[1]=w2;
   wek_pom[2]=w3;
wierz.push_back(wek_pom);
}

void przsun(double w1, double w2, double w3)
{

   Wektor3D wek_pom;
   for(int i=0; i<(int)wierz.size(); i++)
   {
   wierz[i][0]=w1+wek_pom[0];
   wierz[i][1]=w2+wek_pom[1];
   wierz[i][2]=w3+wek_pom[2];
   }

}

void ZapiszCzteryWierzcholki(double x_wierz,double y_wierz,double z_wierz,double x_trans,double y_trans,double z_trans);

 void ZapiszCzteryWierzcholki_prze(double x_trans,double y_trans,double z_trans);
};







#endif
