#ifndef QUEEN
#define QUEEN

#include "Piece.h"

class Queen : public Piece {
	public:
		Queen() : Piece() {
			this->name = "queen";
			this->notation = 'Q';
		}
};

#endif
