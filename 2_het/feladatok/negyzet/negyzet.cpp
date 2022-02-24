// Kérjünk egy számot, rajzoljunk ennyi karakter széles négyzetet a képernyőre
// Rajzoljuk be a két átlót is
// https://drive.google.com/file/d/1UvoBbfa6Dq-p1QENBRnQ4VBRkfj1fk5Q/view

#include <iostream>
using namespace std;

int main() {
    cout << "A program bekér egy számot, majd rajzol egy annyi karakter széles négyzetet a képernyőre." << endl;
    cout << "Adjon meg az oldalhosszt: ";
    int n;
    cin >> n;
    int sor, oszlop;
    sor = 0;
    while ( sor < n ) {
        oszlop = 0;
        while ( oszlop < n ) {
            if ( sor == 0 or sor == n-1 ) {     // első és utolsó sor csupa csillag
                cout << '*';
            } else if ( oszlop == 0 or oszlop == n-1 ) {    // középső sorok két vége csillag
                cout << '*';
            } else if ( sor == oszlop or sor + oszlop == n-1 ) {     // átlók
                cout << '*';
            } else {
                cout << ' ';
            }
            oszlop++;
        }
        cout << endl;
        sor++;
    }
    return 0;
}