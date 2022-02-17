// Kérjünk be egy számot (int) és írjuk ki a kétszeresét
#include <iostream>

using namespace std;

int main() {
    cout << "Szám beolvasása, kétszeresének kiírása." << endl;
    int szam;
    cout << "Adjon meg egy számot: ";
    cin >> szam;
    cout << "A szám kétszerese: " << szam * 2 << endl;
    return 0;
}