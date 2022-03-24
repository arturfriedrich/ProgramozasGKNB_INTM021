#include <iostream>
using namespace std;

int main() {
  char k;
  cout << "Karakter: "; cin >> k;
  k = k>='a' and k<='z' ? k-'a'+'A' : k;
  cout << "Nagybetus alak: " << k;
  return 0; 
}
