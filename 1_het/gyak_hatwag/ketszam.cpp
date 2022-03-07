// Kérjünk be két számot (int) és írjuk ki az összegüket
// Írjuk ki a szorzatukat is
// Írjuk ki a szorzat és az összeg különbségét

#include <iostream>

using namespace std;

int main() {
    cout << "Két szám beolvasása, majd összegük, szorzatuk és különbségük kiírása." << endl;
    int a, b;
    cout << "Adja meg az első számot: ";
    cin >> a;
    cout << "Adja meg a második számot: ";
    cin >> b;
    cout << "\n A két szám összege: " << a + b << endl;
    cout << "A két szám szorzata: " << a * b << endl;
    cout << "A két szám külöbsége: " << a - b << endl;
    return 0;
}