#include <iostream>
#include <string>
#include <regex>
#include "rang.hpp"
#include "rlutil.h"

#include "Game.h"
#include "PieceFactory.h"
#include "Board.h"
#include "Knight.h"

using namespace std;
using namespace rlutil;
using namespace rang;

// const string Game::ESC = "\u001B";

void Game::eraseDown() {
	cout << this->ESC << "J";
}

void Game::start() {
	this->board.setupPieces();
	while (true) {
		this->loop();
	}
}

void Game::loop() {
	this->print();

	// show warnings
	cout << endl << endl << fg::red << this->warning << style::reset;
	cout << this->ESC << "3A" << endl;

	string input;
	cout << "Play a move: > ";
	getline(cin, input);

	string moves[] = {
		input.substr(0, 2),
		input.substr(3, 2)
	};

	if (!this->board.isOccupied(moves[0])) {
		this->warning = "There is no piece at [" + moves[0] + "]";
		return;
	}

	Piece* piece = this->board.squareAt(moves[0])->piece;

	if (piece->isValidMove(moves[0], moves[1])) {
		this->board.movePieceFromTo(piece, moves[0], moves[1]);
	} else {
		this->warning = "[" + input + "]" + " is not a valid move.";
		// this->warning = this->board.squareAt("a1")->piece->color;
	}
}

void Game::print() {
	gotoxy(1, 1);
	this->eraseDown();
	this->printInfo();
	this->board.print();
}

void Game::printInfo() {
	cout << style::bold << style::underline << "NOTATION" << style::reset << endl;
	cout
		<< "Square positions (e.g. \"" << fg::cyan << "f3" << style::reset << "\") are written as a " << style::underline << "lowercase" << style::reset << endl
		<< "letter denoting the column followed by a number denoting" << endl
		<< "the row. \"" << fg::cyan << "a1" << style::reset << "\" is the bottom left corner. \"" << fg::cyan << "h8" << style::reset << "\" is the top" << endl
		<< "right." << endl
		<< endl;
	cout
		<< "To enter a move, specify a FROM square and a TO square," << endl
		<< "separated by a space." << endl
		<< "Ex: " << style::bold << "g1 f3" << style::reset << endl
		<< endl;
}

string Game::prompt() {
	string notation;
	cout << "Play a move: > ";
	getline(cin, notation);
	return notation;
}
