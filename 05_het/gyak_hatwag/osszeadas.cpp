// Írjon függvényt, amely két számot vár paraméterül és eredményül visszaadja a két szám összegét!
// Írjon programot, amely két számot olvas be mindaddig, míg azok összege nem osztható 7-tel! A feladat megoldásához használja fel az előzőleg megírt függvény!

#include <iostream>

using namespace std;

int osszead(int a, int b) {
    int osszeg;
    osszeg = a + b;
    return osszeg;
}

int main() {
    cout << "A program bekér két számot majd eredményül visszaadja a két szám összegét." << endl;
    int a, b;
    do {
        cout << "Adja meg az első számot: ";
        cin >> a;
        cout << "Adja meg az második számot: ";
        cin >> b;
        cout << "A két szám összege: " << osszead(a, b) << endl;
    } while ( osszead(a, b) % 7 != 0 );
    return 0;
}