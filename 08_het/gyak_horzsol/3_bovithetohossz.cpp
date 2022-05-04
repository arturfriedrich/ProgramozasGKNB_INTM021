// 8/1/3
           // bővíthető hosszal

#include<iostream>
#include<cstring>

using namespace std;

#define VZ 256

int* bovit(int *n, int *j, int nb, int tomb[])
{
    cout << " Erre az eredeti címre mutat a 'mutat': "
        << tomb; 
    cout << "\n Erre az eredeti tartalomra mutat a 'mutat': "
        << (*tomb); //tomb[0]
    (*j)=(*n); (*n)+=nb;
    int* mutat_b = new int[*n];
    cout << "\n Erre a bővített címre mutat a 'mutat_b': "
        << mutat_b << endl;
    for(int i=0; i<(*j); i++) { mutat_b[i] = tomb[i]; }
    delete [] tomb;
    cout << "\n A törlés után ez lett az eredeti tartalom: "
        << tomb[0];
    tomb=mutat_b; 
    cout << "\n A cím átadása után erre a bővített új címre mutat a 'mutat': "
        << tomb << endl;
    mutat_b=0;
    delete [] mutat_b; // nem kell!
    return tomb;
}

int h_be(bool ezt)
{
 int h=0;
 do {
     if(ezt) cout << "\n\t Kérem a tömb hosszát: ";
     else cout << "\n\t Kérem a bővítés db számát: ";
	   cin >> h;
    } while(h<=0);
 cout << "\n" << endl;
 return h;
}

int tovabb()
{
  char valasz[VZ];
  int db=-1;
  cin.getline(valasz,VZ); // billentyűzet puffer űrítése!
  cout << "\n Szeretne további adatokat tárolni? [i/n]: ";
  cin.getline(valasz,VZ);
  if(valasz[0]=='i') db=h_be(0);
  return db;
}

void beker(int be_tb[],int h, int i)
{
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
  int n, nb, j=0;
  int* mutat=new int[n=h_be(1)];
  cout << " Erre az eredeti címre mutat a 'mutat': "
       << mutat << "\n\n";
  do {
	    beker(mutat,n, j);
	    kiir(mutat,n);
        buborek(mutat,n);
	    kiir(mutat,n);
        nb=tovabb();
        if(nb!=-1) { mutat=bovit(&n, &j, nb, mutat);
            cout << "\n Erre a bővített új címre mutat a main-ben a 'mutat': " 
                << mutat;
            cout << "\n Erre a bővített tartalomra mutat a main-ben a 'mutat': " 
                << *mutat << "\n\n";
      }
    } while(nb!=-1);
  delete [] mutat; mutat=0;
  cout << endl;
  return 0;
}