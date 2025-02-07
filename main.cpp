#include <iostream>
#include "horse.h"
//#include "race.h"

int main(){
	Horse j;
	std::cout << "Hi there !" << std::endl;
	j.init(0, 14);
	j.printLane();
	return(0);
} // end main
