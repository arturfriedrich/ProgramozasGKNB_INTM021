// Magasság bekérése után lépcső kirajzolása (i. sorban i db '*')

#include <iostream>
using namespace std;

int main() {
    cout << "A program bekéri a lépcső magasságát, majd kirajzolja azt." << endl;
    int n, i = 1, j = 1;
    cout << "Adja meg a magasságot: ";
    cin >> n;
    while ( i <= n ) {
        j = 1;
        while ( j <= i ) {
            cout << '*';
            j++;    
        }
        cout << endl;
        i++;
    }
    return 0;
}