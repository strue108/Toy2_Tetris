#include "Game.h"

Game::Game()
{

}

void Game::setGrid()
{
	int i = 0;
	for (auto& row : grid_) {
		if (i++ <= 25)
			row = { 1,1,0,0, 0,0,0,0, 0,0,0,0, 0,0,1,1 };
		else
			for (auto& element : row)
				element = 1;
	}
}

void Game::printGrid() const
{
	for (auto& row : grid_) {
		for (auto& element : row)
			std::cout << element;
		std::cout << std::endl;
	}
}
