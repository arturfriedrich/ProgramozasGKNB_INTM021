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
        else switch ( szam % 10 ) {
            case 1 : cout << "st" << endl; break;   
            case 2 : cout << "nd" << endl; break;   
            case 3 : cout << "rd" << endl; break;   
            default: cout << "th" << endl;
        }
    }
    return 0;
}