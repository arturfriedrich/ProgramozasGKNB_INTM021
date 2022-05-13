#include <iostream>
#include <fstream>
using namespace std;
#define MERET 65536

int main(int argc, char* argv[]) {
  if(argc != 3) {
    cout << "Hasznalat: " << argv[0] 
         << " forras cel\n";
  } else {
    ifstream be(argv[1], ios::binary);
    if(be.is_open()) {
      ofstream ki(argv[2], ios::binary);
      if(ki.is_open()) {
        char* puffer = new char[MERET];
        int beolvasva;
        do {
          be.read(puffer, MERET);
          beolvasva = be.gcount();
          ki.write(puffer, beolvasva);
        } while(beolvasva == MERET);
        delete [] puffer;
        ki.close();
      } else {
        cerr << "Megnyitasi hiba: " << argv[2] << endl;
      }
      be.close();
    } else {
      cerr << "Megnyitasi hiba: " << argv[1] << endl;
    }
  }
  return 0;
}
