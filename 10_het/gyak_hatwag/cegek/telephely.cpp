#include "telephely.h"

void beolvas(telep* t) {
    cout << "Telephely helysége: "; cin >> t -> helyseg;
    cout << "Adja meg az alapítás dátumát: " << endl;
    beolvas(&t -> alapitas);
    cout << "Utolsó év árbevétele: "; cin >> t -> bevetel;
}

void kiir(const telep* t) {
    cout << "Telephely helysége: " << t -> helyseg << endl;
    cout << "Alapítás dátuma: "; 
    kiir(&t -> alapitas);
    cout << endl << "Utolsó év árbevétele: " << t -> bevetel << endl; 
} 