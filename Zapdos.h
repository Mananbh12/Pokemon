#ifndef CLASS_ZAPDOS
#define CLASS_ZAPDOS

	#include <iostream>
	#include <string>
	#include "Pokemon.h"
	#include "FlyingPokemon.h"
	#include "ElectricPokemon.h"


	class Zapdos: public FlyingPokemon, public ElectricPokemon{
	public:
		Zapdos(std::string t, int h, std::string a = "wing attack"): Pokemon("Zapdos", t, h), ElectricPokemon("Zapdos", t, h), FlyingPokemon("Zapdos", t, h) {
			std::cout << "Birth of a Zapdos " << std::endl;
		}
	};

#endif