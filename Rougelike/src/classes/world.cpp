/*
 * world.cpp
 *
 *  Created on: Jan 10, 2017
 *      Author: William
 */

#include "world.h"

world::world(){

}

void world::loadWorld(){
	char map[50][50];
	for(int i = 0; i < 50; ++i){
		for(int j = 0; j < 50; ++j){
			map[i][j] = 'X';
		}
	}
}

void world::displayWorld(char map[50][50]){

}

