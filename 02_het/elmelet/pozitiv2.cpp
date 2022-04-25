#include <iostream>
using namespace std;

int main() {
    int szam = -1;      // az inicializacio kikérnyszeríti a ciklusmag futását
    while (szam <= 0) {
        cout << "Adjon meg egy pozitív számot: ";
        cin >> szam;
    }
    cout << "Beolvasott érték: " << szam << endl;
    return 0;
}