game: horse.o main.o
	g++ -g horse.o main.o -o game

main.o: horse.h main.cpp 
	g++ -c -g main.cpp

horse.o: horse.h horse.cpp
	g++ -c -g horse.cpp

clean:
	rm *.o
	rm game

run: game
	./game

debug: game
	gdb game
