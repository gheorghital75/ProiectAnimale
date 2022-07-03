#include <iostream>
#include "Animal.cpp"
using namespace std;

#ifndef CAINE_H
#define CAINE_H

class Caine : public Animal {
public:
    Caine(string a, string s):Animal(a,s)
    {

    }
};

#endif