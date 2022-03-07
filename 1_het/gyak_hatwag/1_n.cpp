// Kérjük be N értékét, majd írjuk ki a számokat 1-től N-ig
// https://drive.google.com/file/d/12HT0StNkeOSc5aut0H3rf8RXZrAqT_-B/view

#include <iostream>

using namespace std;

int main() {
    cout << "A program kiírja a számokat 1-től a megadott N-ig." << endl;
    int i = 1, n;
    cout << "Adjon meg egy számot: ";
    cin >> n;
    while (i <= n) {
        cout << i << endl;
        i++;
    }
    return 0;
}