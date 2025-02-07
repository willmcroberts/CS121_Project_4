game: main.o horse.o race.o
	g++ -g horse.o race.o main.o -o HorRac

main.o: main.cpp horse.h race.h
	g++ -c -g main.cpp

horse.o: horse.cpp horse.h
	g++ -c -g horse.cpp

race.o: race.cpp race.h horse.h
	g++ -c -g race.cpp

run: game
	./HorRac

clean:
	rm *.o
	rm HorRac

debug: game
	gdb game
