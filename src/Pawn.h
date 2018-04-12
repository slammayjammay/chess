#ifndef PAWN
#define PAWN

#include "Piece.h"

class Pawn : public Piece {
	public:
		Pawn() : Piece() {
			this->name = "pawn";
			this->notation = 'p';
		}
};

#endif
