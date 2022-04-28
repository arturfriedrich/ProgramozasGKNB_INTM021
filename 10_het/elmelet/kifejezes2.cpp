#include <iostream>
#include <string> // stod()
#include "verem2.h"
using namespace std;

// kifejezes kiertekeles
double additiv();
double multiplikativ();
double elsodleges();

double additiv() {
  double ertek = multiplikativ();
  if(!ures()) {
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
  if(!ures()) {
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
  string kovetkezo = kivesz();
  if(kovetkezo == "(") {
    double ertek = additiv();
    kivesz();
    return ertek;
  } else {
    return stod(kovetkezo); // C++11
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

