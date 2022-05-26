#include <iostream>
#include <climits>

int minoszlop(int **mtx, int s, int o) {
    int minindex = 0;
    int szum[o] = {0};
    for(int i=0; i<s; i++)
      {
        for(int j=0; j<o; j++)
          {
            szum[j] += mtx[i][j];
          }
      }
    for(int i=0; i<o; i++)
      {
        if(szum[minindex] > szum[i]) minindex = i;
      }
    return minindex;
}