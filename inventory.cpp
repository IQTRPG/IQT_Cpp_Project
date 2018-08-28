#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include "classes.h"
#include "player.h"

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); // used for goto
COORD CursorPosition; // used for goto

void gotoXY(int, int); //go to coord position
void clear_menu();
void print_inventory();

//pointers
Item *weaponPtr = NULL;
Item *armorPtr = NULL;
Item *item1Ptr = NULL;
Item *item2Ptr = NULL;
Item *item3Ptr = NULL;
Item *item4Ptr = NULL;

//player initialization
Player player;

//item initialization
Stick stick;
Sword sword;
Probe probe;
Halberd halberd;
Scimitar scimitar;
FaceDestroyer face_destroyer;
Bucket bucket;
CanLid can_lid;
Helmet helmet;
ChainMail chain_mail;
PlateMail plate_mail;
Mythril mythril;
Apple apple;
Banana banana;
RedPotion red_potion;
MedKit med_kit;

void main() //void inventory();
{
	int inventory_menu_item = 0;
	int y = 7;
	bool inventory_menu = true;

	clear_menu();

	print_inventory();

	//start menu
	do
	{
		gotoXY(20, 8); std::cout << weaponPtr->getName();
		gotoXY(20, 10); std::cout << armorPtr->getName();
		gotoXY(20, 12); std::cout << item1Ptr->getName();
		gotoXY(20, 14); std::cout << item2Ptr->getName();
		gotoXY(20, 16); std::cout << item3Ptr->getName();
		gotoXY(20, 18); std::cout << item4Ptr->getName();

		if (GetAsyncKeyState(VK_DOWN) && y !=)
	}
}





void gotoXY(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}

void clear_menu()
{
	system("cls");
}

void print_inventory()
{
	gotoXY(0, 5);
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||                                                                                                                 |||" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
}
