#include <iostream>
#include <cstdlib>
#include <sstream>
#include <time.h>
#include "colorChange.h"




char getMove();
int makeGrid(int x, int y);
char map1[20][30];
int checkMove(char map1);


int main()
{

	int victory = 0;
	char a = 1;
	int x = 19, y = 15;
	int lastx, lasty;
	int theMove;


	std::cout << "\n";

	while (true)//currently loops through and gets next move and prints the map will go until they find the astrics can be changed later
	{
		if (victory == 0)
		{
			a = getMove();
			if (a == 'd')lasty = y++;
			if (a == 'a') lasty = y--;
			if (a == 's') lastx = x++;
			if (a == 'w') lastx = x--;
			theMove=makeGrid(x,y);
			if (theMove == 1)
			{
				if (a == 'd')lasty = y--;
				if (a == 'a') lasty = y++;
				if (a == 's') lastx = x--;
				if (a == 'w') lastx = x++;
			}
			else if(theMove==2)
			{
				break;
			}
		}
	}
	getchar(); getchar();
	return 0;
}

//this function gets the move from the player a,s,d,w
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
			//Reverify that the age is of the appropriate type
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
int makeGrid(int x, int y)
{
	int checkValue = 1;

	char map1[22][30]{
		'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
		'#','*','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
		'#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
		'#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
		'#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
		'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#',' ','#','#',' ','#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#',' ','#','#',' ','#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#',' ','#','#',' ','#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#',' ','#','#',' ','#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#',' ','#','#',' ','#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#',
		'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	};

	checkValue = checkMove(map1[x][y]);//makes sure the move is allowed

	if (checkValue == 1)
	{
		return 1;
	}
	else if (checkValue == 2)
	{
		std::cout << "Victory!";
		return 2;
	}
	system("cls");//clears the screen so the next print out will be at the top
	int centerX = x;
	int centerY = y;
	map1[x][y] = '>';//sets the player icon to the new location
	std::cout << "\n\n\n";
	for (int i = (centerX - 3); i < (centerX + 3); i++) {
		std::cout << "\t\t\t";
		for (int j = (centerY - 3); j < (centerY + 3); j++)
		{
			if (map1[i][j] == '#')
			{
				color();
			}

			std::cout << map1[i][j];
			std::cout << " ";
			colorReset();
		}
		std::cout << std::endl; 
	}
	return 0;//return of zero is good
}

//this function checks to make sure the move is valid and does not move into a wall. also can be used for future encounters like doors or enemies
int checkMove(char map1)
{
	if (map1 == '#')//# is currently a wall
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