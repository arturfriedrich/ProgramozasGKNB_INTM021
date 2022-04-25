// Olvassunk be 5 számot egy tömbbe
// Kérjünk be további számokat, és ennyivel shifteljük jobbra az elemeket, majd írjuk ki a tömböt
// Negatív szám esetén balra shifteljen, és 5-nél nagyobbra is működjön
// Addig ismételjük, amíg nem 0-t kapunk

#include <iostream>

#define N 5
using namespace std;

int main() {
    cout << "A program bekér " << N << " számot, majd további számokat amikkel jobbra, illetve balra shifteljük az elemeket." << endl;
    int szamok[N];
    int i, j;
    i = j = 0;
    while ( i < N ) {
        cout << "Adja meg a(z) " << i+1 << ". számot: ";
        cin >> szamok[i];
        i++;
    }
    int shift;
    do {
        cout << "Adja meg mennyivel shifteljünk: ";
        cin >> shift;
        if ( !shift ) {
            break;
        }
        do {
            int k = 0;
            while ( k < N ) {
                szamok[k] = szamok[k]+shift;
                k++;
            }
        } while ( !shift );
        j = 0;
        while ( j < N ) {
            cout << szamok[j] << " ";
            j++;
        }
        cout << endl;
    } while ( shift );
    cout << endl;
    return 0;
}