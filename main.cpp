#include "TetrominoLoader.h"
#include "Game.h"

int main() {
	TetrominoLoader loader;
	Tetromino newT = loader.loadTetromino();
	newT.printShape();


	Game newGame;
	newGame.setGrid();
	newGame.printGrid();
}