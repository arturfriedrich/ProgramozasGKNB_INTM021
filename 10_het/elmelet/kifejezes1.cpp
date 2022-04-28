#include <iostream>
#include <string> // stod()
using namespace std;

// verem muveletek
#define MAX 128
string verem[MAX];
int n = 0;

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

// kifejezes kiertekeles
double additiv();
double multiplikativ();
double elsodleges();

double additiv() {
  double ertek = multiplikativ();
  if(not ures()) {
    string op = kivesz();
    if(op == "+") {
      return ertek + additiv();
    } else if(op == "-") {
      return ertek - additiv();
    } else {
      berak(op);
    }
  }
  return ertek;
}

double multiplikativ() {
  double ertek = elsodleges();
  if(not ures()) {
    string op = kivesz();
    if(op == "*") {
      return ertek * multiplikativ();
    } else if(op == "/") {
      return ertek / multiplikativ();
    } else {
      berak(op);
    }
  }
  return ertek;
}

double elsodleges() {
  if(not ures()) {
    string kovetkezo = kivesz();
    if(kovetkezo == "(") {
      double ertek = additiv();
      kivesz(); // ) eltavolitasa
      return ertek;
    } else {
      return stod(kovetkezo); // C++11
    }
  } else {
    return 0.;
  }
}

int main() {
  string input;
  while(cout<<"Kif.: ", cin>>input, input!="=") {
    berak(input);
  }
  fordit();
  cout << additiv();
  return 0;
}

