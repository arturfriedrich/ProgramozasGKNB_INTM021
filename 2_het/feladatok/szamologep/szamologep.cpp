// Menü program, szám megadásával adható ki a parancs (érvénytelen számra kilép)
//     1. Összeadás (bekér két számot és kiírja az összeget)
//     2. Szorzás
//     3. Hatványozás
//     4. Számtani sorozat a0 és d alapján n elem (önálló feladat, a három paramétert be kell kérni)

#include <iostream>
using namespace std;

int main() {
    cout << "A felhasználó által kiválasztott műveletet végzi el a program." << endl;
    cout << "1. Összeadás" << endl;
    cout << "2. Szorzás" << endl;
    cout << "3. Hatványozás" << endl;
    cout << "4. Számtani sorozat" << endl;
    int muvelet;
    cout << "A művelet sorszámának megadásával válasszon az alábbi műveletek közül :" << endl;
    cin >> muvelet;
    switch () {
        case muvelet == 1 : cout << "Összeadás" << endl;
    }
}

if ( szam > 10 and szam < 21 ) cout << "th" << endl;
        else switch ( szam % 10 ) {
            case 1 : cout << "st" << endl; break;   
            case 2 : cout << "nd" << endl; break;   
            case 3 : cout << "rd" << endl; break;   
            default: cout << "th" << endl;
        }