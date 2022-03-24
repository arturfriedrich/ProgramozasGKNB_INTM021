// Olvasson be egy hételemű tömböt!
// Írassa ki a képernyőre azon szomszédos elemeket, amelyekre igaz, hogy az első nagyobb a másodiknál!

#include <iostream>

#define N 7

using namespace std;

int hasonlit(int a, int b) {
    if ( a > b ) {
        return 1;
    } else if ( a < b ) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    cout << "A program bekér egy " << N << " elemű tömböt, majd visszaadja azokat az elemeket melyek nagyobbak az előttük levőnél." << endl;
    char szamok[N];
    for ( int i=0; i<N; i++ ) {
        cout << "Adja meg a " << i+1 << ". számot: ";
        cin >> szamok[i];
    }
    for ( int j=0; j<N; j++) {
        if ( hasonlit(szamok[j], szamok[j+1]) == 1 and j != N-1 ) {
            cout << szamok[j] << " " << szamok[j+1] << endl;
        }
    }
    return 0;
}