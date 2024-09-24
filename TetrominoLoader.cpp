#include "TetrominoLoader.h"

// 열거형 정의
enum TetrominoShape { I, J, L, O, S, Z, T };

TetrominoShape getRandomShape() {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(0, 6);

	// 열거형 TetrominoShape로 변환
	return static_cast<TetrominoShape>(dist(gen));
}

void inputMatrix(std::array<int, 16>& source, std::array<std::array<int, 4>, 4>& destination) {
	int i = 0;
	for (auto& row : destination) {
		for (auto& element : row) {
			element = source[i++];
		}
	}
}

Tetromino TetrominoLoader::loadTetromino() {
	TetrominoShape s = getRandomShape();
	std::array<int, 16> src;
	std::array<std::array<int, 4>, 4> dst{ {{0}} };
	
	switch (s)
	{
	case I:
		src = {
			1, 0, 0, 0,
			1, 0, 0, 0,
			1, 0, 0, 0,
			1, 0, 0, 0
		};
		break;
	case J:
		src = {
			0, 1, 0, 0,
			0, 1, 0, 0,
			1, 1, 0, 0,
			0, 0, 0, 0
		};
		break;
	case L:
		src = {
			1, 0, 0, 0,
			1, 0, 0, 0,
			1, 1, 0, 0,
			0, 0, 0, 0
		};
		break;
	case O:
		src = {
			1, 1, 0, 0,
			1, 1, 0, 0,
			0, 0, 0, 0,
			0, 0, 0, 0
		};
		break;
	case S:
		src = {
			0, 1, 1, 0,
			1, 1, 0, 0,
			0, 0, 0, 0,
			0, 0, 0, 0
		};
		break;
	case Z:
		src = {
			1, 1, 0, 0,
			0, 1, 1, 0,
			0, 0, 0, 0,
			0, 0, 0, 0
		};
		break;
	case T:
		src = {
		0, 1, 0, 0,
		1, 1, 1, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
		};
		break;
	}
	inputMatrix(src, dst);
	Tetromino test(dst);
	return test;
}

