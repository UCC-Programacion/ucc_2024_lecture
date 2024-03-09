# Compiler
CXX = g++
# Compiler flags
CXXFLAGS = -std=c++20 -Wall -Wextra -pedantic
# Executable name
TARGET = main
# Directories
BINDIR = bin

all: $(BINDIR)/$(TARGET)

$(BINDIR)/$(TARGET): $(BINDIR)/main.o $(BINDIR)/mymath.o
	mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) bin/main.o $(BINDIR)/mymath.o -o $(BINDIR)/main

$(BINDIR)/main.o: main.cpp
	mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -c main.cpp -o $(BINDIR)/main.o

$(BINDIR)/mymath.o: mymath.cpp
	mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -c mymath.cpp -o $(BINDIR)/mymath.o