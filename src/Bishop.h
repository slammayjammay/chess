#ifndef BISHOP
#define BISHOP

#include "Piece.h"

class Bishop : public Piece {
	public:
		Bishop(char color) : Piece(color) {
			this->name = "bishop";
			this->color = color;
			this->notation = 'B';
			this->unicode = " ♗ ";
		}

		bool isValidMove(string pos1, string pos2) override;
};

#endif
