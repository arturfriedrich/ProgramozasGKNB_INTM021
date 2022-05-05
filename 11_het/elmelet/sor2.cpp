#include <iostream>
#include <cstddef> // NULL mutato
#include "sor2.h"

static Lista2* eleje = NULL;
static Lista2* vege  = NULL;

bool berak(int adat) {
  Lista2* uj = new Lista2;
  if(uj != NULL) {
    uj->adat = adat;
    uj->elozo = NULL;
    uj->kov = eleje;
    if(eleje != NULL) {
      eleje->elozo = uj;
    }
    eleje = uj;
    if(vege == NULL) {
      vege = uj;
    }
    return true;
  } else {
    return false;
  }
}

int kivesz() {
  if(vege == NULL) {
    std::cerr << "A sor ures.\n";
    return 0;
  } else {
    int adat = vege->adat;
    if(vege->elozo != NULL) {
      vege->elozo->kov = NULL;
    }
    Lista2* ujVege = vege->elozo;
    delete vege;
    vege = ujVege;
    if(vege == NULL) eleje = NULL;
    return adat;
  }
}

