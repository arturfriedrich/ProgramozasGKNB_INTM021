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
            for(int i=0; i<7; i++) { 
                if(i<3 and not isalpha(rendszam[i])) hibas = true;
                else if(i>=4 and not isdigit(rendszam[i])) hibas = true;
                else if(not (rendszam[3]=='-' or rendszam[3]=='_' or isspace(rendszam[3])) ) hibas = true;
                }
            cout << "A rendszám formailag " << (hibas ? "hibás" : "helyes ") << endl;
        }
    } while( rendszam != "k" );
}