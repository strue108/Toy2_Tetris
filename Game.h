#pragma once
#include "TetrominoLoader.h"
#include <array>

class Game
{
public:
	using Grid = std::array<std::array<int, 16>, 28>;

	Game();
	void setGrid();
	void printGrid() const;
private:
	Grid grid_;
};

