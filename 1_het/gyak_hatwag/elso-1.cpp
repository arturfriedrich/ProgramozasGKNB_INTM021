//code from @MiklosHatwagner on replit

#include <iostream>

int main() {
  int szam1, szam2, osszeg, szorzat;
  // int szam2;
  std::cout << "Adjon meg ket egesz szamot! ";
  std::cin >> szam1 >> szam2;
  osszeg = szam1 + szam2;
  szorzat = szam1 * szam2;
  // std::cin >> szam2;
  std::cout 
    << szam1 
    << " + " 
    << szam2 
    << " = " 
    << osszeg 
    << std::endl;
  std::cout << szam1 << " * " << szam2 << " = " << szorzat << std::endl;
  std::cout << "Szorzat es osszeg kulobsege: " << szorzat-osszeg << std::endl;
  /*
  std::cout << szam1 << " abszolut erteke: ";
  if(szam1 >= 0) {
    std::cout << szam1;
  } else {
    std::cout << -szam1;
  }
  */
  std::cout << szam1;
  if(szam1 < 0) szam1 = -1 * szam1;
  std::cout << " abszolut erteke: " << szam1 << std::endl;

  if(szam1 % 2 == 0) {
    std::cout << szam1 << " paros, fele: " << szam1/2 << std::endl;
  } else {
    std::cout << szam1 << " paratlan, fele: " << szam1/2 << std::endl;
  }

  if(szam1 > szam2) {
    std::cout << "Kulonbseguk: " << szam1-szam2 << std::endl;
  }
  /*
  if(szam1 < 10) {
    if(szam2 < 10) {
      std::cout << "Szorzatuk: " << szam1*szam2 << std::endl;
    }
  }
  */
  //if(szam1<10 and szam2<10) {
  if(szam1<10 && szam2<10) {
    std::cout << "Szorzatuk: " << szam1*szam2 << std::endl;
  }

  int n=1, N, sorozatOsszeg=0;
  do {
    std::cout << "Mi legyen az utso szam? ";
    std::cin >> N;
  } while(N < 1);
  //if(N < 1) std::cout << "Nincs mit listazni.\n";
  while(n <= N) {
    if(n%2 == 0)
      std::cout << n << '\t';
    sorozatOsszeg = sorozatOsszeg + n;
    n++;
  }
  std::cout << "\nA sok szam osszege: " << sorozatOsszeg << '(' << (1+N)/2.*N << ')' << std::endl;

  std::cout << "-------\n\n";
  n = 2;
  while(n <= N) {
    std::cout << n << '\t';
    n = n+2;
  }
  return 0;
}