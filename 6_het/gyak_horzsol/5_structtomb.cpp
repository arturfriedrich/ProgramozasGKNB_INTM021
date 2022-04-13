// 6/5 Struktúrák, struktúratömb-inicializációval

#include<iostream>

#define SK 9   // Kiírandó sorok száma
#define T_E 3  // A tömb objektumainak a száma

using namespace std;

struct sor_minta {
  char kar; // kiirandó karakter
  int ism;  // soron belüli ismétlődések száma
  int sor;  // sorok száma, amennyiben megjelenjen
};

struct sor_minta str_tb[T_E] = { 
                             { '[', 3, 6 },
                             { '&', 4, 3 },
                             { ']', 4, 9 }
                            }; /* Struktúra tömb definíciója
                                  és az elemeinek az inicializációja */

void kiir(int kfv) {
  for(int k=0; k<T_E; k++) {          // 1 sor kiírása
    for(int j=0; j<str_tb[k].ism; j++) {   // Soron belüli adott karakter kiírása
      if(kfv<str_tb[k].sor) cout << str_tb[k].kar;
      else cout << "-"; } }
  cout << endl;
}

int main(void) {
  cout << endl;
  for(int i=0; i<SK; i++) { kiir(i); }     // Sorok kiírása
  return 0;
}