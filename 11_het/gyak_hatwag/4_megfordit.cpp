// Fordítsunk meg egy listát az elemei átláncolása által! Jelezzük ki előző program listáját eredeti sorrendjében (és ezáltal az adatokat eredeti sorrendjükben), továbbá a megfordítottat is!
// Mindig a lista elejéről veszünk el egy elemet, majd a megfordított lista elejére betesszük azt, így a lista megfordul. Végül az eredeti lista elfogy, amint ez megtörténik, a megfordított lista kész.

#include <iostream>

#define EV 2020

using namespace std;

struct elem {
    string monogram;
    int eletkor;
    int szulev;
    int magassag;
    elem* kov;
};

elem* letrehoz() {
    elem* horgony = NULL;       // a horgony nem mutat sehova, így tudni majd tudni fogjuk, hogy mikor van vége
    int db = 2 + rand() % 10;
    for ( int i=0; i<db; i++ ) {
        elem* uj = new elem;        // új elemet hozunk létre
        int mhossz = 2 + rand() % 2;        // az eredmény vagy 0 vagy 1
        for ( int j=0; j<mhossz; j++ ) {
            uj->monogram += 'A' + rand() % ('Z' - 'A' + 1);           // véletlen betű generátor
        }
        uj->eletkor = rand() % 121;                               // 0 és 120 között
        uj->szulev = EV - uj->eletkor;
        uj->magassag = 40 + rand() % 181;

        uj->kov = horgony;          // az ezt követő elem lesz a horgony
        horgony = uj;               // a horgonynak értéket adunk
    }
    return horgony;
}

void kiir(elem* horgony) {          // a horgonytól indulva kell kiírnia az elemeket
    elem* akt = horgony;            // a lista aktuális eleme
    while ( akt != NULL ) {         // amíg a lista tart
        cout << "Monogram:" << akt->monogram << endl
             << "Életkor: " << akt->eletkor << endl
             << "Születési év: " << akt->szulev << endl
             << "Magasság: " << akt->magassag << endl << endl;
        akt = akt->kov;                // a következőre léptetjük
    }
    cout << endl;
}

void felszabadit(elem* horgony) {
    elem* akt = horgony;
    while ( akt != NULL ) {
        elem* kov = akt->kov;       // kimentjük a következő elem címét
        delete akt;                 // felszabadítás
        akt = kov;                  // léptetés
    }
}

elem* fordit(elem* horgony) {
    elem* eredeti = horgony;        // az eredti lista első elemére mutat
    elem* forditott = NULL;         // a forított lista első elemét még nem ismerjük
    elem* akt = eredeti;
    while ( akt != NULL ) {
        elem* eredetiKov = akt->kov;
        akt->kov = forditott;
        forditott = akt;
        akt = eredetiKov;
    }
    return forditott;
}

int main() {
    cout << "Láncolt lista létrehozása veletlenszerűen" << endl;
    srand(time(NULL));              // az idő segítségével randomizálunk
    elem* horgony = letrehoz();
    kiir(horgony);

    cout << "Fordított sorrendben: " << endl;
    horgony = fordit(horgony);
    kiir(horgony);

    felszabadit(horgony);

    return 0;
}