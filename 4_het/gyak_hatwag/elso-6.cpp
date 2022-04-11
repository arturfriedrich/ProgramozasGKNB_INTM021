//code from @MiklosHatwagner on replit

#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
  string rendszam;
  cout << "Rendszamok ellenorzese, kilepes k-val.\n";
  do {
    cout << "Adjon meg egy rendszamot! ";
    //cin >> rendszam;
    getline(cin, rendszam);
    cout << rendszam;
    if(rendszam != "k") {
      bool hibas = false;
      int i, j;
      if(rendszam.length()<6 or rendszam.length()>7) hibas = true;
      for(i=0; not hibas and i<3; i++) {
        if(not isalpha(rendszam[i])) hibas = true;
      }
      if(rendszam[3] == '-') {
        i=4; 
        if(rendszam.length() != 7) hibas = true;
      } else if(rendszam.length() != 6) hibas = true;
      for(j=i; not hibas and j<i+3; j++) {
        if(not isdigit(rendszam[i])) hibas = true;
      }
      cout << "A rendszam formailag " << (hibas?"hibas":"helyes") << ".\n";
    }
  } while(rendszam != "k");
}