#include <iostream>
#include <string>

using namespace std;

string szokozkiszed(string &s) {
    string holder = s;
    holder.erase(remove(holder.begin(), holder.end(), ' '), holder.end());
    cout << holder;

    return "";
}

void betubolszam(string &s) {
    for ( unsigned int i=0; i<s.length(); i++ ) {
        if ( (int)s[i] - 96 > 0 ) {
            cout << ((int)s[i] - 96);
        } else cout << s[i];
    }
    cout << endl;
}

int main() {
    string teszt1 = "a b c d e f"; cout << teszt1 << "\n";
    cout << szokozkiszed(teszt1) << "\n";
    betubolszam(teszt1);

    cout << endl;

    string teszt2 = "abc  XYZ"; cout << teszt2 << "\n";
    cout << szokozkiszed(teszt2) << "\n";
    betubolszam(teszt2);

    cout << endl;

    string teszt3 = "ff  ff  aa"; cout << teszt3 << "\n";
    cout << szokozkiszed(teszt3) << "\n";
    betubolszam(teszt3);

    cout << endl;

    string teszt4 = "abcdef"; cout << teszt4 << "\n";
    cout << szokozkiszed(teszt4) << "\n";
    betubolszam(teszt4);

    return 0;
}

/*  int kar;
	int szam=1;
    while(cout << "\n Kérem a(z) " << szam << ". karaktert: ",
        kar=cin.get(), kar!=EOF) {
	    szam++;
        cout << "A megadott karakter a(z): "  << kar << endl;
	}
    cout << "\n Az Ön kilépő karaktere a(z): "  << kar 
         << " amely a(z) " << szam << "." << endl;
    return 0; */