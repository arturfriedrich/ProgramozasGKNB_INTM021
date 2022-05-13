#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  cout << "Az elinditott program neve: " 
       << argv[0] << endl;
  if(argc == 1) {
    cout << "Nem adtak meg parametereket.\n";
  } else {
    for(int i=1; i<argc; i++) {
      cout << i << ". parameter: " << argv[i] << endl;
    }
  }
  return 0;
}
