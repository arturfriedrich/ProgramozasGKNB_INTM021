// Hozzon létre egy egész számot tároló változót és hozzá egy mutatót!
// Olvassa be a szám értékét a mutatón keresztül!
// Írassa ki a képernyőre a szám értékét és memóriacímét az első változó segítségével!
// Írassa ki a képernyőre a szám értékét és memóriacímét a mutató változó segítségével!
// Írassa ki a képernyőre a mutató címét!

#include <iostream>

using namespace std;

int main() {
    int egesz, *megesz = &egesz;   // az egész nevű változó címére mutat
    cin >> egesz;
    cout << "A beolvasott érték: " << egesz << ", aminek memóriacíme: " << &egesz << endl;
    cout << "A beolvasott érték: " << *megesz << ", aminek memóriacíme: " << megesz << endl;
    cout << "A mutató címe: " << &megesz << endl;

    return 0;
}