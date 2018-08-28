#pragma once
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include "passingGrid.h"
#include "maps.h"
#include "display.h"

int checkMover(char map1);
std::vector<char>  changeMoveDirection(char a, char x, char y, char lastDir);

int moveWithDirection(std::array<std::array<char, 30>, 22>newMap, int x, int y, char lastDir)
{
	system("cls");//clears the screen so the next print out will be at the top
	int checkValue = 1;
	std::vector<char> nextScene;
	nextScene = passGrid(newMap, x, y, lastDir);
	checkValue = checkMover(newMap[x][y]);//makes sure the move is allowed
										  //this line will print the current player view

	if (checkValue == 1)
	{
		return 1;
	}
	else if (checkValue == 2)
	{
		std::cout << "Victory!";
		return 2;
	}
	map(nextScene[0], nextScene[1], nextScene[2], nextScene[3], nextScene[4], nextScene[5], nextScene[6], nextScene[7], "t", "t", lastDir);
	std::cout << nextScene[0] << " " << nextScene[1] << " " << nextScene[2];
	std::cout << nextScene[3] << " " << nextScene[4] << " " << nextScene[5];
	std::cout << " " << lastDir;
	//Sleep(1500);
	//system("cls");//clears the screen so the next print out will be at the top

	//newMap[x][y] = lastDir;//sets the player icon to the new location
	return 0;
}

int checkMover(char map1)
{
	if (map1 == 'W')//# is currently a wall
	{
		return 1;
	}
	else if (map1 == '*')
	{
		return 2;//return if goal found
	}
	else
		return 0;// return of zero is good
}

std::vector<char>  changeMoveDirection(char a, char x, char y, char lastDir)
{
	std::vector<char> moveDirection;
	if (lastDir == '^')
	{
		if (a == 'L') { y = y; lastDir = '>'; }
		if (a == 'R') { y = y; lastDir = '<'; }
		if (a == 'D') { x = x; lastDir = 'v'; }
		if (a == 'U') { x = x--; lastDir = '^'; }
		moveDirection.push_back(a);
		moveDirection.push_back(x);
		moveDirection.push_back(y);
		moveDirection.push_back(lastDir);
	}
	if (lastDir == '>')
	{
		if (a == 'U') { y = y++; lastDir = '>'; }
		if (a == 'D') { y = y; lastDir = '<'; }
		if (a == 'L') { x = x; lastDir = 'v'; }
		if (a == 'R') { x = x; lastDir = '^'; }
		moveDirection.push_back(a);
		moveDirection.push_back(x);
		moveDirection.push_back(y);
		moveDirection.push_back(lastDir);
	}
	if (lastDir == 'v')
	{
		if (a == 'R') { y = y; lastDir = '>'; }
		if (a == 'L') { y = y; lastDir = '<'; }
		if (a == 'U') { x = x++; lastDir = 'v'; }
		if (a == 'D') { x = x; lastDir = '^'; }
		moveDirection.push_back(a);
		moveDirection.push_back(x);
		moveDirection.push_back(y);
		moveDirection.push_back(lastDir);
	}
	if (lastDir == '<')
	{
		if (a == 'D') { y = y; lastDir = '>'; }
		if (a == 'U') { y = y--; lastDir = '<'; }
		if (a == 'R') { x = x; lastDir = 'v'; }
		if (a == 'L') { x = x; lastDir = '^'; }
		moveDirection.push_back(a);
		moveDirection.push_back(x);
		moveDirection.push_back(y);
		moveDirection.push_back(lastDir);
	}
	return moveDirection;
}

//this undoes the last move if it tries to move into a Wall(W) 
//this is done by subtracting from the X or Y value based on direction of attempted movement
std::vector<char>  undoMove(char a, char x, char y, char lastDir)
{
	std::vector<char> moveDirection;
	if (lastDir == '^')
	{
		if (a == 'L') { y = y; lastDir = '>'; }
		if (a == 'R') { y = y; lastDir = '<'; }
		if (a == 'D') { x = x; lastDir = 'v'; }
		if (a == 'U') { x = x++; lastDir = '^'; }
		moveDirection.push_back(a);
		moveDirection.push_back(x);
		moveDirection.push_back(y);
		moveDirection.push_back(lastDir);
	}
	if (lastDir == '>')
	{
		if (a == 'U') { y = y--; lastDir = '>'; }
		if (a == 'D') { y = y; lastDir = '<'; }
		if (a == 'L') { x = x; lastDir = 'v'; }
		if (a == 'R') { x = x; lastDir = '^'; }
		moveDirection.push_back(a);
		moveDirection.push_back(x);
		moveDirection.push_back(y);
		moveDirection.push_back(lastDir);
	}
	if (lastDir == 'v')
	{
		if (a == 'R') { y = y; lastDir = '>'; }
		if (a == 'L') { y = y; lastDir = '<'; }
		if (a == 'U') { x = x--; lastDir = 'v'; }
		if (a == 'D') { x = x; lastDir = '^'; }
		moveDirection.push_back(a);
		moveDirection.push_back(x);
		moveDirection.push_back(y);
		moveDirection.push_back(lastDir);
	}
	if (lastDir == '<')
	{
		if (a == 'D') { y = y; lastDir = '>'; }
		if (a == 'U') { y = y++; lastDir = '<'; }
		if (a == 'R') { x = x; lastDir = 'v'; }
		if (a == 'L') { x = x; lastDir = '^'; }
		moveDirection.push_back(a);
		moveDirection.push_back(x);
		moveDirection.push_back(y);
		moveDirection.push_back(lastDir);
	}
	return moveDirection;

}
