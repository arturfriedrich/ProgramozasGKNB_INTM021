#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int* lefoglal(int sorok, int oszlopok) {
  return new int[sorok*oszlopok];
}

inline int idx(int s, int o, int oszlopok) {
  return s*oszlopok + o;
}

void general(int* t, int sorok, int oszlopok) {
  for(int s=0; s<sorok; s++) {
    for(int o=0; o<oszlopok; o++) {
      t[idx(s, o, oszlopok)] = 10 + rand()%40;
    }
  }
}

void osszead(int* a, int* b, int* c, 
             int sorok, int oszlopok) {
  for(int s=0; s<sorok; s++) {
    for(int o=0; o<oszlopok; o++) {
      c[idx(s, o, oszlopok)] = a[idx(s, o, oszlopok)] + b[idx(s, o, oszlopok)];
    }
  }
}

void megjelenit(int* a, int* b, int* c,
                int sorok, int oszlopok) {
  for(int s=0; s<sorok; s++) {
    for(int o=0; o<oszlopok; o++) {
      cout << a[idx(s, o, oszlopok)] << ' ';
    }
    cout << (s==sorok/2?"+ ":"  ");
    for(int o=0; o<oszlopok; o++) {
      cout << b[idx(s, o, oszlopok)] << ' ';
    }
    cout << (s==sorok/2?"= ":"  ");
    for(int o=0; o<oszlopok; o++) {
      cout << c[idx(s, o, oszlopok)] << ' ';
    }
    cout << endl;
  }
}

int main() {
  srand(time(NULL));
  int sorok = 1 + rand()%4;
  int oszlopok = 1 + rand()%4;
  int* a = lefoglal(sorok, oszlopok);
  int* b = lefoglal(sorok, oszlopok);
  int* c = lefoglal(sorok, oszlopok);
  general(a, sorok, oszlopok);
  general(b, sorok, oszlopok);
  osszead(a, b, c, sorok, oszlopok);
  megjelenit(a, b, c, sorok, oszlopok);
  delete[] a;
  delete[] b;
  delete[] c;
  return 0;
}
