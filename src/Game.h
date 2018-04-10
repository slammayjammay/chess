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
		Board board;

		void eraseDown();
};

#endif
