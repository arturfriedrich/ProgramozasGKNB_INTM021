#include <iostream>
#include "szemely.h"

using namespace std;

#define N 4

void beolvas(szemely* sz) {
    for ( int i=0; i<N; i++ ) {
        cout << "Adja meg a(z) " << i+1 << " személy nevét: ";
        cin >> ws;
        getline(cin, sz -> nev);
    }
}

int main() {
    szemely szemelyek[N];
    beolvas(szemelyek);
}