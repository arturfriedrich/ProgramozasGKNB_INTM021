// 6/1 Struktúrák, tag-változókkal

#include<iostream>

#define DB 2

using namespace std;

struct step {
  char kar;
  int lep;
};

void kiir(struct step sp1, struct step sp2) {
  cout << "\n A kódolás 1. karaktere a léptetés után: '" << sp1.kar << "' lett!";
  cout << "\n A kódolás 2. karaktere a léptetés után: '" << sp2.kar << "' lett!\n";
}

int main(void) {
  struct step s1, s2;
  for(int fut=0; fut<DB; fut++) {
     cout << "\n Kérem a kódolás " << fut+1 << ". karakterét: ";
     if(fut==0) cin >> s1.kar;
	   else cin >> s2.kar;
     cout << "\t Kérem a kódolás " << fut+1 << ". karakterének a lépésszámát: "; 
     if(fut==0) cin >> s1.lep;
     else cin >> s2.lep; }
  s1.kar+=s1.lep;
  s2.kar+=s2.lep;
  kiir(s1,s2);
  return 0;
}