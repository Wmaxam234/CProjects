/*
 * character.h
 *
 *  Created on: Jan 10, 2017
 *      Author: William
 */

#ifndef CHARACTER_H_
#define CHARACTER_H_
#include <iostream>
#include <cstdlib>

class character {
public:
	character(std::string);
	void newCharacter();
private:
	std::string name;
};

#endif /* CHARACTER_H_ */
