// Írjon programot, amely meghatározza egy adott fájl méretét! Az eredményt jelenítse meg a képernyőn!

#include <iostream>
#include <fstream>

#define NEV "3_meret.cpp"

using namespace std;

int main() {
    ifstream f(NEV);
    if ( f.is_open() ) {
        f.seekg(0, ios_base::end);                                      // pozícionálja a mutatót a fájl végére
        streampos vege = f.tellg();                                     // lekérdezzük a pozíciónkat így tudni fogjuk mekkora a fájl
        cout << "A fájl mérete " << vege << " bájt." << endl;
        f.close();
    } else {
        cerr << "Fájl megnyitási hiba." << endl;
    }

    return 0;
}

// edit: linuxos gépen pontos, windows az fos és ezért ott nem lesz pontos <3