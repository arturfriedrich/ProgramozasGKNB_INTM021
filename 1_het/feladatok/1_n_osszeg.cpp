// Kérjük be N értékét, majd írjuk ki a számokat 1-től N-ig
// Ellenőrizzük, hogy N>1
// A végén írjuk ki a számok összegét

#include <iostream>

using namespace std;

int main() {
    cout << "A program kiírja a számokat 1-től a megadott N-ig." << endl;
    int i = 1, n, summ = 0;
    cout << "Adjon meg egy számot: ";
    cin >> n;
    if (n > 1) {
        while (i <= n) {
            cout << i << endl;
            summ += i;
            i++;
        }
    } else {
        cout << "A megadott szám nem nagyobb 1-nél" << endl;
    }
    cout << "A számok összege: " << summ << endl;
    return 0;
}