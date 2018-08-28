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
#include "interactionMap.h"
#include "encounters.h"
#include "combat.h"



char map1[22][30];

char turn(char lastDir, char button);
char newMoveController(int x, int y, char lastDir);
int runGame(int levelNumber);


int main()
{
	combatDisplay(' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', " ", " ", '>');
	runGame(1);
	return 0;
}


int runGame(int levelNumber)
{
	levelMaker testMap;
	std::array<std::array<char, 30>, 22>newMap = testMap.getLevel(levelNumber);
	std::cout << newMap[3][5];
	
	interactionMaker testEncounter;
	std::array<std::array<char, 30>, 22>encounterMap = testEncounter.getLevel(1);

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
					system("cls");
					map('M',x,y,lastDir,' ',' ',' ',' ', "t", "t",lastDir);

					while (b != 'B')
					{
						b = getButtonPress(joyinfoex);
					}
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

				encounterMap = checkEncounter(encounterMap, x, y,lastDir);

				 if (theMove == 2)
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




