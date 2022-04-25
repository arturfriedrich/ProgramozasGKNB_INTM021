// code from @MiklosHatwagner on replit
// Ez a file a 9. heti szelearneing anyagot tartalmazza, melyek:
// Pascal-Háromszög, Vigenére-rejtjelezések voltak.

#include <iostream>
using namespace std;
/*
int** hfoglal(int sorok) {
  int** hmtx = new int*[sorok];
  for(int s=0; s<sorok; s++) {
    hmtx[s] = new int[s+1];
  }
  return hmtx;
}

void pascalKitolt(int** hmtx, int sorok) {
  hmtx[0][0] = 1;
  for(int s=1; s<sorok; s++) {
    hmtx[s][0] = 1;
    for(int o=1; o<s; o++) {
      hmtx[s][o] = hmtx[s-1][o-1] + hmtx[s-1][o];
    }
    hmtx[s][s] = 1;
  }
}

void hnyomtat(const int** hmtx, int sorok) {
  for(int s=0; s<sorok; s++) {
    for(int o=0; o<=s; o++) {
      cout << hmtx[s][o] << '\t';
    }
    cout << endl;
  }
}

void hfelszabadit(const int** hmtx, int sorok) {
  for(int s=0; s<sorok; s++) {
    delete[] hmtx[s];
  }
  delete[] hmtx;
}

int main() {
  cout << "Pascal-haromszog szamitas\n"
       << "Adja meg a sorok szamat! ";
  int db;
  cin >> db;

  int** hmtx = hfoglal(db);
  pascalKitolt(hmtx, db);
  hnyomtat((const int**)hmtx, db);
  hfelszabadit((const int**)hmtx, db);
}
*/
#define BETUK ('Z'-'A'+1)

char** nfoglal(int meret) {
  char** nmtx = new char*[meret];
  for(int s=0; s<meret; s++) {
    nmtx[s] = new char[meret];
  }
  return nmtx;
}

void tr(char** nmtx, int meret) {
  for(int s=0; s<meret; s++) {
    for(int o=0; o<meret; o++) {
      nmtx[s][o] = 'A'+(s+o)%BETUK;
    }
  }
}

void nnyomtat(const char** nmtx, int meret) {
  for(int s=0; s<meret; s++) {
    for(int o=0; o<meret; o++) {
      cout << nmtx[s][o];
    }
    cout << endl;
  }
}

void nfelszabadit(const char** nmtx, int meret) {
  for(int s=0; s<meret; s++) {
    delete[] nmtx[s];
  }
  delete[] nmtx;
}

int main() {
  char** tabulaRecta = nfoglal(BETUK);
  tr(tabulaRecta, BETUK);
  nnyomtat((const char**)tabulaRecta, BETUK);
  nfelszabadit((const char**)tabulaRecta, BETUK);
}