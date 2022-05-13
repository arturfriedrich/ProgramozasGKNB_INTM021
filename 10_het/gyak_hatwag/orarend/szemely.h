#pragma once
#include <iostream>
#include "nap.h"

#define NAPOK 5

using namespace std;

struct szemely {
    string nev;
    nap orarend[NAPOK];
};