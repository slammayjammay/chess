#ifndef PAWN
#define PAWN

#include "Piece.h"

class Pawn : public Piece {
	public:
		Pawn(char color) : Piece(color) {
			this->name = "pawn";
			this->color = color;
			this->notation = 'p';
			this->unicode = " ♙ ";
		}

		bool isValidMove(string pos1, string pos2) override;
};

#endif
