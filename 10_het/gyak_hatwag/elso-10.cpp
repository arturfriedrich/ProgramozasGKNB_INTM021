// code from @MiklosHatwagner on replit
// Ez a file a 8. heti szelearning feladatait tartalmazza, melyek
// Változók dinamikus foglalása 
// Tömbök dinamikus foglalása
// Dinamikus sturkrúa helyfoglalás
// C típusú karaktertömbök foglalása
// Ismeretlen számú érték előfordulásának megszámlálása

#include <iostream>
using namespace std;
/*
int main() {
  int *pi;
  pi = new int;
  cout << "Adjon meg egy szamot! ";
  cin >> *pi;
  cout << "Ezt adta meg: " << *pi << endl;
  delete pi;
}
*/
/*
int main() {
  int meret, *tomb;
  cout << "Mekkora tombot foglaljunk? ";
  cin >> meret;
  tomb = new(nothrow) int[meret];
  if(tomb == nullptr) {
    cerr << "Memoriafoglalasi hiba.\n";
    return 1;
  }
  cout << "Johetnek! ";
  for(int i=0; i<meret; i++) {
    cin >> tomb[i];
  }
  cout << "Ezeket adta meg: ";
  for(int i=0; i<meret; i++) {
    cout << *(tomb+i) << '\t';
  }
  cout << endl;
  delete [] tomb;
}
*/

/*
struct koord {
  int x, y;
};

int main() {
  koord* pk = new koord;
  cin >> pk->x >> pk->y;
  cout << (*pk).x << '\t' << (*pk).y << endl;
  delete pk;
}
*/

/*
#include <cstring>

int main() {
  string s;
  cin >> s;
  char* pc = new char[s.length()+1];
  // strcpy(pc, s.c_str());

  //char *uj=pc;
  //for(const char *k=s.c_str(); *k!='\0'; k++, uj++) {
  //  *uj = *k;
  //}
  //*uj = '\0';

  for(int i=0; i<s.length(); i++) {
    pc[i] = s[i];
  }
  pc[s.length()] = '\0';
  cout << pc << endl;
  delete [] pc;
}
*/

/*
#define MIN 6
#define MAX 10
int main() {
  int db[MAX-MIN+1] = {0}, szam;
  cout << "Adjon meg szamokat 0-ig " << MIN << " es " << MAX 
       << " kozott! ";
  do {
    do {
      cin >> szam;
    } while((szam<MIN or szam>MAX) and szam!=0);
    if(szam != 0) {
      db[szam-MIN]++;
    }
  } while(szam != 0);
  cout << "Gyakorisagok:\n";
  for(int i=0; i<MAX-MIN+1; i++) {
    cout << i+MIN << '\t' << db[i] << endl;
  }
}
*/

#define MAX 100
struct par {
  int szam, db;
};
int main() {
  par tomb[MAX];
  int db = 0;
  
}