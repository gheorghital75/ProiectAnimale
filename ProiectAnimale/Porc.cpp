#include <iostream>
#include "Animal.cpp"

using namespace std; 

#ifndef PORC_H
#define PORC_H

class Porc : public Animal {
public:
    Porc(string a, string s) :Animal(a, s)
    {

    }
};
#endif