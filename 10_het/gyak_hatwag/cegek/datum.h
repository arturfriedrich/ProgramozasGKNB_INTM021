#ifndef DATUM       // if not defined = ha nincs definiálva
#define DATUM       // akkor ezt hajtja végre

#include <iostream>
using namespace std;

struct datum {
    int ev;
    char ho;
    char nap;
};

void beolvas(datum*);                // prototípus, ez csak leírja a fordító számára, hogy létezni fog ilyen függvény
int hasonlit(const datum*, const datum*);
void kiir(const datum*);            // mivel ez csak kiír, még véletlenül se változtassa meg

#endif