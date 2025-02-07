// race.h
#ifndef RACE_H_EXISITS
#define RACE_H_EXISITS
#include "horse.h"

class Race {
	private:
		Horse* horses;
		const static int trackLength;
		const static int numHorses;
	public:
		Race();
		void run();
}; // End class def

#endif
