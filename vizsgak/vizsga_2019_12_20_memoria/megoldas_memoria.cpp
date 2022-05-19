#include<iostream>
#include<ctime>
#include<fstream>
using namespace std;

#define MS 7
#define MO 7

struct kartya {
	char betu;
	bool mutat;
};

struct hely {
	int sor;
	int oszlop;
};

void init(kartya mtx[MS][MO], int s, int o) {
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < o; j++) {
			mtx[i][j].betu = 'A' + (i*o + j) / 2;
			mtx[i][j].mutat = false;
		}
	}
	for (int i = 0; i < o*s-1; i++) {
		int j = i+rand()%(o*s-i);
		char cs = mtx[i / o][i % o].betu;
		mtx[i / o][i % o].betu = mtx[j / o][j % o].betu;
		mtx[j / o][j % o].betu = cs;
	}
}

void mentes(kartya mtx[MS][MO], int s, int o, string fajl) {
	ofstream f(fajl);
	if (f.is_open()) {
		for (int i = 0; i < s; i++) {
			for (int j = 0; j < o; j++) {
				f << mtx[i][j].betu;
			}
			f << endl;
		}
		f.close();
	}
}

void megjelenit(kartya mtx[MS][MO], int s, int o) {
	cout << ' ';
	for (int i = 1; i <= o; i++) {
		cout << i;
	}
	cout << endl;
	for (int i = 0; i < s; i++) {
		cout << i + 1;
		for (int j = 0; j < o; j++) {
			if (mtx[i][j].mutat) {
				cout << mtx[i][j].betu;
			}
			else {
				cout << '*';
			}
		}
		cout << endl;
	}
}

hely kivalaszt(kartya mtx[MS][MO], int s, int o) {
	hely kh;
	do {
		cout << "Megforditando kartya sora: ";
		cin >> kh.sor;
		kh.sor--;
		cout << "Oszlopa: ";
		cin >> kh.oszlop;
		kh.oszlop--;
	} while (kh.sor<0 || kh.sor>=s || kh.oszlop<0 || kh.oszlop>=o || 
		mtx[kh.sor][kh.oszlop].mutat);
	mtx[kh.sor][kh.oszlop].mutat = true;
	return kh;
}

void meret(int& sor, int& oszlop) {
	do {
		cout << "Kartyasorok szama [1-7]: ";
		cin >> sor;
		cout << "Kartyaoszlopok szama [1-7]: ";
		cin >> oszlop;
	} while (sor<1 or sor>MS or oszlop<1 or oszlop>MO or (sor*oszlop)%2==1);
}

int main(int argc, char* argv[]) {
	int sor, oszlop;
	meret(sor, oszlop);
	int kartyaSzam = sor * oszlop;
	int forditasSzam = 0;
	kartya mtx[MS][MO];
	bool torles = false;
	srand((unsigned)time(NULL));
	if (argc == 2 and string("torles") == argv[1]) {
		torles = true;
	}
	init(mtx, sor, oszlop);
	mentes(mtx, sor, oszlop, "memoria.txt");
	cout << "Memoriajatek\n";
	do {
		megjelenit(mtx, sor, oszlop);
		hely elso = kivalaszt(mtx, sor, oszlop);
		megjelenit(mtx, sor, oszlop);
		hely masodik = kivalaszt(mtx, sor, oszlop);
		megjelenit(mtx, sor, oszlop);
		if (mtx[elso.sor][elso.oszlop].betu == mtx[masodik.sor][masodik.oszlop].betu) {
			cout << "Egyformak, a kartyak igy maradnak.\n";
			kartyaSzam-=2;
		}
		else {
			cout << "Nem egyeznek, visszaforditom a lapokat.\n";
			mtx[elso.sor][elso.oszlop].mutat = false;
			mtx[masodik.sor][masodik.oszlop].mutat = false;
			if (torles) {
				for (int i = 0; i < 25; i++) cout << endl;
			}
		}
		forditasSzam++;
	} while (kartyaSzam > 0);
	cout << "Gratulalok, On nyert " << forditasSzam << " forditasbol.\n";
	return 0;
}