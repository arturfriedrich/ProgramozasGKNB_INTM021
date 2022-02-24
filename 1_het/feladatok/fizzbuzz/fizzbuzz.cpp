// Koncentrációs játék, ahol 1-től kezdve soroljuk a számokat, és minden 3-mal 
// osztahtó szám helyett azt kell mondani, hogy Fizz, az 5-tel oszthatók helyett, 
// hogy Buzz. Ha 3-mal és 5-tel is osztható a szám, akkor azt kell mondani, hogy 
// FizzBuzz. Írjunk programot, ami ilyen módon számol 1-től 100-ig!

#include <iostream>

using namespace std;

int main() {
    int i = 1;
    while (i < 101) {
        if (i % 3 == 0 and i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}