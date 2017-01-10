/*
 * character.cpp
 *
 *  Created on: Jan 10, 2017
 *      Author: William
 */

#include "character.h"

character::character(std::string nm)
: name(nm) {
	// TODO Auto-generated constructor stub

}
void character::newCharacter(){
	naming:
	std::cout << "Enter a player name:\n";
	std::cin >> name;
	std::cout << "You entered: " << name << " Is this correct?\n";
	std::cout << "Enter Y or N\n";
	char answer;
	std::cin >> answer;
	if(answer == 'Y'){
		std::cout << "Ok, character creation complete (THis is a W.I.P)!!!\n";
	}
	if(answer == 'N'){
		std::cout << "Please enter a new name when prompted.\n";
		goto naming;
	}
}

