main:	main.o Uhrzeit.o
	g++ main.o Uhrzeit.o -std=c++11
	./a.out

main.o:	main.cpp
	g++ main.cpp -c -std=c++11

Uhrzeit.o:	Uhrzeit.cpp Uhrzeit.h
	g++ Uhrzeit.cpp -c -std=c++11