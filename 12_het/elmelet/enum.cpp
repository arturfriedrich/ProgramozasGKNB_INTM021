#include <iostream>
using namespace std;

int main() {
  enum nemet {opel, vw=10, audi} deutscheKraft;
  enum nemet szomszedKocsija;
  nemet haverKocsija;
  // Kesobb nem lehet tobb ilyen tipusu 
  // valtozot letrehozni
  enum {toyota, honda} rizsRaketa;
  enum {renault, peugeot};  
  // int vw; error: 'int vw' redeclared as 
  //                different kind of symbol
  { // OK: ebben a hatokorben nincs ilyen
    // azonosito
    int vw; }
  int nemet; // OK
  deutscheKraft = opel;
  // error: cannot convert 'main()::<anonymous enum>' 
  //        to 'main()::nemet' in assignment
  // deutscheKraft = renault;
  // error: invalid conversion from 'int' 
  //        to 'main()::nemet'
  // szomszedKocsija = 2;
  // error: expected ';' before numeric constant
  // szomszedKocsija = (nemet)2;
  szomszedKocsija = (enum nemet)2;
  int kocsi = honda;
  kocsi = peugeot;
  int it[3];
  it[toyota] = vw;
  // error: no 'operator++(int)' declared for 
  //        postfix '++'
  // toyota++;
  return 0;
}
