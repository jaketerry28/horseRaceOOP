//race.cpp

#include "race.h"

Race::Race(){
	Race::TRACKLENGTH = 15;
	Race::horseNum = 5;
	Race::racers[horseNum] = Horse();
} // end constructor

void Race::run(){
	bool keepGoing = true;
	while (keepGoing){
		std::cout << "Press enter to continue..." << std::endl;
		std::cin.get();

		for (int i = 0; i < Race::horseNum; i++){
			if (i.isWinner()){
				keepGoing = false;
			} // end if
			else{
				i.printLane();
				i.advance();
			} // end else
		} // end for
	} // end while
} // end run
