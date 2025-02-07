// horse.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "horse.h"

Horse::Horse() {
	Horse::position = 0;
	Horse::id = 0;
	Horse::trackLength = 15;
} // End constuctor

void Horse::init(int id, int trackLength) {
	Horse::position = 0;
	Horse::id = id;
	Horse::trackLength = trackLength;
} // End init

void Horse::advance() {
	int coin = rand() % 2;
	Horse::position += coin;
} // End advance

void Horse::printLane() {
	for (int i = 0; i < Horse::trackLength; i++) {
		if (i == Horse::position) {
			std::cout << Horse::id << " ";
		} else {
			std::cout << ". ";
		} // End if statement
	} // End for loop
} // End printLane

bool Horse::isWinner() {
	bool result = false;
	if (Horse::position >= Horse::trackLength) {
		result = true;
		std::cout << "HORSE " << Horse::id << " WINS!!!" << std::endl;
	} // End if statement

	return result;
} // End isWinner
