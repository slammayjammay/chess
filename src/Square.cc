#include <string>
#include "rang.hpp"
#include "Square.h"
#include "Piece.h"

using namespace std;
using namespace rang;

void Square::addPiece(Piece* piece) {
	this->piece = piece;
	this->isOccupied = true;
}

void Square::removePiece() {
	this->piece = NULL;
	this->isOccupied = false;
}

void Square::print() {
	string square = this->isOccupied ? this->piece->unicode : "   ";

	if (this->color == 'w') {
		cout << bg::yellow << fg::black << square << style::reset;
	} else {
		cout << bg::gray << fg::black << square << style::reset;
	}
}
