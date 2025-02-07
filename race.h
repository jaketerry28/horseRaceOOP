//race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
	private:
		static int TRACKLENGTH;
		const int horseNum;
		Horse racers[horseNum];
	private:
		Race();
		void run();
} // end class def

#endif
