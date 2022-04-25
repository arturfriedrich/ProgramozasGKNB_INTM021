// Készítsen egy koordinátát tároló struktúrát!
// Írjon függvényt, amely koordinátát olvas be billentyűzetről!
// Foglaljon dinamikus memóriát és jelenítse meg a tárolt koordinátákat!
// Szabadítsa fel a lefoglalt memóriaterületet!

#include <iostream>
#include <cstdlib>

using namespace std;

struct Koordinata {
    double x, y, z;
};

/*
// ebben a verzióban a beolvas foglalja a memóriát
Koordinata* beolvas() {
    Koordinata* k = new Koordinata;
    if ( k == NULL ) {
        cerr << "Memóriafoglalási hiba." << endl;
        exit(1);
    }
    cout << "x koordináta: "; cin >> (*k).x;
    cout << "y koordináta: "; cin >> k->y;      // a kettő ugyan az
    cout << "z koordináta: "; cin >> k->z;
    return k;
}

int main() {
    Koordinata* koord;
    cout << "Dinamikusan foglalt struktúra; koordináták kezelése." << endl;
    koord = beolvas();
    cout << "A beolvasott koordináta: ";
    cout << "x: " << koord->x << "\ty: " << koord->y << "\tz: " << koord->z << endl;
    delete koord;

    return 0;
}
*/

// ebben a verzióban a main foglalja a memóriát
void beolvas(Koordinata* k) {
    cout << "x koordináta: "; cin >> (*k).x;
    cout << "y koordináta: "; cin >> k->y;      // a kettő ugyan az
    cout << "z koordináta: "; cin >> k->z;
}

int main() {
    Koordinata* koord = new Koordinata;
    if ( koord == NULL ) {
        cerr << "Memóriafoglalási hiba." << endl;
        return -1;
    }
    cout << "Dinamikusan foglalt struktúra; koordináták kezelése." << endl;
    beolvas(koord);
    cout << "A beolvasott koordináta: ";
    cout << "x: " << koord->x << "\ty: " << koord->y << "\tz: " << koord->z << endl;
    delete koord;

    return 0;
}
