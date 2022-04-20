// 8/1/1 az 5/2, dinamikus tömb-kezeléses verziója
           // konstans hosszal

#include<iostream>

#define MAX 50

using namespace std;

int beker(int be_tb[])
{
   int i=0;
   do {
          cout << " Kérem a tömb " << i+1 << ". elemét: ";
          cin >> be_tb[i];
          if(be_tb[i]%2==1 or be_tb[i]%2==-1) { i++; cout << endl; }
        } while (i<MAX and be_tb[i]!=-2);
  cout << endl;
  return i;
}

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
         if(tb[e]>tb[e+1])
           { csere=tb[e]; tb[e]=tb[e+1]; tb[e+1]=csere; } } } 
	 cout << endl;
}

int main() {
	int* mutat;
    mutat = new int[MAX];
    //int* mutat = new int[MAX];
	int n=beker(mutat);
	kiir(mutat, n);
    buborek(mutat, n);
	kiir(mutat, n);
    delete [] mutat;
    mutat=0;    // nullázzuk az adott területet, így már lesz ott valami amit később tudunk törölni
    delete [] mutat; // 2x!! nem tudunk olyan memóriaterületet törölni ahol nincsen semmi, vagy más van
    cout << endl;
    return 0;
}