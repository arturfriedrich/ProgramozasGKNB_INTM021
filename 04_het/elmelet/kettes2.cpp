#include <iostream>
using namespace std;
int main() {
  char b[100];
  int d, i;
  cout << "Adjon meg egy tizes szamrendszerbeli szamot!\n";
  
  
  cin >> d;
  i = 0;
  while(d > 0) {
    b[i] = d%2+'0'; d /= 2; i++;
  }
  
  
  cout << "Kettes szamrendszerben: ";
  i--;
  while(i >= 0) {
    cout << b[i]; i--;
  }
  cout << endl;
  return 0;
}
