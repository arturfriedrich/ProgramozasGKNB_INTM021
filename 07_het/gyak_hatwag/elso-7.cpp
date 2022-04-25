// code from @MiklosHatwagner on replit
// ez a file a 4. (!) heti szelearning anyagot tartalmazza
// a rendszámos feladat függvényekkel való megírása!
// + 1 olyan intervallumos feladatot ami nincs a gyak anyagok közt!


#include <iostream>
#include <cctype>
#include <string>
using namespace std;

/*
bool ervenyes(string rendszam) {
  int i, j;
  if(rendszam.length()<6 or rendszam.length()>7) return false;
  for(i=0; i<3; i++) {
    if(not isalpha(rendszam[i])) return false;
  }
  if(rendszam[3]=='-' or rendszam[3]==' ') {
    i=4; 
    if(rendszam.length() != 7) {
      return false;
    }
  } else if(rendszam.length() != 6) {
    return false;
  }
  for(j=i; j<i+3; j++) {
    if(not isdigit(rendszam[j])) return false;
  }
  return true;
}

int main() {
  string rendszam;
  cout << "Rendszamok ellenorzese, kilepes k-val.\n";
  do {
    cout << "Adjon meg egy rendszamot! ";
    getline(cin, rendszam);
    if(rendszam != "k") {
      cout << "A rendszam formailag " 
           << (ervenyes(rendszam)?"helyes":"hibas") 
           << ".\n";
    }
  } while(rendszam != "k");
}
*/

int intervallum(int min, int max) {
  if(min > max) {
    int csere = min;
    min = max;
    max = csere;
  }
  cout << "Adjon meg egy egeszet " 
       << min << " es "
       << max << " kozott!\n";
  int szam;
  bool helyes;
  do {
    cin >> szam;
    helyes = szam>=min and szam<=max;
    if(not helyes) {
      cout << "A megadott ertek kivul esik "
           << "a megengedett intervallumon, "
           << "adjon meg mast!\n";
    } 
  } while(!helyes);
  return szam;
}

#define N 5
void szamok() {
  int szamok[N];
  int i, min = 1;
  for(i=0; i<N; i++) {
    cout << "Adja meg a(z) "
         << (i+1)
         << ". szamot! ";
    szamok[i] = intervallum(min, 90-N+1+i);
    min = szamok[i]+1;
  }
  cout << "A szamok: ";
  for(i=0; i<N-1; i++) {
    cout << szamok[i] << ", ";
  }
  cout << szamok[N-1] << ".\n";
}

int main() {
  szamok();
  return 0;
}
