// A postfix/prefix

#include<iostream>

using namespace std;

int main() {
  int fut=0, eredet, klon;
  while(fut<2) {
	 eredet=1; klon=0;
	 if(fut==0) klon = eredet++;
	 else klon = ++eredet;
	 cout << "A másolat: " << klon << " és az eredeti: " << eredet << endl;
	 fut++;
  }
return 0;
}