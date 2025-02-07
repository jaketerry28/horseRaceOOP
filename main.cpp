#include <iostream>
#include "horse.h"
//#include "race.h"

int main(){
	Horse j;
	std::cout << "Hi there !" << std::endl;
	j.init(0, 14);

	bool keepGoing = true;
	while (keepGoing){
		std::cout << "Press enter to continue..." << std::endl;
		std::cin.get();

		if (j.isWinner()){
			keepGoing = false;
		} // end if
		else{
			j.printLane();
			j.advance();
		} // end else
	} // end while
	return(0);
} // end main
