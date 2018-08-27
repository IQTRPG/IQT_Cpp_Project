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


char getMove();
int makeGrid(int x, int y, char lastDir);
char map1[22][30];
int checkMove(char map1);
char turn(char lastDir, char button);
char newMoveController(int x, int y, char lastDir);

int main()
{

	//Sleep(1200);
	JOYINFOEX joyinfoex;
	int victory = 0;
	char a = 1;
	char b = 1;
	int x = 19, y = 15;
	int lastx, lasty;
	int theMove=3;
	char lastDir='^';
	char backUpLastDir = '^';
	std::cout << "\n";

	while (true)//currently loops through and gets next move and prints the map will go until they find the astrics can be changed later
	{
		if (victory == 0)
		{
			backUpLastDir = lastDir;
			a = getMovementDirection(joyinfoex);
			b = getButtonPress(joyinfoex);
			Sleep(150);
			if (a == 'L') {lasty = y++; lastDir = '>'; }
			if (a == 'R') {lasty = y--; lastDir = '<';}
			if (a == 'D') {lastx = x++; lastDir = 'v'; }
			if (a == 'U') {lastx = x--; lastDir = '^'; }
		
			if (b == 'J' || b == 'K')
			{
				std::cout << " " << lastDir;
				lastDir = turn(lastDir, b);
				
				std::cout << " " << lastDir;
			}
		
			theMove = makeGrid(x, y, lastDir);
			
			/*
			if (a != 0)
			{
				theMove = makeGrid(x, y, lastDir);
				//display();
			}

			*/
			if (theMove == 1)
			{
				if (a == 'L') { lasty = y--; backUpLastDir; }
				if (a == 'R') { lasty = y++; backUpLastDir; }
				if (a == 'D') { lastx = x--; backUpLastDir; }
				if (a == 'U') { lastx = x++; backUpLastDir; }
			}
			else if(theMove==2)
			{
				backUpLastDir = lastDir;
				break;
			}
			//a = 0;
		}
	}
	getchar(); getchar();
	return 0;
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
			if (myStream >> a && a =='a'|| a=='d'||a=='s'||a=='w')
			{
				break;
			}

			std::cout << "Invalid number, please try again" << std::endl;
		}	
	return a;
}

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

	nextMap=passGrid(map1,x,y, lastDir);
	checkValue = checkMove(map1[x][y]);//makes sure the move is allowed
	map(nextMap[0], nextMap[1], nextMap[2], nextMap[3], nextMap[4], nextMap[5], nextMap[6],nextMap[7],"t","t");
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
	int centerX = x;
	int centerY = y;
	map1[x][y] = lastDir;//sets the player icon to the new location

	/*
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
	return 0;//return of zero is good
}

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




char turn(char lastDir, char button)
{
	char dirChange=lastDir;
	if (button == 'J')
	{
		if (lastDir = '>') { dirChange = '^'; return dirChange;}
		if (lastDir = '^') { dirChange = '<'; return dirChange;}
		if (lastDir = '<') { dirChange = 'v'; return dirChange;}
		if (lastDir = 'v') { dirChange = '>'; return dirChange;}
	}

	if (button == 'K')
	{
		if (lastDir = '>') { dirChange = 'v'; return dirChange;}
		if (lastDir = 'v') { dirChange = '<'; return dirChange;}
		if (lastDir = '<') { dirChange = '^'; return dirChange;}
		if (lastDir = '^') { dirChange = '>'; return dirChange;}
	}
	return dirChange;
}









/*

if (x < 0)
{
std::cout << "cant move off the map";
x++;
}
else if (x > 29)
{
std::cout << "cant move off the map";
x--;
}
else if (y < 0)
{
std::cout << "cant move off the map";
y++;
}
else if (y > 29)
{
std::cout << "cant move off the map";
y--;
}


*/


