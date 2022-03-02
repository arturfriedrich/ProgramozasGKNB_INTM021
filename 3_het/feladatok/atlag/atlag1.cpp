// Olvassunk be 10 számot, majd írjuk ki az átlagukat (ehhez még nem kell tömb)

#include <iostream>

#define n 10

using namespace std;


int main() {
    cout << "A program beolvas 10 számot, majd kiírja az átlagukat." << endl;
    int i, szam, szum;
    while ( i < n ) {
        cout << "Adja meg a " << i+1 << ". számot: ";
        cin >> szam;
        szum += szam;
        i++;
    }
    cout << "A megadott számok átlaga: " << szum/n << endl;
    return 0;
}