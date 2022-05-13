#include <iostream>
using namespace std;

int main() {
  int darab = 1;          // valtozo
  int* mutDarab = &darab; // mutato
  int& refDarab = darab;  // referencia
  // int& refDarab; // Mi az eredeti valtozo cime?
  // int& refDarab = 5; // Konstansnak nincs cime
  cout << "darab=" << darab
       << " refDarab=" << refDarab
       << " mutDarab=" << mutDarab
       << " *mutDarab=" << *mutDarab << endl;
       
  darab++;
  refDarab++;
  cout << "darab=" << darab
       << " refDarab=" << refDarab
       << " mutDarab=" << mutDarab
       << " *mutDarab=" << *mutDarab << endl;
  return 0;
}
