bin/main: bin/main.o bin/mymath.o
	mkdir -p bin
	g++ -std=c++20 bin/main.o bin/mymath.o -o bin/main

bin/main.o: main.cpp
	mkdir -p bin
	g++ -std=c++20 -c main.cpp -o bin/main.o

bin/mymath.o: mymath.cpp
	mkdir -p bin
	g++ -std=c++20 -c mymath.cpp -o bin/mymath.o