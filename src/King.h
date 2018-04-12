#ifndef KING
#define KING

#include "Piece.h"

class King : public Piece {
	public:
		King() : Piece() {
			this->name = "king";
			this->notation = 'K';
		}
};

#endif
