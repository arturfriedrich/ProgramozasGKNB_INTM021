//code from @MiklosHatwagner on replit

#include <iostream>

using namespace std;

/*
#define N 10
int main() {
  /*
  cout << "Adjon meg " << N << " szamot!\n";
  int i=0, osszeg=0, szamok[N];
  double atlag;
  while(i < N) {
    cout << i+1 << ". szam: ";
    cin >> szamok[i];
    osszeg += szamok[i];
    i++;
  }
  atlag = (double)osszeg/N;
  cout << "Atlag: " << atlag
       << "\nAtlag alatti ertekek: ";
  i = 0;
  while(i < N) {
    if(szamok[i] < atlag) cout << szamok[i] << '\t';
    i++;
  }
  cout << endl;
}
*/

/*
#define N 3

int main() {
  int v1[N], v2[N], i=0;
  while(i < N) {
    cout << "Elso vektor " << i << ". koord.: ";
    cin >> v1[i];
    cout << "Masodik vektor " << i << ". koord.: ";
    cin >> v2[i];
    i++;
  }

  cout << "Osszegvektor: ( ";
  i = 0;
  while(i < N) {
    cout << v1[i]+v2[i] << ' ';
    i++;
  }
  cout << ")\nKulonbseg vektor: ( ";
  i = 0;
  while(i < N) {
    cout << v1[i]-v2[i] << ' ';
    i++;
  }
  cout << ")\n";
}
*/

/*
#define N 10
int main() {
  cout << "Adjon meg " << N << " szamot!\n";
  int i=0, szamok[N], szam, elofordulas;
  while(i < N) {
    cout << i+1 << ". szam: ";
    cin >> szamok[i];
    i++;
  }
  do {
    cout << "Melyik szamot keressuk? ";
    cin >> szam;
    elofordulas = i = 0;
    while(i < N) {
      if(szamok[i] == szam) elofordulas++;
      i++;
    }
    cout << "A(z) " << szam << " " << elofordulas
         << " alkalommal szerepel az elso " << N
         << " adat kozott.\n";
  } while(elofordulas > 0);
  return 0;
}
*/

#define N 10
int main() {
  cout << "Adjon meg " << N << " szamot!\n";
  int i=0, szamok[N], szam, i1, i2;
  while(i < N) {
    cout << i+1 << ". szam: ";
    cin >> szamok[i];
    i++;
  }
  bool helyes;
  do {
    cout << "Egyik elem sorszama: ";
    cin >> i1;
    cout << "Masik elem sorszama: ";
    cin >> i2;
    helyes = i1>=1 and i1<=N and i2>=1 and i2<=N;
    if(helyes) {
      int csere = szamok[i1-1];
      szamok[i1-1] = szamok[i2-1];
      szamok[i2-1] = csere;
      cout << "Tomb tartalma csere utan: ";
      i = 0;
      while(i < N) {
        cout << szamok[i] << '\t';
        i++;
      }
      cout << endl;
    }
  } while(helyes);
}