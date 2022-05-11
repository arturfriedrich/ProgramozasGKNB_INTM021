#include "decl.hpp"

string* feltolt(const char (*a_b)[OP])
{
  string* szk=new string[SR];
  for(int i=0; i<SR; i++) { szk[i]=a_b[i]; }
  return szk;
}

void monogram(const string* szk, string* m)
{
  int j; 
  char t;
  string def="12345"; 
  for(int i=0; i<SR; i++) {
   m[i]=def;
   m[i][0]=szk[i][0]; m[i][1]='.'; m[i][2]=' ';
   t='!';
   for(j=0; t!=' '; j++) { t=szk[i][j]; }
   m[i][3]=szk[i][j]; m[i][4]='.';// m[i][5]='\0'; Nem kell!
  } // külső for
}

void kiir(const string* ki_pt, bool mit)
{
 string io;
 if(mit) io=" alap ";
 else io=" monogram ";
 for(int i=0; i<SR; i++) {
  cout << "\n A(z)" << io << "mátrix " << i+1 << ". eleme: "
       << ki_pt[i]; }
}