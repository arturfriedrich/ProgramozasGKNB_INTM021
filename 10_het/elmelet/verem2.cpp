#include <string>
#include "verem2.h"
using namespace std;

#define MAX 128
// hatokor korlatozas a verem2.cpp-re
static string verem[MAX];
static int n = 0;

bool berak(string s) {
  if(n < MAX) {
    verem[n] = s;
    n++;
    return true;
  } else {
    return false;
  }
}

string kivesz() {
  if(n > 0) {
    n--;
    return verem[n];
  } else {
    return "";
  }
}

bool ures() {
  return n==0;
}

void fordit() {
  int eleje, vege;
  for(eleje=0, vege=n-1;
      eleje<vege;
      eleje++, vege--) {
    string csere = verem[eleje];
    verem[eleje] = verem[vege];
    verem[vege] = csere;
  }
}
