// Olvasson be egész számokat, amíg 0-t nem kap, majd mondja meg, melyik érték hányszor szerepelt a bemeneten!
// Harmadik szint: Tetszőleges különböző érték előfordulhat.

#include <iostream>
#include <cstdlib>

using namespace std;

struct szamlalo {
    int szam;
    int db;
};

void hiba(szamlalo* sz) {
    if ( sz == NULL ) {
        cerr << "Memóriakezelési hiba." << endl;
        exit(0);
    }
}

int main() {
    int meret = 2;
    szamlalo* szamlalok = new szamlalo[meret];
    hiba(szamlalok);
    int kulonbozo = 0;
    int szam;
    cout << "Adjon meg számokat a 0 végjelig." << endl;
    while ( cout << "Következő szám: ", cin >> szam, szam  != 0 ) {
        int i;
        for ( i=0; i<kulonbozo and szam!=szamlalok[i].szam; i++ );
        if ( i==kulonbozo ) {
            if ( kulonbozo==meret ) {
                cout << "Átméretezés, régi méret: " << meret;
                szamlalo* uj = new szamlalo[meret*2];
                hiba(szamlalok);
                for ( int i=0; i<kulonbozo; i++ ) {
                    uj[i] = szamlalok[i];
                }
                meret*=2;
                cout << " új méret: " << meret << endl; 
                delete[] szamlalok;
                szamlalok = uj;
            }
            szamlalok[kulonbozo].szam = szam;
            szamlalok[kulonbozo].db = 1;
            kulonbozo++;
        } else {
            szamlalok[i].db++;
        }
    }

    cout << "A meagott számok mennyisége: " << endl;
    for ( int i=0; i<kulonbozo; i++ ) {
        cout << szamlalok[i].szam << " mennyisége: " << szamlalok[i].db << endl;
    } 
    delete[] szamlalok;

    return 0;
}