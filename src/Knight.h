#ifndef KNIGHT
#define KNIGHT

#include "Piece.h"

class Knight : public Piece {
	public:
		Knight() : Piece() {
			this->name = "knight";
			this->notation = 'N';
		}
};

#endif
