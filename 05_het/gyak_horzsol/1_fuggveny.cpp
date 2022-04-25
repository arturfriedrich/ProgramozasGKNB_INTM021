// 5/1, amely a 3/4 függvényes verziója

#include<iostream>

using namespace std;

void kiir(int tomb[], int ig)
{
  for(int fut=0; fut<ig; fut++) {	  
	  cout << " A tömb " << fut+1 << ". eleme a(z): '"; 
    cout.width(2);
    cout << tomb[fut] << "' amely a(z) " << fut << ". indexű!" << endl;
  }
}

void buborek(int tb[], int lt)
{
   for(int v=lt-1; v>=1; v--) {
      for(int e=0, csere; e<v; e++) {
         if(tb[e]>tb[e+1])  // '>'== növekvő ill. '<'== csökkenő
           { csere=tb[e]; tb[e]=tb[e+1]; tb[e+1]=csere; }
      }  // belső rendező ciklus
    } // külső rendező ciklus
	 cout << endl;
}

int main() {
	int prtln[]={1, -3, 9, -7, 5};
	int n=sizeof(prtln)/sizeof(prtln[0]);
	kiir(prtln, n);
  buborek(prtln, n);
	kiir(prtln, n);
  return 0;
}