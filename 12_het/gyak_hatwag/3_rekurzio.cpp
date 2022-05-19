// A matematikában egy n nemnegatív egész szám faktoriálisának az n-nél kisebb vagy egyenlő pozitív egész számok szorzatát nevezzük. Jelölése: n!, amit „n faktoriális”-nak vagy „n faktor”-nak olvasunk ki. Írjon programot, amely képes a faktoriális kiszámítására!
// A Fibonacci-számok a matematikában az egyik legismertebb másodrendben rekurzív sorozat elemei. A nulladik eleme 0, az első eleme 1, a további elemeket az előző kettő összegeként kapjuk. Írjon programot amely  kiszámolja egy adott szám Fibonacci értékét!

#include <iostream>

using namespace std;

int faktorialis(int n) {
    if ( n < 2 ) {
        return 1;
    } else {
        return n * faktorialis(n-1);
    }
}

int fibonacci(int tag) {
    if ( tag < 2 ) {
        return tag;
    } else {
        return fibonacci(tag-1) + fibonacci(tag-2);
    }
}

int main() {
    cout << "5! = " << faktorialis(5) << endl;
    cout << "A Fibonacci sorozat 5. tagja: " << fibonacci(5) << endl;
    return 0;
}