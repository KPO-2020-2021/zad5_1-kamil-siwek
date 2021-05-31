#ifndef BRYLA_H
#define BRYLA_H
#include <vector>
#include "Wektor3D.hh"

#define PROSTOKAT_X  10
#define PROSTOKAT_Y  12
#define PROSTOKAT_Z  5


#define ILOSC_WIERZCHOLKOW_GRANIATOSLUPA  6
#define PROMIEN_PODSTAWY                  10
#define GRUPOSC_ROTORA                    5.0


using namespace std;
class Bryla
{
     protected:
         vector <Wektor3D> Wierz;
         Wektor3D srodek;
         std::string nazwa;
    public:


std::string get_nazwa(){return nazwa;}


void ZapiszCzteryWierzcholki(double x_wierz,double y_wierz, double z_wierz,double x_trans,double y_trans,double z_trans)
{

    Wektor3D Wek;
    Wek[0]=x_trans;
    Wek[1]=y_trans;
    Wek[2]=z_wierz+z_trans;
   Wierz.push_back(Wek);
      Wek[0]=x_wierz+x_trans;
    Wek[1]=y_wierz+y_trans;
    Wek[2]=z_wierz+z_trans;
   Wierz.push_back(Wek);
      Wek[0]=x_wierz+x_trans;
    Wek[1]=y_wierz+y_trans;
    Wek[2]= -z_wierz+z_trans;
   Wierz.push_back(Wek);
      Wek[0]=x_trans;
    Wek[1]=y_trans;
    Wek[2]=-z_wierz+z_trans;
   Wierz.push_back(Wek);

}




    int get_wymiar() const{return Wierz.size();}
          void zamien_srodek(Wektor3D srodek);
    Wektor3D zwroc_srodek();
    Wektor3D &operator [](int i);
  Wektor3D operator [](int i) const;

        Bryla();
        ~Bryla();


};

#endif
