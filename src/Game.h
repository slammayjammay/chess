#ifndef GAME
#define GAME

#include <string>
#include "Board.h"

using namespace std;

class Game {
	public:
		void start();

	private:
		string ESC = "\u001B[";
		string warning;
		Board board;

		bool loop();
		void eraseDown();
		void print();
		void printInfo();
		string prompt();
};

#endif
