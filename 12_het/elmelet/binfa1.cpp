#include <iostream>
#include <cstdlib>
using namespace std;

struct csucs {
  string szoveg;
  long db;
  csucs *bal, *jobb; 
};

csucs* beszurBF(csucs* cs, string s) {
  if(cs == NULL) {
    cs = new csucs;
    cs->szoveg = s;
    cs->db = 1; 
    cs->bal = cs->jobb = NULL;
  } else if(s == cs->szoveg) {
    cs->db++;
  } else if(s < cs->szoveg) {
    cs->bal = beszurBF(cs->bal, s);
  } else {
    cs->jobb = beszurBF(cs->jobb, s);
  }
  return cs;
}

void kiirBF(csucs* cs) { // inorder bejaras
  long i;
  if(cs != NULL) {
    kiirBF(cs->bal);
    for(i=0; i<cs->db; i++) {
      cout << cs->szoveg << endl;
    }
    kiirBF(cs->jobb);
  }
}

void felszabaditBF(csucs* cs) { // postorder bejaras
  if(cs != NULL) {
    felszabaditBF(cs->bal);
    felszabaditBF(cs->jobb);
    delete cs;
  }
}

int main() {
  csucs* gyoker = NULL;
  string szo;
  cout << "Szavak beolvasasa, tarolasa, "
       << "abc-sorrendben kiirasa\n"
       << "Adja meg a szavakat - vegjelig!\n";
  while(cin>>szo, szo!="-") {
    gyoker = beszurBF(gyoker, szo);
  }
  cout << "A megadott szavak abc sorrendben "
       << "a kovetkezok:\n";
  kiirBF(gyoker);
  felszabaditBF(gyoker);
  return 0;
}
