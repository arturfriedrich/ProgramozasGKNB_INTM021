// Magasság bekérése után lépcső kirajzolása (i. sorban i db '*')
// Lépcső függőlegesen tükrözve (jobbra igazítva a csillagokat)

#include <iostream>
using namespace std;

int main() {
    cout << "A program bekéri a lépcső magasságát, majd kirajzolja azt." << endl;
    int n, i = 1, j = 1, k = 1;
    cout << "Adja meg a magasságot: ";
    cin >> n;
    while ( i <= n ) {
        j = 1;
        k = j;
        while ( j <= i ) {
            while ( k <= n - i ) {
                cout << ' ';
                k++;
            }
            cout << '*';
            j++;    
        }
        cout << endl;
        i++;
    }
    return 0;
}