// Nézzük meg, páratlan szám esetén mi lesz a 2-vel való osztás eredménye
// https://drive.google.com/file/d/1UYwQdlbjU9fP7OXVWl_2pEs5utR3vLH2/view

#include <iostream>

using namespace std;

int main() {
    cout << "Mi történik, ha int típusú páratlan számot osztunk kettővel?" << endl;
    int szam;
    cout << "Adjon meg egy páratlan számot: ";
    cin >> szam;
    cout << "A szám fele: " << szam / 2 << endl;
    return 0; 
}