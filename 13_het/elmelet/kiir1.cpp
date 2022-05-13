#include <iostream>
#include <fstream> // ofstream
using namespace std;

int main(int argc, char* argv[]) {
  if(argc != 2) {
    cout << "Hasznalat: " << argv[0] << " fajlnev\n";
  } else {
    ofstream f(argv[1]); // alapértelmezes: feluliras
    if(f.is_open()) {    //                (truncate)
      string dal[] = {
        "She's got a smile it seems to me",
        "Reminds me of childhood memories",
        "Where everything",
        "Was as fresh as the bright blue sky",
        "Now and then when I see her face",
        "She takes me away to that special place",
        "And if I'd stare too long",
        "I'd probably break down and cry"
      };
      for(unsigned i=0; 
          i<sizeof(dal)/sizeof(dal[0]); 
          i++) {
        f << dal[i] << endl;
      }
      f.close();
    } else {
      cerr << "Fajl nyitasi hiba.\n";
    }
  }
  return 0;
}
