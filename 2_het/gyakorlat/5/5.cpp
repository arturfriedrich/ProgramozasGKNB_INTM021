// vessző operátor a ciklusfejben

#include<iostream>
using namespace std;

int main() {
    char kar;
    int szam=1;
    while(cout << "\n Kérem a(z) " << szam << ". karaktert: ",
        kar=cin.get(), kar!='\n') {
	    szam++;
    cout << "A megadott karakter a(z): "  << kar << endl;
	}
    cout << "\n Az Ön kilépő karaktere a(z): "  << kar 
         << " amely a(z) " << szam << "." << endl;
return 0;
}