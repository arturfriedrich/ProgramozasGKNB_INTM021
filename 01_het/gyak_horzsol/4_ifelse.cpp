// if-else vezérlési szerkezet
#include<iostream>

#define NK 42
#define AP 2
#define KT 10

using namespace std;

int main() {
    cout << "Összeg: " << NK + 2 << "\n" << "Különbség: " << NK - 2 << "\n" 
	        << "Szorzat: " << NK * 2 << endl;
	cout << "Hányados: " << NK / 2 << "\n" << "Maradék: " << NK % 2 << "\n" << endl;
	int f_k=0, k_e=1;
    while(f_k <= KT) {
	  if(f_k!=0) k_e *= AP;
	  cout << AP << "^" << f_k << ". hatványa: " << k_e << endl;
	  f_k += 1;
	 }
return 0;
}

/*
if, else:
    -ha a feltétel igaz, akkor a vezérlési szerkezet igaz ága
    if (feltétel) {
        igaz vezérlési szerkezet
    } else {
        ha a feltétel nem igaz, akkor ez a vezérlési szerkezet fut le
    }
*/