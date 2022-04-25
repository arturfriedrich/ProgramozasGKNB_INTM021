// Készítsen programot, amely bekéri a standard bemenetről hallgatók vezetéknevét, keresztnevét, neptun kódját, egy tantárgy nevét és a tárgyból írt 4 db ZH eredményeit!
// Az adatok bekérését végezze el egy erre a célra tervezett függvény, amely több értéket képes vissza adni!
// Az átlag számítását szintén egy függvény segítségével végezze el, ahol paraméterként az előző pontban meghatározott függvény visszatérési értékei szolgáljanak!

#include <iostream>
#include <sstream>

#define ZH_SZAM 4

using namespace std;

typedef struct hallgato {
    string vnev;
    string knev;
    string neptun;
    string targy;
    int zh_pontok[ZH_SZAM];

} Hallgato;

Hallgato input(){
    Hallgato ujHallgato;

    cout << "Hallgató vezetékneve: ";
    cin >> ujHallgato.vnev;
    cout << "Hallgató keresztneve: ";
    cin >> ujHallgato.knev;
    cout << "Hallgató NEPTUN kódja: ";
    cin >> ujHallgato.neptun;
    cout << "A tárgy neve: ";
    cin >> ujHallgato.targy;
    for ( int i=0; i<ZH_SZAM; i++ ) {
        cout << "Adja meg a(z) " << i+1 << " ZH eredményét: ";
        cin >> ujHallgato.zh_pontok[i];
    }
    return ujHallgato;
}

double atlag(Hallgato ujHallgato) {
    double szum = 0.0;
    for ( int i=0; i<ZH_SZAM; i++ ) {
        szum += ujHallgato.zh_pontok[i];
    }
    return (szum / ZH_SZAM);
}

int main() {
    Hallgato ujHallgato;
    cout << "Hallgatói adatok beolvasása, ZH átlagok kiszámolása" << endl;
    ujHallgato = input();
    cout << "A hallgató átlaga a(z) " << ujHallgato.targy << " tárgyból: " << atlag(ujHallgato) << endl;

    return 0;
}