#include "decl.hpp"

int main() {
  char mgm[SR][OP];
	char szerzok[SR][OP]={
   { "Clarke, Arthur C." },
   { "Tolkien, John R. R." },
   { "Asimov, Isaac" },
   { "King, Stephen" } };
  char* p[SR];
  for(int i=0; i<SR; i++) {
    cout << "\n A(z) " << i+1 << ". elem címe: "
         << &szerzok[i] << endl;
    p[i]=szerzok[i];
    cout << " A(z) " << i+1 << ". elem mutatott címe: "
         << (void*)p[i] << endl;   
  }
  cout << "\n A mátrix címe: " << szerzok
       << "\n A mátrix 1. eleme: " << (*szerzok) << endl;
  kiir(szerzok,1); cout << endl;
  monogram(szerzok,mgm);
  kiir(mgm,0); cout << endl;
  return 0;
}

/* A (void*) elsődlegesen arra használatos, hogy mutatókat adjunk át olyan
	függvényeknek/objektumoknak, amelyek nem feltételeznek semmit
	az objektumok típusáról, valamint arra, hogy a függvények/objektumok
	nem típusos objektumokat adjanak vissza.
    Ahhoz, hogy ilyen objektumokat használjunk, explicit típuskonverziót kell
	alkalmaznunk.
	Azok a függvények/objektumok, amelyek (void*) típusú mutatókat használnak,
	jellemzően a rendszer legalsó szintjén helyezkednek el,
	ahol az igazi hardver-erőforrásokat kezelik. */