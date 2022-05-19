// Írjon programot, ami egy bináris fájl tartalmát betölti a memóriába!

#include <iostream>
#include <fstream>

#define NEV "4_binbe.cpp"

using namespace std;

int main() {
    ifstream f(NEV, ios::binary);                                       // mivel a fájl bináris
    if ( f.is_open() ) {
        f.seekg(0, ios_base::end);                                      // pozícionálja a mutatót a fájl végére
        streampos vege = f.tellg();                                     // lekérdezzük a pozíciónkat így tudni fogjuk mekkora a fájl
        char* tomb = new char[vege];                                    // fájl méretű tömb kell
        f.seekg(0, ios_base::beg);                                      // visszamegyünk az elejére
        f.read(tomb, vege);                                             // memóriába beolvasás
        for ( char* m=tomb; m<tomb+vege; m++ ) {
            cout << *m;
        }
        cout << endl;
        delete[] tomb;
        f.close();
    } else {
        cerr << "Fájl megnyitási hiba." << endl;
    }

    return 0;
}