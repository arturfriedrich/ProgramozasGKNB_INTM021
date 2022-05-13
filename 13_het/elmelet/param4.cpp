#include <iostream> // cout
#include <cstdlib>  // srand, rand, atoi
#include <ctime>    // time
using namespace std;

int main(int argc, char* argv[]) {
  if(argc != 3) {
    cout << "Hasznalat: " << argv[0] << " min max\n";
  } else {
    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    srand(time(NULL));
    cout << "A [" << min << ", " << max 
         << "] intervallumba "
         << "eso veletlen szam: " 
         << min + rand()%(max-min+1) << endl;
  }
  return 0;
}
