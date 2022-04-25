#include <iostream>
#define N 5
using namespace std;

int main() {
  cout << "Adjon meg " << N << " szamot, kiirjuk oket forditott "
       << "sorrendben!\n\n";
  int szamok[N], db=0;
  while(db < N) {
    cout << db+1 << ". szam: ";
    cin >> szamok[db];
    db++;
  }
  cout << "\nForditott sorrendben:\n";
  db = N-1;
  while(db >= 0) {
    cout << szamok[db] << '\t';
    db--;
  }
  cout << endl;
  return 0;
}
