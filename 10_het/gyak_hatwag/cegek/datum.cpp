#include "datum.h"          // az idézőjel azt jelzi az előfeldolgozónak, hogy ezt mi készítettük

void beolvas(datum* d) {
    cout << "Év: "; cin >> d -> ev; 
    cout << "Hónap: "; cin >> d -> ho;
    cout << "Nap: "; cin >> d -> nap;
}

void kiir(datum* d) {
    cout << d -> ev << "." << d -> ho << "." << d -> nap;
}

int hasonlit(const datum* d1, const datum* d2) {
    if ( d1 -> ev != d2 -> ev ) {
        return d1 -> ev - d2 -> ev;
    } else {
        if ( d1 -> ho != d2 -> ho ) {
            return d1 -> ho - d2 -> ho;
        } else {
            return d1 -> nap - d2 -> nap;
        }
    }
}