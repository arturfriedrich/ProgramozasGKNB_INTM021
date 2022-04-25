// Olvasson be egész számokat, amíg 0-t nem kap, majd mondja meg, melyik érték hányszor szerepelt a bemeneten!
// Második szint: Nem ismert az értékek intervalluma, de csak 100-féle érték fordulhat elő.

#include <iostream>

using namespace std;

#define MAX 100

struct szamlalo {
    int szam;
    int db;
};

int main() {
    szamlalo szamlalok[MAX];
    int kulonbozo = 0;
    int szam;
    cout << "Adjon meg számokat a 0 végjelig." << endl;
    while ( cout << "Következő szám: ", cin >> szam, szam  != 0 ) {
        int i;
        for ( i=0; i<kulonbozo and i<MAX and szam!=szamlalok[i].szam; i++ );
        if ( i==MAX ) {
            cerr << "Túl sok különböző érték!" << endl;
        } else if ( i==kulonbozo ) {
            szamlalok[kulonbozo].szam = szam;
            szamlalok[kulonbozo].db = 1;
            kulonbozo++;
        } else {
            szamlalok[i].db++;
        }
    }

    cout << "A meagott számok mennyisége: " << endl;
    for ( int i=0; i<kulonbozo; i++ ) {
        cout << szamlalok[i].szam << " mennyisége: " << szamlalok[i].db << endl;
    } 

    return 0;
}