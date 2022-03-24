// Írjon függvényt, amely két számot vár paraméterül és eredményül visszaadja a két szám maximumát!
// Olvasson be egy számot, amelyet eltárol jelenlegi maximális értékként!
// Olvasson be számokat addig, míg nem adunk meg háromszor is nagyobb számot az előzőeknél! A nagyobb számot mindig tárolja el jelenlegi maximumként!
// A feladat megoldásához használja fel az előzőleg megírt függvényt!

#include <iostream>

using namespace std;

int maximum(int a, int b) {
    return max(a, b);
}

int main() {
    int legnagyobb;
    cout << "Adjon meg egy számot: ";
    cin >> legnagyobb;
    int x;
    do {
        cout << "Adjon meg egy számot: ";
        cin >> x;
    } while ( legnagyobb*3 < x );
    return 0;
}