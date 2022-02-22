// Kérjünk be számokat, míg egymás után kétszer ugyanazt a számot nem kapjuk

#include <iostream>
using namespace std;

int main() {
    cout << "A program addig kér be számokat, amíg kétszer ugyan azt a számot nem kapja." << endl;
    int a, b;
    do {
        b = a;
        cout << "Adjon meg egy számot: ";
        cin >> a;
    } while (a != b);
    cout << "Program vége." << endl;
    return 0;
}