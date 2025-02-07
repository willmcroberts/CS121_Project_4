// race.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "race.h"
#include "horse.h"


Race::Race() {
	Race::trackLength;
	Race::numHorses;
	for (int i = 0; i < numHorses; i++) {
		Race::horses[i];
		Race::horses[i].init(i, trackLength);
	} // End for loop
}; // End Constructor

void Race::run() {
	srand(time(NULL));
	bool keepGoing = true;

	while (keepGoing) {
		for (int i = 0; i < 5; i++) {
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
