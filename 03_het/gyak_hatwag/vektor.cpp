// Olvassuk be két 3-dimenziós vektor koordinátáit
// Írjuk ki a vektorok összegét, különbségét
#include <iostream>

#define D 3
using namespace std;

int main() {
    cout << "A program bekéri két háromdimnziós vektor koordinátáit majd kiírja összegüket és különbségüket." << endl;
    int v_1[D], v_2[D];
    int i=0, j=0, k=0, l=0, akt;
    while ( i < D ) {
        cout << "Adja meg az 1. vektor " << i+1 << ". koordinátáját: ";
        cin >> akt;
        v_1[i] = akt;
        i++;
    }
    cout << endl;
    while ( j < D ) {
        cout << "Adja meg az 2. vektor " << j+1 << ". koordinátáját: ";
        cin >> akt;
        v_2[j] = akt;
        j++;
    }
    cout << endl << "Különbség: [ ";
    while ( k < D ) {
        cout << v_1[k] - v_2[k] << " ";
        k++;
    }
    cout << "]" << endl << "Összeg: [ ";
    while ( l < D ) {
        cout << v_1[l] + v_2[l] << " ";
        l++;
    }
    cout << "] " << endl;
    return 0;

}
