#ifndef CLASS_PIKACHU
#define CLASS_PIKACHU

	#include <iostream>
	#include <string>
	#include "Pokemon.h"
	#include "ElectricPokemon.h"


	class Pikachu: public ElectricPokemon{
	public:
		Pikachu(std::string t, int h, std::string a = "thunder shock"): Pokemon("Pikachu", t, h), ElectricPokemon("Pikachu", t, h){
			std::cout << "Birth of a Pikachu " << std::endl;
		}
	};

#endif