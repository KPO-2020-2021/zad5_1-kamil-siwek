#include "Dron.hh"
Dron::Dron()
{
  Lacze.DodajNazwePliku(NAZWA_PLIKU__PROSTOPADLOSCIAN);

  Lacze.ZmienTrybRys(PzG::TR_3D);
  Lacze.Inicjalizuj();  // Tutaj startuje gnuplot.

  Lacze.UstawZakresX(-90, 90);
  Lacze.UstawZakresY(-60, 150);
  Lacze.UstawZakresZ(-20, 90);


  Lacze.UstawRotacjeXZ(64,65); // Tutaj ustawiany jest widok

  ZapiszDrona(0,0,0,0);


}



void Dron::zapisz()
{
ofstream korpus(NAZWA_PLIKU__PROSTOPADLOSCIAN);
korpus<<Pr;
}


bool Dron::ZapiszDrona( double       Kat_st = 0,double       x_trans = 0,  double       y_trans = 0,double       z_trans = 0)
{
Pr.czysc_wektor();

Kat_st=Kat_st;
 Pr.StworzProstopadloscian(x_trans,y_trans,z_trans);

zapisz();
 Lacze.Rysuj();
  return true;
}
