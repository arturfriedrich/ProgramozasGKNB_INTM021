#include <iostream>
#include <string>
using namespace std;

void szofordit(string* szo) {
  int eleje, vege;
  for(eleje=0, vege=(*szo).length()-1;
      eleje<vege;
      eleje++, vege--) {
    char csere = (*szo)[eleje];
    (*szo)[eleje] = (*szo)[vege];
    (*szo)[vege] = csere;
  }
}

string itos(int szam) {
  bool negativ = false;
  if(szam < 0) {
    szam *= -1;
    negativ = true;
  }
  string s = "";
  do {
    s += char(szam%10 + '0');
    szam /= 10;
  } while(szam != 0);
  if(negativ) s += '-';
  szofordit(&s);
  return s;
}

int main(void) {
  cout << itos(-123);
  return 0;
}

