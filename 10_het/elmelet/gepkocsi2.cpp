#include "gepkocsi2.h"

datum muszakiErvenyesseg(const gepkocsi* gk) {
  datum lejar = gk->utolsoMuszaki;
  if(gk->muszakiDb > 1) {
    lejar.ev += 2;
  } else {
    lejar.ev += 4;
  }
  return lejar;
}
