#include <iostream>
using namespace std;

// deklaracio
int osszead(); // csak visszateresi ertek es nev
int osszead();
int i;
/* valtozo ujradeklaralasa tiltott
   error: redefinition of 'int i'
int i; */
struct s {
  int tag1;
  double tag2;
};
/* tipus (struktura) ujradeklaralasa titltott
   error: redefinition of 'struct s'
struct s {
  int tag1;
  double tag2;
}; */

// prototipus, azonositok nelkul
int osszead(int, int); // vissz. ertek, nev, parameterek
                       // tipusa+sorrendje rogzitett
// prototipus, azonositokkal
int osszead(int x, int y); // azonositok hatokore csak
int osszead(int k, int l); // a prototipusra terjed ki

int main(void) {
  cout << "2 + 3 = " << osszead(2, 3) << endl;
  return 0;
}

// definicio: teljes formai informacio a fuggvenyrol
int osszead(int a, int b) {
  return a+b;
}

/* ujradefinialas tiltott
   error: redefinition of ‘int osszead(int, int)’
int osszead(int a, int b) {
  return a+b;
} */
