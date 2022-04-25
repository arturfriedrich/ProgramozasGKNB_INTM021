// Készítsen programot, amely személyek születési évét, hónapját, napját képes tárolni, valamint a személy lakhelyének fővárostól való távolságát km-ben (float)!
// Olvassa be 5 személy adatait a standard bemenetről!
// Rendezze a tömböt a fővárostól való távolságok szerinti csökkenő sorrendbe, majd jelenítse meg az elemeit!
// Rendezze a tömböt a személyek kora szerinti növekvő sorrendbe, majd jelenítse meg az elemeit!

#include <iostream>

using namespace std;

struct szemely {
    struct {
        int ev;
        int honap;
        int nap;
    } szuletes;
    float tavolsag;
};

int sz2szam(szemely sz) {
    return sz.szuletes.ev*1000 + sz.szuletes.honap*100 + sz.szuletes.nap;
}

#define DB 5

int main() {
    cout << "Személyek kezelése." << endl;
    szemely szemelyek[DB];
    for ( int i=0; i<DB; i++ ) {
        cout << i+1 << ". személy születési éve: ";
        cin >> szemelyek[i].szuletes.ev;
        cout << "Születés hónapja: ";
        cin >> szemelyek[i].szuletes.honap;
        cout << "Születés napja: ";
        cin >> szemelyek[i].szuletes.nap;
        cout << "Távolság a fővárostól: ";
        cin >> szemelyek[i].tavolsag;
    }

    for ( int i=0; i<DB-1; i++ ) {
        int k=i;
        for ( int j=i+1; j<DB; j++ ) {
            if ( szemelyek[k].tavolsag < szemelyek[j].tavolsag ) {
                k = j;
            }
        }
        if ( k!=i ) {
            szemely csere = szemelyek[i];
            szemelyek[i] = szemelyek[k];
            szemelyek[k] = csere;
        }
    }

    cout << "Távolság szerint csökkenően rendezett személyek: " << endl;
    for ( int i=0; i<DB; i++ ) {
        cout << szemelyek[i].szuletes.ev << "." 
             << szemelyek[i].szuletes.honap << "."
             << szemelyek[i].szuletes.nap << "\t"
             << szemelyek[i].tavolsag << endl;
    }

    for ( int i=0; i<DB-1; i++ ) {
        int k=i;
        for ( int j=i+1; j<DB; j++ ) {
            if ( sz2szam(szemelyek[k]) < sz2szam(szemelyek[j]) ) {
                k = j;
            }
        }
        if ( k!=i ) {
            szemely csere = szemelyek[i];
            szemelyek[i] = szemelyek[k];
            szemelyek[k] = csere;
        }
    }

    cout << "Születés szerint csökkenően rendezett személyek: " << endl;
    for ( int i=0; i<DB; i++ ) {
        cout << szemelyek[i].szuletes.ev << "." 
             << szemelyek[i].szuletes.honap << "."
             << szemelyek[i].szuletes.nap << "\t"
             << szemelyek[i].tavolsag << endl;
    }
    return 0;
}