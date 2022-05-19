// Készítsen programot, mely eldönti az indító parancssorban megadott azonosítójú fájlról, hogy ASCII kódú szövegfájl-e, vagy bináris fájl-e! Ha parancssori paraméter nélkül futtatják a programot, akkor ismertesse a képernyőn a használatát!

#include <iostream>
#include <fstream>

using namespace std;

// fájl méretének meghatározása
streampos fajlmeret(ifstream& f) {                                  // referencia megadása ????
    streampos akt, vege;
    akt = f.tellg();
    f.seekg(0, ios_base::end);
    vege = f.tellg();
    f.seekg(akt, ios_base::beg);
    return vege;
}                                   

int main(int argc, char *argv[]) {                                  // <a parancssorba beírt arguemntumok száma, a parancssori paraméterek helyei>
    if ( argc != 2 ) {
        cout << "Használat: " << endl << '\t' << argv[0] << " fajlazonosito" << endl;
        return 1;
    }

    ifstream f(argv[1], ios::binary);                               // az argv[0] a fajl azonosítója, az argv[1] az első paraméter
    if ( not f.is_open() ) {
        cerr << argv[0] << " nem nyitható meg." << endl;
        return 2;
    }

    streampos meret = fajlmeret(f);
    int i=0;
    char c;
    while ( f.get(c) ) {
        i++;
        if ( c<' ' and c!='\n' and c!='\r' and c!='\t' and (c!=26 or i!=meret) ) {
            cout << "A(z) " << argv[1] << " valószínűleg bináris" << endl;
            f.close();
            return 0;
        }
    }

    cout << "A(z) " << argv[1] << " valószínűleg szövegfájl" << endl;
    f.close(); 

    return 0;
}