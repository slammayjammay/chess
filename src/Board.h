#ifndef BOARD
#define BOARD

#include "Piece.h"

class Board {
	public:
		static const int size = 8;
		void setupPieces();
		void print();

		~Board() {}

	private:
		Piece *board[size][size];
};

#endif
