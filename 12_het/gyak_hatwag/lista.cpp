#include "lista.h"

Lista* beszurElejere(Lista* horgony, int szam) {
  Lista* uj = new Lista;
  uj->szam = szam;
  uj->kov = horgony;
  return uj;
}

Lista* letrehozTombbol(int tomb[]) {
  Lista* horgony = nullptr;
  for(int i=0; tomb[i]!=-1; i++) {
    horgony = beszurElejere(horgony, tomb[i]);
  }
  return horgony;
}

void kiir(Lista* horgony) {
  while(horgony) {
    std::cout << horgony->szam << '\t';
    horgony = horgony->kov;
  }
}

void torles(Lista** horgony) {
  while(*horgony) {
    Lista* kov = (*horgony)->kov;
    delete *horgony;
    *horgony = kov;
  }
}

void torles2(Lista* horgony) {
  while(horgony) {
    Lista* kov = horgony->kov;
    delete horgony;
    horgony = kov;
  }
}

Lista* keresUtolso(Lista* horgony) {
  while(horgony) {
    if(horgony->kov == nullptr) {
      return horgony;
    }
    horgony = horgony->kov;
  }
  return nullptr;
}

Lista* beszurVegere(Lista* utolso, int szam) {
  Lista* uj = new Lista;
  uj->szam = szam;
  uj->kov = nullptr;
  if(utolso) {
    utolso->kov = uj;
  }
  return uj;
}