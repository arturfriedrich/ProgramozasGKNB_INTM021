#pragma once
#include <iostream>
#include <string.h>
#include "nap.h"

#define NAPOK 5

using std::string;

struct szemely {
    string nev;
    nap orarend[NAPOK];
};