#ifndef QUEEN
#define QUEEN

#include "Piece.h"

class Queen : public Piece {
	public:
		Queen(char color) : Piece(color) {
			this->name = "queen";
			this->color = color;
			this->notation = 'Q';
			this->unicode = " ♕ ";
		}

		bool isValidMove(string pos1, string pos2) override;
};

#endif
