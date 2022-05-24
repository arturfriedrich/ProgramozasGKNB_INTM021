#include <iostream>
#include <fstream>
#include <cmath>

#define DB 10

using namespace std;

double area(string fbe) {
    ifstream f(fbe);
    if ( f.is_open() ) {
        int a[DB];                                                                  // tömbök létrehozása, ő dinamikusan csinálta (???) de szerintem felesleges és nem effektív
        int b[DB];
        int szg[DB];
        double t[DB];
        for ( int i=0; i<DB; i++ ) {
            f >> a[i]
              >> b[i]
              >> szg[i];
            t[i] = (a[i] * b[i] * sin(szg[i] * M_PI / 180)) / 2;                    // kiszámoljuk a területet (hegyesszöggé kell alakítani a szöget)
        }
        f.close();
        
        int n = 0;
        double sum = 0;
        for ( int i=0; i<DB; i++ ) {
            if ( t[i] >= 2000 && t[i] <= 8000 ) {                                   // kiválogatjuk ami nem kell
                cout << t[i] << endl;
                n += 1;
                sum += t[i];
            }
        }
        return sum/n;

    } else { cout << "Sikerelen file-nyitás!" << endl; return -1; }
}

int main() {
    cout << area("Tri.txt") << endl;
    

    return 0;
}