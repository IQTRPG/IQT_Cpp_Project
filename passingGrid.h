#pragma once
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <time.h>
#include "colorChange.h"
#include "controllerOut.h"
#include <vector>
#include <array>

std::vector<char> passGrid(std::array<std::array<char, 30>, 22>arr, int x, int y, char lastDir)
{
	std::vector<char> nextMap;
	if (lastDir == '^')
	{
		nextMap.push_back(arr[x - 1][y - 1]);
		nextMap.push_back(arr[x - 1][y - 0]);
		nextMap.push_back(arr[x - 1][y + 1]);
		nextMap.push_back(arr[x - 2][y - 1]);
		nextMap.push_back(arr[x - 2][y - 0]);
		nextMap.push_back(arr[x - 2][y + 1]);
		nextMap.push_back(arr[x - 0][y - 1]);
		nextMap.push_back(arr[x - 0][y + 1]);
		//std::cout << arr[x - 1][y - 1] << " " << arr[x - 1][y - 0] << " " << arr[x - 1][y + 1] << std::endl;
		//std::cout << arr[x - 2][y - 1] << " " << arr[x - 2][y - 0] << " " << arr[x - 2][y + 1] << std::endl;
	}
	else if (lastDir == '>')
	{
		nextMap.push_back(arr[x - 1][y + 1]);
		nextMap.push_back(arr[x - 0][y + 1]);
		nextMap.push_back(arr[x + 1][y + 1]);
		nextMap.push_back(arr[x - 1][y + 2]);
		nextMap.push_back(arr[x - 0][y + 2]);
		nextMap.push_back(arr[x + 1][y + 2]);
		nextMap.push_back(arr[x - 1][y - 0]);
		nextMap.push_back(arr[x + 1][y + 0]);
		//std::cout << arr[x - 1][y + 1] << " " << arr[x - 0][y + 1] << " " << arr[x + 1][y + 1] << std::endl;
		//std::cout << arr[x - 1][y + 2] << " " << arr[x - 0][y + 2] << " " << arr[x + 1][y + 2] << std::endl;
	}
	else if (lastDir == 'v')
	{
		nextMap.push_back(arr[x + 1][y + 1]);
		nextMap.push_back(arr[x + 1][y - 0]);
		nextMap.push_back(arr[x + 1][y - 1]);
		nextMap.push_back(arr[x + 2][y + 1]);
		nextMap.push_back(arr[x + 2][y - 0]);
		nextMap.push_back(arr[x + 2][y - 1]);
		nextMap.push_back(arr[x - 0][y + 1]);
		nextMap.push_back(arr[x - 0][y - 1]);
		//std::cout << arr[x + 1][y + 1] << " " << arr[x + 1][y - 0] << " " << arr[x + 1][y - 1] << std::endl;
		//std::cout << arr[x + 2][y + 1] << " " << arr[x + 2][y - 0] << " " << arr[x + 2][y - 1 ] << std::endl;
	}
	else if (lastDir == '<')
	{
		nextMap.push_back(arr[x + 1][y - 1]);
		nextMap.push_back(arr[x - 0][y - 1]);
		nextMap.push_back(arr[x - 1][y - 1]);
		nextMap.push_back(arr[x + 1][y - 2]);
		nextMap.push_back(arr[x - 0][y - 2]);
		nextMap.push_back(arr[x - 1][y - 2]);
		nextMap.push_back(arr[x + 1][y - 0]);
		nextMap.push_back(arr[x - 1][y - 0]);
		//std::cout << arr[x + 1][y - 1] << " " << arr[x - 0][y - 1] << " " << arr[x - 1][y - 1] << std::endl;
		//std::cout << arr[x + 1][y - 2] << " " << arr[x - 0][y - 2] << " " << arr[x - 1][y - 2] << std::endl;
	}
	return nextMap;

}

template <size_t size_x, size_t size_y>
std::vector<char> passGridv2(char(&arr)[size_x][size_y], int x, int y, char lastDir)
{
	std::vector<char> nextMap;
	if (lastDir == '^')
	{
		nextMap.push_back(arr[x - 1][y - 1]);
		nextMap.push_back(arr[x - 1][y - 0]);
		nextMap.push_back(arr[x - 1][y + 1]);
		nextMap.push_back(arr[x - 2][y - 1]);
		nextMap.push_back(arr[x - 2][y - 0]);
		nextMap.push_back(arr[x - 2][y + 1]);
		nextMap.push_back(arr[x - 0][y - 1]);
		nextMap.push_back(arr[x - 0][y + 1]);
		//std::cout << arr[x - 1][y - 1] << " " << arr[x - 1][y - 0] << " " << arr[x - 1][y + 1] << std::endl;
		//std::cout << arr[x - 2][y - 1] << " " << arr[x - 2][y - 0] << " " << arr[x - 2][y + 1] << std::endl;
	}
	else if (lastDir == '>')
	{
		nextMap.push_back(arr[x - 1][y + 1]);
		nextMap.push_back(arr[x - 0][y + 1]);
		nextMap.push_back(arr[x + 1][y + 1]);
		nextMap.push_back(arr[x - 1][y + 2]);
		nextMap.push_back(arr[x - 0][y + 2]);
		nextMap.push_back(arr[x + 1][y + 2]);
		nextMap.push_back(arr[x - 1][y - 0]);
		nextMap.push_back(arr[x + 1][y + 0]);
		//std::cout << arr[x - 1][y + 1] << " " << arr[x - 0][y + 1] << " " << arr[x + 1][y + 1] << std::endl;
		//std::cout << arr[x - 1][y + 2] << " " << arr[x - 0][y + 2] << " " << arr[x + 1][y + 2] << std::endl;
	}
	else if (lastDir == 'v')
	{
		nextMap.push_back(arr[x + 1][y + 1]);
		nextMap.push_back(arr[x + 1][y - 0]);
		nextMap.push_back(arr[x + 1][y - 1]);
		nextMap.push_back(arr[x + 2][y + 1]);
		nextMap.push_back(arr[x + 2][y - 0]);
		nextMap.push_back(arr[x + 2][y - 1]);
		nextMap.push_back(arr[x - 0][y + 1]);
		nextMap.push_back(arr[x - 0][y - 1]);
		//std::cout << arr[x + 1][y + 1] << " " << arr[x + 1][y - 0] << " " << arr[x + 1][y - 1] << std::endl;
		//std::cout << arr[x + 2][y + 1] << " " << arr[x + 2][y - 0] << " " << arr[x + 2][y - 1 ] << std::endl;
	}
	else if (lastDir == '<')
	{
		nextMap.push_back(arr[x + 1][y - 1]);
		nextMap.push_back(arr[x - 0][y - 1]);
		nextMap.push_back(arr[x - 1][y - 1]);
		nextMap.push_back(arr[x + 1][y - 2]);
		nextMap.push_back(arr[x - 0][y - 2]);
		nextMap.push_back(arr[x - 1][y - 2]);
		nextMap.push_back(arr[x + 1][y - 0]);
		nextMap.push_back(arr[x - 1][y - 0]);
		//std::cout << arr[x + 1][y - 1] << " " << arr[x - 0][y - 1] << " " << arr[x - 1][y - 1] << std::endl;
		//std::cout << arr[x + 1][y - 2] << " " << arr[x - 0][y - 2] << " " << arr[x - 1][y - 2] << std::endl;
	}
	return nextMap;

}