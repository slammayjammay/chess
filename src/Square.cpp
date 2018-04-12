#include <string>
#include "Square.h"
#include "Piece.h"

using namespace std;

void Square::addPiece(Piece* piece) {
	this->piece = piece;
	this->isOccupied = true;
}

void Square::removePiece() {
	this->piece = NULL;
	this->isOccupied = false;
}
