#ifndef PIECE
#define PIECE

#include <string>

using namespace std;

class Piece {
	public:
		Piece () {}
		virtual ~Piece() {}

		string name;
		char notation;

		string getName();
		char getNotation();
};

#endif
