#ifndef KNIGHT
#define KNIGHT

#include "Piece.h"

class Knight : public Piece {
	public:
		Knight(char color) : Piece(color) {
			this->name = "knight";
			this->color = color;
			this->notation = 'N';
			this->unicode = " ♘ ";
		}

		bool isValidMove(string pos1, string pos2) override;
};

#endif
