//track.h

#ifndef TRACK_H_EXISTS
#define TRACK_H_EXISTS

#include <string>
#include "horse.h"

class TRACK {
	private:
	  int TRACKLENGTH;
	  Horse lane;
	public:
	  Track();
	  void setHorseLane(Horse lane);
	  std::string getHorseLane(Horse lane);
} // end class def

#endif
