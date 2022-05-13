#include <iostream>
#include "datum3.h"
using namespace std;

int main() {
  int ev, ho, nap;
  cout << "Ev: "; cin >> ev;
  cout << "Ho: "; cin >> ho;
  cout << "Nap:"; cin >> nap;
  datum d = { ev, ho, nap };
  if(hetNapjaEnum(&d) == SZOMBAT) {
    cout << "Night fever, night fever\n";
  } else {
    cout << "Another day in paradise\n";
  }
  return 0;
}
