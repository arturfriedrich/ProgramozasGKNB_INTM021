// Írjunk egy 4 csomópontos fát létrehozó programot!
// Írjunk programot amiben létrehozunk egy legalább 3 elemet tartalmazó egyszerű fát, majd a végén írjuk ki a levelek értékét! Írjunk függvényt a levelek feltöltésére!

#include <iostream>

using namespace std;

struct csucs {
    int ertek;
    int gyerekDb;
    int maxGyerek;
    csucs** gyerekek;
};

csucs* ujcsucs(int ertek) {
    csucs* uj = new csucs;
    uj->ertek = ertek;
    uj->gyerekDb = 0;
    uj->maxGyerek = 0;
    uj->gyerekek = NULL;

    return uj;
}

void hozzaad(csucs* szulo, csucs* gyerek) {
    if ( szulo == NULL or gyerek == NULL ) return;
    if ( szulo->gyerekDb == szulo->maxGyerek ) {                    // van-e hely a gyerekek tömbjében
        int meret = szulo->maxGyerek + 2;
        csucs** uj = new csucs*[meret];
        for ( int i=0; i<szulo->gyerekDb; i++ ) {
            uj[i] = szulo->gyerekek[i];
        }
        szulo->maxGyerek = meret;
        if ( szulo->gyerekek != NULL ) {
            delete[] szulo->gyerekek;
        }
        szulo->gyerekek = uj;
    }   
    szulo->gyerekek[szulo->gyerekDb] = gyerek;
    szulo->gyerekDb++;
}

inline void tab(int db) {                                           // adott mennyiségű tabot ír ki (nem hatékony, de áttekinthetőbb, de ez az inlineval javítható)
    for ( int i=0; i<db; i++ ) {
        cout << '\t';
    }
}

void kiir(csucs* cs, int szint) {                                   // kiírja a fát
    if ( cs == NULL ) return;                                       // megnézzük, hogy létezik-e
    cout << cs->ertek << endl;
    for ( int i=0; i<cs->gyerekDb; i++ ) {
        tab(szint);
        cout << "'-->";
        kiir(cs->gyerekek[i], szint+1);
    }
}

void felszabadit(csucs* cs) {
    for ( int i=0; i<cs->gyerekDb; i++ ) {
        felszabadit(cs->gyerekek[i]);
    }
    delete[] cs->gyerekek;
    delete cs;
} 

int main() {
    csucs* gyoker = ujcsucs(1);
    hozzaad(gyoker, ujcsucs(11));
    hozzaad(gyoker->gyerekek[0], ujcsucs(111));
    hozzaad(gyoker->gyerekek[0], ujcsucs(112));
    hozzaad(gyoker, ujcsucs(12));
    hozzaad(gyoker, ujcsucs(13));

    kiir(gyoker, 0);

    // felszabadítás!!!
    felszabadit(gyoker);

    return 0;
}