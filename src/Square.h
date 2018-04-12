#ifndef SQUARE
#define SQUARE

#include <string>
#include "Piece.h"

using namespace std;

class Square {
	public:
		char color;
		char position[3];
		bool isOccupied;
		Piece* piece;

		Square(char color) : color(color), isOccupied(false) {}

		void addPiece(Piece* piece);
		void removePiece();
};

#endif
