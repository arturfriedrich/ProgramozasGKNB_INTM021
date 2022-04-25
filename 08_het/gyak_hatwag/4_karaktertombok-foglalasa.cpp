// Olvasson be egy legfeljebb 100 karakter hosszú szöveget!
// Hozzon létre egy a szöveg hosszának megfelelő méretű tömböt!
// Másolja át a szöveget a számára létrehozott tömbbe!
// Írassa ki a szöveget!
// Szabadítsa fel a lefoglalt memóriaterületet!

#include <iostream>
#include <cstring>

using namespace std;
#define MAX 100


// az alap programban több hiba is van:
//  - nem kontrollálja semmi a felhasználót, hogy száznál több karaktert adjon meg
//  - ha szóközt írunk akkor a beolvasás nem törénik meg helyesen
int main() {
    // char cstr[MAX+1];
    string s;
    char *pcstr;
    cout << "Adjon meg egy karakterláncot: " << endl;
    // cin >> cstr;
    cin >> s;
    // pcstr = new char[strlen(cstr)+1];
    pcstr = new char[s.length()+1];
    if ( pcstr == NULL ) {
        cerr << "Memóriafoglalási hiba." << endl;
        return -1;
    }
    // strcpy(pcstr, cstr);
    strcpy(pcstr, s.c_str());
    cout << "A beolvasott, átmásolt karakterlánc: ";
    cout << pcstr << endl;
    delete[] pcstr;

    return 0;
}