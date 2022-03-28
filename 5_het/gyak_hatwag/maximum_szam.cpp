// Írjon függvényt, amely két számot vár paraméterül és eredményül visszaadja a két szám maximumát!
// Olvasson be egy számot, amelyet eltárol jelenlegi maximális értékként!
// Olvasson be számokat addig, míg nem adunk meg háromszor is nagyobb számot az előzőeknél! A nagyobb számot mindig tárolja el jelenlegi maximumként!
// A feladat megoldásához használja fel az előzőleg megírt függvényt!

#include <iostream>

using namespace std;

int maximum(int a, int b) {
    if ( a > b ) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int aktMax, uj, db=0;
    cout << "Adja meg az első számot: ";
    cin >> aktMax;
    do {
        cout << "Adja meg a következő számot: ";
        cin >> uj;
        if ( maximum(uj, aktMax) > aktMax ) {
            aktMax = uj;
            db++;
            cout << "Ez volt a(z) " << db << ". nagyobb szám." << endl; 
        }
    } while ( db < 3 );
    return 0;
}