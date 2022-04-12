// Olvasson be egy hatelemű tömböt, amely egész számokat tárol és töltse fel értékekkel!
// Hozzon létre egy 10 elemű tömböt, amely mutatókat tárol!
// Olvasson be tíz számot a képernyőről! Ha a szám szerepel a hatelemű tömbben, tárolja el annak a címét, ellenkező esetben tároljon el egy nullaértékű címet!
// Jelenítse meg a 10 elemű tömb által mutatott értékeket és hozzájuk tartozó memóriacímeket!

#include <iostream>

#define SZAMOK_DB 6
#define MUTATOK_DB 10

using namespace std;

int main() {
    int szamok[SZAMOK_DB];
    cout << "Adjon meg 6 darab egész számot: ";
    for ( int i=0; i<SZAMOK_DB; i++ ) {
        cin >> szamok[i];
    }

    int szam;
    int* mutatok[MUTATOK_DB];
    cout << "Adjon meg 10 darab számot, amik vagy előfordulnak az előbb megadottak között, vagy nem: ";
    for ( int j=0; j<MUTATOK_DB; j++ ) {
        cin >> szam;
        int i;
        for ( i=0; i<SZAMOK_DB and szamok[i] != szam; i++ ) {
            if ( i==SZAMOK_DB ) {
                mutatok[j] = NULL;
            } else {
                // mutatok[j] = &szamok[i];
                mutatok[j] = szamok+i;
            }
        }
    }

    cout << "A mutatók értéke és az ott található értékek: " << endl;
    for ( int j=0; j<MUTATOK_DB; j++ ) {
        cout << "A mutatók tömb " << j << " indexű elemének tartalma: " << mutatok[j];
            if ( mutatok[j] != NULL ) {
                cout << ", ezen a címen tárolt érték: " << *mutatok[j] << endl;
            }
            cout << endl;
    }

    return 0;
}