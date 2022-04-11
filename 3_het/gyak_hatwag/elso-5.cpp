//code from @MiklosHatwagner on replit

#include <iostream>
using namespace std;

/*
#define N 5

void nyomtat(int t[], int meret) {
  for(int i=0; i<meret; i++) {
    cout << t[i] << '\t';
  }
  cout << endl;
}

int main() {
  int n, i;
  int f[N] = {1, 2, 3, 4, 5};
  // int c[N];
  cout << "Mennyivel: ";
  cin >> n;
  if(n > N) n = N;
  int c[n];
  
  // shift jobbra segédtömbbel
  for(i=0; i<n; i++) {
    c[i] = 0;
  }
  for(; i<N; i++) {
    c[i] = f[i-n];
  }

  // shift jobbra, helyben
  for(i=N-1; i>=n; i--) {
    f[i] = f[i-n];
  }
  for(; i>=0; i--) {
    f[i] = 0;
  }

  nyomtat(f, N);

  for(i=0; i<n; i++) {
    c[i] = f[N-n+i];
  }
  for(i=N-1; i>=n; i--) {
    f[i] = f[i-n];
  }
  for(i=0; i<n; i++) {
    f[i] = c[i];
  }
  
  nyomtat(f, sizeof(f)/sizeof(f[0]));
  nyomtat(c, n);
}
*/

#include<cmath>
#define SOROK 14
#define OSZLOPOK 60
int main() {
  for(int s=SOROK/2; s>=-(SOROK/2); s--) {
    for(int o=0; o<OSZLOPOK; o++) {
      cout << ((int)round(sin(o * (2. * M_PI)/OSZLOPOK) * (SOROK)/2.) == s ? '*' : ' ');
    }
    cout << endl;
  }
  return 0;
}