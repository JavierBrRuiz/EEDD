all: Fracciones

Fracciones: main.o Fraccion.o mcd.o
	g++ main.o Fraccion.o mcd.o -o fracciones

main.o: main.cpp
	g++ -c main.cpp

Fraccion.o: Fraccion.cpp
	g++ -c Fraccion.cpp 

mcd.o: mcd.cpp
	gcc -c mcd.cpp
