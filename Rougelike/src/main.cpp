#include <iostream>
#include <cstdlib>
#include "classes/world.h"
#include "classes/character.h"
#include "classes/enemy.h"

int main(){
	std::string name;
	std::cout << "Starting program.....\n";
	world w();
	character c(name);
	enemy e();
	std::cout << "Program started!\n";
	std::cout << "Loading...\n";
	c.newCharacter();
}
