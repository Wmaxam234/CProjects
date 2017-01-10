/*
 * character.cpp
 *
 *  Created on: Jan 10, 2017
 *      Author: William
 */

#include "character.h"
#include "world.h"

character::character(std::string nm)
: name(nm) {

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
		int gender;
		std::cout << "Ok, character creation complete (THis is a W.I.P)!!!\n";
		std::cout << "Pick a gender 1.Male 2.Female\n";
		answer = ' ';
		std::cin >> answer;
		if(answer == '1'){
			gender = 1;
			std::cout << "Now loading world\n";
			world w();
		}
		if(answer == '2'){
			gender = 2;
		}
	}
	if(answer == 'N'){
		std::cout << "Please enter a new name when prompted.\n";
		goto naming;
	}

}
/*
void character::loadCharacter(){

}
*/
