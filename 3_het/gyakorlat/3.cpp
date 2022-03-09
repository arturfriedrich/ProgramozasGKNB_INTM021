// 3/3 tömbök indexe vs. elemszáma, méret-operátor
#include<iostream>

using namespace std;

int main() {
	int fut=0, prtln[]={1, 3, 5, 7, 9};
	int n=sizeof(prtln)/sizeof(prtln[0]);
  while(fut<n) {	  
	cout << " A tömb " << fut+1 << ". eleme a(z): '" << prtln[fut] 
         << "' amely a(z) " << fut << ". indexű!" << endl;
	 fut++;
  } // kiir ciklus
return 0;
}