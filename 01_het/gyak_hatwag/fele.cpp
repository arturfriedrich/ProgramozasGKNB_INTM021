// Ha a szám páros, írjuk ki a felét
// https://drive.google.com/file/d/1UYwQdlbjU9fP7OXVWl_2pEs5utR3vLH2/view

#include <iostream>

using namespace std;

int main() {
    cout << "Ha páros a megadott szám, a program kiírja annak a felét." << endl;;
    int szam;
    cout << "Adjon meg egy számot: ";
    cin >> szam;
    if (szam % 2 == 0) {
        cout << "A szám fele: " << szam / 2 << endl;
    } else {
        cout << "A szám nem páros." << endl;
    }
    return 0;
}