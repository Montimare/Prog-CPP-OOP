PersonUI:	PersonUI.o Adresse.o Person.o Student.o StudiDaten.o
	g++ -o PersonUI PersonUI.o Adresse.o Person.o Student.o StudiDaten.o
	./PersonUI

PersonUI.o:	PersonUI.cpp
	g++ PersonUI.cpp -c

Adresse.o:	Adresse.cpp Adresse.h
	g++ Adresse.cpp -c

Person.o:	Person.cpp Person.h
	g++ Person.cpp -c

Student.o:	Student.cpp Student.h
	g++ Student.cpp -c

StudiDaten.o:	StudiDaten.cpp StudiDaten.h
	g++ StudiDaten.cpp -c

clear:	
	rm *.o