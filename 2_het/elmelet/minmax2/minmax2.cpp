#include <iostream>
using namespace std;

int main() {
  cout << "Adjon meg nem negativ egesz szamokat,\n"
       << "megkeressuk kozottuk a minimalisat es a maximalisat.\n"
       << "Kilepes negativ szam megadasaval.\n";
  int db=0, akt; // akt-nak nem kell kezdoertek
  int min, max;
  cout << "Kovetkezo szam: "; // kod elso elofordulasa
  cin >> akt;
  while(akt >= 0) {
    if(db == 0) min = max = akt; // innen viszont eltunt egy feltetel
    else if(akt > max) max = akt;
    else if(akt < min) min = akt;
    db++;
    cout << "Kovetkezo szam: "; // kod masodik elofordulasa
    cin >> akt;
  }
  if(db > 0) cout <<   "A minimum: " << min
                  << "\nA maximum: " << max << '\n';
  else cout << "Nem adott meg adatokat.\n";
  return 0;
}
