// switch/case utasítás

#include<iostream>

using namespace std;

int main() {
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
             kar='!';
             break; 
             } 
    cout << " Az átkódolás utáni kimenet a(z): ' " << kar << " '" << endl;
    } while(kar!='!');
    return 0;
}