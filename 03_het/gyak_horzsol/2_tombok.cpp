// 3/2 tömbök
#include<iostream>

#define KT 10

using namespace std;

int main() {
	int f_k=0, alap;
	// double k_e[KT+1];
    double k_e[KT+1]={0};     // ha nincs kinullázva a tömb, a complier feltölti szeméttel
    /* 
    while(f_k<=KT) {	  
        cout << " A tömb " << f_k+1 << ". eleme: " << k_e[f_k] << "\n";
        f_k++;
	 } // kiir ciklus
    cout << endl; 
    */
	bool beker=true;
	do {
	   cout << "Kérem a nem nulla, egyszámjegyű  alapot: ";
	   cin >> alap; cout << endl;
	   if(alap>0 and alap<=9) beker=false;
	   else if(alap==0)
	        cout << "A megadott alap a nulla!" << endl;	  
     else if(alap>9 and alap<=99)
	        cout << "A megadott alap kétszámjegyű!" << endl;
	   else if(alap>99 and alap<=999)
	        cout << "A megadott alap három-számjegyű!" << endl; 
		 else cout << "A megadott alap több mint három-számjegyű!" << endl;
	  } while(beker); // bekérő ciklus
	while(f_k<=KT) {
        if(f_k==0) k_e[0]=1;
        else k_e[f_k] = k_e[f_k-1] * alap;
        cout << alap << "^" << f_k << ". hatványa: " << k_e[f_k] << endl;
        f_k++;
	 } // hatvány ciklus
    cout << endl; f_k=KT;
    while(f_k>=0) {	  
        cout << alap << "^" << f_k << ". hatványa: " << k_e[f_k] << endl;
        f_k--;
    } // fordított kiir ciklus	 */
    return 0;
}

// a tömb 0. indexe határozza meg a tömb címét a memóriában