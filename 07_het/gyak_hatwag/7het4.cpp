// Készítsen egy koordináta struktúrát!
// Készítsen egy háromszög struktúrát, amely három koordinátát tárol!
// Írjon függvényt, amely egy háromszög struktúra címét kapja meg és feltölti azt billentyűzetről olvasott értékekkel!
// Írjon függvényt, amely egy háromszög struktúra címét kapja és megjeleníti azt a képernyőn!
// Olvasson be egy két elemű tömbbe háromszögeket az előbb megírt függvény segítségével!
// Írassa ki a tömb elemeit!

#include <iostream>

using namespace std;

struct koord {
    double x, y;
};

#define N 3
struct haromszog {
    koord csucsok[N];
};

void beolvas(haromszog* mhsz) {
    for ( int i=; i<N; i++ ) {
        cout << "X: "; cin >> mhsz -> csucsok[i].x;
        cout << "Y: "; cin >> mhsz -> csucsok[i].y;
    }
}

void kiir(const haromszog* mhsz) {
    for ( int i=; i<N; i++ ) {
        cout << "X: " << mhsz -> csucsok[i].x
             << " Y: " << mhsz -> csucsok[i].y << endl;
    }
}

#define DB 2
int main() {
    haromszog tomb[DB];
    cout << "Háromszögek kezelése: " << endl;
    for ( int i=0; i<DB; i++ ) {
        cout << i+1 << ". háromszög adatai: " << endl;
        beolvas(tomb + i);
    }
    cout << "A beolvasott háromszögek adatai: " << endl;
    for ( int i=0; i<DB; i++ ) {
        cout << i+1 << ". háromszög csúcsainak koordinátái: " << endl;
        kiir(&tomb[i]);
    }
    return 0;
}