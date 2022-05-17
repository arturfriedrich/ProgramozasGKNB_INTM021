#ifndef LISTA
#define LISTA
#include <iostream>

struct Lista {
  int szam;
  Lista* kov;
};

Lista* beszurElejere(Lista* horgony, int szam);
Lista* beszurVegere(Lista* utolso, int szam);
Lista* letrehozTombbol(int tomb[]);
void kiir(Lista* horgony);
void torles(Lista** horgony);
Lista* keresUtolso(Lista* horgony);

#endif