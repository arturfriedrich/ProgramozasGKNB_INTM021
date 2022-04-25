#include <iostream>

using namespace std;

int main() {
    int szam;
    cout << "Adjon meg egy egészet, amiről eldöntjük, "
        << "hogy páros−e vagy páratlan!" << endl ;
    cin >> szam;
    if (szam % 2 == 0) {
        cout << "A szám páros." << endl;
    } else {
        cout << "A szám páratlan." << endl;
    }
    return 0;
}