#include "Tetromino.h"


Tetromino::Tetromino(const Matrix& shape)
	: shape_(shape)
{
}

void Tetromino::printShape() const
{
	for (auto& row : shape_) {
		for (auto& element : row) {
			std::cout << element;
		}
		std::cout << std::endl;
	}
}


