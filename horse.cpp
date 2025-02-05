//horse.cpp
#include <iostream>
#include "horse.h"

Horse::Horse(){
	Horse::lane = "none";
} // end constructor

Horse::Horse(){
	Horse::pos = 0;
} // end constructor

void Horse::setLane(std::string lane){
	Horse::lane = lane;
}  // end setLane

std::string Horse::getLane(){
	return lane;
} // end getLane

bool Horse::isWinner(){
	if (horses[horseNum] >= TRACKLENGTH){
         	int winningLane = horseNum;
       		std::cout << "Horse " << horseNum <<" WINS!!!" << std::endl;
       		return true;
    	} // end for
    	else{
        	return false;
} // end isWinner

void Horse::setPos(int pos){
	Horse::pos = pos;
} // end setPos

int Horse::getPos(){
	return pos
} // end getPos
