#pragma once
#include<iostream>
#include<fstream>  // ifstream és ofstream osztályokhoz

#define SR 4
#define OP 20

using namespace std;

void monogram(const string*, string*);
bool kiir(const string*, bool, ofstream&);
string* feltolt(string);
void cm_nv(string*);