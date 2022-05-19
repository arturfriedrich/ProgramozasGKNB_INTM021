// Definiáljunk típust a lent megadott adatokat tartalmazó fákhoz!
// - Bináris fa, amely szavakat és azok előfordulásainak számát tárolja.
// - Bináris fa, amely tetszőlegesen hosszú neveket és hozzájuk tartozó telefonszámokat tárol. (Vigyázat, a telefonszámhoz nem elég egy egész szám, hiába van szám a nevében!)
// - Morse kódokat akarunk gyorsan feldolgozni. A kétféle bejövő jel TI és TÁ. Egy bináris fában ezt könnyen tárolhatjuk; a bejövő jeltől függően megyünk a fában balra (TI) vagy jobbra (TÁ); ha vége van a jelsorozatnak, akkor pedig az adott csomópontban tárolt betűt kiolvassuk.
// Írjon logikai függvényt, amely egy paraméterként megkapott, egészeket tartalmazó, szigorú értelemben vett bináris fáról eldönti, hogy tökéletesen kiegyensúlyozott-e!

#include <iostream>
#include <climits>                                                      // az INT_MAX-hoz kell 

using namespace std;

struct szogyak {
    string szo;
    int gyakorisag;
    szogyak* bal;
    szogyak* jobb;
};

struct bejegyzes {
    string nev;
    string telszam;
    bejegyzes* bal;
    bejegyzes* jobb;
};

struct morze {
    char betu;
    morze* ti;
    morze* ta;
};

struct csucs {
    int egesz;
    csucs* bal;
    csucs* jobb;
};

csucs* ujcsucs(int ertek) {
    csucs* uj = new csucs;
    uj->egesz = ertek;
    uj->bal = uj->jobb = NULL;          // mivel még nem tudjuk, hogy vannak-e ágai

    return uj;
}

inline void tab(int db) {                                           // adott mennyiségű tabot ír ki (nem hatékony, de áttekinthetőbb, de ez az inlineval javítható)
    for ( int i=0; i<db; i++ ) {
        cout << '\t';
    }
}

void kiir(csucs* cs, int szint) {                                   // kiírja a fát
    if ( cs == NULL ) return;                                       // megnézzük, hogy létezik-e
    cout << cs->egesz << endl;
    if ( cs->bal != NULL ) {
        tab(szint);
        cout << "'-->";
        kiir(cs->bal, szint+1);
    }
    if ( cs->jobb != NULL ) {
        tab(szint);
        cout << "'-->";
        kiir(cs->jobb, szint+1);
    }
}

void melyseg(csucs* cs, int szint, int* min, int* max) {
    if ( cs == NULL ) return;
    if ( cs->bal == NULL and cs->jobb == NULL ) {
        if ( szint < *min ) *min = szint;
        if ( szint > *max ) *max = szint;
    }
    melyseg(cs->bal, szint+1, min, max);
    melyseg(cs->jobb, szint+1, min, max);
}

bool kiegyensulyozott(csucs* gyoker) {
    int min = INT_MAX;                                              // a lehető legnagyonn int
    int max = 0;
    melyseg(gyoker, 0, &min, &max);
    if ( max-min <= 1 ) return true;                                // nem kell else mert a return úgyis kiléptet
    return false;
}

void felszabadit(csucs* cs) {
    if ( cs == NULL ) return;
    felszabadit(cs->bal);
    felszabadit(cs->jobb);
    delete cs;
}

int main() {
    csucs* gyoker = ujcsucs(1);
    gyoker->bal = ujcsucs(11);
    gyoker->bal->bal = ujcsucs(111);
    gyoker->bal->bal->bal = ujcsucs(1111);
    gyoker->bal->bal->jobb = ujcsucs(1112);
    gyoker->bal->jobb = ujcsucs(112);

    gyoker->jobb = ujcsucs(12);

    kiir(gyoker, 0);
    
    cout << "Ez a fa " << (kiegyensulyozott(gyoker) ? "" : "nem ") << "kiegyensúlyozott" << endl;

    felszabadit(gyoker);

    return 0;
}