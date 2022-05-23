#include<iostream> 
#include <cstring>
using namespace std;
#define MAX 50

int feltolt(char s_tb[]){
    
    cin.getline(s_tb, MAX);
    return strlen(s_tb);
}

void torol(char s_tb[], int h)
{
    
    /*int i, j;
  for(i=h-1; i>0; i--)
    { if(i%2==0) {
       for(j=i; j<h+1; j++)
         { s_tb[j-1]=s_tb[j]; } h--; } }
   cout << s_tb << endl;*/
   int ujIndex = 0;
  for (int i = 0; i < h; i += 2)
  {
    s_tb[ujIndex] = s_tb[i];
    ujIndex++;
  }

  for (int i = 0; i < ujIndex; i++)
  {
    cout << s_tb[i];
  }
  cout << endl;
}

int main(){
    char karakterek[MAX];
    
    torol(karakterek, feltolt(karakterek));


    
    return 0;
}