// Írjunk egy programot, amely  egy szövegfájlból beolvassa az összes sort, és a szabvány kimeneten megjeleníti a tartalmát!

#include <iostream>
#include <fstream>

#define NEV "szoveg.txt"

using namespace std;

int main() {
    ifstream f(NEV);                                                // fájlbeolvasás
    string sor;
    if ( f.is_open() ) {
        while ( getline(f, sor) ) {                                 // az f folyamból olvas a sorba
            cout << sor << endl;
        }
        f.close();
    } else {
        cerr << "Fájl megnyitási hiba." << endl;
    }

    return 0;
}