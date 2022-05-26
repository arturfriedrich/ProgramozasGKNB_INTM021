#include <iostream>
using namespace std;

unsigned int textSum(std::string text) {
  unsigned int szum=0;
  int h = text.length();
  for(int i=0; i<h; i++)
    {
      if(isalnum(text[i]))
      {
        if(isupper(text[i])) text[i] = tolower(text[i]); //A feladat ezt kéri, viszont a                                           tesztben enélkül helyes -> SZARUL VAN MEGÍRVA A TESZT
        szum += int(text[i]);
      }
    }
  return szum;
}