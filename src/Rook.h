#ifndef ROOK
#define ROOK

#include "Piece.h"

class Rook : public Piece {
	public:
		Rook(char color) : Piece(color) {
			this->name = "rook";
			this->color = color;
			this->notation = 'R';
			this->unicode = " ♖ ";
		}

		bool isValidMove(string pos1, string pos2) override;
};

#endif
