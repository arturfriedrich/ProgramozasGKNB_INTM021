// 5 cég adatainak beolvasása
// A legrégebben alapított cég adatainak kiírása (név, dátum, bevétel)
// Helységnév bekérése után az ott lévő telephelyek adatainak kiírása (bármely cégekből)

#include <iostream>
#include "ceg.h"

#define CEGDB 3

using namespace std;

int legregebbi(const ceg* cegek, int db) {
    int idx = 0;
    const datum* alapitas = &cegek -> alapitas;
    for ( int i=1; i<db; i++ ) {
        if ( hasonlit(alapitas, &cegek[i].alapitas) > 0 ) {
            idx = i;
            alapitas = &(cegek + i) -> alapitas;
        }
    }
    return idx;
}

int main() {
    cout << "Cégeket kezelő program." << endl
         << "Adja meg " << CEGDB << " cég adatait" << endl;
    ceg cegek[CEGDB];
    for ( int i=0; i<CEGDB; i++ ) {
        cout << "A(z) " << i+1 << ". cég adatai: " << endl;
        beolvas(cegek + i);
    }

    cout << "A legrégebben alapított cég adatai: " << endl;
    kiir(cegek + legregebbi(cegek, CEGDB));

    cout << "Telephely adatok kiírása a helységnév alapján, üres sorig." << endl;
    string helyseg;
    cin.ignore();
    while ( cout << "Helységnév: ", getline(cin, helyseg), helyseg.length() > 0 ) {
        for ( int c=0; c<CEGDB; c++ ) {
            for ( int t=0; t<cegek[c].telepDb; t++ ) {
                if ( cegek[c].telephelyek[t].helyseg == helyseg ) {
                    cout << "Cég neve: " << cegek[c].nev << endl
                         << "Telephely adatai: " << endl;
                    kiir(cegek[c].telephelyek + t);
                }
            }
        }
    }

    for ( int i=0; i<CEGDB; i++ ) {
        torol(cegek + i);
    }

    return 0;
}