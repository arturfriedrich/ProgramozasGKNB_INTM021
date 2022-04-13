// 6/3 Struktúrák, visszatérési érték vs. cím szerinti átadás

#include<iostream>

#define DB 2

using namespace std;

struct step {
 char kar[DB];
 int lep[DB];
};

//void beker(struct step st1)
//struct step beker(struct step st1)
void beker(struct step *st1)
{
  for(int fut=0; fut<DB; fut++) {
     cout << "\n Kérem a kódolás " << fut+1 << ". karakterét: ";
     //cin >> st1.kar[fut]; 
     cin >> (*st1).kar[fut];  // cin >> st1->kar[fut];  // "->" struktúra-mutató operátor
     cout << "\t Kérem a kódolás " << fut+1 << ". karakterének a lépésszámát: "; 
     //cin >> st1.lep[fut];  
     //cin >> (*st1).lep[fut]; 
     cin >> st1->lep[fut];  // "->" struktúra-mutató operátor
    }  
  //return st1;
}   

void kiir(struct step sp1) {
  for(int fut=0; fut<DB; fut++) {
  cout << "\n A kódolás " << fut+1 << ". karaktere a léptetés után: '"
       << sp1.kar[fut] << "' lett!"; }
  cout << endl;
}

int main(void) {
  struct step s1;
  //beker(s1);		// érték szeinti átadás!
  //s1=beker(s1);
  beker(&s1);
  for(int fut=0; fut<DB; fut++) { s1.kar[fut]+=s1.lep[fut]; }
  kiir(s1);
  return 0;
}