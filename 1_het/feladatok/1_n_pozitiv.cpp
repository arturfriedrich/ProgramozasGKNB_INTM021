// Kérjük be N értékét, majd írjuk ki a számokat 1-től N-ig
// Ellenőrizzük, hogy N>1

#include <iostream>

using namespace std;

int main() {
    cout << "A program kiírja a számokat 1-től a megadott N-ig." << endl;
    int i = 1, n;
    cout << "Adjon meg egy számot: ";
    cin >> n;
    if (n > 1) {
        while (i <= n) {
            cout << i << endl;
            i++;
        }
    } else {
        cout << "A megadott szám nem nagyobb 1-nél" << endl;
    }
    return 0;
}