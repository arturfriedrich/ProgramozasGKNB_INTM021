#include <iostream>
#include <cmath>

#define AMP 30
#define STEP 50

using namespace std;

int main() {
    for ( int i=0; i<=STEP; i++ ) {
        for ( int j=sin(2. * M_PI * i / STEP) * AMP + AMP; j>=0; j--) {
            cout << ' ';
        }
        cout << "*\n";
    }
    return 0;
}