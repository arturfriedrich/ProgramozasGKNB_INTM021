//code from @MiklosHatwagner on replit

#include <iostream>
using namespace std;

int main() {
  /*
  int a, b;
  cout << "Adjon meg ket szamot: ";
  cin >> a >> b;
  if(a < b) {
    cout << "Az elso kisebb, mint masodik.\n";
  } else if(a > b) {
    cout << "Az elso nagyobb, mint a masodik.\n";
  } else if(a == b) {
    cout << "A ket szam egyenlo.\n";
  }
  */

  /*
  int szam;
  while(cout<<"Adjon meg egy szamot: ",
        cin>>szam,
        szam%2==0) {
    cout << "A szam fele: " << szam/2 << endl;  
  }
  cout << "---\n";
  do {
    cout<<"Adjon meg egy szamot: ";
    cin>>szam;
    if(szam%2==0) {
      cout << "A szam fele: " << szam/2 << endl;
    }
  } while(szam%2==0);
  cout << "---\n";
  cout<<"Adjon meg egy szamot: ";
  cin>>szam;
  while(szam%2==0) {
    cout << "A szam fele: " << szam/2 << endl;
    cout<<"Adjon meg egy szamot: ";
    cin>>szam;
  }
  */
  /*
  int korabbi, kesobbi;
  int db=1, paros=0;
  cout << "Adja meg az elso szamot! ";
  cin >> kesobbi;
  if(kesobbi%2==0) paros++;
  do {
    korabbi = kesobbi;
    cout << "Adja meg a kovetkezo szamot! ";
    cin >> kesobbi;
    db++;
    if(kesobbi%2==0) paros++;
  } while(korabbi != kesobbi);
  cout << db << " darab szamot adott meg, melyek közül " << paros << " paros.\n";
  */

  /*
  int meret, sor=1, oszlop;
  cout << "Adja meg a negyzet meretet! ";
  cin >> meret;
  while(sor <= meret) {
    oszlop = 1;
    while(oszlop <= meret) {
      //if(sor==1 or sor==meret or sor+oszlop==meret+1 or sor==oszlop) {
      if((oszlop>=sor && oszlop<=meret-sor+1) or (oszlop<=sor && oszlop>=meret-sor+1)) {
        cout << '*'; 
      } else {
        cout << ' ';
      }
      oszlop++;
    }
    cout << '\n';
    sor++;
  }
  */

  /*
  int meret, sor=1, oszlop;
  cout << "Adja meg a lepcso meretet! ";
  cin >> meret;
  while(sor <= meret) {
    oszlop = 1;
    while(oszlop <= sor) {
      cout << '*'; 
      oszlop++;
    }
    cout << '\n';
    sor++;
  }
  */

  
  int meret, sor=1, oszlop;
  cout << "Adja meg a lepcso meretet! ";
  cin >> meret;
  while(sor <= meret) {
    oszlop = 1;
    while(oszlop <= meret-sor) {
      cout << ' '; 
      oszlop++;
    }
    while(oszlop <= meret) {
      cout << '*'; 
      oszlop++;
    }
    cout << '\n';
    sor++;
  }
  
}