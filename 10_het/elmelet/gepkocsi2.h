#ifndef GEPKOCSI
#define GEPKOCSI

#include "datum2.h"
 
struct gepkocsi {
 datum gyartas;
 datum utolsoMuszaki;
 int muszakiDb;
};

datum muszakiErvenyesseg(const gepkocsi* gk);
#endif
