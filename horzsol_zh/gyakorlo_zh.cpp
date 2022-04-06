// #Ez 1 Hosszu-hoSSZu sz0v3g3s infOrmAcio!?@.Zh [ 10 4 16 5 10 ]
// #Ebb3n N1nCS 1 db 'ipSŻ1l0n' illetv3 'Że' betU SEM! [ 8 8 21 0 16] { Ż=>Alt+189, ez 2 byte-os! }

#include<iostream>
#include<cstring>

#define MAX 256

using namespace std;

int beker(char be_tb[]) {
  cout << "\n Bemenet: ";
  cin.getline(be_tb,MAX); cout << endl;
  int hsz=strlen(be_tb);
  return hsz;
}

void cserel(char s_tb[], int hossz, int *mgh, int *szk,
                                     int *msh, int *eb, int *tcs) {
  for(int i=0; i<hossz; i++) {  
   switch(s_tb[i]) {
    case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
 		    s_tb[i]++; (*mgh)++; break;
    case ' ':
        s_tb[i]='_'; (*szk)++; break;                         
    default:
        if(isalpha(s_tb[i])) {
            if(s_tb[i]!='y' and s_tb[i]!='Y' and s_tb[i]!='z' and s_tb[i]!='Z')
                { s_tb[i]+=2; (*msh)++; }
            else { s_tb[i]='!'; (*tcs)++; } }
		else { s_tb[i]='*'; (*eb)++; }
        break; } }
}

void ism_ki(char ki_tb[], int h, int mgh, int szk, int msh, int eb)
{
  cout << "Átkódolt: " << ki_tb << endl;
  cout << "\n Az összes karakter: " << h << "\n  Ebből:";
  cout << "\n\t Magánhangzó: " << mgh 
         << "\n\t Szóköz: " << szk << "\n\t Mássalhangzó: " << msh 
         << "\n\t Egyéb: " << eb;
}

void kiir(char ki_tb[], int h, int mgh, int szk, int msh, int eb)
{
  ism_ki(ki_tb, h, mgh, szk, msh, eb);
  cout << "\n\t Nincs túlcsordulás!";
}

void kiir(char ki_tb[], int h, int mgh, int szk, int msh, int eb,
             int tcs, string eredet)
{
  ism_ki(ki_tb, h, mgh, szk, msh, eb);
  cout << "\n\t " << tcs << " db túlcsordulás található!";
  cout << "\n Az eredeti bemenet: " << eredet << endl;
}

int main() {
  char sz_tb[MAX];
  string ment="";
  for(int i=0; i<MAX; i++) { sz_tb[i]=ment[i]='\0'; }
  int n=beker(sz_tb); 
  ment=sz_tb;
  int mgh=0, szk=0, msh=0, eb=0, tcs=0;
  cserel(sz_tb, n, &mgh, &szk, &msh, &eb, &tcs);
  if(tcs==0) kiir(sz_tb, n, mgh, szk, msh, eb);
  else kiir(sz_tb, n, mgh, szk, msh, eb, tcs, ment);
  return 0;
}