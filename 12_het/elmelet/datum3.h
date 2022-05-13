#ifndef DATUM
#define DATUM

#include <string>

struct datum {
  int ev, ho, nap;
};

enum hetnapja { HETFO, KEDD, SZERDA, CSUTORTOK,
                PENTEK, SZOMBAT, VASARNAP };

bool szoko(int ev); // szokoev megallapitas
// honap napjainak szamat adja vissza adott evben
int napok(int ev, int ho);
// datum tartalmi ellenorzese
bool ellenoriz(const datum* d);
// ev napjanak meghatarozasa ev, ho, napbol
int evNapja(const datum* d);
// het napjanak szamitasa
std::string hetNapja(const datum* d);
hetnapja hetNapjaEnum(const datum* d);
// 0000.01.01 ota eltelt napok szama
int bazis(const datum* d);
// ket datum kozott eltelt napok szama
int kulonbseg(const datum* tol, const datum* ig);
// nap even beluli szamabol ho es nap szamolasa
datum hoEsNap(int ev, int evNapja);
#endif
