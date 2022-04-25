// Kérjünk be két számot, ha az első nagyobb, írjuk ki a különbségüket

#include <iostream>

using namespace std;

int main() {
    cout << "A program bekér két számot, ha az első nagyobb kiírja a különbségüket." << endl;
    int a, b;
    cout << "Adja meg az első számot: ";
    cin >> a;
    cout << "Adja meg a második számot: ";
    cin >> b;
    if (a > b) {
        cout << "A két szám különbsége: " << a - b << endl;
    } else {
        cout << "A második szám a nagyobb." << endl;
    }
    return 0;
}