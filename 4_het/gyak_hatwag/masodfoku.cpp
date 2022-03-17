// Olvassunk be `a` `b` és `c` együtthatókat szabvány bemenetről
// Amennyiben az értékek alapján alkotott másodfokú egyenletnek (ax2+bx+c=0) 
// van valós gyöke írja ki az eredményt, különben pedig `Az egyenletenek nincs valos gyoke` szöveget.

#include <iostream>
#include <cmath>

#define N 3
using namespace std;

int main() {
    cout << "A program bekéri egy másodfokű egyenlet együtthatóit, majd kiírja a gyököket." << endl;
    // adatok bekérése
    float valtozok[3];
    for ( int i=0; i<=2; i++ ) {
        cout << "'" << (char)('a'+i) << "'" << " változó értéke: ";
        cin >> valtozok[i];
    }
    // megoldások kalkulálása
    float d;
    float megoldasok[2];
    d = sqrt(pow(valtozok[1], 2)-4*valtozok[0]*valtozok[2]);
    megoldasok[0] = ( -valtozok[1] + d ) / (2*valtozok[0]);
    megoldasok[1] = ( -valtozok[1] - d ) / (2*valtozok[0]);
    // eredmény kiírása, ha a megadott adatok helyesek
    if ( isnan(megoldasok[0]) or valtozok[0] == 0 ) {
        cout << "A megadott egyenlet nem másodfokú, vagy nincs gyöke a valós számok halmazán." << endl;
    } else if ( d > 0 ) {
        cout << "x1 = " << megoldasok[0] << endl;
        cout << "x2 = " << megoldasok[1] << endl;
    } else if ( d == 0 ) {
        cout << "Az egyenletnek egy megoldása létezik: x1 = x2 = " <<  megoldasok[0] << endl;
    }
    return 0;
}