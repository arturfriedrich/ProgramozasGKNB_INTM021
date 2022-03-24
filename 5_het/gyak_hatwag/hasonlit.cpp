// Írjon függvényt, amely két számot vár paraméterül és eredményül `1`-et ad vissza, ha az első szám nagyobb a másodiknál, `-1`-et, ha a második nagyobb az elsőnél, `0`-át, ha egyenlők!

#include <iostream>

using namespace std;

int hasonlit(int a, int b) {
    if ( a > b ) {
        return 1;
    } else if ( a < b ) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    cout << "A program bekér két számot majd megmondja hogyan viszonyulnak egymáshoz." << endl;
    int a, b;
    cout << "Adja meg az első számot: ";
    cin >> a;
    cout << "Adja meg az második számot: ";
    cin >> b;
    cout << hasonlit(a, b) << endl;
    return 0;
}