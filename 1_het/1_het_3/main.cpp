// Konstansok/Literálok
#include<iostream>

#define NK 42
#define FJ '!'
#define SZ "\n\t Az élet értelme: "

using namespace std;

int main() {
  // cout << "\n\t Az élet értelme: 42!\n" << endl; // Literálok
	cout << SZ << NK << FJ  << "\n" << endl;
return 0;
}


/*
JEGYZETEK:
Konstansok:
    - konstansokat a #define segítségével deklaráljuk, ezek után nem kell ;-t használni
    - a konstans lehet akármilyen adattípus
    - a konstansokat csupa nagybetűvel ajánlott írni írni
    - a konstans fordítási időben változtatható
    - konstanst csak a main előtt lehet létrehozni

Egyéb megjegyzések:
\t - tabulátor (a moodle rendszerben nem működik, ott ne használd!!)
*/