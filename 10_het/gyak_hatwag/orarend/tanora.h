#pragma once
#include <iostream>
#include "idopont.h"

using namespace std;

struct tanora {
    string nev;
    int kezd;
    int vege;
};

bool utkozik(const tanora*, const tanora*);