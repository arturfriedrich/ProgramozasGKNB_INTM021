// 3/5 string mint tömb, szöveg összefűzések és összehasonlítások
#include<iostream>

using namespace std;

int main() {
	int fut=0, prtln[]={1, 3, 5, 7, 9};
	int n=sizeof(prtln)/sizeof(prtln[0]);
    string el=" A tomb ", ms=". eleme a(z): '",
           hr="' amely a(z) ", ng=". indexu!", mind="\n";       // ha string akkor ""
    while(fut<n) {	  
	    cout << el << fut+1 << ms << prtln[fut] 
             << hr << fut << ng << endl;
	    fut++;
    } // kiir ciklus
    cout << "\n Az első hossza: " << el.length();       // a string egy object
    cout << "\n Az első 2" << ms << el[1] << "'";
    cout << "\n Az első 7" << ms << el[6] << "'" << endl;
    mind+=el+ms+hr+ng;
    cout << mind << "\n Az összefűzés hossza: " << mind.length();
    cout << "\n A mind 1" << ms << mind[0] << "'";
    if(mind[0]=='\n') cout << "\n Ez az 'Új-sor' kódja!";
    if(el==" A tomb ") cout << "\n Ez valóban az első!" << endl;
    return 0;
}