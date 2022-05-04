// 8/2, amely az 5/4 könyvtári fgv.-es és dinamikus tömb-kezeléses verziója

#include<iostream>
#include<cstring>  // karakterlánc fgv.-ekhez

#define MAX 128
#define LT 7

using namespace std;

bool beker_t(char rszm[], int s)
{
    cout << " Kérem a(z) " << s << ". rendszámot: ";
    cin.getline(rszm,MAX); cout << endl;
    int hsz=strlen(rszm);
    if(hsz!=LT) return false;
    for(int i=0; i<LT; i++)
    { 
        if(i<3 and not isalpha(rszm[i])) return false;
        else if(i>=4 and not isdigit(rszm[i])) return false;
        else if(not (rszm[3]=='-' or rszm[3]=='_' or isspace(rszm[3])) ) return false;
        if(i<3) rszm[i]=toupper(rszm[i]);
        if(i==3 and rszm[i]!='-') rszm[i]='-';
    }
    return true;
}

void hasonlit(char rsz[], char ref[])
{
  int azonos=strcmp(rsz, ref);      // melyik két megadott string a nagyobb, negatív vagy pozitív számot ad vissza
  if(azonos<0) cout << "\t Az 1. a korábbi rendszám!" << endl;
  else if(azonos>0) cout << "\t Az 1. a későbbi rendszám!" << endl;
  else cout << "\t Egyező rendszámok!" << endl;
}

void o_fuz(char rsz_o[], char ref_o[])
{
  strcat(rsz_o, " + ");     // <cél>, <amit hozzá akarunk fűzni> 
  strcat(rsz_o, ref_o);     // figyelni kell rá, hogy legyen elég helyünk (?)
  cout << "\t Az összefűzött rendszámok: " << rsz_o << endl;
}

void beker_s(string *e, string m)
{
  string ek, mk;
  cout << "\n\n Kérem az 1. szerző vezeték-, és keresztnevét: ";
  cin >> (*e) >> ek; // szóköznél leáll!
  (*e) += " " + ek;
  cout << "\n Kérem a 2. szerző vezeték-, és keresztnevét: ";
  cin >> m >> mk;
  m+=" "+mk;
}

void has_string(string e, string m)
{
  cout << "\n\t Az 1. szerző: '" << e << "'\n" 
       << "\n\t A 2. szerző: '" << m << "'" << endl;
  if(e<m) cout << "\n\t Az 1. szerző neve előrébb van az ABC-ben!" << endl;
  else if (e>m) cout << "\n\t Az 1. szerző neve hátrább van az ABC-ben!" << endl;
  else cout << "\n\t Azonos szerző nevek!" << endl;
}

inline void masol(string *h, string e, char rsz_m[], char mslt[])           // inline: gyorsítja a programot, de csak 
{                                                                           // akkor ha 1-2 soros a függvény, kihagyja a függvényt, 
  (*h)=e;                                                                   // a fordító behelyettesíti a függvény belsejét
  strcpy(mslt, rsz_m);      // másolja a stringet az elsőből a második paraméterbe
}

void komplex(char* p_v, string h, char kl[])
{
  strcpy(p_v, h.c_str());       // sctringet konvertálok karakter tombbé[]
  strcat(p_v, " ++ ");
  strcat(p_v, kl);
  cout << "\n\n A dinamikus memóriában lévő összefűzött \
'string' és 'char' típusú tartalmak: \n\t\t" 
       << p_v << endl;
}

int main() {
  char rsz[MAX], ref[MAX], klon[MAX];
  string el="Asimov, Isaac", ms="King, Stephen", hr;
  bool helyes;
  int fut=1;
  do {
      cout << endl;
      if(fut==1) helyes=beker_t(rsz, fut);
      if(helyes or fut==2) {
        if(fut==1) fut++;
        helyes=beker_t(ref, fut); }
      if(not helyes) cout << " Helytelen a rendszám!";
  } while(not helyes);
  hasonlit(rsz, ref); cout << endl;
  o_fuz(rsz, ref);
  beker_s(&el, ms);
  has_string(el, ms);
  masol(&hr, el, rsz, klon);
  cout << "\n\n A másolt szerző: " << hr
       << "\n A másolt összefűzött rendszámok: "
       << klon << endl;
  char* p_vegyes = new char[hr.length()+4+strlen(klon)+1];
  komplex(p_vegyes, hr, klon);
  delete [] p_vegyes; p_vegyes=0;
  cout << endl;
  return 0;
}