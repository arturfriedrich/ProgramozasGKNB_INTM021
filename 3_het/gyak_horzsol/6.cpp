// 3/6 karakter osztályozó makrók, a ? operátor
#include<iostream>
//#include<cctype>  // ha nincs, nem működnek a makrók!?
#include<cstring> // strlen() fgv.-hez!

#define MAX 128

using namespace std;

int main() {
    string el=" A tomb ";
	bool helyes;
    char rsz[MAX];
    int hsz;
  do {
    cout << "\n Kérem a rendszámot: ";
    cin.getline(rsz,MAX); cout << endl;
    hsz=strlen(rsz);
    hsz>7 ? helyes=false : helyes=true;
    for(int i=0; helyes and i<7; i++)
     { 
      if(i<3 and not isalpha(rsz[i])) helyes=false;
      else if(i>=4 and not isdigit(rsz[i])) helyes=false;
      else if(rsz[3]!='-') helyes=false;
      else if(not (rsz[3]=='-' or rsz[3]=='_' or isspace(rsz[3])) ) helyes=false;
     }
    if(helyes)
     {
      bool es;
      for(int i=0; i<7; i++)
       {
        es=0;
        if(isalnum(rsz[i])) { cout << "'" << rsz[i] << "' => alfanumerikus"; es=1; }
        if(islower(rsz[i])) cout << " és kisbetű";
        if(isupper(rsz[i])) cout << " és nagybetű";
        if(isprint(rsz[i])) {
         if(es) cout << " és nyomtatható!" << endl;
         else cout << "'" << rsz[i] << "' => nyomtatható!" << endl; }
        if(isspace(rsz[i])) cout << "'" << rsz[i] << "' => fehérkarakter!" << endl;
        if(not isxdigit(rsz[i])) cout << "'" << rsz[i] << "' => nem hexadecimális!"
                                      << endl;
        else cout << "'" << rsz[i] << "' => hexadecimális is!" << endl;
        rsz[i]=toupper(rsz[i]); // tolower(); kisbetűsre alakít
        if(i==3 and rsz[i]!='-') rsz[i]='-';
        cout << endl; 
       } // for
      cout << "\n A rendszám helyes: " << rsz << endl;
     }
    else cout << " Helytelen a rendszám!";
  } while(not helyes); // do while
    cout << "\n Az első hossza: " << el.length();
    cout << "\n Az első hossza: " << strlen(rsz);
    // cout << "\n Az rsz hossza: " << rsz.length();
    if(rsz[0]=='E') cout << "\n A 0. indexű elem az: 'E'!" << endl;
    if(rsz=="ERT-123") cout << "\n Az 'rsz' tartalma: " << rsz << endl;
    // rsz+=rsz+rsz+el;
    return 0;
}