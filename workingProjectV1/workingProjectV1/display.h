#pragma once
#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include "scene.h"
#include "colorChange.h"

int health = 75;
int maxHealth = 100;
int xp = 35;
int maxXp = 120;
int gold = 133777;

std::string weaponR1;
std::string weaponR2;
std::string weaponR3;

std::string weaponName;
int weaponDamage;

std::string task1 = "1. Find key.";
std::string task2 = "2. Punch alien in the face.";
std::string task3 = "4. Probe ship commander.";

void map(char left, char center, char right, char LR, char CR, char RR, char L, char R, std::string text1, std::string text2, char lastDir);

int printHealth(int option);
int printXp(int option);

void printDialog1(std::string text);
void printDialog2(std::string text);

int printGold(int option);

void printTasks(int task);
void printWeapon(int row);

void changeWeapon(int option);



int display()
{

	colorReset();

	//std::cout << " Health [||||||||||||||||||     ]                                                              TASKS?                  " << std::endl;
	//std::cout << "    XP? [||||||||||||||||||     ]                                                         -Punch alien in face         " << std::endl;
	//std::cout << "                                       _________________________________________          -Probe ship commander        " << std::endl;
	//std::cout << "______________________________________/_________________________________________\\______________________________________" << std::endl;
	//std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	//std::cout << "._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._'" << std::endl;
	//std::cout << "._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._'" << std::endl;
	//std::cout << "._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._'" << std::endl;
	//std::cout << "._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._'" << std::endl;
	//std::cout << "._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._'" << std::endl;
	//std::cout << "._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._'" << std::endl;
	//std::cout << "._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._' ._'" << std::endl;
	//std::cout << "                                                                                                                       " << std::endl;
	//std::cout << "                                                                                                                       " << std::endl;
	//std::cout << "                                                                                                                       " << std::endl;
	//std::cout << "                                                                                                                       " << std::endl;
	//std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//std::cout << "_______________________________________________________________________________________________________________________" << std::endl;
	//std::cout << "                                      \\_________________________________________/                                      " << std::endl;
	//std::cout << " 1 - Open inventory    3 - Attack                                                                      Gold 66666     " << std::endl;
	//std::cout << " 2 - Move              4 - Options                                                                                    " << std::endl;
	//std::cout << "                                                                                                                      " << std::endl;
	//std::cout << "Action: ";

	int input = 0;
	/*
	map('I', 'O', 'O', 'W', 'O', 'W', "               Inventory", "");
	std::cout << "Selection: ";
	std::cin >> input;
	std::cin.clear();
	std::cin.ignore(1, '\n');
	system("cls");

	changeWeapon(3);
	health -= 30;  // DEBUGGGGGGG
	map('O', 'O', 'O', 'W', 'O', 'W', "                 Welcome!", "");
	std::cout << "Selection: ";
	std::cin >> input;
	std::cin.clear();
	std::cin.ignore(1, '\n');
	system("cls");

	changeWeapon(1);
	health = 20; // DEBUGGGGGG
	map('W', 'O', 'D', 'W', 'O', 'W', "It's dangerous to go alone!", "Take this. (received FACE DESTROYER)");
	std::cout << "Selection: ";
	std::cin >> input;
	std::cin.clear();
	std::cin.ignore(1, '\n');
	system("cls");


	map('W', 'O', 'W', 'O', 'W', 'O', "", "");
	std::cout << "Selection: ";
	std::cin >> input;
	std::cin.clear();
	std::cin.ignore(1, '\n');
	system("cls");

	std::cin.ignore();
	std::cin.ignore();
	std::cin.ignore();
	return 0;
	*/
	return 0;
}




void map(char left, char center, char right, char LR, char CR, char RR, char L, char R, std::string text1, std::string text2, char lastDir)
{
	/*
	std::cout << " Health [||||||||||||||||||        ]                                                           TASKS?                  " << std::endl;
	std::cout << "    XP? [||||||||||||||||||        ]                                                      -Punch alien in face         " << std::endl;
	std::cout << "                                       _________________________________________          -Probe ship commander        " << std::endl;
	std::cout << "______________________________________/_________________________________________\\______________________________________" << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "_______________________________________________________________________________________________________________________" << std::endl;
	std::cout << "                                      \\_________________________________________/                                      " << std::endl;
	std::cout << " 1 - Open inventory    3 - Attack                                                                      Gold 66666     " << std::endl;
	std::cout << " 2 - Move              4 - Options                                                                                    " << std::endl;
	std::cout << "                                                                                                                      " << std::endl;
	std::cout << "Action: ";
	*/


	printHealth(1);
	std::cout << "|";
	//////////////////
	// RED dialog1
	color_light_red();
	printDialog1(text1);
	colorReset();
	/////////////////
	std::cout << "|";
	std::cout << " Tasks: ";
	printTasks(1);

	printXp(1);
	std::cout << "|";
	///////////////////
	// Red dialog2
	color_light_red();
	printDialog2(text2);
	colorReset();
	//////////////////
	std::cout << "|";
	std::cout << "        2. Punch Alien in face.    " << std::endl;
	printGold(1);
	std::cout << "             _________________________________________         3. Probe ship commander.      " << std::endl;
	std::cout << "______________________________________/_________________________________________\\______________________________________" << std::endl;

	scene(left, center, right, LR, CR, RR, L, R);

	std::cout << "_______________________________________________________________________________________________________________________" << std::endl;
	std::cout << " X - Inventory         A - Interact   \\_________________________________________/";
	printWeapon(1);
	std::cout << std::endl;
	std::cout << " Y - Map               B -                                 " << lastDir << "                     ";
	printWeapon(2);
	std::cout << std::endl;
	std::cout << "                                                                                 ";
	printWeapon(3);
	std::cout << std::endl;
	std::cout << "                                                                                  ";
	printWeapon(4);
	std::cout << std::endl;

	//return 1;
}



