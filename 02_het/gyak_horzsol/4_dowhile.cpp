// do while ciklus (több/ékezetes karakter egyidejű megadása!), get() fgv.

#include<iostream>

using namespace std;

int main() {
  char kar;
	int szam=0;
    do {
	   szam++;
	   cout << "\n Kérem a(z) " << szam << ". karaktert: ";
     cin >> kar ;
	   // cin >> kar  >> kar >> kar; // 3 kar esete pl.: b C d, szóköz!
	   // kar=cin.get();
     cout << "A megadott karakter a(z): "  << kar << endl;
	  } while(kar!='a' && kar!='A' && kar!='z' && kar!='Z');
	    // while(kar!='\n'); // elso masodik
    cout << "\n Az Ön kilépő karaktere a(z): "  << kar
	       << " amely a(z) " << szam << "." << endl;
return 0;
}