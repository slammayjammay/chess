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

using namespace std;

class PieceFactory {
	public:
		static Piece* FromString(string name, char color) {
			if (name.compare("king") == 0) {
				return new King(color);
			}
			if (name.compare("queen") == 0) {
				return new Queen(color);
			}
			if (name.compare("rook") == 0) {
				return new Rook(color);
			}
			if (name.compare("bishop") == 0) {
				return new Bishop(color);
			}
			if (name.compare("knight") == 0) {
				return new Knight(color);
			}
			if (name.compare("pawn") == 0) {
				return new Pawn(color);
			}

			throw runtime_error("String does not refer to a valide piece.");
		}

		static Piece* FromNotation(char notation, char color) {
			if (notation == 'K') {
				return new King(color);
			}
			if (notation == 'Q') {
				return new Queen(color);
			}
			if (notation == 'R') {
				return new Rook(color);
			}
			if (notation == 'B') {
				return new Bishop(color);
			}
			if (notation == 'N') {
				return new Knight(color);
			}
			if (notation == 'P') {
				return new Pawn(color);
			}

			throw runtime_error("Notation does not refer to a valide piece.");
		}
};

#endif
