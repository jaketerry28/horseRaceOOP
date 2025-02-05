//race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race {
	private:
	  const int trackLength;
	  const int numHorses;
	  Horse racers[];
	public:
	  Race();
	  void run();
}; // end def class

#endif
