// 6/4 Struktúrák, objektum-inicializációval

#include<iostream>

#define SK 4   // Kiírandó sorok száma

using namespace std;

struct sor_minta {
  char kar; // kiirandó karakter
  int ism;  // soron belüli ismétlődések száma
  int sor;  // sorok száma, amennyiben megjelenjen
};

int main(void) {
  struct sor_minta nyzj, es, zzj;
  nyzj.kar='['; nyzj.ism=2; nyzj.sor=2;     // inicializáció tagonként
  es =   { '&', 2, 3 };                               // inicializátorlista 
  zzj =  { ']', 4, 1 };                                 // inicializátorlista 
  cout << endl;
  for(int i=0; i<SK; i++) {              // Sorok kiírása
    for(int j=0; j<nyzj.ism; j++) {       // Soron belüli kiírás
      if(i<nyzj.sor) cout << nyzj.kar;
      else cout << "-"; }
    for(int j=0; j<es.ism; j++) {         // Soron belüli kiírás
      if(i<es.sor) cout << es.kar;
      else cout << "-"; }
    for(int j=0; j<zzj.ism; j++) {        // Soron belüli kiírás
      if(i<zzj.sor) cout << zzj.kar;
      else cout << "-"; }
    cout << endl; }
  return 0;
}