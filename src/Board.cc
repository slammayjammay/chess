#include <iostream>
#include <string>
#include "rang.hpp"
#include "rlutil.h"
#include "Board.h"
#include "Square.h"
#include "PieceFactory.h"
#include "Piece.h"
#include "Knight.h"

using namespace std;
using namespace rang;
using namespace rlutil;

// starting position of the chess board.
// may not be a good way to do it for other variations...
// Note: notations for pawns is 'P' (which isn't official)
const char Board::initialPositions[size][size] =
{
	{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
	{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
	{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
};

void Board::setupPieces() {
	Piece* piece;

	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size; j++) {
			char color = (i + j) % 2 == 0 ? 'w' : 'b';
			char initialPieceChar = this->initialPositions[this->size - 1 - i][j];

			this->board[i][j] = new Square(color);

			if (initialPieceChar != ' ') {
				piece = PieceFactory::FromNotation(initialPieceChar, color);
				this->board[i][j]->addPiece(piece);
			}
		}
	}
}

void Board::addPiece(string notation, Piece* piece) {
	this->squareAt(notation)->addPiece(piece);
}

void Board::print() {
	// [0, 0] is the bottom left corner, [7, 0] is the top left
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size; j++) {
			this->board[this->size - 1 - i][j]->print();
		}

		cout << endl;
	}

	cout << endl;
}

void Board::movePieceFromTo(Piece* piece, string pos1, string pos2) {
	this->squareAt(pos2)->addPiece(piece);
	this->squareAt(pos1)->removePiece();
}

bool Board::isOccupied(string notation) {
	return this->squareAt(notation)->isOccupied;
}

Square* Board::squareAt(string notation) {
	int file = this->fileFromNotation(notation);
	int rank = this->rankFromNotation(notation);
	return this->board[rank][file];
}

int Board::fileFromNotation(string notation) {
	return (int)notation[0] - 97;
}

int Board::rankFromNotation(string notation) {
	return (int)notation[1] - 49;
}

