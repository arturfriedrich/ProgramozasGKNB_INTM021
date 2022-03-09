#include <iostream>
using namespace std;

int main() {
    int szam;
    cout << "Adjon meg egy pozitív számot: ";
    cin >> szam;
    do { 
        cout << "Adjon meg egy pozitív számot: ";
        cin >> szam;
    } while (szam <= 0);
    cout << "Beolvasott érték: " << szam << endl;
    return 0;
}