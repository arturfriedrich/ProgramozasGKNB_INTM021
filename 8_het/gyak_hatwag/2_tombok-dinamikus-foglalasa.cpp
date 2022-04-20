// Olvasson be egy egész számot billentyűzetről!
// Foglaljon helyet annyi egész számnak, amennyi az előzőleg beolvasott szám értéke!
// Olvasson be és tároljon el annyi egész számot, amennyi az előzőleg beolvasott szám értéke!
// Írassa ki a beolvasott számokat!
// Szabadítsa fel a lefoglalt memóriaterületet!

#include <iostream>

using namespace std;

int main() {
    int db, *tomb;
    cout << "Adja meg a dinamikus tömb elemszámát: ";
    cin >> db;
    tomb = new int[db];
    if ( tomb == NULL ) {
        cerr << "Memóriafoglalási hiba." << endl;
        return -1;
    }
    cout << "Adjon meg " << db << " egész számot." << endl;
    for ( int i=0; i<db; i++ ) {
        cout << i+1 << ". szám: ";
        cin >> tomb[i];
    }
    cout << "A korábban beolvasott értékek rendre: " << endl;
    for ( int i=0; i<db; i++ ) {
        cout << *(tomb+i) << endl;
    }
    delete[] tomb;

    return 0;
}