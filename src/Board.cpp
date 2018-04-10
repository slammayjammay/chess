#include <iostream>
#include "Board.h"
#include "Knight.h"

using namespace std;

void Board::setupPieces() {
	Knight knight;
	this->board[0][0] = &knight;

	char notation = this->board[0][0]->getNotation();
	cout << notation;
}

void Board::print() {
}
