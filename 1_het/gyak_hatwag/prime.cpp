// Kérjünk be egy számot, és mondjuk meg róla, hogy prímszám-e

#include <iostream>

using namespace std;

int main() {
    cout << "A program bekér egy számot és eldönti, hogy prímszám-e." << endl;
    int i = 2, n;
    bool run = true;
    cout << "Adjon meg egy számot: ";
    cin >> n;
    if (n <= 1) {
        cout << "A szám nem prím." << endl;
    }
    while ((i < n) and run) {
        if (n % i == 0) {
            cout << "A szám nem prím." << endl;
            run = false;
        } else {
            cout << "A szám prím." << endl;
            run = false;
        }
        i++;
    }
    return 0;
}