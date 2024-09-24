#include "TetrominoLoader.h"

int main() {
	TetrominoLoader loader;
	Tetromino newT = loader.loadTetromino();
	newT.printShape();
}