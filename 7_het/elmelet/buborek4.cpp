#include <iostream>
using namespace std;

void buborek(int* t, int n) {
  for(int i=n-1; i>=1; i--) {
    for(int k=0; k<i; k++) {
      if(t[k] > t[k+1]) {
        int csere = t[k];
        t[k] = t[k+1];
        t[k+1] = csere;
      }
    }
  }
}

void tombKiir(const int* t, int n) {
  for(const int* vege=t+n; t<vege; t++) {
    cout << *t << '\t';
  }
  cout << endl;
}

int main() {
  int szamok[] = {12, 3, 54, -4, 56, 4, 7, 3};
  int n = sizeof(szamok)/sizeof(szamok[0]);
  buborek(szamok, n);
  cout << "Rendezes utan:\n";
  tombKiir(szamok, n);
  return 0;
}
