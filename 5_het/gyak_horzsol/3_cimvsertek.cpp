// 5/3 cím vs. érték szerinti paraméter átadás
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

void buborek(int tb[], int *lt)     // a * paraméternél mutatja, hogy ez cím szerint van megadva
{
   for(int v=(*lt)-1; v>=1; v--) {
        for(int e=0, csere; e<v; e++) {
            if(tb[e]>tb[e+1])  // '>'== növekvő ill. '<'== csökkenő
                { csere=tb[e]; tb[e]=tb[e+1]; tb[e+1]=csere; }
        }  // belső rendező ciklus
    } // külső rendező ciklus
	 cout << endl; (*lt)+=2;
}

int main() {
	int prtln[MAX]={0};
	int n=beker(prtln);
	kiir(prtln, n);
    buborek(prtln, &n);     // a & a címképző operátor, ilyenkor a & utáni változó cím szerint van 
	kiir(prtln, n);         // megadva, ilyenkor tudja a többi függvény, hogy meg van változtatva másik függvények által
  return 0;
}

// ha egy likális változó változik és ezt függvények között átadjuk és ezeken belül változtatjuk akkor a címére kell
// mutatnunk