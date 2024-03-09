# Compiler
CXX = g++
# Compiler flags
CXXFLAGS = -std=c++20 -Wall -Wextra -pedantic
# Executable name
TARGET = main
# Directories
BINDIR = bin

# Source files
SRCS = $(wildcard *.cpp)
# Object files
OBJS = $(SRCS:%.cpp=$(BINDIR)/%.o)

all: $(BINDIR)/$(TARGET)

$(BINDIR)/$(TARGET): $(OBJS)
	mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BINDIR)/%.o: %.cpp
	mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@
