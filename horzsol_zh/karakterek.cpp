#include <iostream>
#include <cstring>

using namespace std;

#define N 256

bool ismagan(char v) {
    return (0x208222>>(v&0x1f))&1;
}

int beker(char be_tb[]) {
    cout << "\n Kérem a szöveget: ";
    cin.getline(be_tb, N); cout << endl;
    int hsz = strlen(be_tb);
    return hsz;
}

void cserel(char s_tb[], int hossz, int *mgh, int *szk, int *msh, int *eb, int *tcs) {
    for ( int i = 0; i<strlen(s_tb); i++) {
        if ( s_tb[i] == 'z' or s_tb[i] == 'Z') {
            s_tb[i] = '!';
            (*tcs) += 1;
        }
        else if ( isalpha(s_tb[i]) and ismagan(s_tb[i]) ) {
            if ( !ismagan(int(s_tb[i]) + 1) ) {
                s_tb[i] = int(s_tb[i]) + 1;
                (*mgh) += 1;
            }
        }
        else if ( isspace(s_tb[i]) ) {
            s_tb[i] = '_';
            (*szk) += 1;
        }
        else if ( isalpha(s_tb[i]) and !ismagan(s_tb[i]) ) {
            s_tb[i] = int(s_tb[i]) + 2;
            (*msh) += 1;
        }
        else {
            s_tb[i] = '*';
            (*eb) += 1;
        }
    }
}

int main() {
    char szvg[N];
    beker(szvg);
    int main_mgh=0;
    int main_szk=0;
    int main_msh=0;
    int main_eb=0;
    int main_tcs=0;
    cserel(szvg, N, &main_mgh, &main_szk, &main_msh, &main_eb, &main_tcs);
    cout << "Átkódolt: " << szvg << endl;
    cout << "Összes karakter: " << strlen(szvg) << endl;
    cout << "Ebből: " << endl;
    cout << "Magánhangó: " << main_mgh << endl; 
    cout << "Szóköz: " << main_szk << endl; 
    cout << "Mássalhangzó: " << main_msh << endl; 
    cout << "Egyéb: " << main_eb << endl; 
    cout << "Tulcsordulás: " << main_tcs << endl; 
    return 0;
}