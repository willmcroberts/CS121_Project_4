// race.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "race.h"
#include "horse.h"


Race::Race() {
	Horse* horses[5] = {0};
	const static int trackLength = 15;
	const static int numHorses = 5;	
}; // End Constructor

void Race::run() {
	srand(time(NULL));
	bool keepGoing = true;

	while (keepGoing) {
		for (int i = 0; i < Race::numHorses; i++) {
			horses[i].advance();
			horses[i].printLane();
			if (horses[i].isWinner()) {
				keepGoing = false;
			} // End if statement
		} // End of for loop

		std::cout << "Press ENTER to continue";
		std::cin.get();
	} // End of while loop
} // End run
