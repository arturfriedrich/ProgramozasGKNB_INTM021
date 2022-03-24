// Írjon C++ programot, amely egy string validációját végzi el. 
// A formátum egyezzen meg a leggyakoribb magyar rendszámtábla formátumával. 
// Eszerint 7 karakter hosszúságú legyen, ennek elején három (nagy vagy kis) betű után 
// egy kötőjel és végül három szám következzen!
// A program `k` betűre lépjen ki!

// Plusz feladat: Fejlessze tovább az előző feladatot, úgy, hogy a 3 betű, kötőjel, 3 szám mellett a 3 betű, 
// három szám és a 3 betű, space, 3 szám formátumot is fogadja el. Pl. `SZE-001`, `SZE 001`, `SZE001`

#include <iostream>
#include <cctype>

using namespace std;

int main() {
    cout << "A program rendszámokat kér be, majd visszaadja, hogy az adott rendszám helyes-e. (kilépés k-val)" << endl;
    string rendszam;
    do {
        cout << "Adjon meg egy rendszámot: ";
        cin >> rendszam;
        if ( rendszam != "k" ) {
            bool hibas = false;
            int i;
            if ( rendszam.length() > 7 ) hibas = true;
            for ( i=0; not hibas and i<3; i++ ) {
                if ( not isalpha(rendszam[i]) ) hibas = true;
            }
            if ( not (rendszam[i] != '-' or rendszam[i] != '_' or isspace(rendszam[i])) ) hibas = true;
            for ( i=4; not hibas and i<7; i++ ) {
                if ( not isdigit(rendszam[i]) ) hibas = true; 
            }
            cout << "A rendszám formailag " << (hibas ? "hibás" : "helyes ") << endl;
        }
    } while( rendszam != "k" );
}