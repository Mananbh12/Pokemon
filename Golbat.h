#ifndef CLASS_GOLBAT
#define CLASS_GOLBAT

	#include <iostream>
	#include <string>
	#include "Pokemon.h"
	#include "FlyingPokemon.h"


	class Golbat: public FlyingPokemon{
	public:
		Golbat(std::string t, int h, std::string a = "wing attack"): Pokemon("Pikachu", t, h), FlyingPokemon("Golbat", t, h){
			std::cout << "Birth of a Golbat " << std::endl;
		}
	};

#endif