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
    int cs_1, cs_2;
    cout << "Adja meg a "
    return 0;
}