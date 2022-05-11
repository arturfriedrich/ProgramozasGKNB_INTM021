#include "decl.hpp"

void monogram(const char (*szk)[OP], char m[][OP])
{
  int j; 
  char t;
  for(int i=0; i<SR; i++) {
   m[i][0]=*((*(szk+i))+0); m[i][1]='.'; m[i][2]=' ';
   t='!';
   for(j=0; t!=' '; j++) { t=*((*(szk+i))+j); }
   m[i][3]=*((*(szk+i))+j); m[i][4]='.'; m[i][5]='\0';
  } // külső for
}

void kiir(const char (*ki_tb)[OP], bool mit)
{
 string io; 
 if(mit) io=" alap ";
 else io=" monogram ";
 for(int i=0; i<SR; i++) {
  cout << "\n A(z)" << io << "mátrix " << i+1 << ". eleme: "
       << *(ki_tb+i); } //ki_tb, (*ki_tb), (*ki_tb)+i != *(ki_tb+i)!!!
}