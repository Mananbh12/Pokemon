#ifndef CLASS_POKEMON
#define CLASS_POKEMON

	#include <iostream>
	#include <string>

	static int counter = 0;
	
	class Pokemon{
	protected:
		std::string name, trainer, basic_attack;
		int hp;
	public:
		Pokemon(std::string n, std::string t, int h, std::string a = "tackle"): name(n), trainer(t), hp(h), basic_attack(a){
			std::cout << "Birth of a pokemon" << std::endl;
			counter++; //on incrémente le compteur
			std::cout << "Number of pokemons is : " << counter << std::endl;
		}

		Pokemon():name(""), trainer(""), hp(0), basic_attack(""){
			std::cout << "Birth of a paralyzed pokemon" << std::endl;
			counter++; //on incrémente le compteur
			std::cout << "Number of pokemons is : " << counter << std::endl;
		}

		~Pokemon(){
			std::cout << "Death of a pokemon" << std::endl;
			counter--; //on décrémente le compteur
			std::cout << "Number of pokemons is : " << counter << std::endl;
		}

	};
#endif