compile:
	mkdir -p dist
	g++ -I ./include -I ./src \
	@conanbuildinfo.gcc \
	-std=c++11 \
	src/index.cpp \
	src/Game.cpp \
	src/Board.cpp \
	src/Square.cpp \
	src/Piece.cpp \
	src/King.cpp \
	src/Queen.cpp \
	src/Rook.cpp \
	src/Bishop.cpp \
	src/Knight.cpp \
	src/Pawn.cpp \
	-o dist/index.c
