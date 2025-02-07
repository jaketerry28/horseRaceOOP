//horse.cpp
#include <string>
#include <iostream>
#include "horse.h"
#include <random>

Horse::Horse(){
	Horse:: pos = 0;
	Horse:: id = -1;
	Horse:: trackLength = 15;
} // end constructor

void Horse::init(int id, int trackLength){
	Horse::id = id;
	Horse::trackLength = trackLength;
} // end init

void Horse::advance(){
	int coin = 100;
	
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0,1);
	coin = dist(rd);

	Horse::pos += coin;

} // end advance

void Horse::printLane(){
	std::string track[Horse::trackLength];
	for (int i = 0; i < Horse::trackLength; i++){
		if (i == Horse::pos){
			std::string test = std::to_string(Horse::id);
			track[i] = test;
			std::cout << track[i];
		} // end if
		else{
			track[i] = '-';
			std::cout << track[i];
		} // end else
	} // end for
	std::cout << std::endl;
} // end printLane

bool Horse::isWinner(){
	return Horse::pos >= Horse::trackLength;
	
} // end isWinner
