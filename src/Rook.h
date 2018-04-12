#ifndef ROOK
#define ROOK

#include "Piece.h"

class Rook : public Piece {
	public:
		Rook() : Piece() {
			this->name = "rook";
			this->notation = 'R';
		}
};

#endif
