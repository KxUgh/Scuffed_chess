CXXFLAGS= -Isrc -std=c++17 -Wall -Wextra -pedantic -ggdb
SOURCE=src/constants.cpp src/main.cpp src/piece.cpp src/board.cpp 
LIBS=-lsfml-graphics -lsfml-window -lsfml-system

chess: clean
	$(CXX) $(CXXFLAGS) -o chess $(SOURCE) $(LIBS)

clean:
	rm -f chess