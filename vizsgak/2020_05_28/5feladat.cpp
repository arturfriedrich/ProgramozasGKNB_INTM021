#include <iostream>
using namespace std;

struct Telepules
{
  string nev;
  int lelekszam;
  string orszag;
};

void rendez(Telepules* cities, int n)
{
  Telepules csere;
  for (int i = n - 1; i >= 1; i--)
  {
    for (int j = 0; j < i; j++)
    {
      if (cities[j].lelekszam < cities[j + 1].lelekszam)
      {
        csere = cities[j];
        cities[j] = cities[j + 1];
        cities[j + 1] = csere;
      }
    }
  }
}

void kiir(Telepules* cities, int n)
{
  for(int i=0; i<n; i++)
    {
      cout << cities[i].nev << " " << cities[i].lelekszam << " " << cities[i].orszag << endl;
    }
}

void osszegzes(Telepules* cities, int n)
{
  double atlag=0;
  double osszeg=0;
  int min=cities[0].lelekszam, max=cities[0].lelekszam;
  for(int i=0; i<n; i++)
    {
      osszeg += cities[i].lelekszam;
      if(max < cities[i].lelekszam) max = cities[i].lelekszam;
      else if(min > cities[i].lelekszam) min = cities[i].lelekszam;
    }
  atlag = osszeg/n;
  cout << "Atlagos lelekszam: " << atlag << endl;
  cout << "Legnagyobb varos: " << max << endl;
  cout << "Legkisebb varos: " << min << endl;
}