/* Egy bútoráruház termékeit (név, ár) egy irányban láncolt lista tárolja. Fejezze be az alábbi függvényt, melynek célja hozzáfűzni egy új listaelemet a horgony-nyal azonosított lista végéhez! Ennek az új terméknek a nevét a nev, árát az ar paraméter adja meg.
A függvény visszatérési értéke a létrehozott lista legelső elemének címe (a horgony). A horgony megváltozhat, ha az eredeti lista üres volt a hozzáfűzés előtt.
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

termek* hozzafuz(termek* horgony, string nev, int ar) {
    termek* uj = new termek;
    uj->nev = nev;
    uj->ar = ar;
    uj->kov = NULL;
    if(horgony == NULL) {
        return uj;
    } else {
        termek* seged = horgony;
        while(seged->kov != NULL) {
            seged = seged->kov;
        }
        seged->kov = uj;
        return horgony;
    }
}