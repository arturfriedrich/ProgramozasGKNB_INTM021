// Készítsen egy struktúrát, amely koordinátákat tárol (x, y, z)!
// Hozzon létre egy tízelemű tömböt, amely koordinátákat tárol!
// Egy mutató segítségével töltse fel a tömböt értékekkel!
// A mutatón keresztül jelenítse meg a tömb elemeit!

#include <iostream>

#define DB 2

struct koord {
    double x, y, z;
};

using namespace std;

int main() {
    koord tomb[DB];
    koord* mkoord = tomb;
    // cout << "Töltse fel a(z) " << DB << " elemű tömböt x, y, z koordinátákkal." << endl;
    cout << "Töltse fel a(z) " << DB << " elemu tombot x, y, z koordinátákkal." << endl;
    for ( int i=0; i<DB; i++, mkoord++ ) {
        cout << i+1 << ". koordináta: ";
        // cin >> (tomb+i) -> x >> (tomb+i) -> y >> (tomb+i) -> z;
        // cin >> (mkoord+i) -> x >> (mkoord+i) -> y >> (mkoord+i) -> z;
        cin >> mkoord -> x >> mkoord -> y >> mkoord -> z;
    }

    for ( int i=0; i<DB; i++ ) {
        cout << i+1 << ". koordináta: " << (tomb+i) -> x << "\t" << (tomb+i) -> y << "\t" << (tomb+i) -> z << endl;
    }

    return 0;
}