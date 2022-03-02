// switch/case utasítás, típus konverziók

#include<iostream>

using namespace std;

int main() {
  bool ki=1;
  char kar;
  do {
   cout << "\n Kérek egy betűt: "; 
   cin >> kar;
	 switch(kar) {
        case 'a':
        case 'A':
             if(kar=='a') kar='e';
             else kar='E';
             break;
        case 'b':
        case 'B':
             if(kar=='b') kar='d';
             else kar='D';
             break;
        case 'y':
        case 'Y':
             if(kar=='y') kar='x';
             else kar='X';
             break;
        case 'z':
        case 'Z':
             if(kar=='z') kar='s';
             else kar='S';
             break;
        default:
             kar++; // kar+=2;
             ki=0; break; 
             } 
   cout << " Az átkódolás utáni kimenet a(z): ' " << /*(int)*/ kar << " '" << endl;
//   cout << " A helye az ABC-ben: ";
//   if(kar>='a' && kar<='z') cout << kar-96 /* kar-'a'+1*/ << endl;
//   else cout << kar-64 /* kar-'A'+1*/ << endl;
  } while(ki);
return 0;
}