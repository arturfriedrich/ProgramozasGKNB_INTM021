#include <iostream>
using namespace std;

int main() {
  cout << "Adjon meg nem negativ egesz szamokat,\n"
       << "megkeressuk kozottuk a minimalisat es a maximalisat.\n"
       << "Kilepes negativ szam megadasaval.\n";
  int db=0, akt;
  int min, max;
  while(cout<<"Kovetkezo szam: ", cin>>akt, akt>=0) { // , operator
    if(!db) min = max = akt; // ! operator
    else if(akt > max) max = akt;
    else if(akt < min) min = akt;
    db++;
  }
  if(db) cout <<   "A minimum: " << min // logikai kifejezes
              << "\nA maximum: " << max << '\n';
  else cout << "Nem adott meg adatokat.\n";
  return 0;
}
