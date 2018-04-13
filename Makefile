compile:
	mkdir -p dist
	g++ -I ./include -I ./src \
	@conanbuildinfo.gcc \
	-std=c++11 \
	src/index.cc \
	src/Game.cc \
	src/Board.cc \
	src/Square.cc \
	src/Piece.cc \
	src/King.cc \
	src/Queen.cc \
	src/Rook.cc \
	src/Bishop.cc \
	src/Knight.cc \
	src/Pawn.cc \
	-o dist/index.c
