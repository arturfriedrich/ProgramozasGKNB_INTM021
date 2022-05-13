#include <iostream>
using namespace std;

void negyzetErtek(int alap) {
  alap = alap * alap;
}

void negyzetMutato(int* alap) {
  *alap = *alap * *alap;
}

void negyzetReferencia(int& alap) {
  alap = alap * alap;
}

int main() {
  int szam = 2;
  cout << "Kezdetben: szam=" << szam;
  negyzetErtek(szam);
  cout << ", negyzetErtek() utan: szam=" << szam;
  negyzetMutato(&szam);
  cout << "\nnegyzetMutato() utan: szam=" << szam;
  negyzetReferencia(szam);
  cout << ", negyzetReferencia() utan: szam=" 
       << szam << endl;
  // negyzetReferencia(5); // Konstansnak nincs cime
  return 0;
}
