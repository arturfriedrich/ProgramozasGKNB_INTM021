#ifndef EMBER
#define EMBER

#include "datum2.h"

struct ember {
  std::string nev;
  datum szuletes;
};

bool elmult17(const ember* e, const datum* ma);
#endif
