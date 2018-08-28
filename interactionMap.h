#pragma once
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <array>
#include "display.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class interactionMaker {

private:
	std::array<std::array<char, 30>, 22> intLevel1 = {
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','W','W','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','W','N','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','W','O','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','W','O','W','W','W','W','W','W','W','W','W','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','W','O','O','O','O','O','O','D','O','O','O','W','W','W','W','W','W','W','W','W','W','W','X','X','X','X','X','X','X',
		'X','W','W','W','W','W','W','W','W','W','W','O','W','W','O','O','O','O','O','O','O','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','W','W','W','W','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','X','X','X','X','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','X','X','X','X','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','X','X','X','X','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','X','X','X','X','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','O','O','O','W','W','W','W','W','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','W','W','W','W','W','O','O','O','O','O','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','W','W','W','W','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','C','W','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','W','W','W','W','O','W','W','W','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','W','O','O','O','O','O','O','W','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','W','W','W','W','W','W','W','W','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
	};


public:
	std::array<std::array<char, 30>, 22> getLevel(int levelNumber)
	{
		if (levelNumber == 1)
		{
			return intLevel1;
		}
		return intLevel1;
	}

	void clearEncounter(int x, int y, int levelNumber)
	{
		if (levelNumber == 1)
		{
			intLevel1[y][x] = 'O';
		}
	}
};