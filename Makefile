temperature: main.o temperature.o
	g++ main.o temperature.o -o temperature

main.o: main.cpp
	g++ -c main.cpp

temperature.o: temperature.cpp
	g++ -c temperature.cpp

clean:
	rm *.o temperature
