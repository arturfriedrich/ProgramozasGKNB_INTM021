#include <iostream>
#include <cmath>

#define WIDTH 100
#define HEIGHT 30

using namespace std;

int main() {
    for ( int r=HEIGHT; r>=0; r-- ) {
        for ( int c=0; c<=WIDTH; c++ ) {
            if ( r ==round(sin(2. * M_PI * c / WIDTH) * (HEIGHT / 2) + (HEIGHT / 2)) ) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}