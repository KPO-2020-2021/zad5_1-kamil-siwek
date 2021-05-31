/*
 * Przykład ten ma tylko i wyłącznie za zadanie pokazanie efektów animacji lotu
 * drona. Kod w nim zawarty nie jest pisany w sposób obiektowo zorientowany.
 * Dlatego też nie należy wzorować się na nim.
 */








// Executables must have the following defined if the library contains
// doctest definitions. For builds with this disabled, e.g. code shipped to
// users, this can be left out.
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#endif

#include <iostream>
#include <stdlib.h>
#include "Dron.hh"
#include "exampleConfig.h"
#include "example.h"
using namespace std;

/*
 * Simple main program that demontrates how access
 * CMake definitions (here the version number) from source code.
 */
int main() {
  std::cout << "C++ Boiler Plate v"
            << PROJECT_VERSION_MAJOR
            << "."
            << PROJECT_VERSION_MINOR
            << "."
            << PROJECT_VERSION_PATCH
            << "."
            << PROJECT_VERSION_TWEAK
            << std::endl;
  std::system("cat ../LICENSE");

dron D[2];
while(D[0].obsluga_drona()){};


  Dummy d = Dummy();
  return d.doSomething() ? 0 : -1;
}


