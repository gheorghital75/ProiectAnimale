#include <iostream>
#include <string>
using namespace std;
#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:
    // date
    string sunet;
    string animal;

    // constructor
    Animal(string a, string s) {
        this->sunet = s;
        this->animal = a;
    }

    // metode
    void sunetAnimal() {
        cout << "Animalul <<" << this->animal << ">> scoate sunetul <<" << this->sunet << ">>" << endl;
    }
    
};
#endif