// Bekérés (2, 3, 16)
#include<iostream>

#define KT 10

using namespace std;

int main() {
	unsigned int f_k=0, k_e=1, alap;
	cout << "Kérem az alapot: ";
	cin >> alap; cout << endl;
    while(f_k <= KT) {
	  if(f_k!=0) k_e *= alap;
	  cout << alap << "^" << f_k << ". hatványa: " << k_e << endl;
	  f_k += 1;
	 }
return 0;
}

/*
- cout: információt közlök
- cin: információt kér be

ha a 16-nak a hatványait szeretnénk visszakapni, akkor egy idő után az int túlcsordul, ezért nem fogja tudni
kiszámolni az értéket
- megoldás?: unsigned int (ez az int intervallumából eltávolítja a negatív számokat)
*/