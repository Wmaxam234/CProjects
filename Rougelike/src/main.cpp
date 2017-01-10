#include <iostream>
#include <cstdlib>
#include "classes/character.h"

int main(){
	std::string name;
	std::cout << "Starting program.....\n";
	character c(name);
	std::cout << "Program started!\n";
	std::cout << "Loading...\n";
	/*
	std::cout << "Would you like to make a new character or load a previous one? (A or B)\n";
	char answer;
	std::cin >> answer;
	if(answer == 'A'){
		c.newCharacter();
	}
	if(answer == 'B'){
		std::cout << "Input character name\n";
		std::cin >> c.loaded;
		if(c.loaded == c.loadable[1]){
			c.loadCharacter();
		}
	}
	*/
	c.newCharacter();
}
