#include <iostream>
#include <cstddef> // NULL mutato
#include "verem3.h"

static Lista1* horgony = NULL;

bool berak(int adat) {
  Lista1* uj = new Lista1;
  if(uj != NULL) {
    uj->adat = adat;
    uj->kov = horgony;
    horgony = uj;
    return true;
  } else {
    return false;
  }
}

int kivesz() {
  if(horgony == NULL) {
    std::cerr<<"A verem ures.\n";
    return 0;
  } else {
    int adat = horgony->adat;
    Lista1* kov = horgony->kov;
    delete horgony;
    horgony = kov;
    return adat;
  }
}

bool ures() {
  return horgony == NULL;
}
