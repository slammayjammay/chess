#include <iostream>
#include <string>
#include "Board.h"
#include "Square.h"
#include "PieceFactory.h"
#include "Piece.h"
#include "Knight.h"

using namespace std;

// starting position of the chess board.
// may not be a good way to do it for other variations...
// Note: notations for pawns is 'p' (which isn't official)
const char Board::initialPositions[size][size] =
{
	{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
	{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
	{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
};

void Board::setupPieces() {
	Piece* piece;

	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size; j++) {
			char color = (i + j) % 2 == 0 ? 'w' : 'b';
			char initialPieceChar = this->initialPositions[size - 1 - i][j];

			this->board[i][j] = new Square(color);

			piece = PieceFactory::FromNotation(initialPieceChar);
			this->board[i][j]->addPiece(piece);
		}
	}
}

void Board::addPiece(string notation, Piece* piece) {
	this->squareAt(notation)->addPiece(piece);
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

