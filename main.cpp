#include <iostream>
#include "horse.h"
#include "race.h"

int main(){
	Horse j;
	std::cout << "Hi there !" << std::endl;
	for (int i = 0; i < horseNum; i++){
		Horse i;
		i.init(0, 14);	
	} // end for
	return(0);
} // end main
