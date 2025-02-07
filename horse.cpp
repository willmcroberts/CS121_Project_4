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


void advance() {
	int coin = rand() % 2;
	Horse::position += coin;
} // End advance
