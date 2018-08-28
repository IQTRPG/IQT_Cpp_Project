#pragma once
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <array>
#include "controllerOut.h"
#include "colorChange.h"

void printMap(std::array<std::array<char, 30>, 22>Map, int x, int y, char lastDir)
{
	char b = 0;
	JOYINFOEX joyinfoex;
	//std::cout << "\n";
	Map[x][y] = lastDir;
	{
		for (int i = 0; i < 20; i++) {
			std::cout << "\t\t\t";
			for (int j = 0; j < 30; j++)
			{
				if (Map[i][j] == 'W')
				{
					color_megenta();
				}
				if (Map[i][j] == Map[x][y])
				{
					color_green();
				}
				std::cout << Map[i][j];
				std::cout << " ";
				colorReset();
			}
			std::cout << std::endl;
		}

		//use this to only print the area imediatly around the player
		/*
		int centerX = x;
		int centerY = y;
		//arr = newMap;
		std::cout << "\n\n\n";
		for (int i = (centerX - 3); i < (centerX + 3); i++) {
		std::cout << "\t\t\t";
		for (int j = (centerY - 3); j < (centerY + 3); j++)
		{
		if (Map[i][j] == 'W')
		{
		color_megenta();
		}

		std::cout << Map[i][j];
		std::cout << " ";
		colorReset();
		}
		std::cout << std::endl;
		}

		while (b != 'B')
		{
		b = getButtonPress(joyinfoex);
		}
		*/
	}
}
