#include <string>
#include <iostream>
#include "rlutil.h"

#include "Piece.h"
#include "Knight.h"
#include "Game.h"

using namespace std;

int main() {
	try {
		Game game;
		game.start();
	} catch (const exception&) {
		cout << endl;
		return EXIT_FAILURE;
	}

	cout << endl;
	return EXIT_SUCCESS;
}
