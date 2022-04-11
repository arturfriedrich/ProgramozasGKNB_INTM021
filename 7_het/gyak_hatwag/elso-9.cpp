//code from @MiklosHatwagner on replit

#include <iostream>
using namespace std;

struct koord {
  double x, y;
};
struct haromszog {
  koord A, B, C;
};

void beolvas(haromszog* ph) {
  cout << "A csúcs X: "; cin >> ph->A.x;
  cout << "A csúcs Y: "; cin >> ph->A.y;
  cout << "B csúcs X: "; cin >> ph->B.x;
  cout << "B csúcs Y: "; cin >> ph->B.y;
  cout << "C csúcs X: "; cin >> ph->C.x;
  cout << "C csúcs Y: "; cin >> ph->C.y;
}

void nyomtat(const haromszog* ph) {
  cout << "A csúcs X: " << ph->A.x << endl;
  cout << "A csúcs Y: " << ph->A.y << endl;
  cout << "B csúcs X: " << ph->B.x << endl;
  cout << "B csúcs Y: " << ph->B.y << endl;
  cout << "C csúcs X: " << ph->C.x << endl;
  cout << "C csúcs Y: " << ph->C.y << endl;
}

int main() {
  /*
  int i;
  int *pi;
  */
  /*
  int i, *pi;
  cout << "Adjon meg egy szamot! ";
  cin >> i;
  cout << "Ezt adta meg: " << i << endl;

  pi = &i;
  cout << "Adjon meg egy ujabb szamot! ";
  cin >> *pi;
  cout << "i valtozo erteke: " << i << endl;
  cout << "i helye a tarban: " << &i << endl;
  cout << "i valtozo erteke: " << *pi << endl;
  cout << "i helye a tarban: " << pi << endl;
  cout << "pi helye a tarban: " << &pi << endl;
  */

  /*
  int egeszek[6];
  cout << "Adja meg az egeszeket!\n";
  for(int i=0; i<6; i++) {
    cout << (i+1) << ". szam: ";
    cin >> egeszek[i];
  }
  int* mutatok[10];
  cout << "Adjon meg tovabbi 10, "
          "ellenorzendo szamot!\n";
  for(int i=0; i<10; i++) {
    int szam, j;
    cout << (i+1) << ". kikeresendo ertek: ";
    cin >> szam;
    for(j=0; j<6 and egeszek[j]!=szam; j++);
    if(j == 6) {
      //mutatok[i] = nullptr;
      *(mutatok+i) = nullptr;
    } else {
      //mutatok[i] = &egeszek[j];
      mutatok[i] = egeszek+j;
    }
  }
  for(int i=0; i<10; i++) {
    cout << "Index: " << i << ", ide mutat: " 
         << mutatok[i] << ", ahol ez van: ";
    if(mutatok[i]==nullptr) {
      cout << "---";
    } else {
      cout << *mutatok[i];
    }
    cout << endl;
  }
  */

  /*
  struct koord {
    double x, y, z;
  } tomb[2], *ps=tomb, *vege;
  for(int i=0; i<2; i++) {
    cout << (i+1) << ". koordinata:\n";
    cout << "\tx: "; cin >> (*(ps+i)).x;
    cout << "\ty: "; cin >> (ps+i)->y;
    cout << "\tz: "; cin >> ps[i].z;
  }
  cout << "A tomb elemei rendre:\n";
  for(vege=tomb+2, ps=tomb; ps<vege; ps++) {
    cout << ps->x << '\t' << ps->y << '\t' << ps->z << endl;
  }

  struct proba {
    char c;
    double d;
    char cc;
    int i;
  } p;
  cout << "proba mérete: " << sizeof(proba) << ", helye: "
       << &p << endl;
  cout << "char mérete: " << sizeof(char) << ", helye: "
       << (void*)(&p.c) << endl;
  cout << "double mérete: " << sizeof(double) << ", helye: "
       << &p.d << endl;
  cout << "char mérete: " << sizeof(char) << ", helye: "
       << (void*)(&p.cc) << endl;
  cout << "int mérete: " << sizeof(int) << ", helye: "
       << &p.i << endl;
*/

  haromszog h;
  beolvas(&h);
  nyomtat(&h);
  

  
}