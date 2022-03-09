// 3/4 buborék rendezés növekvőre ill. csökkenőre
#include<iostream>

using namespace std;

int main() {
	int fut=0, prtln[]={1, -3, 9, -7, 5};
	int n=sizeof(prtln)/sizeof(prtln[0]);
    while(fut<n) {	  
	    cout << " A tömb " << fut+1 << ". eleme a(z): '"; 
        cout.width(2);      // pozitív számot megadva adott szélességű hely "foglalódik"
        cout << prtln[fut] << "' amely a(z) " << fut << ". indexű!" << endl;
	    fut++;
    } // rendezetlen kiir ciklus
    // Buborék rendezés
    int v=n-1;
    while(v>=1) {
        int e=0, csere;
        while(e<v) {
            if(prtln[e]<prtln[e+1]) {  // '>'== növekvő ill. '<'== csökkenő
                csere=prtln[e]; prtln[e]=prtln[e+1]; prtln[e+1]=csere; 
            }
            e++;
        } // belső rendező ciklus
        v--;
    } // külső rendező ciklus
    fut=0; cout << endl;
    while(fut<n) {	  
	    cout << " A tömb " << fut+1 << ". eleme a(z): '"; 
        cout.width(2);
        cout << prtln[fut] << "' amely a(z) " << fut << ". indexű!" << endl;
	    fut++;
   } // rendezett kiir ciklus
    return 0;
}