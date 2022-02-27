#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool megszerkesztheto = false;
    cout << "Adja meg a háromszög oldalhosszait: " << endl;
    do {    
        do {    // hátultesztelő ciklus eleje...
            cout << "A oldal hossza: ";
            cin >> a;
        } while ( a <= 0 );   // ...és vége
        do {    
            cout << "B oldal hossza: ";
            cin >> b;
        } while ( b <= 0 );
        do {
            cout << "C oldal hossza: ";
            cin >> c;
        } while ( c <= 0 );
        if ( a + b <= c or b + c <= a or c + a <= b )   // alternatív szintakszis
            cout << "A háromszög nem megszerkeszthető." << endl;
        else {
            megszerkesztheto = true;
            cout << "A háromszög megszerkeszthető." << endl;
        } 
    } while ( not megszerkesztheto );
    return 0;
}