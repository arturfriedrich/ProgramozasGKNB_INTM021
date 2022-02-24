// Kérjük be N értékét, majd írjuk ki a faktoriálisát

#include <iostream>

using namespace std;

int main() {
    cout << "A program megadja a bekért szám faktoriálisát." << endl;
    int n, f = 1, i = 1;
    cout << "Adjon meg egy számot: ";
    cin >> n;
    while (i <= n) {
        f *= i;
        i++;
    }
    cout << n << " faktoriálisa: " << f << endl;
    return 0;
}