#include <iostream>
#include <cstdlib>
using namespace std;

struct lista;

#define HTML 0
#define SZOVEG 1
struct csucs {
  int tipus;
  string tartalom;
  lista* gyerekek;
};

struct lista {
  csucs* cs;
  lista* kov;
};

csucs* uj(int tipus, string tartalom) {
  csucs* cs = new csucs;
  cs->tipus = tipus;
  cs->tartalom = tartalom;
  cs->gyerekek = NULL;
  return cs;
}

void ujGyerek(csucs* szulo, csucs* gyerek) {
  lista* l = new lista;
  l->cs = gyerek;
  l->kov = NULL;
  if(szulo->gyerekek == NULL) {
    szulo->gyerekek = l;
  } else {
    lista* utolso = szulo->gyerekek;
    while(utolso->kov != NULL) {
      utolso = utolso->kov;
    }
    utolso->kov = l;
  }
}

void kiir(csucs* cs, int behuz) {
  for(int i=0; i<behuz; i++) {
    cout << "  ";
  }
  if(cs->tipus == HTML) {
    cout << '<' << cs->tartalom << ">\n";
    lista* kov = cs->gyerekek;
    while(kov != NULL) {
      kiir(kov->cs, behuz+1);
      kov = kov->kov;
    }
    for(int i=0; i<behuz; i++) {
      cout << "  ";
    }
    cout << "</" << cs->tartalom << ">\n";
  } else {
    cout << cs->tartalom << endl;
  }
}

void torol(csucs* cs) {
  lista* kov = cs->gyerekek;
  while(kov != NULL) {
    torol(kov->cs);
    lista* l = kov;
    kov = kov->kov;
    delete l;
  }
  delete cs;
}

int main() {
  csucs* html = uj(HTML, "html");
  csucs* head = uj(HTML, "head");
  csucs* body = uj(HTML, "body");
  ujGyerek(html, head);
  ujGyerek(html, body);
  
  csucs* title = uj(HTML, "title");
  ujGyerek(title, uj(SZOVEG, "Minta HTML oldal"));
  ujGyerek(head, title);
  
  csucs* p1 = uj(HTML, "p");
  ujGyerek(p1, uj(SZOVEG, "Elso bekezdes"));
  ujGyerek(body, p1);
  csucs* p2 = uj(HTML, "p");
  ujGyerek(p2, uj(SZOVEG, "Masodik bekezdes"));
  ujGyerek(body, p2);
  csucs* p3 = uj(HTML, "p");
  ujGyerek(p3, uj(SZOVEG, "Harmadik bekezdes"));
  ujGyerek(body, p3);
  
  kiir(html, 0);
  torol(html);
  return 0;
}
