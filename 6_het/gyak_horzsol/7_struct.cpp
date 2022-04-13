// 6/7 Struktúrák, mutatós tömbkezelés, a "const" típusmódosító

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

void kiir(int kfv, /*const*/ struct sor_minta* /*const*/ pnt) {  // pt // objektum- ill. mutató-védelem!
  cout << kfv+1 << ". sor: ";
  // struct sor_minta* pnt=pt;
  for(int k=0; k<T_E; k++,pnt++) {          // 1 sor kiírása
    //cout << "\n A cím amire a pnt mutat: " << pnt << endl;
    for(int j=0; j<pnt->ism; j++) {   // Soron belüli adott karakter kiírása
      if(pnt->sor[kfv]) cout << pnt->kar;
      else cout << "-"; } }
  //cout << "\n A sor kiírása utáni cím amire a pnt mutat: " << pnt << endl;
  if(kfv>=T_E) kfv%=3;
  /*if(kfv==0) pnt-=3;
  else if(kfv==1) pnt-=2;
  else if(kfv==2) pnt-=1;*/
  cout << pnt->zk.vs_tb << endl;
  pnt->ism=1;
}

int main(void) {
  struct sor_minta str_tb[T_E] = { 
                             { "▲", 3, { 1, 0, 1, 0}, "╦╦╗" },
                             { "►", 2, { 1, 1, 1, 0}, "╬╬╣" },
                             { "▼", 4, { 0, 0, 1, 1}, "╩╩╝" }
                            }; /* Struktúra tömb definíciója
                                  és az elemeinek az inicializációja */
  int n,kr,im,sr,vs;
  n=((kr=sizeof(str_tb[0].kar))+(im=sizeof(str_tb[0].ism))+
     (sr=sizeof(str_tb[0].sor))+(vs=sizeof(str_tb[0].zk)));
	cout << "\n kar[] = " << kr << " + \n ism = " << im 
       << " + \n sor[] = " << sr << " + \n vs_tb[] = " << vs
       << " => " << n << " byte\n\n";
  /*const*/ struct sor_minta* /*const*/ mutat;
  for(int i=0; mutat=str_tb, i<SK; i++) { kiir(i,mutat); } // Sorok kiírása
  cout << endl;
  for(int i=0; i<SK; i++) { kiir(i,mutat); } // Sorok kiírása
  return 0;
}