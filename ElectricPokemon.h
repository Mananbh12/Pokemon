#ifndef CLASS_ELECTRICPOKEMON
#define CLASS_ELECTRICPOKEMON

	#include <iostream>
	#include <string>
	#include "Pokemon.h"
	
	static int counterE=0;

	class ElectricPokemon: public virtual Pokemon{
	
	public:
		ElectricPokemon(std::string n, std::string t, int h, std::string a = "thunder shock"): Pokemon(n, a, h, t){
			std::cout << "Birth of an electric pokemon" << std::endl;
			counterE++; //on incrémente le compteur
			std::cout << "Number of electric pokemons is : " << counterE << std::endl;
		}
	};

#endif