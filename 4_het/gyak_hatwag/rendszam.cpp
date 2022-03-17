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
    cout << "A program rendszámokat kér be, majd visszaadja, hogy az adott rendszám helyes-e." << endl;
	bool helyes;
    string rsz;
    int hsz;
    do {
        cout << "Kérem a rendszámot: ";
        cin >> rsz;
        rsz.length() > 7 ? helyes=false : helyes=true;
        for(int i=0; helyes and i<7; i++) { 
            if(i<3 and not isalpha(rsz[i])) helyes=false;
            else if(i>=4 and not isdigit(rsz[i])) helyes=false;
        }
        if( not (rsz[3]=='-' or isspace(rsz[3])) ) helyes=false;
        cout << "Ez a rendszám formailag " << ( helyes ? "helyes." : "hibás.") << endl;
    } while( rsz != "k" );
}