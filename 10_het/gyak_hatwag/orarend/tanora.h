#pragma once
#include <iostream>
#include <string.h>
#include "idopont.h"

using std::string;

struct tanora {
    string nev;
    int kezd;
    int vege;
};

bool utkozik(const tanora*, const tanora*)