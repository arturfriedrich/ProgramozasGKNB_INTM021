// 6/2 Struktúrák, tag-tömbökkel (DB 4)

#include<iostream>

#define DB 2

using namespace std;

struct step {
 char kar[DB];
 int lep[DB];
};

void kiir(struct step sp1) {
  for(int fut=0; fut<DB; fut++) {
  cout << "\n A kódolás " << fut+1 << ". karaktere a léptetés után: '"
       << sp1.kar[fut] << "' lett!"; }
  cout << endl;
}

int main(void) {
  struct step s1;
  for(int fut=0; fut<DB; fut++) {
     cout << "\n Kérem a kódolás " << fut+1 << ". karakterét: ";
     cin >> s1.kar[fut];
     cout << "\t Kérem a kódolás " << fut+1 << ". karakterének a lépésszámát: "; 
     cin >> s1.lep[fut]; }
  for(int fut=0; fut<DB; fut++) { s1.kar[fut]+=s1.lep[fut]; }
  kiir(s1);
  return 0;
}