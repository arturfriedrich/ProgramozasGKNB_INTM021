#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
    int k, sorDB, szoDB, karDB;
    bool szoban = false;
    cout << "A bemenet karaktereinek, sorainak és\n"
         << "a szavainak megszámlálása\n"
         << "A bemenet vége: Ctrl + D vagy EOF. \n\n";
    sorDB = szoDB = karDB = 0;
    while ( (k=cin.get()) != EOF) {
        ++karDB;
        if ( k == '\n') ++sorDB;
        if ( k == ' ' or k == '\n' or k == '\t' ) szoban = false;
        else if ( not szoban ) {
            szoban = true;
            ++szoDB;
        }
    }
    cout << "sor = " << sorDB << ", szo = " << szoDB
         << ", karakter = " << karDB << endl;
    return 0;
}