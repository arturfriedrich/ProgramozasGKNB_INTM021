#include <iostream>
#define ALSO 0
#define FELSO 150
#define LEPES 10
using namespace std;

int main() {
  cout << "Fahrenheit\tCelsius\n"
       << "----------\t--------\n";
  double f;
  
  
  for(f=ALSO; f<=FELSO; f+=LEPES)
    cout << f << "\t\t" 
         << (5./9.)*(f-32.) << '\n';
         
         
  return 0;
}
