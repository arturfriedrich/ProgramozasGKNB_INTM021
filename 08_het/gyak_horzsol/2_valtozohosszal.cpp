// 8/1/2 
           // változó hosszal

#include<iostream>

using namespace std;

int h_be()
{
 int h=0;
 do {
     cout << "\n\t Kérem a tömb hosszát: ";
	   cin >> h;
    } while(h<=0);
 cout << "\n" << endl;
 return h;
}

void beker(int be_tb[],int h)
{
 int i=0;
 do {
     cout << " Kérem a tömb " << i+1 << ". elemét: ";
     cin >> be_tb[i];
     if(be_tb[i]%2==1 or be_tb[i]%2==-1) { i++; cout << endl; }
    } while(i<h);
 cout << endl;
}

void kiir(int tomb[],int ig)
{
 for(int fut=0; fut<ig; fut++) {	  
	 cout << " A tömb " << fut+1 << ". eleme a(z): '"; 
   cout.width(2);
   cout << tomb[fut] << "' amely a(z) " << fut << ". indexű!" << endl; }
}

void buborek(int tb[],int lt)
{
  for(int v=lt-1; v>=1; v--) {
     for(int e=0, csere; e<v; e++) {
        if(tb[e]>tb[e+1])
          { csere=tb[e]; tb[e]=tb[e+1]; tb[e+1]=csere; } } } 
	cout << endl;
}

int main() {
    int n;
    int* mutat = new int[n=h_be()];
    beker(mutat,n);
    kiir(mutat,n);
    buborek(mutat,n);
	kiir(mutat,n);
    delete [] mutat; mutat=0;
    cout << endl;
    return 0;
}