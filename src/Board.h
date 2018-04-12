#ifndef BOARD
#define BOARD

#include <string>
#include "Piece.h"
#include "Square.h"

using namespace std;

class Board {
	public:
		static const int size = 8;
		static const char initialPositions[size][size];

		~Board() {
			for (int i = 0; i < this->size; i++) {
				for (int j = 0; j < this->size; j++) {
					delete this->board[i][j];
				}
			}
		}

		void setupPieces();
		void addPiece(string notation, Piece* piece);
		bool isOccupied(string notation);
		int fileFromNotation(string notation);
		int rankFromNotation(string notation);
		Square* squareAt(string position);

	private:
		Square *board[size][size];
};

#endif
