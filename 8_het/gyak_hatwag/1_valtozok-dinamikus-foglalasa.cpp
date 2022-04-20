// Hozzon létre egy egész számot címző mutatót!
// Foglalja le az egész számnak szükséges helyet!
// Olvasson be egy számot a memóriaterületre!
// Írassa ki a képernyőre a beolvasott számot!
// Szabadítsa fel a használt memóriaterületet!

#include <iostream>

using namespace std;

int main() {
    // int *egesz; egesz = new int;
    int *egesz = new int;
    if ( egesz == NULL ) {
        cerr << "Memóriafoglalási hiba." << endl;
        return -1;
    }
    cout << "Adjon meg egy egész számot: ";
    cin >> *egesz;
    cout << "A beolvasott érték: " << *egesz << endl;
    delete egesz;

    return 0;
}