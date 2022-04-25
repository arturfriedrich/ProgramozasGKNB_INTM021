//code from @MiklosHatwagner on replit

#include <iostream>

int main() {
  /*
  int szam1, szam2, szorzat, osszeg;
  std::cout << "Adjon meg ket szamot! ";
  std::cin >> szam1 >> szam2;
  szorzat = szam1 * szam2;
  osszeg = szam1 + szam2;
  std::cout 
    << szam1 
    << " + " 
    << szam2 
    << " = " 
    << osszeg 
    << std::endl;
  std::cout << szam1 << " * " << szam2 << " = " << szorzat << std::endl;
  std::cout << szorzat << " - " << osszeg << " = " << szorzat-osszeg << std::endl;
  */

  /*
  int szam;
  std::cout << "Adjon meg egy szamot! ";
  std::cin >> szam;
  //std::cout << "Abszolut erteke: ";
  //if(szam < 0) std::cout << -szam;
  //else std::cout << szam;
  //std::cout << std::endl;
  if(szam < 0) szam = -1 * szam;
  std::cout << "Abszolut erteke: " << szam << std::endl;
  if(szam % 2 == 0) {
    std::cout << "A szam fele: " << szam/2 << std::endl;
  }
  */

  /*
  int a, b;
  std::cout << "Adjon meg ket szamot! ";
  std::cin >> a >> b;
  if(a > b) {
    std::cout << "Kulonbseguk: " << a-b << '\n';
  }
  // V1
  if(a < 10) {
    if(b < 10) {
      std::cout << "Szorzatuk: " << a*b << "\n";
    }
  }
  //V2
  if(a<10 and b<10)
    std::cout << "Szorzatuk: " << a*b << std::endl;
  */

  
  int szam = 1, N, reszOsszeg=0;
  std::cout << "Meddig szamoljunk? ";
  std::cin >> N;
  if(N >= 1) {
    while(szam <= N) {
      if(szam%2 == 0) {
        std::cout << szam << '\t';
        reszOsszeg = reszOsszeg + szam;
        szam = szam+1;
        std::cout << "Y"<<std::endl;
      }
      //std::cout << "X"<<std::endl;
      // szam = szam + 1;
      //szam++;
      //szam = szam + 2;
    }
    std::cout << "\nA szamok osszege: " << reszOsszeg << std:: endl;
    // std::cout << "Masik modszerrel: " << (1+N)/2.*N << std::endl;
  } else std::cout << "Ez az ertek tul kicsi!\n";
  

  /*
  int a, b, szorzo=1;
  std::cout << "Adjon meg ket szamot! ";
  std::cin >> a >> b;
  if(a > b) szorzo = -1;
  while(a*szorzo <= b*szorzo) {
    std::cout << a << '\t';
    a = a+szorzo;
  }
  */

  /*
  int n, fakt = 1, i=2;
  std::cout << "n: ";
  std::cin >> n;
  while(i <= n) {
    fakt = fakt*i;
    i++;
  }
  std::cout << n << "! = " << fakt << std::endl;
  */

  /*
  int i=1;
  while(i <= 100) {
    if(i%3==0 and i%5==0) {
      std::cout << "FizzBuzz" << '\t';
    } else if(i%3 == 0) {
      std::cout << "Fizz" << '\t';
    } else if(i%5 == 0) {
      std::cout << "Buzz" << '\t';
    } else {
      std::cout << i << '\t';
    }
    i++;
  }
  */
}