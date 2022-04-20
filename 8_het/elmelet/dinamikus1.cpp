#include <iostream>
using namespace std;

int main() {
  char *pc; // deklaraciok
  int* pi;
  double* pd;
  
  pc = new char;  // memoriafoglalasok
  pi = new int;
  pd = new double;
  
  if(pc == NULL) {  // ellenorzes
    cerr << "Sikertelen memoriafoglalas!\n";
    return 1;
  }
  
  *pc = 'X';  // ertekadasok
  *pi = 42;
  *pd = 3.14;
  
  delete pc;  // memoria felszabaditas
  delete pi;
  delete pd;
  
  return 0;
}
