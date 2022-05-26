/* Egy bútoráruház termékeit (név, ár) egy irányban láncolt lista tárolja. Fejezze be az alábbi függvényt, melynek célja törölni a horgony paraméterrel adott láncolt listából minden olyan elemet, melyben a termék neve nev!
A függvény visszatérési értéke a módosított lista legelső elemének címe (a horgony). Ez változhat, ha a listának már a legelső elemét is törölni kell.
Szintaktikai hiba esetén a fordító által hibásnak jelzett sor számából vonjon ki 20-at, hogy megkapja a szerkesztőben olvasható valós sorszámot.
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

termek* torol(termek* horgony, string nev) {
    termek* akt = horgony;
    termek* elozo = NULL;
    while ( akt != NULL ) {
        termek* kov = akt->kov;
        if ( akt->nev == nev ) {
            if ( akt == horgony ) {
                horgony = kov;
            }
            if ( elozo != NULL ) {
                elozo->kov = kov;
            }
            delete akt;
        } else {
            elozo = akt;
        }
        akt = kov;
    }
    return horgony;
}

int main() {

    return 0;
}