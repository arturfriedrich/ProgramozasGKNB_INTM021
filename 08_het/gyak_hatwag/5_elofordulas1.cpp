// Olvasson be egész számokat, amíg 0-t nem kap, majd mondja meg, melyik érték hányszor szerepelt a bemeneten!
// Első szint: Az értékek egy ismert, kis intervallumba eshetnek.

#include <iostream>

using namespace std;

#define MIN 1
#define MAX 3

int main() {
    int db[MAX-MIN+1] = {0};
    int szam;
    cout << "Adjon meg számot a(z) [" << MIN << ", " << MAX << "] intervallumban 0 végjelig." << endl;
    while ( cout << "Következő szám: ", cin >> szam, szam  != 0 ) {
        if ( szam >= MIN and szam <= MAX ) {
            db[szam-MIN]++;
        } else {
            cout << "Intervallumon kívüli érték!" << endl;
        }
    }

    cout << "A meagott számok mennyisége: " << endl;
    for ( int i=0; i<MAX-MIN+1; i++ ) {
        cout << i+MIN << " mennyisége: " << db[i] << endl;
    } 

    return 0;
}