#include <iostream>

#define DB 5

using namespace std;

struct munka{
  string elvegzo;
  string azonosito;
  int kezdes;
  int hossz;
};

bool utkozes(struct munka m1, struct munka  m2) {
    bool utkozik = false;
    if (m1.kezdes < m2.kezdes) {
        if ((m1.kezdes + m1.hossz) > m2.kezdes) utkozik = true;
    }
    else if (m1.kezdes > m2.kezdes) {
        if ((m2.kezdes + m2.hossz) > m1.kezdes) utkozik = true;
  }
  else utkozik = true;
  return utkozik;
  return false;
}

void kiiratas(struct munka m){
    int befejezes = m.kezdes + m.hossz;
    cout << m.elvegzo << " " << m.azonosito << " " << m.kezdes << ":" << befejezes << endl;
}

void rendez(struct munka m[], int n) {
    struct munka csere;
    int i=n-1, k=0;
    while(i>=1) {
        k=0;
        while(k<i) {
            if(m[k].elvegzo[0] > m[k+1].elvegzo[0]) {
            csere = m[k];
            m[k] = m[k+1];
            m[k+1] = csere;
            }
            k++;
        }
        i--;
    }
}

int main() {
    struct munka munkak[DB] = {
        {"Cecil", "a5", 10 , 5},
        {"Dani", "a4", 8 , 3},
        {"Ede", "a3", 10 , 5},
        {"Benedek", "a2", 10 , 5},
        {"Albert", "a1", 10 , 5}
    };

    int i;
    rendez(munkak, DB);
    for(i = 0; i < DB; i++) 
        kiiratas(munkak[i]);
    return 0;
}