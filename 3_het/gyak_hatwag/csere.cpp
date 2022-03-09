// Olvassunk be 10 számot egy tömbbe
// Kérjünk be két sorszámot, és cseréljük fel a megfelelő sorszámú elemeket, majd írjuk ki a tömböt
// Addig ismételjük, amíg érvénytelen sorszámot nem kapunk (<1 vagy >10)

#include <iostream>

#define N 10
using namespace std;

int main() {
    cout << "A program beolvas 10 számot, majd bekér két sorszámot és kicseréli a megfelelő elemeket." << endl;
    int i=0, szum=0, szam;
    int szamok[N];
    while ( i < N ) {
        cout << "Adja meg a " << i+1 << ". számot: ";
        cin >> szamok[i];
        i++;
    }
    int cs_1=0, cs_2=0;
    do {
        cout << "Adja meg az első sorszámot ( 1-10 ): ";
        cin >> cs_1;
    } while ( 10 < cs_1 || 1 > cs_1 );
    do {
        cout << "Adja meg az második sorszámot ( 1-10 ): ";
        cin >> cs_2;
    } while ( 10 < cs_2 || 1 > cs_2 );
    i = 0;
    int csere_1, csere_2, csere;
    while ( i < N ) {
        if ( i == cs_1-1 ) {
            csere_1 = szamok[i];
        } else if ( i == cs_2-1 ) {
            csere_2 = szamok[i];
        }
        i++;
    }
    i = 0;
    while ( i < N ) {
        if ( szamok[i] == csere_1 ) {
            szamok[i] = csere_2;
        } else if ( szamok[i] == csere_2 ) {
            szamok[i] = csere_1;
        }
        i++;
    }
    i = 0;
    cout << "A módosított tömb: ";
    while ( i < N ) {
        cout << szamok[i] << " ";
        i++;
    }
    cout << endl;
    return 0;
}