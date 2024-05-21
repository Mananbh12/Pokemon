#include <iostream>
#include <string>
#include "Pokemon.h"
#include "ElectricPokemon.h"
#include "FlyingPokemon.h"
#include "Pikachu.h"
#include "Golbat.h"
#include "Zapdos.h"

int main(){
	Pikachu pika=Pikachu("Ash", 500);
	Golbat golbat=Golbat("Brock", 500);
	Zapdos zap= Zapdos("Ash", 1000);
	return 0;
}