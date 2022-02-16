// Egymásba ágyazott ciklusok, if-else_if, logikai operátorok ''and" és "not", postfix 

#include<iostream>

#define KT 10

using namespace std;

int main() {
	int f_k=0, alap;
	double k_e=1;
	bool beker=true;
	// bool beker=0;
  while(f_k <= KT) {
	 while(beker) {			// while(!beker)
	   cout << "Kérem a nem nulla, egyszámjegyű  alapot: ";
	   cin >> alap; cout << endl;
	   if(alap>0 && alap<=9) beker=false;		// beker=1;
	   	// else cout << "A megadott alap nem egyszámjegyű!" << endl;
		else if(alap>9 && alap<=99)
					cout << "A megadott alap kétszámjegyű!" << endl;
			else if(alap>99 && alap<=999)
					cout << "A megadott alap három-számjegyű!" << endl; 
				else cout << "A megadott alap több mint három-számjegyű!" << endl;		 
	  } // belső ciklus
	  if(f_k!=0) k_e *= alap;
	  cout << alap << "^" << f_k << ". hatványa: " << k_e << endl;
	  f_k++;
	 } // külső ciklus
return 0;
}

/*
bool:
	- lehet true (1) vagy false (0) (igaz v. hamis)

logikai operátor:
	- és (and): &&
*/