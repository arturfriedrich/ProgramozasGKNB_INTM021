// Menü program, szám megadásával adható ki a parancs (érvénytelen számra kilép)
//     1. Összeadás (bekér két számot és kiírja az összeget)
//     2. Szorzás
//     3. Hatványozás
//     4. Számtani sorozat a0 és d alapján n elem (önálló feladat, a három paramétert be kell kérni)

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout << "A felhasználó által kiválasztott műveletet végzi el a program." << endl;
    cout << "1. Összeadás" << endl;
    cout << "2. Szorzás" << endl;
    cout << "3. Hatványozás" << endl;
    cout << "4. Számtani sorozat" << endl;
    int muvelet;
    cout << "A művelet sorszámának megadásával válasszon az alábbi műveletek közül: ";
    cin >> muvelet;
    int a, b;
    if ( muvelet == 1 ) {
        cout << "Adja meg az első számot: ";
        cin >> a;
        cout << "Adja meg a második számot: ";
        cin >> b;
        cout << "A két szám összege: " << a + b << endl;
    } else if ( muvelet == 2 ) {
        cout << "Adja meg az első számot: ";
        cin >> a;
        cout << "Adja meg a második számot: ";
        cin >> b;
        cout << "A két szám szorzata: " << a * b << endl;
    } else if ( muvelet == 3 ) {
        cout << "Adja meg az alapot: ";
        cin >> a;
        cout << "Adja meg a hatványkitevőt: ";
        cin >> b;
        cout << "Az eredmény: " << pow(a, b) << endl;
    } else if ( muvelet == 4 ) {
        int a, d, n;
        cout << "Adja meg a számtani sorozat első elemét: ";
        cin >> a;
        cout << "Adja meg a differenciát: ";
        cin >> d;
        cout << "Adja meg, hogy a sorozat hányadik elemét kívánja visszakapni: ";
        cin >> n;
        cout << "A sorozat " << n << ". eleme: " << a + ( n - 1 ) * d << endl;
    } else {
        cout << "Érvénytelen szám, kilép." << endl;
    }
    return 0;
}