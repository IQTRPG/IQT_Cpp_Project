#include <iostream>
#include <cstdlib>
#include <sstream>
#include <time.h>
#include "colorChange.h"
#include "controllerOut.h"
#include "passingGrid.h"
#include "scene.h"
#include "display.h"
#include "printMap.h"
#include "maps.h"
#include "moveWithDirection.h"


//char getMove();
//int makeGrid(int x, int y, char lastDir);
char map1[22][30];
int checkMove(char map1);
char turn(char lastDir, char button);
char newMoveController(int x, int y, char lastDir);

int main()
{
	levelMaker testMap;

	std::array<std::array<char, 30>, 22>newMap = testMap.getLevel(1);
	std::cout << newMap[3][5];
	
	
	//Sleep(1200);
	JOYINFOEX joyinfoex;
	int victory = 0;
	int checkValue = 0;
	char a = 0;
	char b = 0;
	int x = 19, y = 15;
	//int x = 5, y = 11;
	int lastx, lasty;
	int theMove=3;
	char lastDir='^';
	char backUpLastDir = '^';
	std::cout << "\n";



	while (true)//currently loops through and gets next move and prints the map will go until they find the astrics can be changed later
	{
		//moveWithDirection(newMap, x, y, lastDir);
		victory = 0;
		if (victory == 0)
		{
			
			a = getMovementDirection(joyinfoex);
			b = getButtonPress(joyinfoex);
			if (a == 0 && b == 0)
			{

			}
			else
			{
				backUpLastDir = lastDir;

				Sleep(150);
				/*
				if (a == 'L') {y = y++; lastDir = '>'; }
				if (a == 'R') {y = y--; lastDir = '<';}
				if (a == 'D') {x = x++; lastDir = 'v'; }
				if (a == 'U') {x = x--; lastDir = '^'; }
			*/

				std::vector<char> moveDirection = changeMoveDirection(a, x, y, lastDir);
				x = moveDirection[1];
				y = moveDirection[2];
				lastDir = moveDirection[3];

				if (b == 'J' || b == 'K')
				{
					lastDir = turn(lastDir, b);
				}
				if (b == 'Y')
				{
					printMap(newMap, x, y, lastDir);
				}

				checkValue = checkMover(newMap[x][y]);
				if (checkValue == 1)
				{
					std::vector<char> moveDirection = undoMove(a, x, y, lastDir);
					x = moveDirection[1];
					y = moveDirection[2];
					lastDir = moveDirection[3];
				}
				theMove = moveWithDirection(newMap, x, y, lastDir);

				if (theMove == 1)
				{
					if (a == 'L') { y = y--; backUpLastDir; }
					if (a == 'R') { y = y++; backUpLastDir; }
					if (a == 'D') { x = x--; backUpLastDir; }
					if (a == 'U') { x = x++; backUpLastDir; }
				}
				else if (theMove == 2)
				{
					backUpLastDir = lastDir;
					break;
				}
				a = 0;
				b = 0;
			}
		}
	}
	getchar(); getchar();
	return 0;
}




char turn(char lastDir, char button)
{
	char dirChange=lastDir;
	if (button == 'J')
	{
		if (lastDir == '>') { dirChange = '^'; return dirChange;}
		if (lastDir == '^') { dirChange = '<'; return dirChange;}
		if (lastDir == '<') { dirChange = 'v'; return dirChange;}
		if (lastDir == 'v') { dirChange = '>'; return dirChange;}
	}

	if (button == 'K')
	{
		if (lastDir == '>') { dirChange = 'v'; return dirChange;}
		if (lastDir == 'v') { dirChange = '<'; return dirChange;}
		if (lastDir == '<') { dirChange = '^'; return dirChange;}
		if (lastDir == '^') { dirChange = '>'; return dirChange;}
	}
	return dirChange;
}

char newMoveController(int x, int y, char lastDir)
{

	return 0;
}










/*



//this function checks to make sure the move is valid and does not move into a wall. also can be used for future encounters like doors or enemies
int checkMove(char map1)
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


//moveWithDirection(newMap, x, y, lastDir);
//printMap(newMap, x, y, lastDir);
//Sleep(5000);


//this will make the first room map and move the player icon through based on commands
int makeGrid(int x, int y, char lastDir)
{
	int checkValue = 1;
	std::vector<char> nextMap;
	char map1[22][30]{
		'W','W','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'W','*','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'W','O','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'W','O','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'W','O','W','W','W','W','W','W','W','W','W','W','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'W','O','O','O','O','O','O','O','D','O','O','O','W','W','W','W','W','W','W','W','W','W','W','X','X','X','X','X','X','X',
		'W','W','W','W','W','W','W','W','W','W','W','O','W','W','O','O','O','O','O','O','O','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','W','W','W','W','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','X','X','X','X','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','X','X','X','X','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','X','X','X','X','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','X','X','X','X','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','O','O','O','W','W','W','W','W','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','W','W','W','W','W','O','O','O','O','O','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','W','W','W','W','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','W','W','W','W','O','W','W','W','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','W','O','O','O','O','O','O','W','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','W','W','W','W','W','W','W','W','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
	};

	nextMap = passGridv2(map1, x, y, lastDir);

	checkValue = checkMove(map1[x][y]);//makes sure the move is allowed
	map(nextMap[0], nextMap[1], nextMap[2], nextMap[3], nextMap[4], nextMap[5], nextMap[6], nextMap[7], "t", "t");
	if (checkValue == 1)
	{
		return 1;
	}
	else if (checkValue == 2)
	{
		std::cout << "Victory!";
		return 2;
	}
	std::cout << nextMap[0] << " " << nextMap[1] << " " << nextMap[2];
	std::cout << nextMap[3] << " " << nextMap[4] << " " << nextMap[5];
	std::cout << " " << lastDir;
	Sleep(1500);

	system("cls");//clears the screen so the next print out will be at the top

	map1[x][y] = lastDir;//sets the player icon to the new location

						 /*
						 int centerX = x;
						 int centerY = y;
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

						 */
/*
	return 0;//return of zero is good
}


//this function gets the move from the player a,s,d,w or the controller
char getMove()
{
	char a = 1;
	std::string input;
	std::cout << "\tPlease enter your move ";
	std::cout << "	d for right";
	std::cout << "	a for left";
	std::cout << "	s for down";
	std::cout << "	w for up";
	while (true)
	{
		//Reverify that the input is correct type
		std::getline(std::cin, input);
		std::stringstream myStream(input);
		if (myStream >> a && a == 'a' || a == 'd' || a == 's' || a == 'w')
		{
			break;
		}

		std::cout << "Invalid number, please try again" << std::endl;
	}
	return a;
}

*/

