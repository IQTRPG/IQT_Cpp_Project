#pragma once
#include "printMap.h"
#include "Maps.h"

void scene(char left, char center, char right, char LR, char CR, char RR, char L, char R);

int counter = 1;

void scene(char left, char center, char right, char LR, char CR, char RR, char L, char R)
{
	levelMaker testMap;
	std::array<std::array<char, 30>, 22>newMap = testMap.getLevel(counter);

	/*else if (left == 'O' && center == 'O' && right == 'O') {
	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "                                                                                                                       " << std::endl;
	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	}*/

	////Inventory screen
	//if (left == 'I') {
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||                                                                                                                 |||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//}



	////Inventory screen
	//if (left == 'I') {
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||                           |         ____                  __                        |                           |||" << std::endl;
	//	std::cout << "|||   |||   |||   |||   |||   |        /  _/__ _  _____ ___  / /____  ______ __         |   |||   |||   |||   |||   |||" << std::endl;
	//	std::cout << "|||      |||   |||   |||      |       _/ // _ \ |/ / -_) _ \/ __/ _ \/ __/ // /         |      |||   |||   |||      |||" << std::endl;
	//	std::cout << "|||   |||   |||   |||   |||   |      /___/_//_/___/\__/_//_/\__/\___/_/  \_, /          |   |||   |||   |||   |||   |||" << std::endl;
	//	std::cout << "|||      |||   |||   |||      |                                          |__/           |      |||   |||   |||      |||" << std::endl;
	//	std::cout << "|||   |||   |||   |||   |||   |                                                         |   |||   |||   |||   |||   |||" << std::endl;
	//	std::cout << "|||                           |             Amount     Item                             |                           |||" << std::endl;
	//	std::cout << "|||---------------------------|   Slot 1:                                               |---------------------------|||" << std::endl;
	//	std::cout << "|||===========================|                                                         |===========================|||" << std::endl;
	//	std::cout << "|||===========================|   Slot 2:                                               |===========================|||" << std::endl;
	//	std::cout << "|||---------------------------|                                                         |---------------------------|||" << std::endl;
	//	std::cout << "|||                           |   Slot 3:                                               |                           |||" << std::endl;
	//	std::cout << "|||   |||   |||   |||   |||   |                                                         |   |||   |||   |||   |||   |||" << std::endl;
	//	std::cout << "|||      |||   |||   |||      |   Slot 4:                                               |      |||   |||   |||      |||" << std::endl;
	//	std::cout << "|||   |||   |||   |||   |||   |                                                         |   |||   |||   |||   |||   |||" << std::endl;
	//	std::cout << "|||      |||   |||   |||      |   Slot 5:                                               |      |||   |||   |||      |||" << std::endl;
	//	std::cout << "|||   |||   |||   |||   |||   |                                                         |   |||   |||   |||   |||   |||" << std::endl;
	//	std::cout << "|||                           |   Slot 6:                                               |                           |||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//}

	/*
	Health: [||||||||||||||     ]        |               Inventory                 | Tasks: 1. Find key.
	Xp: [|||||               ]			  |                                         |        2. Punch alien in the face.
	Gold: 133777						   _________________________________________		 4. Probe ship commander.
	______________________________________/_________________________________________\______________________________________
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	|||                           |         ____                  __                        |                           |||
	|||   |||   |||   |||   |||   |        /  _/__ _  _____ ___  / /____  ______ __         |   |||   |||   |||   |||   |||
	|||      |||   |||   |||      |       _/ // _ \ |/ / -_) _ \/ __/ _ \/ __/ // /         |      |||   |||   |||      |||
	|||   |||   |||   |||   |||   |      /___/_//_/___/\__/_//_/\__/\___/_/  \_, /          |   |||   |||   |||   |||   |||
	|||      |||   |||   |||      |                                          |__/           |      |||   |||   |||      |||
	|||   |||   |||   |||   |||   |                                                         |   |||   |||   |||   |||   |||
	|||                           |          Qty  Item                                      |                           |||
	|||---------------------------|   Slot 1: 1x Sword, Sharp Pointy thing                  |---------------------------|||
	|||===========================|                                                         |===========================|||
	|||---------------------------|   Slot 2: 1x Burlap sack, "Armor" +10                   |===========================|||
	|||---------------------------|                                                         |---------------------------|||
	|||---------------------------|   Slot 3: 2x Bomb, Goes boom for 100 dmg                |                           |||
	|||   |||   |||   |||   |||   |                                                         |   |||   |||   |||   |||   |||
	|||      |||   |||   |||      |   Slot 4: 1x Key, Useless key but I'm out of ideas      |      |||   |||   |||      |||
	|||   |||   |||   |||   |||   |                                                         |   |||   |||   |||   |||   |||
	|||      |||   |||   |||      |   Slot 5: Empty                                         |      |||   |||   |||      |||
	|||   |||   |||   |||   |||   |                                                         |   |||   |||   |||   |||   |||
	|||                           |   Slot 6: Empty                                         |                           |||
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	_______________________________________________________________________________________________________________________
	X - Inventory         A - Interact   \_________________________________________/
	Y - Map               B -


	Selection:
	*/

	////Inventory screen
	//if (left == 'I') {
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||                           |         ____                  __                        |                           |||" << std::endl;
	//	std::cout << "|||   |||   |||   |||   |||   |        /  _/__ _  _____ ___  / /____  ______ __         |   |||   |||   |||   |||   |||" << std::endl;
	//	std::cout << "|||      |||   |||   |||      |       _/ // _ \\ |/ / -_) _ \\/ __/ _ \\/ __/ // /         |      |||   |||   |||      |||" << std::endl;
	//	std::cout << "|||   |||   |||   |||   |||   |      /___/_//_/___/\\__/_//_/\\__/\\___/_/  \\_, /          |   |||   |||   |||   |||   |||" << std::endl;
	//	std::cout << "|||      |||   |||   |||      |                                          |__/           |      |||   |||   |||      |||" << std::endl;
	//	std::cout << "|||   |||   |||   |||   |||   |                                                         |   |||   |||   |||   |||   |||" << std::endl;
	//	std::cout << "|||                           |          Qty  Item                                      |                           |||" << std::endl;
	//	//std::cout << "|||---------------------------|   Slot 1: " << slot1.quantity << "x   " << slot1.itemName << ", " << slot1.details << "                 ";
	//	std::cout << "|||---------------------------|   Slot 1: ";
	//	printSlot(1);

	//	std::cout <<"|---------------------------|||" << std::endl;
	//	std::cout << "|||===========================|                                                         |===========================|||" << std::endl;
	//	//std::cout << "|||===========================|   Slot 2: " << slot2.quantity << "x   " << slot2.itemName << ", " << slot2.details << "              ";
	//	std::cout << "|||---------------------------|   Slot 2: ";
	//	printSlot(2);


	//	std::cout << "|===========================|||" << std::endl;
	//	std::cout << "|||---------------------------|                                                         |---------------------------|||" << std::endl;
	//	//std::cout << "|||                           |   Slot 3: " << slot3.quantity << "x   " << slot3.itemName << ", " << slot3.details << "    ";
	//	std::cout << "|||---------------------------|   Slot 3: ";
	//	printSlot(3);



	//	std::cout << "|                           |||" << std::endl;
	//	std::cout << "|||   |||   |||   |||   |||   |                                                         |   |||   |||   |||   |||   |||" << std::endl;
	//	std::cout << "|||      |||   |||   |||      |   Slot 4: ";
	//	printSlot(4);
	//	std::cout << "|      |||   |||   |||      |||" << std::endl;
	//	std::cout << "|||   |||   |||   |||   |||   |                                                         |   |||   |||   |||   |||   |||" << std::endl;
	//	std::cout << "|||      |||   |||   |||      |   Slot 5: ";
	//	printSlot(5);
	//	std::cout << "|      |||   |||   |||      |||" << std::endl;
	//	std::cout << "|||   |||   |||   |||   |||   |                                                         |   |||   |||   |||   |||   |||" << std::endl;
	//	std::cout << "|||                           |   Slot 6: ";
	//	printSlot(6);
	//	std::cout << "|                           |||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//}

	//Map screen
	if (left == 'M') {
		printMap(newMap, center, right, LR);
	}

	//else if (left == 'O' && center == 'O' && right == 'O' && LR == 'O' && CR == 'O' && RR == 'O' && L == 'W' && R == 'W')
	//{
	//	std::cout << "|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||" << std::endl;
	//	std::cout << "|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||" << std::endl;
	//	std::cout << "|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||" << std::endl;
	//	std::cout << "|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||" << std::endl;
	//	std::cout << "|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||" << std::endl;
	//	std::cout << "|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||" << std::endl;
	//	std::cout << "|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||" << std::endl;
	//	std::cout << "|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||" << std::endl;
	//	std::cout << "|||||||||                                                                                                      ||||||||" << std::endl;
	//	std::cout << "|||||||||                                                                                                      ||||||||" << std::endl;
	//	std::cout << "|||||||||                                                                                                      ||||||||" << std::endl;
	//	std::cout << "|||||||||                                                                                                      ||||||||" << std::endl;
	//	std::cout << "|||||||||mnnmmnnmmnnmnnmnnmnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	//	std::cout << "|||||||||mnnmmnnmmnnmnnmnnmnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	//	std::cout << "|||||||||mnnmmnnmmnnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	//	std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	//	std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	//	std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	//	std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	//	std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	//}

	//////////new hug left wall in room
	else if (left == 'W' && center == 'O' && right == 'O' && LR == 'W' && CR == 'O' && RR == 'O' && L == 'W' && R == 'O')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	}
	//// hugging right wall
	//else if (left == 'O' && center == 'O' && right == 'W' && LR == 'O' && CR == 'O' && RR == 'W' && L == 'O' && R == 'O')
	//{
	//	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||" << std::endl;
	//	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||" << std::endl;
	//	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
	//	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
	//	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
	//	std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
	//	std::cout << "                                                                                             ||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "                                                                                             ||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "                                                                                             ||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//}


	//// hugging left wall
	//else if (left == 'W' && center == 'O' && right == 'O' && LR == 'W' && CR == 'O' && RR == 'O' && L == )
	//{
	//	std::cout << "|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	//	std::cout << "||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	//	std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	//	std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	//	std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	//	std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||                                                                                            " << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||                                                                                            " << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||                                                                                            " << std::endl;
	//	std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "|||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//	std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	//}

	else if (left == 'O' && center == 'O' && right == 'W' && LR == 'O' && CR == 'O' && RR == 'W' && L == 'O' && R == 'W')
	{
		std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'O' && LR == 'O' && CR == 'O' && RR == 'O' && L == 'W' && R == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'W' && CR == 'O' && RR == 'W' && L == 'O' && R == 'O')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'O' && LR == 'W' && CR == 'W' && RR == 'W' && L == 'W' && R == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'O' && LR == 'O' && CR == 'O' && RR == 'O' && L == 'W' && R == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||                                                                                    |||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||                                                                                    |||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||                                                                                    |||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||                                                                                    |||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmnnmnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmnnmnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'W' && CR == 'O' && RR == 'W' && R == 'S')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||'    " << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||'    " << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||'    " << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||'    " << std::endl;
		std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||'    " << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||'    " << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||'    " << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                ||||||||||||||||||||||||||||||'    " << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                ||||||||||||||||||||||||||||||'    " << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                ||||||||||||||||||||||||||||||'    " << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                ||||||||||||||||||||||||||||||'    " << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn|||||||||||||||||||||||||||'    " << std::endl;
		std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm||||||||||||||||||||||||'    " << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm|||||||||||||||||||||'    " << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn||||||||||||||||||' ..'" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn|||||||||||||||==   " << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm||||||||||||||== " << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'W' && CR == 'O' && RR == 'W' && L == 'S')
	{
		std::cout << "     '||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "     '|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "     '||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "     '|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "     '||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "     '|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "     '||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "     '||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "     '||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "     '||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "     '||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "     '|||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "     '||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "     '|||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << " '.. '||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "    ==|||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << " ==|||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'W' && CR == 'O' && RR == 'W') {
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'O' && CR == 'O' && RR == 'O') {
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||                                                                                    |||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||                                                                                    |||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||                                                                                    |||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||                                                                                    |||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}


	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'W' && CR == 'O' && RR == 'W') {
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'O' && LR == 'W' && CR == 'W' && RR == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'W' && LR == 'W' && CR == 'W' && RR == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'W' && CR == 'W' && RR == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	// small Chest room?
	else if (left == 'W' && center == 'B' && right == 'W' && LR == 'W' && CR == 'W' && RR == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnm/___________/|nmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm|__________|/|nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm|__________|/|nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm|__________|/nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'O' && LR == 'W' && CR == 'A' && RR == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||XXXXXXXXXXXXXXXXXXXX|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X       |  |       X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X       |  |       X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X       |  |       X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X      /    \\      X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X     |      |     X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X     |      |     X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X    /        \\    X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X   |          |   X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X  /            \\  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'O' && LR == 'W' && CR == 'D' && RR == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||XXXXXXXXXXXXXXXXXXXX|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X              O   X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'W' && CR == 'D' && RR == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||XXXXXXXXXXXXXXXXXXXX|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X              O   X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'D' && right == 'W' && L == 'W' && R == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                         /\\    X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                        \\/     X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'D' && right == 'W' && L == 'O' && R == 'W')
	{
		std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                         /\\    X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                        \\/     X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'D' && right == 'W' && L == 'W' && R == 'O')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                         /\\    X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                        \\/     X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	}


	else if (left == 'W' && center == 'D' && right == 'W' && L == 'O' && R == 'O')
	{
		std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                         /\\    X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                        \\/     X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                               X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	}

	//// Door opening?
	//else if (left == 'W' && center == 'D' && right == 'W' && LR == 'E' && L == 'O' && R == 'O')
	//{
	//	std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'XXXXXXXXXX._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||XXXXXXXXX         X||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||XXXXX                  XXXXXXXXXX|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                /\\    X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                \\/    X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm                 Xnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm        Xnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
	//	std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmXnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	//}

	// Door opening?
	//else if (left == 'W' && center == 'D' && right == 'W' && LR == 'E' && L == 'W' && R == 'W')
	else if (left == 'E')
	{
		std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'XXXXXXXXXX._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'." << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||XXXXXXXXX         X||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||XXXXX                  XXXXXXXXXX|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                /\\    X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                \\/    X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||X                      X        X|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm                 Xnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm        Xnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmXnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'O' && LR == 'W' && CR == 'D' && RR == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||XXXXXXXXXXXXXXXXXXXX|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X              O   X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'D' && right == 'W' && LR == 'X' && CR == 'X' && RR == 'X')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||XXXXXXXXXXXXXXXXXXXX|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X              O   X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||X                  X|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn}}}||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}



	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'O' && CR == 'W' && RR == 'O')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'W' && right == 'W' && L == 'W' && R == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'O' && LR == 'W' && CR == 'O' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	//else if (left == 'O' && center == 'O' && right == 'W' && LR == 'W' && CR == 'O' && RR == 'W')
	//{
	//	std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
	//	std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	//}

	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'O' && CR == 'O' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'W' && LR == 'W' && CR == 'O' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'O' && LR == 'W' && CR == 'O' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'D' && LR == 'W' && CR == 'O' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||XXX|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||XXX  X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||XXX     X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||X     O X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||X       X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmX       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn     X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn  X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'D' && LR == 'W' && CR == 'W' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||XXX|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||XXX  X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||XXX     X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||X     O X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||X       X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmX       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn     X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn  X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'D' && center == 'O' && right == 'W' && LR == 'W' && CR == 'O' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||XXX|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X  XXX|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X     XXX|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X     O X|||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       Xnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X     mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X  mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'D' && center == 'O' && right == 'W' && LR == 'W' && CR == 'W' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||XXX|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X  XXX|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X     XXX|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X     O X||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       Xnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X     mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X  mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	//else if (left == 'W' && center == 'O' && right == 'O' && LR == 'W' && CR == 'O' && RR == 'W')
	//{
	//	std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
	//	std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
	//	std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
	//	std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	//}

	else if (left == 'W' && center == 'W' && right == 'W' && L == 'W' && R == 'O') {
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	}

	else if (left == 'W' && center == 'W' && right == 'W' && L == 'O' && R == 'W')
	{
		std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'W' && CR == 'O' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'W' && CR == 'O' && RR == 'S')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||==||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||==  '||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||==     '||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||'      '||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||'      '||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||==     '||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                ||||||==  '||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||==||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'S' && LR == 'W' && CR == 'O' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||==||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||==  '||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||==    ==||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||==    ==  '||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||'  ==     '||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||==.       '||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||' .       '||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                ||||||||||||' .       '||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                ||||||||||||' .       '||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                ||||||||||||' .       '||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                ||||||||||||' ..      '||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn|||||||||==  '..   '||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||==  '..'||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm|||||||||==  '||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||==||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'S' && center == 'O' && right == 'W' && LR == 'W' && CR == 'O' && RR == 'W')
	{
		std::cout << "|||||||||||||==|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||'  ==|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||==    ==|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||'  ==    ==|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||'     ==  '||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||'       .==|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||'       . '||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||'       . '||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||'       . '||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||'       . '||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||'      .. '||||||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||'   ..'  ==|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||'..'  ==|||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||'  ==|||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||==|||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'S' && CR == 'O' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||==|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||'  ==|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||'     ==|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||'      '|||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||'      '|||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||'     ==|||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||'  ==||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||==||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'D' && center == 'O' && right == 'D' && LR == 'W' && CR == 'O' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||XXX|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||XXX|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X  XXX|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||XXX  X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X     XXX|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||XXX     X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||||||||                                                |||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||||||||                                                |||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X     O X|||||||||                                                |||||||||X O     X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||||||||                                                |||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       XnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmX       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X     mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn     X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X  mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn  X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'D' && center == 'O' && right == 'O' && LR == 'W' && CR == 'O' && RR == 'W') {
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||XXX|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X  XXX|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X     XXX|||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X     O X|||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||||||||                                                |||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       X|||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X       Xnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X     mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||X  mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'D' && LR == 'W' && CR == 'O' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||XXX|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||XXX  X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||XXX     X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||X O     X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||                                                |||||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||X       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmX       X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn     X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn  X|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'O' && LR == 'O' && CR == 'W' && RR == 'O')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||   ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||   ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||   ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||   ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||   ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||   ||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmm||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||nnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmm||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||nnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmm||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||nnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmm||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||nnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'W' && LR == 'O' && CR == 'W' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmm|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmm|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmm|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmm|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'O' && LR == 'O' && CR == 'W' && RR == 'W')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmm|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmm|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmm|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmm|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'O' && LR == 'W' && CR == 'W' && RR == 'O')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||   ||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||   ||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||   ||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||nnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||nnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||nnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||nnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'O' && LR == 'W' && CR == 'W' && RR == 'O')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||   ||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||   ||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||   ||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||nnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||nnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||nnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||nnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'O' && LR == 'O' && CR == 'O' && RR == 'O')
	{
		std::cout << "|||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||" << std::endl;
		std::cout << "||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||" << std::endl;
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||                                                                  ||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||" << std::endl;
		std::cout << "|||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'W' && CR == 'O' && RR == 'O')
	{
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'W' && LR == 'W' && CR == 'S' && RR == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||===================|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||'================='|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||'|               |'|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||'|               |'|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||'|_______________|'|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||===================|||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'S' && right == 'W' && L == 'W' && R == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||=====================================||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||'               STORE               '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||'==================================='||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||' |                               | '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||' |                               | '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||' |                               | '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||' |                               | '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||' |                               | '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||' |_______________________________| '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||'/                                \\'|||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||=====================================||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'W' && right == 'W' && L == 'O' && R == 'O')
	{
		std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnmmnnmmnn" << std::endl;
	}

	else if (left == 'W' && center == 'O' && right == 'O')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'O' && center == 'O' && right == 'W')
	{
		std::cout << "|||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'|||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmnnmmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||nnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmm|||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||nmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnm||||||||||||||" << std::endl;
		std::cout << "||||||||||||mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnn|||||||||||" << std::endl;
		std::cout << "|||||||||mnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn||||||||" << std::endl;
	}

	else if (left == 'W' && center == 'S' && right == 'W')
	{
		std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||=====================================||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||'               STORE               '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||'==================================='||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||' |                               | '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||' |                               | '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||' |                               | '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||' |                               | '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||' |                               | '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||' |_______________________________| '||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||'/                                \\'|||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "||||||||||||||||||||||||||||||||||||||||||=====================================||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnmmnnmmnn" << std::endl;
	}

	else if (left == 'O' && center == 'W' && right == 'W')
	{
		std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnmmnnmmnn" << std::endl;
	}

	else if (left == 'W' && center == 'W' && right == 'O')
	{
		std::cout << "._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._'._" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmn" << std::endl;
		std::cout << "mmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnnmmnmmnnmmnn" << std::endl;
	}

	//Inventory screen
	if (left == 'W') {
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                     :::   :::  ::::::::  :::    :::      :::       ::: ::::::::::: ::::    :::                  |||" << std::endl;
		std::cout << "|||                     :+:   :+: :+:    :+: :+:    :+:      :+:       :+:     :+:     :+:+:   :+:                  |||" << std::endl;
		std::cout << "|||                      +:+ +:+  +:+    +:+ +:+    +:+      +:+       +:+     +:+     :+:+:+  +:+                  |||" << std::endl;
		std::cout << "|||                       +#++:   +#+    +:+ +#+    +:+      +#+  +:+  +#+     +#+     +#+ +:+ +#+                  |||" << std::endl;
		std::cout << "|||                        +#+    +#+    +#+ +#+    +#+      +#+ +#+#+ +#+     +#+     +#+  +#+#+#                  |||" << std::endl;
		std::cout << "|||                        #+#    #+#    #+# #+#    #+#       #+#+# #+#+#      #+#     #+#   #+#+#                  |||" << std::endl;
		std::cout << "|||                        ###     ########   ########         ###   ###   ########### ###    ####                  |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	}

	//Inventory screen
	if (left == 'Y')
	{
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||       ::::::::      :::     ::::    ::::  ::::::::::       ::::::::  :::     ::: :::::::::: :::::::::  :::      |||" << std::endl;
		std::cout << "|||      :+:    :+:   :+: :+:   +:+:+: :+:+:+ :+:             :+:    :+: :+:     :+: :+:        :+:    :+: :+:      |||" << std::endl;
		std::cout << "|||      +:+         +:+   +:+  +:+ +:+:+ +:+ +:+             +:+    +:+ +:+     +:+ +:+        +:+    +:+ +:+      |||" << std::endl;
		std::cout << "|||      :#:        +#++:++#++: +#+  +:+  +#+ +#++:++#        +#+    +:+ +#+     +:+ +#++:++#   +#++:++#:  +#+      |||" << std::endl;
		std::cout << "|||      +#+   +#+# +#+     +#+ +#+       +#+ +#+             +#+    +#+  +#+   +#+  +#+        +#+    +#+ +#+      |||" << std::endl;
		std::cout << "|||      #+#    #+# #+#     #+# #+#       #+# #+#             #+#    #+#   #+#+#+#   #+#        #+#    #+#          |||" << std::endl;
		std::cout << "|||       ########  ###     ### ###       ### ##########       ########      ###     ########## ###    ### ###      |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||                                                                                                                 |||" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	}

}