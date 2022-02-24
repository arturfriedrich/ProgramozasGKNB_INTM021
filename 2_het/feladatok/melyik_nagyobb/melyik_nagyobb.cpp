// Kérjünk be két számot, majd mondjuk meg, hogy az első a nagyobb, a második, vagy egyenlők!

#include <iostream>
using namespace std;

int main() {
    cout << "A program bekér két számot, majd megadja, melyik a nagyobb." << endl;
    int a, b;
    cout << "Adja meg az első számot: ";
    cin >> a;
    cout << "Adja meg a második számot: ";
    cin >> b;
    if (a > b) {
        cout << "Az első szám (" << a << ") a nagyobb" << endl;
    } else if (a < b) {
        cout << "Az második szám (" << b << ") a nagyobb" << endl;
    } else {
        cout << "A két szám egyenlő." << endl;
    }
    return 0;
}