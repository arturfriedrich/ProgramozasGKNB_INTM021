#include "ember2.h"

bool elmult17(const ember* e, const datum* ma) {
  datum eppen17 = e->szuletes;
  eppen17.ev += 17;
  return bazis(&eppen17) <= bazis(ma);
}
