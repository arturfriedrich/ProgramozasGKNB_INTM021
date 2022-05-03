// Kérje be a sorok számát!
// Hozzon létre dinamikusan egy háromszög-mátrixot a tároláshoz (az első sor 1 hosszú, majd egyesével növekszik)!
// Számolja ki az egyes elemeket: minden sor szélein 1, a köztes elemek a fölötte lévő két elem összegei!
// Jelenítse meg a háromszög-mátrixot (a sorokat nem kell középre igazítani)!
// Szabadítsa fel a használt memóriaterületet!

#include <iostream>

using namespace std;

int main() {
    cout << "Pascal-háromszög számító program. Adja meg a sorok számát: ";
    int n;
    cin >> n;
    int** pascal = new int*[n];
    for ( int sor=0; sor<n; sor++ ) {
        pascal[sor] = new int[sor+1];
    }

    for ( int sor=0; sor<n; sor++ ) {
        pascal[sor][0] = pascal[sor][sor] = 1;
        for ( int oszlop=1; oszlop<sor; oszlop++ ) {
            pascal[sor][oszlop] = pascal[sor-1][oszlop-1] + pascal[sor-1][oszlop];
        }
    }

    for ( int sor=0; sor<n; sor++ ) {
        for ( int oszlop=0; oszlop<sor; oszlop++ ) {
            cout << pascal[sor][oszlop] << '\t';
        }
        cout << endl;
    }

    for ( int sor=0; sor<n; sor++ ) {
        delete pascal[sor];
    }
    delete[] pascal;

    return 0;
}