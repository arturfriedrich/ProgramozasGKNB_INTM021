// Írjunk egy programot ami létrehoz egy elsofajl nevű txt fájlt, és beleírja a következő szöveget:
// - Ezt a fajlt c++ nyelven irt programmal hoztam létre!
// - Juppi! 
// - Hello Világ!

#include <iostream>
#include <fstream>                          // ez kell a fajlkezeleshez, mivel a c folyamokat használ, ez a fájlfolyam

#define NEV "elsofajl.txt"

using namespace std;

int main() {
    ofstream f(NEV);                        // létrehoztunk egy üres fájlt, a megadott névvel
    if ( f.is_open() ) {                    // sikerült-e létrehozni a fájlt
        f << "Ezt a fajlt c++ nyelven irt programmal hoztam létre!" << endl;
        f << "Juppi!" << endl;
        f << "Hello Világ!" << endl;        // ezzel a paranccsal lehet kiírni a fájlba
        f.close();                          // fontos, hogy bezárjuk a fájlokat
    }

    return 0;
}