int printHealth(int option)
{
	if (option == 0)
	{
		return health;
	}
	else if (option == 1)
	{

		std::string oldString = " Health: [";

		// loop through to make fancy health bar: [|||||||||||||     ]
		int tester = maxHealth / 20;
		for (int i = tester; i < health; ++i)
		{
			oldString += '|';
			i = i + (tester - 1);
		}
		for (int i = health; i < maxHealth; i++)
		{
			oldString += ' ';
			i = i + (tester - 1);
		}
		//oldString += ']';
		//std::cout << oldString;
		std::cout << oldString.substr(0, 10);

		// Set color depending on health level. 
		if (health >(maxHealth * .60))
			color_light_green();
		else if (health > (maxHealth * .25))
			color_yellow();
		else if (health <= (maxHealth * .25))
			color_light_red();

		std::cout << oldString.substr(10, oldString.length());
		colorReset();
		std::cout << ']';

		for (int i = 1 + oldString.length(); i < 38; i++)
		{
			std::cout << " ";
		}

		colorReset();
		return health;
	}
}

int printXp(int option)
{
	if (option == 0)
	{
		return xp;
	}
	else if (option == 1)
	{
		std::string oldString = "     Xp: [";
		// loop through to make fancy xp bar: [|||||||||||||     ]
		int tester = maxXp / 20;
		for (int i = tester; i < xp; ++i)
		{
			oldString += '|';
			i = i + (tester - 1);
		}
		for (int i = xp; i < maxXp; i++)
		{
			oldString += ' ';
			i = i + (tester - 1);
		}
		std::cout << oldString.substr(0, 10);

		// Set xp to blue 
		color_light_cyan();

		std::cout << oldString.substr(10, oldString.length());
		colorReset();
		std::cout << ']';

		for (int i = oldString.length(); i < 37; i++)
		{
			std::cout << " ";
		}

		colorReset();
		return xp;
	}
}

//Top dialog line
// Display Text on top center. 41 Chars max per line
void printDialog1(std::string text)
{
	if (text.length() == 0)
		// No first dialog. Fill with spaces.
		std::cout << "                                         ";
	else
	{
		for (int i = text.length(); i < 41; i++)
		{
			text += ' ';
		}
		std::cout << text;
	}
}

//Bottom dialog line
// Display Text on top center. 41 Chars max per line
void printDialog2(std::string text)
{
	if (text.length() == 0)
		// No second dialog. Fill with spaces.
		std::cout << "                                         ";
	else
	{
		//std::cout << '|';
		//"It's dangerous to go alone! Take this."
		for (int i = text.length(); i < 41; i++)
		{
			text += ' ';
		}
		std::cout << text;
		//std::cout << '|';
	}
}

int printGold(int option)
{
	// Print Gold value or return the int
	if (!option)
	{
		return gold;
	}
	else if (option == 1)
	{
		std::cout << "   Gold: " << gold;

		for (int i = std::to_string(gold).length(); i < 17; i++)
		{
			std::cout << ' ';
		}
		//std::cout << text;
		//std::cout << '|';

		return gold;
	}
}

// Print tasks on top right
// 30 Max chars
void printTasks(int task)
{
	if (task == 1)
	{
		std::cout << task1;
		for (int i = task1.length(); i < 27; i++)
		{
			std::cout << ' ';
		}
	}
	else if (task == 2)
	{
		std::cout << task2;
		for (int i = task2.length(); i < 27; i++)
		{
			std::cout << ' ';
		}
	}
	else if (task == 3)
	{
		std::cout << task3;
		for (int i = task3.length(); i < 27; i++)
		{
			std::cout << ' ';
		}
	}
	std::cout << std::endl;
}

// Print 4 rows of weapons on bottom right
// 36 Max chars
void printWeapon(int row)
{
	if (row == 1)
	{
		std::cout << weaponR1;
		for (int i = weaponR1.length(); i < 36; i++)
		{
			std::cout << ' ';
		}
	}
	else if (row == 2)
	{
		std::cout << weaponR2;
		for (int i = weaponR2.length(); i < 36; i++)
		{
			std::cout << ' ';
		}
	}
	else if (row == 3)
	{
		std::cout << weaponR3;
		for (int i = weaponR3.length(); i < 36; i++)
		{
			std::cout << ' ';
		}
	}
	else if (row == 4)
	{
		if (weaponDamage) {
			std::cout << weaponName << " - DMG " << weaponDamage;
			for (int i = (weaponName.length() + 7 + std::to_string(weaponDamage).length()); i < 34; i++)
			{
				std::cout << ' ';
			}
		}
		else
		{
			for (int i = 0; i < 36; i++)
			{
				std::cout << ' ';
			}
		}
	}
}

//have this one change based upon the weapons we included
void changeWeapon(int option)
{
	switch (option)
	{
	case 1:
		weaponR1 = "         />_______________________";
		weaponR2 = " [#######[]_______________________>";
		weaponR3 = "         \\>";
		weaponName = "FACE DESTROYER";  // <-- 30 CHARS TOTAL FOR NAME AND DMG COMBINED
		weaponDamage = 99;  // <--------------
		break;
	case 2:
		weaponR1 = "                 ";
		weaponR2 = "            ===============---   ";
		weaponR3 = "    o======//         \\";
		weaponName = "Pointy stick";
		weaponDamage = 2;
		break;

	case 3:
		weaponR1 = "            \\         ";
		weaponR2 = "  O==========E>>>                 ";
		weaponR3 = "            /          ";
		weaponName = "Rusty metal probe";
		weaponDamage = 10;
		break;

	default:
		break;
	}
}