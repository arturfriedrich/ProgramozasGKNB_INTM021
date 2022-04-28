#include <iostream>
#include <string> // stod(), C++11
using namespace std;

// verem muveletek
#define MAX 128
double verem[MAX];
int n = 0;

bool berak(double d) {
  if(n < MAX) {
    verem[n] = d;
    n++;
    return true;
  } else {
    return false;
  }
}

double kivesz() {
  if(n > 0) {
    n--;
    return verem[n];
  } else {
    return 0.;
  }
}

bool ures() {
  return n==0;
}

int main(void) {
  string input;
  do {
    cout << "rpn: "; cin >> input;
    if(input == "+") {
      berak(kivesz() + kivesz());
    } else if(input == "-") {
      double op = kivesz();
      berak(kivesz() - op);
    } else if(input == "*") {
      berak(kivesz() * kivesz());
    } else if(input == "/") {
      double op = kivesz();
      berak(kivesz() / op);
    } else if(input == "=") {
      cout << kivesz() << endl;
    } else { // szam
      berak(stod(input)); // C++11
    }
  } while(input != "=");
  return 0;
}
