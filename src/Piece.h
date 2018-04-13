#ifndef PIECE
#define PIECE

#include <string>
#include <iostream>

using namespace std;

class Piece {
	public:
		Piece(char color) {}
		virtual ~Piece() {}

		string name;
		string unicode;
		char notation;
		char color;

		virtual bool isValidMove(string pos1, string pos2) = 0;
};

#endif
