#include <iostream>
#include <string>
using namespace std;

string itos(int szam) {
  bool negativ = false;
  if(szam < 0) {
    szam *= -1;
    negativ = true;
  }
  string s = "";
  do {
    s = char(szam%10 + '0') + s;
    szam /= 10;
  } while(szam != 0);
  if(negativ) s = '-' + s;
  return s;
}

int main(void) {
  cout << itos(-123);
  return 0;
}

