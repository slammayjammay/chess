#ifndef PIECE_FACTORY
#define PIECE_FACTORY

#include <string>
#include "Piece.h"
#include "King.h"
#include "Queen.h"
#include "Rook.h"
#include "Bishop.h"
#include "Knight.h"
#include "Pawn.h"

class PieceFactory {
	public:
		static Piece* FromString(string name) {
			if (name.compare("king") == 0) {
				return new King;
			}
			if (name.compare("queen") == 0) {
				return new Queen;
			}
			if (name.compare("rook") == 0) {
				return new Rook;
			}
			if (name.compare("bishop") == 0) {
				return new Bishop;
			}
			if (name.compare("knight") == 0) {
				return new Knight;
			}
			if (name.compare("pawn") == 0) {
				return new Pawn;
			}
		}

		static Piece* FromNotation(char notation) {
			if (notation == 'K') {
				return new King;
			}
			if (notation == 'Q') {
				return new Queen;
			}
			if (notation == 'R') {
				return new Rook;
			}
			if (notation == 'B') {
				return new Bishop;
			}
			if (notation == 'N') {
				return new Knight;
			}
			if (notation == 'P') {
				return new Pawn;
			}
		}
};

#endif
