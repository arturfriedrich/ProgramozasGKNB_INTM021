#include <iostream>
#include <fstream>
#include<cstring>


using namespace std;

/* string first_last(string fbe, string fki) {
    ifstream f(fbe);
    if ( f.is_open() ) {
        int n, h;
        string vks, ent="\n";
        f >> n;
        getline(f, vks);
        string* sz = new string[n];
        for ( int i=0; i<n; i++ ) {
            getline(f, sz[i]);
            h = sz[i].length();
            cout << sz[i] << endl;
            char nev[h];
            for ( int j=0; j<h; j++ ) {
                nev[j] = sz[i][j];
            }
        }
        f.close();
    } else { cout << "Sikertelen file-nyitás!" << endl; return ""; }
    return "Hibátlan futás!";
} */

string first_last(string fbe, string fki) {
    ifstream fg(fbe);                                                   // fájlbeolvasás
    ofstream fw(fki);                                                   // fájlkiírás
    if ( fg.is_open() ) {
        if ( fw.is_open() ) {
            int irokSzama, hossz, k;
            string vks, ent="\n";
            fg >> irokSzama;                                            // első spr beolvasása
            getline(fg,vks);                                            // egész sor beolvasás
            string* szk = new string[irokSzama];
            for ( int i=0; i<irokSzama; i++ ) {
                getline(fg,szk[i]);                                     // egész sor beolvasása az írók tömbbe
                hossz = szk[i].length();                                // adott sor hossza
                char* kn=new char[hossz];                               // adott sor hossza hosszúságú tömb létrehozása
                for ( int j=0; j<hossz; j++ ) {
                    kn[j]=szk[i][j];
                    if( szk[i][j]==' ' ) k=j;                           // szótagok meghatározása
                }
                kn[k] = '\0';
                char* vn=new char[hossz-k+3];
                k++;
                int j;
                for ( j=0; k<hossz; j++, k++ ) vn[j]=szk[i][k];
                vn[j]=','; vn[j+1]=' ';
                cout << vn << kn << endl;
                fw.write(vn,strlen(vn)); 
                fw.write(kn,strlen(kn));
                fw.write(ent.c_str(),1);
                for ( int j=0; j<hossz; j++ ) kn[j]='\0';
                delete [] kn; kn=0; delete [] vn; vn=0;
            }
            delete [] szk; szk=0; 
            fw.close();
        }  
        else return "Háttértár hiba!";
        fg.close();
    } 
    else { return "Sikertelen file-nyitás!"; }
    return "Hibátlan futás!";
}

int main(void) {
   string f_be="Writers.txt", f_ki="Sretirw.txt";
   cout << first_last(f_be, f_ki) << endl;
   return 0;
}




/* 
- kimeneti fajl letrejottenek ellenorzese
- bemeneti fajl ellenorzese
- szerzok eltarolasa dinamikus 2D tömbbe
- átalakítás: vnev, keresztnev keresztnev ....
- return "hibátlan futás" vagy "nem jó"
 */