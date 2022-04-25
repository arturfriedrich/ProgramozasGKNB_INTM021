// 6/6 Struktúrák, tag-struktúrával és LOKÁLIS struktúratömbbel
   // Debugger használata, 29. sor breakpoints!
#include<iostream>

#define SK 4   // Kiírandó sorok száma
#define T_E 3  // A tömb objektumainak a száma

using namespace std;

struct veg_sor {
   string vs_tb;      // kiirandó záró-karaktersorozat
};   

struct sor_minta {
  string kar;        // kiirandó string
  int ism;           // soron belüli ismétlődések száma
  bool sor[SK];      // sorok száma, amennyiben megjelenjen
  struct veg_sor zk; // sorvégi karaktersorozat
};

void kiir(int kfv, const struct sor_minta const str_tb[]) {  // objektum-védelem!
  cout << kfv+1 << ". sor: ";
  for(int k=0; k<T_E; k++) {          // 1 sor kiírása
    for(int j=0; j<str_tb[k].ism; j++) {   // Soron belüli adott karakter kiírása
      if(str_tb[k].sor[kfv]) cout << str_tb[k].kar;
      else cout << "-"; } }
  if(kfv>=T_E) kfv%=3;
  cout << str_tb[kfv].zk.vs_tb << endl;
  //str_tb[0].ism=1; // cím-szerinti kezelés!
}

int main(void) {
  struct sor_minta str_tb[T_E] = { 
                             { "▲", 3, { 1, 0, 1, 0}, "╦╦╗" },      // karakter, hány darab, melyik sorokban, sorvégzáró
                             { "►", 2, { 1, 1, 1, 0}, "╬╬╣" },
                             { "▼", 4, { 0, 0, 1, 1}, "╩╩╝" }
                            }; /* Struktúra tömb definíciója
                                  és az elemeinek az inicializációja */
  cout << endl;
  for(int i=0; i<SK; i++) { kiir(i,str_tb); }     // Sorok kiírása
  cout << endl;
  for(int i=0; i<SK; i++) { kiir(i,str_tb); }     // Sorok kiírása
  return 0;
}