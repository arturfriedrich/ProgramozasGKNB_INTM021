#include "decl.hpp"

int main() {
  char adat_b[SR][OP]={
   { "Clarke, Arthur C." },
   { "Tolkien, John R. R." },
   { "Asimov, Isaac" },
   { "King, Stephen" } };
  string* szerzok;
  szerzok=feltolt(adat_b);
  for(int i=0; i<SR; i++) {
    cout << "\n A(z) " << i+1 << ". elem címe: "
         << &szerzok[i] << endl;
    cout << " A(z) " << i+1 << ". elem tartalma: "
         << szerzok[i] << endl; }
  cout << "\n A mátrix címe: " << szerzok
       << "\n A mátrix 1. eleme: " << (*szerzok) << endl;
  kiir(szerzok,1); cout << endl;
  string* mgm=new string[SR];
  monogram(szerzok,mgm);
  kiir(mgm,0); cout << endl;
  delete [] mgm; mgm=0;
  delete [] szerzok; szerzok=0;
  return 0;
}