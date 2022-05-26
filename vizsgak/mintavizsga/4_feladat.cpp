/* Egy bútoráruház termékeit (név, ár) egy irányban láncolt lista tárolja. Fejezze be az alábbi függvényt, melynek célja 50%-os kedvezményt adni a legdrágább termékből! Módosítsa a termék árát a felére (lefelé kerekítve)! Ha több azonos árú legdrágább termék létezik, csak a listában elsőként tárolt legdrágább termék árából adjon kedvezményt!
A függvény paramétere a lista első elemének címe (a horgony).
Szintaktikai hiba esetén a fordító által jelzett sor számából vonjon ki 20-at, hogy megkapja a szerkesztőben olvasható sorszámot!
A lista egy elemének szerkezete a következő:

struct termek {
  string nev;
  int ar;
  termek* kov;
}; */

#include <iostream>

using namespace std;

struct termek {
  string nev;
  int ar;
  termek* kov;
};

void akcio(termek* elem) {
    int maxp = 0;
    termek* maxt = NULL;
    while ( elem != NULL ) {
        if ( elem->ar > maxp ) {
            maxp = elem->ar;
            maxt = elem;
        }
        elem = elem->kov;
    }

    if ( maxt != NULL ) {
        maxt->ar /= 2;
    }
}