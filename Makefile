compile:
	mkdir -p dist
	g++ -I ./include -I ./src \
	@conanbuildinfo.gcc \
	-std=c++11 \
	src/index.cpp \
	src/Game.cpp \
	src/Board.cpp \
	src/Piece.cpp \
	src/Knight.cpp \
	-o dist/index.c
