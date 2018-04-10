#include <iostream>
#include "rang.hpp"
#include "rlutil.h"

#include "Game.h"
#include "Board.h"

using namespace std;
using namespace rlutil;
using namespace rang;

void Game::start() {
	gotoxy(1, 1);
	this->eraseDown();
	this->board.setupPieces();
}

void Game::eraseDown() {
	cout << this->ESC << "J";
}
