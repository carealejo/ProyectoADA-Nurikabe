#ifndef TABLERO_H
#define TABLERO_H
#include "stdlib.h"
#include "stdio.h"
#include "iostream"
#include "fstream"
#include <vector>

using namespace std;

class tablero
{
private:
     int n,m;
     vector< vector<int> > M;
     fstream file;
public:
    tablero();
    void gentablero(string s);
};

#endif // TABLERO_H
