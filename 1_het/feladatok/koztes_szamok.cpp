// Kérjünk be két számot, majd soroljuk fel a köztük lévő számokat, ha az első szám nagyobb, akkor csökkenő sorrendben

#include <iostream>

using namespace std;

int main() {
    cout << "A program bekér két számot majd kiírja a köztük évő számokat." << endl;
    int a, b, i;
    cout << "Adjon meg egy számot: ";
    cin >> a;
    cout << "Adjon meg egy számot: ";
    cin >> b;
    if (a < b) {
        i = a + 1;
        while (i < b) {
            cout << i << endl;
            i++;
        }
    } else if (a > b) {
        i = a - 1;
        while (i > b) {
            cout << i << endl;
            i--; 
        }
    } else {
        cout << "A két szám egyenlő." << endl;
    }
    return 0;
}