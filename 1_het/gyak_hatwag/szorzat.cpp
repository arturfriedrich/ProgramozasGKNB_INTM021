// Ha mindkét szám kisebb, mint 10, akkor írjuk ki a szorzatukat is

#include <iostream>

using namespace std;

int main() {
    cout << "A program kiírja két szám szorzatát, ha mindkettő kisebb mint 10." << endl;
    int a, b;
    cout << "Adja meg az első számot: ";
    cin >> a;
    cout << "Adja meg a második számot: ";
    cin >> b;
    if (a < 10 and b < 10) {
        cout << "A két szám szorzata: " << a * b << endl;
    } else if (a > 10 or b > 10) {
        cout << "A két szám közül az egyik nagyobb mint 10. " << endl;
    }
    return 0;
}