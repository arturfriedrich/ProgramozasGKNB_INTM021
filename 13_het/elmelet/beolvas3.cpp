#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
  if(argc != 2) {
    cout << "Hasznalat: " << argv[0] << " fajlnev\n";
  } else {
    ifstream f(argv[1]);
    if(f.is_open()) {
      string s;
      while(getline(f, s), !f.eof()) {
        cout << s << endl;
      }
      f.close();
    } else {
      cerr << "Fajl nyitasi hiba.\n";
    }
  }
  return 0;
}
