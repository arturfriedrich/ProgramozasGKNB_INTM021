// Kérjünk be egy számot (int) és írjuk ki a kétszeresét
// https://drive.google.com/file/d/14fREgbIdrabdL0zlkqf_A51faiFdB6L5/view

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