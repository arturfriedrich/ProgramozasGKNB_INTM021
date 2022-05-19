// Az előző feladatot bővítse tovább úgy, hogy olyan függvényeket ír, melyekkel a lista elejére és végére beszúrást szemléltethetjük! Próbálja is ki különböző értékekkel a függvényeket!
// Szabadítsa fel a lefoglalt memóriát!

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

elem* beszurElore(elem* horgony, int szam) {
    elem* uj = new elem;
    uj->szam = szam;
    uj->kov = horgony;
    return uj;
}

elem* beszurHatra(elem* horgony, int szam) {
    elem* uj = new elem;
    uj->szam = szam;
    uj->kov = NULL;                 // mivel utána már nem fog szerepelni elem
    if ( horgony == NULL ) {        // ha a lista még nem létezett
        return uj;
    } else {
        elem* akt = horgony;
        while ( akt->kov != NULL ) {
            akt = akt->kov;
        }
        akt->kov = uj;
        return horgony;
    }
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
    cout << "Láncolt lista létrehozása tömb elemeiből" << endl
         << "Kiírás fordított sorrendben: " << endl;
    int sz[] = {1, 2, 4, 5, 6, 7, -1};
    elem* horgony = letrehoz(sz);
    cout << "Eredeti lista tartalma: " << endl;
    kiir(horgony);
    horgony = beszurElore(horgony, 42);
    cout << "A lista elejére történő beszúrás után: " << endl;
    kiir(horgony);
    horgony = beszurHatra(horgony, 666);
    cout << "A lista végére történő beszúrás után: " << endl;
    kiir(horgony);
    felszabadit(horgony);

    horgony = NULL;

    /* horgony = beszurElore(horgony, 42);
    cout << "Új lista egyetlen elemből amit előre szúrtunk be: "  << endl;
    kiir(horgony);
    felszabadit(horgony);

    horgony = beszurHatra(horgony, 666);
    cout << "Új lista egyetlen elemből amit hátra szúrtunk be: "  << endl;
    kiir(horgony);
    felszabadit(horgony); */

    return 0;
}