#include <iostream>
#include "Animal.cpp"
#include "Porc.cpp"
#include "Caine.cpp"
#include "Pisica.cpp"
#include <list>

using namespace std;

int main() {

	// se creeaza lista de animale
	list<Animal> animale;

	// se creeaza cele 3 animale
	Porc porc("porc","groh groh");
	Caine caine("caine", "ham ham");	
	Pisica pisu("pisica", "miau miau");

	// se adauga in lista cele 3 animale
	animale.push_back(porc);
	animale.push_back(caine);
	animale.push_back(pisu);
	
	// se afiseaza la consola sunetul fiecarui animal
	for (std::list<Animal>::iterator it = animale.begin(); it != animale.end(); it++) {
		((Animal)*it).sunetAnimal();
	}

	return 0;
}