#include "decl.hpp"

string* feltolt(string fbe)
{
  ifstream fg(fbe);
  if(fg.is_open()) {
   string* szk=new string[SR];
   for(int i=0; i<SR; i++) { getline(fg,szk[i]); }
   fg.close();
   return szk; 
  }
  else { cerr << "\n Sikertelen file-nyitás!\n" << endl; return 0; }
}

void cm_nv(string* szk)
{
 for(int i=0; i<SR; i++) {
  cout << "\n A(z) " << i+1 << ". elem címe: "
       << &szk[i] << endl;
  cout << " A(z) " << i+1 << ". elem tartalma: "
       << szk[i] << endl; }
  cout << "\n A mátrix címe: " << szk
       << "\n A mátrix 1. eleme: " << (*szk) << endl;
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
   m[i][3]=szk[i][j]; m[i][4]='.';
  } // külső for
}

bool kiir(const string* ki_pt, bool mit, ofstream& fw)
{
 bool ki=0;
 string io; 
 if(mit) io=" alap ";
 else io=" monogram ";
 if(fw.is_open()) ki=1;
 for(int i=0; i<SR; i++) {
  cout << "\n A(z)" << io << "mátrix " << i+1 << ". eleme: "
       << ki_pt[i]; 
   if(ki) fw.write((ki_pt[i]+"\n").c_str(), ki_pt[i].length()+1);
  }
 return ki;
}