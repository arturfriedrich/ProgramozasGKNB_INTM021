/* Egy bútoráruház termékeit (név, ár) egy irányban láncolt lista tárolja. Fejezze be az alábbi függvényt, melynek célja véletlenszerűen előállítani egy legfeljebb 15 (MAX_DB szimbolikus állandóval adott) elemből álló láncolt listát. (Tehát az elemek száma is véletlenszerű, lehet akár 0 is.)
Ezen kívül véletlenszerűen kell meghatározni a termékek nevét, mely csak Asztal, Szek, Kanape, Kisagy, Konyhapult, Allolampa, Fogas, Komod, Tukor, Vaza, Dohanyzoasztal és Hintaszek lehet. Azonos nevű termékből több is előfordulhat, és nem kötelező mindegyiknek szerepelnie.
Hasonlóan véletlenszerűen kell meghatározni a termékek árát, ami legfeljebb 1000000 (MAX_AR szimbolikus állandóval adott), és nemnegatív egész érték.
A függvény visszatérési értéke a létrehozott lista legelső elemének címe (a horgony).
Feltételezheti, hogy a véletlenszám generátort a függvény hívása előtt már inicializálták.
Szintaktikai hiba esetén a fordító által jelzett sor számából vonjon ki 20-at, hogy megkapja a szerkesztőben olvasható sorszámot!
A lista egy elemének szerkezete a következő:

struct termek {
  string nev;
  int ar;
  termek* kov;
}; */

#include <iostream>
#include <ctime>

#define MAX_DB 15
#define MAX_AR 1000000

using namespace std;

struct termek {
  string nev;
  int ar;
  termek* kov;
};

termek* general() {
    string nevek[] = {
        "Asztal", "Szek", "Kanape", "Kisagy", "Konyhapult", "Allolampa",
        "Fogas", "Komod", "Tukor", "Vaza", "Dohanyzoasztal", "Hintaszek"
    };
  
    int n = rand() % MAX_DB + 1;              // lista hossza
    int m;                                    // bútor index
    int p;                                    // bútor ár
    termek* horgony = nullptr;
    for ( int i=0; i<n; i++ ) {
        m = rand() % nevek->length();
        // cout << "Bútor indexe: " << m << endl;
        p = rand() % MAX_AR;
        // cout << "Bútor ára: " << p << endl;
        termek* akt = new termek;
        akt->nev = nevek[m];
        akt->ar = p;
        akt->kov = horgony;
        horgony = akt;
    }
    return horgony;
}

int main() {
    srand(time(NULL));
    general();

    return 0;
}