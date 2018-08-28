#pragma once
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <array>
#include "display.h"

void combatV1()
{





	return;
}



void combatDisplay(char left, char center, char right, char LR, char CR, char RR, char L, char R, std::string text1, std::string text2)
{

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
	std::cout << " Y - Map               B -                                                       ";
	printWeapon(2);
	std::cout << std::endl;
	std::cout << "                                                                                 ";
	printWeapon(3);
	std::cout << std::endl;
	std::cout << "                                                                                  ";
	printWeapon(4);
	std::cout << std::endl;

}