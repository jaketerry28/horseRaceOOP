//race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
	private:
		static const int TRACKLENGTH = 15;
		static const int horseNum = 5;
		Horse racers[horseNum];
	public:
		Race();
		void run();
}; // end class def

#endif
