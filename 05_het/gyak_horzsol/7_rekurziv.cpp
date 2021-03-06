// 5/7, amely az 5/6 rekurzív verziója
#include<iostream>
#include<cstring>

#define MAX 128
#define LT 7

using namespace std;

bool beker(char rszm[], char valasz[])
{
 cout << "\n Mentsem az Ön által megadott formátumú rendszámot? [i/n]: ";
 cin.getline(valasz,MAX);  // az elágazáshoz kell, h melyik fgv. fusson!
 cout << "\n Kérem a rendszámot: ";
 cin.getline(rszm,MAX); cout << endl;
 int hsz=strlen(rszm);
 if(hsz!=LT) return false;
 for(int i=0; i<LT; i++)
  { 
   if(i<3 and not isalpha(rszm[i])) return false;
   else if(i>=4 and not isdigit(rszm[i])) return false;
   else if(not (rszm[3]=='-' or rszm[3]=='_' or isspace(rszm[3])) ) return false;
  }
 return true;
}

void ism_ert(char rszm[], int i)
{
   bool es=0;
   if(isalnum(rszm[i])) { cout << "'" << rszm[i] << "' => alfanumerikus"; es=1; }
   if(islower(rszm[i])) cout << " és kisbetű";
   if(isupper(rszm[i])) cout << " és nagybetű";
   if(isprint(rszm[i])) {
     if(es) cout << " és nyomtatható!" << endl;
     else cout << "'" << rszm[i] << "' => nyomtatható!" << endl; }
   if(isspace(rszm[i])) cout << "'" << rszm[i] << "' => fehérkarakter!" << endl;
   if(not isxdigit(rszm[i])) cout << "'" << rszm[i] << "' => nem hexadecimális!" << endl;
   else cout << "'" << rszm[i] << "' => hexadecimális is!" << endl;
}

void ism_ert(char rszm[], int i, bool vege)
{
  if(i<3) {
    if(vege) rszm[i]=tolower(rszm[i]);
    else rszm[i]=toupper(rszm[i]); }
  if(i==3 and rszm[i]!='-') rszm[i]='-'; cout << endl; 
}

int on_hiv(char rszm[], int i)
{
  ism_ert(rszm,i);
  ism_ert(rszm,i,false);
  i++;
  if(i>=LT) { cout << " Zárul a rekurzió, 'i' értéke: '" << i << "'.\n"; return i; }
  cout << "Indul a(z) " << i << ". rekurzió!" << endl;
  return i + on_hiv(rszm,i);
}

void ertekel(char rszm[])    // rekurzív megoldás!
{
 int i=0;
 i=on_hiv(rszm,i);
 cout << "\n A rendszám helyes: " << rszm << endl;
 cout << "\n Az 'i+=' értéke: " << i << "." << endl; // faktoriálisra is: 7! = 5.040
}

void ertekel(char rszm[], bool eredet)  // ciklusos megoldás!
{
 char ment[LT];
 for(int i=0; i<LT; i++)
    {
     ism_ert(rszm,i);
     ment[i]=rszm[i];
     ism_ert(rszm,i,true);
    }
 cout << "\n A rendszám helyes: " << rszm << endl;
 cout << "\n Az Ön által megadott rendszám-formátum: " << ment << endl;
}

int main() {
  char rsz[MAX], elag[MAX];
  bool helyes;
  do {
      helyes=beker(rsz, elag);
      if(helyes) {
		    if(elag[0]!='i') ertekel(rsz);
        else ertekel(rsz,true); }
     else cout << " Helytelen a rendszám!";
  } while(not helyes);
return 0;
}