/* Egy bútoráruház termékeit (név, ár) egy irányban láncolt lista tárolja. Fejezze be az alábbi függvényt, melynek célja létrehozni a horgony paraméterrel azonosított lista alapján egy új, szűrt listát, melyben csak olyan termékek szerepelnek, melyek ára a megadott min és max értékek közé esik (ezeket is beleértve).
Ügyeljen rá, hogy az eredeti és szűrt listák semmiképpen se osztozzanak közös adatterületeken! Másképp fogalmazva, az eredeti listának sértetlennek kell maradnia.
A függvény visszatérési értéke a létrehozott új, szűrt lista legelső elemének címe (az új lista horgonya).
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

termek* szures(const termek* horgony, int min, int max) {
    termek* szurtHorgony = NULL;
    termek* seged = (termek*) horgony;
    while ( seged != NULL ) {
        if ( seged->ar >= min && seged->ar <= max ) {
            termek* uj = new termek;
            uj->nev = seged->nev;
            uj->ar = seged->ar;
            uj->kov = szurtHorgony;
            szurtHorgony = uj;
        }
        seged = seged->kov;
    }

    termek* akt = szurtHorgony;
    termek* elozo = NULL, *kov = NULL;

    while ( akt != NULL ) {
        kov = akt->kov;
        akt->kov = elozo;
        elozo = akt;
        akt = kov;
    }
    szurtHorgony = elozo;

    return szurtHorgony;
}

int main() {

    return 0;
}