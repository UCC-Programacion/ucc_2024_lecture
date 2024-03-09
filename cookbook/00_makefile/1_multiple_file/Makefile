build:
	mkdir -p bin
	g++ -std=c++20 -c mymath.cpp -o bin/mymath.o
	g++ -std=c++20 -c main.cpp -o bin/main.o
	g++ -std=c++20 bin/main.o bin/mymath.o -o bin/main

compile_and_link:
	mkdir -p bin
	g++ -std=c++20 main.cpp mymath.cpp -o bin/main