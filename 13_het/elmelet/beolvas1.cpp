#include <iostream>
#include <fstream> // ifstream
using namespace std;

int main(int argc, char* argv[]) {
  if(argc != 2) {
    cout << "Hasznalat: " << argv[0] << " fajlnev\n";
  } else {
    ifstream f(argv[1]);
    if(f.is_open()) {
      char c;
      while(f.get(c), !f.eof()) cout << c;
      f.close();
    } else {
      cerr << "Fajl nyitasi hiba.\n";
    }
  }
  return 0;
}
