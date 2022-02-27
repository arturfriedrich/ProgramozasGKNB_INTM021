#include <iostream>

#define OLDALSZAM 3

using namespace std;

int main() {
  int ot[OLDALSZAM]; // 3 elemű tömb az oldalhosszaknak
  int i;             // aktuális oldal indexe
  bool megszerkesztheto = false;
  cout << "Adja meg egy háromszög oldalhosszait: " << endl;
  do {
    i = 0;
    while(i < OLDALSZAM) { // Csak 1x írjuk meg a beolvasást!
      do {
        cout << "A kovetkezo oldal hossza: ";
        cin >> ot[i];                      // tömb indexelés
      } while(ot[i] <= 0);
      i++;
    }
    if(ot[0]+ot[1]<=ot[2] or ot[1]+ot[2]<=ot[0] or ot[2]+ot[0]<=ot[1])
      cout << "Ez nem szerkesztheto meg!\n";
    else {
      megszerkesztheto = true;
      cout << "Megszerkesztheto.\n"; }
  } while(not megszerkesztheto);
  return 0; }
