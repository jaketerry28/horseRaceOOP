//horse.h

#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <string>

class Horse {
	private:
	  std::string lane;
	  int pos;
	public:
	  Horse();
	  void setLane(std::string lane);
	  std::string getLane();
	  bool isWinner();
	  void setPos(int coin);
	  int getPos();
} // end class def

#endif