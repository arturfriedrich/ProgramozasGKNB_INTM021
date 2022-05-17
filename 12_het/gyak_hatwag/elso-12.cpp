// Az elso-12.cpp, lista.cpp, lista.h mind a 10. és 11.(!!) heti szelearning anyagot tartalmamzzák!

#include <iostream>
#include "lista.h"

int main() {
  int tomb[] = { 1, 2, 3, 4, 5, -1 };
  Lista* horgony = letrehozTombbol(tomb);
  beszurVegere(keresUtolso(horgony), 6);
  kiir(horgony);
  torles(&horgony);
}