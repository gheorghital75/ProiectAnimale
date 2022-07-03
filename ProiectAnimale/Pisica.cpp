#include <iostream>
#include "Animal.cpp"
using namespace std;

#ifndef PISICA_H
#define PISICA_H

class Pisica : public Animal {
public:
    Pisica(string a, string s) :Animal(a, s)
    {

    }
};

#endif