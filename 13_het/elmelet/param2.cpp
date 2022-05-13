#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  cout << "Az elinditott program neve: " 
       << argv[0] << endl;
  if(argc == 1) {
    cout << "Nem adtak meg parametereket.\n";
  } else {
    for(argv++; *argv != NULL; argv++) {
      cout << *argv << endl;
    }
  }
  return 0;
}
