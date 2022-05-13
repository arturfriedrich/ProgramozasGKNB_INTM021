#include <iostream> // cout
#include <cstdlib>  // srand, rand
#include <ctime>    // time
#include <sstream>  // stringstream
using namespace std;

int main(int argc, char* argv[]) {
  if(argc != 3) {
    cout << "Hasznalat: " << argv[0] << " min max\n";
  } else {
    stringstream ss;
    int min, max;
    ss << argv[1] << ' ' << argv[2];
    ss >> min;
    ss >> max;
    srand(time(NULL));
    cout << "A [" << min << ", " << max
         << "] intervallumba "
         << "eso veletlen szam: " 
         << min + rand()%(max-min+1) << endl;
  }
  return 0;
}
