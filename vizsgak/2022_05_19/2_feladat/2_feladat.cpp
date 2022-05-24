#include <iostream>
#include <climits>

#define DB 10

using namespace std;

int beker(int be_tb[], int *min, int *max) {
    int szum = 0;
    do {                                                                                            // első elem ellenőrzése
        cout << "1. szám: ";
        cin >> be_tb[0];
    } while ( be_tb[0] != 0 );
    for ( int i=1; i<DB; i++ ) {
        if ( i%2 == 0 ) {
            do {                                                                                    // csak akkor fogadja el ha páros
                cout << i+1 << ". szám: ";
                cin >> be_tb[i];
            } while ( be_tb[i]%2 != 0 );
        } else {
            do {                                                                                    // csak akkor fogadja el ha páratlan
                cout << i+1 << ". szám: ";
                cin >> be_tb[i];
            } while ( be_tb[i]%2 == 0 );
        }
        szum += be_tb[i];
        if ( be_tb[i] > *max && be_tb[i] % 2 == 0 ) *max = be_tb[i];                                // minimum és maximum meghatározása
        if ( be_tb[i] < *min && be_tb[i] % 2 != 0 ) *min = be_tb[i];
    }
    return szum;
}

void kiir(int szum, int min, int max) {
    cout << "Szum: " << szum << endl << "Prtln min: " << min << endl << "Prs max: " << max << endl;
}

int main() {
    cout << "A program bekér " << DB << " számot egy tömbbe." << endl;
    int tb[DB];

    int max = 0;
    int min = INT_MAX;
    kiir(beker(tb, &min, &max), min, max);
    
    return 0;
}