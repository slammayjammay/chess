#ifndef BISHOP
#define BISHOP

#include "Piece.h"

class Bishop : public Piece {
	public:
		Bishop() : Piece() {
			this->name = "bishop";
			this->notation = 'B';
		}
};

#endif
