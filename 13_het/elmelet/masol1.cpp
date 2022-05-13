#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
  if(argc != 3) {
    cout << "Hasznalat: " << argv[0] 
         << " forras cel\n";
  } else {
    ifstream be(argv[1]);
    if(be.is_open()) {
      ofstream ki(argv[2]);
      if(ki.is_open()) {
        char c;
        while(be.get(c), !be.eof()) {
          ki << c;
        }
        ki.close();
      } else {
        cerr << "Megnyitasi hiba: " 
           << argv[2] << endl;
      }
      be.close();
    } else {
      cerr << "Megnyitasi hiba: " 
           << argv[1] << endl;
    }
  }
  return 0;
}
