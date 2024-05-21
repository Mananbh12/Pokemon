#ifndef CLASS_FLYINGPOKEMON
#define CLASS_FLYINGPOKEMON

	#include <iostream>
	#include <string>
	#include "Pokemon.h"

	static int counterF=0;

	class FlyingPokemon: public virtual Pokemon{

	public:
		FlyingPokemon(std::string n, std::string t, int h, std::string a = "wing attack"): Pokemon(n, a, h, t){
			std::cout << "Birth of a flying pokemon" << std::endl;
			counterF++; //on incrémente le compteur
			std::cout << "Number of flying pokemons is : " << counterF << std::endl;
		}
	};

#endif