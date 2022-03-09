#include <iostream>
using namespace std;

int main() {
    int szam;
    cout << "Adjon meg egy pozitív számot: ";
    cin >> szam;
    while (szam <= 0) {         // ismétlés, ha hibás volt az input
        cout << "Adjon meg egy pozitív számot: ";
        cin >> szam;
    }
    cout << "Beolvasott érték: " << szam << endl;
    return 0;
}