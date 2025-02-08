//race.cpp

#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race(){
//	Race::TRACKLENGTH = 15;
//	Race::horseNum =5;
	Race::racers[horseNum] = Horse();
} // end constructor

void Race::run(){
	for (int i = 0; i < Race::horseNum; i++){
		Race::racers[i].init(i, TRACKLENGTH);
	} // end for
	bool keepGoing = true;
	while (keepGoing){
		std::cout << "Press enter to continue..." << std::endl;
		std::cin.get();

		for (int i = 0; i < Race::horseNum; i++){
			if (Race::racers[i].isWinner()){
				keepGoing = false;
			} // end if
			else{
				Race::racers[i].printLane();
				Race::racers[i].advance();
			} // end else
		} // end for
	} // end while
} // end run
