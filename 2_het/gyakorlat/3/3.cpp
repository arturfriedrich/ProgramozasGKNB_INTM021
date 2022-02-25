// Logikai operátor ''or"

#include<iostream>

using namespace std;

int main() {
  char kar;
	int szam=0;
    do {
	    szam++;
	    cout << "\n Kérem a(z) " << szam << ". karaktert: ";
        cin >> kar ;
        cout << "A megadott karakter a(z): "  << kar << endl;
	} while(kar=='a' || kar=='A' || kar=='z' || kar=='Z');
    cout << "\n Az Ön kilépő karaktere a(z): "  << kar
	     << " amely a(z) " << szam << "." << endl;
return 0;
}