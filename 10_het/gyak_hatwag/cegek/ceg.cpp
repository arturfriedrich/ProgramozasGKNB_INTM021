#include "ceg.h"

void beolvas(ceg* c) {
    cout << "Cég neve: ";
    cin >> ws;                          // kidobálja a pufferból a bent maradt karaktereket
    getline(cin, c -> nev);
    cout << "Adja meg az alapítás dátumát: " << endl;
    beolvas(&c -> alapitas);
    cout << "Telephelyek száma: "; cin >> c -> telepDb;
    c -> telephelyek = new telep[c -> telepDb];
    for ( int i=0; i<c -> telepDb; i++ ) {
        cout << "Adja meg a(z) " << i+1 << ". telephely adatait: " << endl;
        beolvas(c -> telephelyek + i);
    }
}

int evesBevetel(const ceg* c) {
    int bevetel = 0;
    for ( int i=0; i<c -> telepDb; i++) {
        bevetel += c -> telephelyek[i].bevetel;
    }
    return bevetel;
}

void kiir(const ceg* c) {
    cout << "Cég neve: " << c -> nev << endl
         << "Alapítás dátuma: ";
    kiir(&c -> alapitas);
    cout << endl << "Telephelyek száma: " << c -> telepDb << endl
         << "Telephelyek adatai: " << endl;
    for ( int i=0; i<c -> telepDb; i++ ) {
        kiir(c -> telephelyek + i);
    }
    cout << "Összesített bevétel: " << evesBevetel(c) << endl;
}

void torol(const ceg* c) {
    delete[] c -> telephelyek;
}
