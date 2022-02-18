// Kérjünk be egy számot és írjuk ki az abszolút értékét (Többféle kiíratás megmutatása, pl. értékadással, anélkül, -x, -1*x)
// https://drive.google.com/file/d/1UYwQdlbjU9fP7OXVWl_2pEs5utR3vLH2/view

#include <iostream>

using namespace std;

int main() {
    cout << "Szám bekérése, majd abszolútértékének kiírása\n";
    int szam;
    cout << "Adjon meg egy számot: ";
    cin >> szam;
    if (szam < 0) {
        szam *= -1;
    }
    cout << "A megadott szám abszolútértéke: " << szam << endl;
    return 0;
}