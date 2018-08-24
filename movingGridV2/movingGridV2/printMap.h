#pragma once
#include <iostream>
#include <cstdlib>
#include <sstream>
template <size_t size_x, size_t size_y>
std::vector<char> printMap(char(&arr)[size_x][size_y], int x, int y, char lastDir)
{
	
	std::cout << "\n\n\n";
	for (int i = (centerX - 3); i < (centerX + 3); i++) {
	std::cout << "\t\t\t";
	for (int j = (centerY - 3); j < (centerY + 3); j++)
	{
	if (map1[i][j] == 'W')
	{
	color_megenta();
	}

	std::cout << map1[i][j];
	std::cout << " ";
	colorReset();
	}
	std::cout << std::endl;
	}


}
