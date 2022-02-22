// Kérjünk be számokat, míg egymás után kétszer ugyanazt a számot nem kapjuk
// A végén írjuk ki, hogy hány számot olvastunk be
// És hány páros számot olvastunk be?

#include <iostream>
using namespace std;

int main() {
    cout << "A program addig kér be számokat, amíg kétszer ugyan azt a számot nem kapja." << endl;
    int a, b, even = 0, count = 0;
    do {
        b = a;
        cout << "Adjon meg egy számot: ";
        cin >> a;
        count++;
        if ( a % 2 == 0) {
            even++;
        }
    } while (a != b);
    cout << count << " darab páros szám beolvasva, ebből " << even << " darab páros." << endl;
    return 0;
}