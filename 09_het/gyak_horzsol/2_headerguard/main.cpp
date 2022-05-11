#include "decl.hpp"

int main()
{
  bool ki;
  string* szerzok;
  string f_be="Data.txt", f_ki="Mgms.txt";
  szerzok=feltolt(f_be);
  if(szerzok) {
   cm_nv(szerzok); 
   ofstream fw(f_ki);
   kiir(szerzok,1,fw); cout << endl;
   string* mgm=new string[SR];
   monogram(szerzok,mgm);
   ki=kiir(mgm,0,fw); cout << endl;
   if(ki) fw.close();
   delete [] mgm; mgm=0;
   delete [] szerzok; szerzok=0;
  }
  return 0;
}