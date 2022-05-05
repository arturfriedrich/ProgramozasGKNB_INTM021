#include <iostream>
#include <cstddef> // NULL mutato
#include "Lista1.h"
using namespace std;

int main() {
  cout << "Adjon meg egeszeket, leallas negativ szamra!\n";
  Lista1 *horgony=NULL, *seged=NULL;
  int szam;
  while(cin>>szam, szam>=0) {
    seged = beszur1(szam, seged);
    if(horgony == NULL) horgony = seged;
  }
  cout << "Ezeket adta meg:\n";
  kiir1(horgony);
  torolMindet1(horgony);
  return 0;
}
