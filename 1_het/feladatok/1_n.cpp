// Kérjük be N értékét, majd írjuk ki a számokat 1-től N-ig

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