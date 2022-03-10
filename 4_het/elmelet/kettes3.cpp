#include <iostream>
using namespace std;
int main() {
  char b[100];
  int d, i;
  cout << "Adjon meg egy tizes szamrendszerbeli szamot!\n";


  for(cin>>d,i=0; d>0; d/=2,i++) {
    b[i] = d%2+'0'; 
  }




  cout << "Kettes szamrendszerben: ";
  for(i--; i>=0; i--) {
    cout << b[i];
  }
  cout << endl;
  return 0;
}
