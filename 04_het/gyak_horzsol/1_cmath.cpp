// 4/1 cmath, határok
#include<iostream>
#include<cmath>    // pow(27,0.3333), sqrt(x), sin(x), cos(x), M_PI
#include <climits> // INT_MIN, INT_MAX
#include <cfloat>  // DBL_MIN, DBL_MAX

#define MAX 3
#define PI 3.14159
           //141592653589793238
using namespace std;

int main() {
	int fut=0, alap[MAX];
    double kitevo[MAX], hatvany[MAX];
    cout << INT_MIN << " => " << INT_MAX << endl;
    cout << DBL_MIN << " => " << DBL_MAX << "\n" << endl;
	do {
	cout << " Kérem a(z) " << fut+1 <<". nem nulla alapot a(z) "
         << MAX << "-bő(ó)l: ";
	cin >> alap[fut]; 
    if(alap[fut]!=0) 
        {
            cout << "\t Kérem a(z) " << fut+1 <<". hatványkitevőt: ";
            cin >> kitevo[fut];
            hatvany[fut]=pow(alap[fut],kitevo[fut]); // Implicit
            fut++; cout << endl;
        }
	} while(fut<MAX);
    cout << "\n A hatványok:" << endl;
    for(fut=0; fut<MAX; fut++) { cout << hatvany[fut] << endl; }
    cout << "\n A gyökök:" << endl;
    cout << " 3. gyök alatt 27: " << pow(27,/*(double)*/1/3) << endl; // Explicit
    cout << " 2. gyök alatt 81: "<< sqrt(81) << endl;
    cout << "\n A sin(x) és cos(x) értékek:" << endl;
    cout << " 180° szinusza: "<< sin(M_PI) << endl;
    cout << " 180° koszinusza: "<< cos(M_PI) << endl;
    cout << " 180° szinusza: "<< sin(PI) << endl;
    cout << " 180° koszinusza: "<< cos(PI) << endl;
    cout << " 30° szinusza: "<< sin(M_PI/6) << endl;
    cout << " 60° koszinusza: "<< cos(M_PI/3) << endl;
    cout << " 30° szinusza: "<< sin(30*M_PI/180) << endl;
    cout << " 60° koszinusza: "<< cos(60*M_PI/180) << endl;
return 0;
}
