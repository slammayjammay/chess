#ifndef SQUARE
#define SQUARE

#include <string>
#include "Piece.h"

using namespace std;

class Square {
	public:
		char color;
		bool isOccupied;
		Piece* piece;

		Square(char color) : color(color), isOccupied(false), piece() {}
		~Square() {
			delete this->piece;
			this->piece = NULL;
		}

		void addPiece(Piece* piece);
		void removePiece();
		void print();
};

#endif
