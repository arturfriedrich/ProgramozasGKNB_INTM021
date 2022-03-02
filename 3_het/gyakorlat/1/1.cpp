// 3/1 do_while ciklus

#include<iostream>

#define KT 10

using namespace std;

int main() {
	int f_k=0, alap;
	double k_e=1;
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
	while(f_k <= KT) {
	  if(f_k!=0) k_e *= alap;
	  cout << alap << "^" << f_k << ". hatványa: " << k_e << endl;
	  f_k++;
	 } // hatvány ciklus
return 0;
}