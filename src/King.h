#ifndef KING
#define KING

#include "Piece.h"

class King : public Piece {
	public:
		King(char color) : Piece(color) {
			this->name = "king";
			this->color = color;
			this->notation = 'K';
			this->unicode = " ♔ ";
		}

		bool isValidMove(string pos1, string pos2) override;
};

#endif
