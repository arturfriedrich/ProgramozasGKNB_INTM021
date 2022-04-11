//code from @MiklosHatwagner on replit

#include <iostream>
using namespace std;
#define N 3

struct datum {
  int ev, ho, nap;
};

struct szemely {
  string nev;
  datum szulDatum;
  float tav;
};

void beolvas(szemely t[], int n) {
  for(int i=0; i<n; i++) {
    cout << "Nev: "; cin >> t[i].nev;
    cout << "Szuletesi datum\n\tEv: "; cin >> t[i].szulDatum.ev;
    cout << "\tHonap: "; cin >> t[i].szulDatum.ho;
    cout << "\tNap: "; cin >> t[i].szulDatum.nap;
    cout << "Tav a fovarostol: "; cin >> t[i].tav;
  }
}

void nyomtat(szemely t[], int tbl[], int n) {
  for(int i=0; i<n; i++) {
    cout << "Nev: " << t[tbl[i]].nev << endl
         << "Szul. datum: " << t[tbl[i]].szulDatum.ev 
         << "." << t[tbl[i]].szulDatum.ho
         << "." << t[tbl[i]].szulDatum.nap << endl
         << "Tav: " << t[tbl[i]].tav << endl;
  }
}

int datum2int(datum d) {
  return d.ev*1000 + d.ho*10 + d.nap;
}

void rendezKorNov(szemely t[], int tbl[], int n) {
  for(int i=0; i<n-1; i++) {
    int max = datum2int(t[tbl[i]].szulDatum);
    int idx = i;
    for(int j=i+1; j<n; j++) {
      int di;
      if((di = datum2int(t[tbl[j]].szulDatum)) > max) {
        max = di;
        idx = j;
      }
    }
    if(idx != i) {
      int cs = tbl[i];
      tbl[i] = tbl[idx];
      tbl[idx] = cs;
    }
  }
}

void idxTblGen(int tbl[], int n) {
  for(int i=0; i<n; i++) {
    tbl[i] = i;
  }
}

int main() {
  szemely lakok[N];
  int korNovIdxTbl[N];
  beolvas(lakok, N);
  idxTblGen(korNovIdxTbl, N);
  rendezKorNov(lakok, korNovIdxTbl, N);
  nyomtat(lakok, korNovIdxTbl, N);
}