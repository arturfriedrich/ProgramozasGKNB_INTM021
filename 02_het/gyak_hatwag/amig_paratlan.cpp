// Kérjünk be számokat, amíg páratlan számot nem kapunk, és a párosoknak mindig írjuk ki a felét
// https://drive.google.com/file/d/1EondN-QWv-NDSpzAR8I6dmq3P9fqWJXI/view

#include <iostream>
using namespace std;

int main() {
    cout << "A program addig kér be számokat amíg páratlant nem kap, a párosaknak kiírja a felét." << endl;
    int szam;
    cout << "Adjon meg egy számot: ";
    cin >> szam;
    while ( szam % 2 == 0) {
        cout << szam / 2 << endl;
        cout << "Adjon meg egy számot: ";
        cin >> szam;
    }
    return 0;
}