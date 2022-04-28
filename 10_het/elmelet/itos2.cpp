#include <iostream>
#include <string>
using namespace std;

// verem muveletek
#define MAX 128
char verem[MAX];
int n = 0;

bool berak(char c) {
  if(n < MAX) {
    verem[n] = c;
    n++;
    return true;
  } else {
    return false;
  }
}

char kivesz() {
  if(n > 0) {
    n--;
    return verem[n];
  } else {
    return 0;
  }
}

bool ures() {
  return n==0;
}

// int --> string atalakitas
string itos(int szam) {
  bool negativ = false;
  if(szam < 0) {
    szam *= -1;
    negativ = true;
  }
  do {
    berak(szam%10 + '0');
    szam /= 10;
  } while(szam != 0);
  if(negativ) berak('-');
  string s = "";
  while(!ures()) {
    s += kivesz();
  }
  return s;
}

int main(void) {
  cout << itos(-123);
  return 0;
}

