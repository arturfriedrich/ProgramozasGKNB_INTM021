// Olvassunk be 10 számot, majd írjuk ki az átlagukat (ehhez még nem kell tömb)
// Írjuk ki az átlag alatti értékeket (itt már muszáj tömbbe eltárolni a számokat)

#include <iostream>

#define N 10

using namespace std;

int main() {
    cout << "A program beolvas 10 számot, majd kiírja az átlagukat." << endl;
    int i=0, szum=0, szam, atlag;
    int szamok[N];
    while ( i < N ) {
        cout << "Adja meg a " << i+1 << ". számot: ";
        cin >> szam;
        szamok[i] = szam;
        szum += szam;
        i++;
    }
    atlag = szum/N;
    cout << "A megadott számok átlaga: " << atlag << endl;
    i = 0;
    cout << "Az átlag alatti számok: ";
    while ( i < N ) {
        if ( szamok[i] < atlag ) {
            cout << szamok[i] << " ";
        }
        i++;
    }
    cout << endl;
    return 0;
}