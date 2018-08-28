#pragma once
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <array>
#include "interactionMap.h"
#include "passingGrid.h"
#include "scene.h"

std::array<std::array<char, 30>, 22> checkEncounter(std::array<std::array<char, 30>, 22>encounterMap, int x, int y, char lastDir)
{
	if (encounterMap[x][y] == 'C')
	{
		std::vector<char> nextScene;
		nextScene = passGrid(encounterMap, x, y, lastDir);
		color_green();
		scene(nextScene[0], nextScene[1], nextScene[2], nextScene[3], nextScene[4], nextScene[5], nextScene[6], nextScene[7]);
		Sleep(120);
		system("cls");
		color_yellow();
		scene(nextScene[0], nextScene[1], nextScene[2], nextScene[3], nextScene[4], nextScene[5], nextScene[6], nextScene[7]);
		Sleep(120);
		system("cls");
		color_green();
		scene(nextScene[0], nextScene[1], nextScene[2], nextScene[3], nextScene[4], nextScene[5], nextScene[6], nextScene[7]);
		Sleep(120);

		system("cls");
		map(nextScene[0], nextScene[1], nextScene[2], nextScene[3], nextScene[4], nextScene[5], nextScene[6], nextScene[7], "t", "t", lastDir);
		std::cout << "COMBAT!!!";
		interactionMaker encounterMap;
		encounterMap.clearEncounter(x, y, 1);
	}
	if (encounterMap[x][y] == 'N')
	{

		std::cout << "Next Level!!!";
	}

	return encounterMap;
}