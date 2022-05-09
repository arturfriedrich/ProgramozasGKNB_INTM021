#ifndef TELEPHELY
#define TELEPHELY

#include "datum.h"
#include <iostream>
using namespace std;

struct telep {
    string helyseg;
    datum alapitas;
    int bevetel;
};

void beolvas(telep*);
void kiir(const telep*); 

#endif