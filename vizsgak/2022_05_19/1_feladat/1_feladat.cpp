  #include <iostream>
#include <fstream>  //ebben van az ifstream/ofstream

using namespace std; //ebben van a string

#define ORA 3600
#define PRC 60

struct triathlete {
    string lic;
    int swim;
    int cycle;
    int run;
    int depo;
    int sum;
};

//be kéne rakni egy ilyet az puska doksiba!
void buborek(triathlete** tb, int hossz){
    string cs;
    for(int i = hossz - 1; i >= 1; i-- ){
        for(int j = 0, csere; j < i; j++){            // létrhoz egy int cserét is
            if(tb[j]->sum > tb[j+1]->sum){
                csere = tb[j]->sum;
                tb[j]->sum = tb[j+1]->sum;
                tb[j+1]->sum = csere;

                cs = tb[j]->lic;
                tb[j]->lic = tb[j+1]->lic;
                tb[j+1]->lic = cs;
            }
        }
    }
}

string tri_result(string fbe){
    ifstream f(fbe);                          // ezzel olvassuk be a fájlt
    string uzenet = "N/A!";
    if (f.is_open()) {                        // csak akkor, ha nyitva van
        int versenyzokSzama;
        f >> versenyzokSzama;                 // beolvassuk az első sort

        triathlete** tri = new triathlete*[versenyzokSzama];       // soronként beolvassuk a fájlt
        for(int i = 0; i < versenyzokSzama; i++){
            tri[i] = new triathlete();                             // létrehozunk egy új atlétát
            f >> tri[i]->lic
              >> tri[i]->swim 
              >> tri[i]->cycle 
              >> tri[i]->run 
              >> tri[i]->depo;
            
            tri[i]->sum = tri[i]->swim +
                          tri[i]->cycle +
                          tri[i]->run +
                          tri[i]->depo;
        }
        f.close();  // bezárjuk, ne maradjon nyitva
        buborek(tri, versenyzokSzama);

        cout << (tri[0]->lic) << " => " 
             << (tri[0]->sum)/ORA << ":"
             << (tri[0]->sum)%ORA/PRC << ":"
             << (tri[0]->sum)%ORA%PRC 
             << " [h:m:s]" << endl;

         uzenet = tri[versenyzokSzama-1]->lic;   

        delete [] tri; tri = 0;
    }
    else cout << "Sikertelen file nyitás." << endl;
    return uzenet;
}

int main() {
    string path = "Chip.txt";
    cout << tri_result(path) << endl;

    return 0;
}



/* 
// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
  
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}
*/

    // https://www.cplusplus.com/reference/fstream/ifstream/ifstream/