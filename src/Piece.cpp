#include <string>
#include <iostream>
#include "Piece.h"

using namespace std;

string Piece::getName() {
	return this->name;
}

char Piece::getNotation() {
	return this->notation;
}
