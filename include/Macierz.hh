#ifndef MACIERZ_HH
#define MACIERZ_HH


#include <iostream>
#include "Wektor.hh"
using namespace std;
/*!
 * \file
 * \brief Ten plik powinien zawierać definicję szablonu Macierz<>
 *
 * Ten plik powinien zawierać definicję szablonu Macierz<>.
 * W tym celu należy przerobić definicję klasy Macierz2x2.
 */




/*!
 * \brief  Krótki opis czego to jest szablon
 *
 *  Tutaj trzeba opisac szablon. Jakie pojecie on modeluje
 *  i jakie ma glowne cechy.
 */
/* szablon Macierz oparta na szablonie Wektor
zawiera funkcje typu:
-zeruj
-wypisz
-ustaw kat
-przeciazenie opratora macierz*macierz
-przeciazenie opratora macierz*wektor
-przeciazenie opratora macierz+macierz
-przeciazenie opratora [] oraz ()
*/
template <int Wymiar>
class Macierz{

  Wektor<Wymiar> Mac[Wymiar];
  double kat;
Wektor<Wymiar> srodek_obrotu;
  public:


void srodek(Wektor<Wymiar> srodek_obrotu)
{
  this->srodek_obrotu=srodek_obrotu;
}

Macierz()
{
        for(int i=0; i<Wymiar; i++)
      {
      for(int j=0; j<Wymiar; j++)
                Mac[i][j]=0;
      }
}
void zeruj()
{
        for(int i=0; i<Wymiar; i++)
      {
      for(int j=0; j<Wymiar; j++)
                Mac[i][j]=0;
      }
}
  double get_kat(){return kat;};
  void set_kat( double kat){this->kat=kat*M_PI/180;};
Wektor<Wymiar> operator *(Wektor<Wymiar> W)
  {
      Wektor<Wymiar> Wynik;
        for(int i=0; i<Wymiar; i++)
        Wynik[i]=0;
    //    cout<<"srodek w funkcji"<<srodek_obrotu<<endl;
      for(int i=0; i<Wymiar; i++)
      {
      for(int j=0; j<Wymiar; j++)
      {
      Wynik[i]+=Mac[i][j]*(W[j]-srodek_obrotu[j]);
      }
      Wynik[i]+=srodek_obrotu[i];
      }
        return Wynik;
  }


  Macierz<Wymiar> operator *(Macierz<Wymiar> W)
  {
      Macierz<Wymiar> Wynik;
      double s=0;
  for(int i = 0; i < Wymiar; i++)
    for(int j = 0; j < Wymiar; j++)
    {
      s = 0;
      for(int k = 0; k < Wymiar; k++) s += W(i,j) * Mac[k][j];
      Wynik(i,j) = s;
    }
        return Wynik;
  }

  Macierz<Wymiar> operator +(Macierz<Wymiar>M)
  {
      Macierz<Wymiar> Wynik;

      for(int i=0; i<Wymiar; i++)
      for(int j=0; j<Wymiar; j++)
      Wynik(i,j)=Mac[i][j]+M(i,j);

        return Wynik;
  }

 Wektor<Wymiar>  &operator[](int i){return Mac[i];}
double &operator()(int i, int j){return Mac[i][j];}
double operator()(int i, int j)const{return Mac[i][j];}

};




/*!
 * \brief Przeciążenie dla wejścia musi także być szablonem
 *
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt
 */
template <int Wymiar>
inline
std::ostream& operator << (std::ostream &Strm, const Macierz<Wymiar> &Wek)
{

      for(int i=0; i<Wymiar; i++)
      {
      for(int j=0; j<Wymiar; j++)
      cout<<Wek(i,j)<<" ";

      cout<<endl;
      }
  return Strm;
}


#endif
