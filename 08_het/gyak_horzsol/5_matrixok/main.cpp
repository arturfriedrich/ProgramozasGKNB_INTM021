#include "decl.hpp"

int main() {
  char mgm[SR][OP];
	char szerzok[SR][OP]={
   { "Clarke, Arthur C." },
   { "Tolkien, John R. R." },
   { "Asimov, Isaac" },
   { "King, Stephen" } };
  cout << "\n A mátrix címe: " << szerzok
       << "\n A mátrix 1. eleme: " << szerzok[0] << endl;
  kiir(szerzok,1); cout << endl;
  monogram(szerzok,mgm);
  kiir(mgm,0); cout << endl;
  return 0;
}