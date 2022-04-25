// Olvasson be egész számokat, amíg 0-t nem kap, majd mondja meg, melyik érték hányszor szerepelt a bemeneten!
// Negyedik szint: Az érték-darabszám párokat rendezve tárolja, és bináris kereséssel keresse meg az aktuális elemet!

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

int binker(int mit, const szamlalo* miben, int n) {
    int eleje=0, vege=n-1;
    while ( eleje <= vege ) {
        int kozepe = (eleje+vege)/2;
        if ( miben[kozepe].szam > mit ) {
            vege = kozepe - 1;
        } else if ( miben[kozepe].szam < mit ) {
            eleje = kozepe + 1;
        } else {
            return kozepe;
        }
    }
    return -eleje-1;
}

void athelyez(szamlalo* tomb, int n, int hely) {
    for ( int i=n; i>hely; i-- ) {
        tomb[i] = tomb[i-1];
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
        int hely = binker(szam, szamlalok, kulonbozo);
        if ( hely < 0 ) {
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
            hely = -(hely+1);
            athelyez(szamlalok, kulonbozo, hely);
            szamlalok[hely].szam = szam;
            szamlalok[hely].db = 1;
            kulonbozo++;
        } else {
            szamlalok[hely].db++;
        }
    }

    cout << "A meagott számok mennyisége: " << endl;
    for ( int i=0; i<kulonbozo; i++ ) {
        cout << szamlalok[i].szam << " mennyisége: " << szamlalok[i].db << endl;
    } 
    delete[] szamlalok;

    return 0;
}