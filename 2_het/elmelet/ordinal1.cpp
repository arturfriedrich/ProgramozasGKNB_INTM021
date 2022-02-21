#include <iostream>
using namespace std;

int main() {
    cout << "Szám: ";
    int szam;
    cin >> szam;
    if ( szam == 0 ) cout << '0';
    else {
        cout << szam;
        if ( szam > 10 and szam < 21 ) cout << "th" << endl;
        else if ( szam % 10 == 1 ) cout << "st" << endl;
        else if ( szam % 10 == 2 ) cout << "nd" << endl;
        else if ( szam % 10 == 3 ) cout << "rd" << endl;
        else cout << "th" << endl;
    }
    return 0;
}