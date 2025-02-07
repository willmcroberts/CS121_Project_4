game: main.o
	g++ -g main.o -o HorRac

main.o: main.cpp
	g++ -c -g main.cpp

run: game
	./HorRac

clean:
	rm *.o
	rm HorRac
