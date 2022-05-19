// Írjon programot, amely egy tömb elemeivel láncolt listát készít!
// A tömb utolsó eleme legyen `-1`, ez már ne kerüljön a listába! Az elemeket szúrja be a lista elejére! Figyeljük meg, hogy így a lista fordított lesz a tömbhöz képest!
// Végül jelezzük ki az egyes elemeket rendre!

#include <iostream>

using namespace std;

struct elem {
    int szam;
    elem* kov;
};

elem* letrehoz(int szamok[]) {
    elem* horgony = NULL;       // a horgony nem mutat sehova, így tudni majd tudni fogjuk, hogy mikor van vége
    for ( int i=0; szamok[i]!=-1; i++ ) {
        elem* uj = new elem;        // új elemet hozunk létre
        uj->szam = szamok[i];       // az új elem megkapja az éppen aktuális értéket
        uj->kov = horgony;          // az ezt követő elem lesz a horgony
        horgony = uj;               // a horgonynak értéket adunk
    }
    return horgony;
}

void kiir(elem* horgony) {          // a horgonytól indulva kell kiírnia az elemeket
    elem* akt = horgony;            // a lista aktuális eleme
    while ( akt != NULL ) {         // amíg a lista tart
     cout << akt->szam << '\t';
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

int main() {
    cout << "Láncolt lista létrehozása tömb elemeiből" << endl;
    cout << "Kiírás fordított sorrendben: " << endl;
    int sz[] = {1, 2, 4, 5, 6, 7, -1};
    elem* horgony = letrehoz(sz);
    kiir(horgony);
    felszabadit(horgony);

    return 0;
}