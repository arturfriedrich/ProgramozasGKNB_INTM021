#include <iostream>
using namespace std;

int szam = 5;

int& vissza(int param) {
  // return 1; // konstansnak nincs cime
  int lokalis;
  // return lokalis; // felszabadul, mire hasznalnank
  // return param;   // detto
  return szam;
}

int main() {
  int n = vissza(42)*2;
  cout << "n=" << n;
  vissza(42) = 3;
  vissza(42)++;
  cout << "\nszam=" << szam;
  return 0;
}
