// Olvassunk be 10 számot egy tömbbe
// Kérjünk be további számokat, és mondjuk meg, hányszor szerepeltek a 10 elemű tömbben
// Ha egyszer sem szerepelt, álljon le a program

#include <iostream>

#define N 10
using namespace std;

int main() {
    cout << "A program beolvas 10 számot, majd bekér további számokat és kiírja hányszor szerepelt a 10 szám között a megadott szám." << endl;
    int szamok[N], i=0;
    while ( i < N ) {
        cout << "Adja meg a " << i+1 << ". számot: ";
        cin >> szamok[i];
        i++;
    }
    int elofordulasok, szam;
    do {
        elofordulasok = 0;
        cout << "Adja meg a számot, amelynek az előfordulását szeretné számolni: ";
        cin >> szam;
        i = 0;
        while ( i < N ) {
            if ( szamok[i] == szam ) elofordulasok++;
            i++;
        }
        cout << "A " << szam << " érték előfordulásainak száma: " << elofordulasok << endl; 
    } while ( elofordulasok > 0 );
    return 0;
}