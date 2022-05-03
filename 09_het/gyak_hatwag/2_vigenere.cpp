// A Vigenére-rejtjel egy olyan titkosítási módszer, amely egy kódszó betűi alapján tolja el az egyes karaktereket az ábécében (a Caesar-kód továbbfejlesztése).
// Pl. ha a kódszó CODE, akkor minden k*4+1-edik betűt a C betű ábécé-indexével tol el (2), minden k*4+2-ik betűt az O indexével, stb.
// A kézi kódoláshoz a tabula recta nevű táblázatot használták, ahol minden oszlopban az abc szerepel egyre nagyobb eltolással, így a kódolandó betű sorában a kódszó jelenlegi betűjéhez tartozó oszlopában található a kódolt betű.
// A feladat egy olyan program megírása, ami bekér egy kódszót, majd megjeleníti a kódszó betűihez tartozó oszlopokat.
// A táblázatot egy dinamikusan lefoglalt mátrixban tárolja el!
// Szabadítsa fel a lefoglalt memóriaterületet!
// Feladat folytatása: A táblázat megjelenítése után üres sorig kérjen be sorokat, és írja ki a kódolt szöveget a táblázat alapján!
// A program ne tegyen különbséget a kis- és nagybetűk között és hagyja figyelmen kívül a fehér karaktereket!

#include <iostream>

using namespace std;

#define BETUK ('Z' - 'A' + 1)

int main() {
    cout << "Vigenére-rejtjelező program. Adja meg a kulcsot: ";
    string kulcs;
    cin >> kulcs;

    char* tabla[BETUK];
    for ( int i=0; i<BETUK; i++ ) {
        tabla[i] = new char[kulcs.length()];
        if ( tabla[i] == NULL ) {
            cerr << "Memóriafoglalási hiba!" << endl;
            return 1;
        }
    }

    for ( int oszlop=0; oszlop<kulcs.length(); oszlop++ ) {
        kulcs[oszlop] = toupper(kulcs[oszlop]);
        int eltolas = abs(kulcs[oszlop] - 'A');
        for ( int sor=0; sor<BETUK; sor++ ) {
            tabla[sor][oszlop] = 'A' + eltolas % BETUK;
            eltolas++;
        }
    }

    cout << "  | " << kulcs << endl;
    for ( int sor=0; sor<BETUK; sor++ ) {
        cout << char('A' + sor ) << " | ";
        for ( int oszlop=0; oszlop<kulcs.length(); oszlop++ ) {
            cout << tabla[sor][oszlop];
        }
        cout << endl;
    }

    string szoveg;
    cin.ignore();       // bevitel pufferének törlése
    while ( cout << "Adja meg a nyílt szöveget: ", 
            getline(cin, szoveg),
            szoveg.length() > 0 ) {
        for ( int i=0; i<szoveg.length(); i++ ) {
            if ( isalpha(szoveg[i]) ) {
                cout << tabla[toupper(szoveg[i]) - 'A'][i % kulcs.length()];
            } else {
                cout << szoveg[i];
            }
        }
        cout << endl;
    }

    for ( int i=0; i<BETUK; i++ ) {
        delete[] tabla[i];
    }

    return 0;
}