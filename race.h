// race.h
#ifndef RACE_H_EXISITS
#define RACE_H_EXISITS
#include <iostream>
#include "horse.h"

class Race {
	private:
		const static int trackLength = 15;
		const static int numHorses = 5;
		Horse horses[numHorses];
	public:
		Race();
		void run();
}; // End class def

#endif
