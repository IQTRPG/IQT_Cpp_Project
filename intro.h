#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include <conio.h>
#include <Windows.h>
#include <cstdlib>
#include "Player.h"
#include "player_sub.h"
#include "Items.h"
#include "item_sub.h"
#include "Enemies.h"
#include "enemy_sub.h"
#include "Class_Generation.h"
using namespace std;

void typeIt(string it, int x, bool y);
int Intro();
void shop(InterStellar_Idiot idiot, Space_Ranger ranger, CloudTrooper cloud);

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); // used for goto
COORD CursorPosition; // used for goto

void gotoXY(int, int); //go to coord position
void clear_menu(); //clears screen
void print_shop(); //prints the shop

				   //pointers
Item *weaponPtr = NULL;
Item *armorPtr = NULL;
Item *item1Ptr = NULL;
Item *item2Ptr = NULL;
Item *item3Ptr = NULL;
Item *item4Ptr = NULL;


int Intro()
{
	//hold the name to pass the name
	int selection;
	string name;

	//begin the story
	string year = "The year is 4018. The human race has crossed into the final frontier, and discovered that space wasn't very lonely.";
	typeIt(year, 45, 1);
	string indeed = "Indeed, it was populated with all manner of beings. One such was the famous Cap'n Slap. A renowned space pirate, he had quit his less - than noble career in favor of a better one - being a game host. You are... who are you again?";
	typeIt(indeed, 45, 1);
	cout << "_SELECT NAME_" << endl;
	cout << "1.) Greasy McFry" << endl;
	cout << "2.) XxTotallyLegit420xX" << endl;
	cout << "3.) I Love the Space Force" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1:
		name = "Greasy McFry";
		break;
	case 2:
		name = "XxTotallyLegit420xX";
		break;
	case 3:
		name = "I Love the Space Force";
		break;
	default:
		cout << "since you cant pick between 1, 2, or 3, you get to be named, 'Intergalactic Idiot'" << endl;
		name = "Intergalactic Idiot";
		break;
	}

	cout << "Ah, " << name << " . What is your story?" << endl;
	cout << "_SELECT USELESS BACKGROUND_" << endl;
	cout << "1.) I am a Veteran of the United States Space Force." << endl;
	cout << "2.) I am a masked Vigilante. The protector of Go- I mean Space Detroit." << endl;
	cout << "3.) I am a random person with some boring backstory." << endl;
	cin >> selection;

	switch (selection)
	{
	case 1:
		break;
	case 2:
		break;
	case 3: //suprise! no one cares about the background!
		break;
	default:
		break;
	}

	string oh = "Oh. That's.... nice? Either way, welcome to Cap'n Slap's Space Citadel, the most popular game show in 4 quadrants! Cap'n Slap has invited you to this somewhat lovely place to try and earn fame and glory! And maybe not die!";
	typeIt(oh, 45, 1);
	cout << "_SELECT CLASS_" << endl;
	cout << "1.) Inter-Galactic Idiot" << endl;
	cout << "2.) Space-Ranger" << endl;
	cout << "3.) CloudTrooper" << endl;
	selection = 0;
	cin >> selection;

	//now create the actual player with their name
	switch (selection)
	{
	case 1:
		Selected.Name = name;
		break;
	case 2:
		Selected.Name = name;
		break;
	case 3:
		Selected.Name = name;
		break;
	default:
		cout << "Your lack of choosing one of three numbers is.... disturbing. We'll just go with Inter-Stellar Idiot " << endl;
		Selected.Name = name;
		selection = 1;
		break;
	}

	//player creation yo
	if (selection == 1)
	{
		InterStellar_Idiot Player1;
		Space_Ranger none1;
		CloudTrooper none2;
		Player1.Name = name;
	}
	else if (selection == 2)
	{
		InterStellar_Idiot none1;
		Space_Ranger Player1;
		CloudTrooper none2;
		Player1.Name = name;
	}
	else if (selection == 3)
	{
		InterStellar_Idiot none1;
		Space_Ranger none2;
		CloudTrooper Player1;
		Player1.Name = name;
	}

	string cap = "-Cap'n Slap has arrived to bid you greetings! Or farewell! Or both!-";
	typeIt(cap, 45, 1);
	string argh = "AAAARRRGH, oh god how do they do that? As you know I'm Cap'n Slap. I... won't explain how I got that title. Just know I have several Space-Restraining orders. Anyway, welcome to the Space Citadel. I'll be watching your progress from the Space-Television. Good Luck!";
	typeIt(argh, 45, 1);
	cout << "_PRESS ENTER TO....... ENTER THE DUNGEON_" << endl;

	return 0;
}

//function for making our text lines type out and make it more enjoyable.
void delay(int x)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(x));
}

// Write out char by char with a delay
//example: typeIt("Hello world", 1000, 1;
//                ^ string       ^ms   ^add endline
void typeIt(std::string it, int x, bool y)
{
	for (auto i = 0; i < it.length(); i++)
	{

		std::cout << it[i];
		delay(x);
	}
	if (y == true)
		std::cout << std::endl;
}

void shop(InterStellar_Idiot idiot, Space_Ranger ranger, CloudTrooper cloud) //int shop();
{
	int switchy = 0; //a switch to determine which "player" is going to be used
	//alright now lets make sure we figure out which class the player chose
	Player player;

	if (idiot.Name != "") 
	{
		switchy = 1;
		player = idiot;
	}
	else if (ranger.Name != "")
	{
		switchy = 1;
		player = ranger;
	}
	else if (cloud.Name != "")
	{
		switchy = 1;
		player = cloud;
	}

	int main_menu_item = 0;
	int run;
	int y = 16;
	int buy_menu_item = 0;
	int weapon_menu_item = 0;
	int armor_menu_item = 0;
	int consumable_menu_item = 0;
	int sell_menu_item = 0;
	bool main_menu = true; //for main shop menu
	bool buy_menu = true; //for buy menu
	bool weapon_menu = true; //buy
	bool armor_menu = true; //buy
	bool consumable_menu = true; //buy
	bool sell_menu = true; //for sell menu

	clear_menu(); //replace all text with blank spaces

	player.setGold(1000); //money for testing only
	int currentGold = player.getGold();

	print_shop();

	gotoXY(54, 14); std::cout << "Welcome to Space-Mart.  Git ur stuff and git out!";
	gotoXY(54, 16); std::cout << "->";

	//start Main menu
	do
	{
		//main_menu_item = 0;
		run;
		//y = 7;
		buy_menu_item = 0;
		weapon_menu_item = 0;
		armor_menu_item = 0;
		consumable_menu_item = 0;
		sell_menu_item = 0;
		main_menu = true; //for main shop menu
		buy_menu = true; //for buy menu
		weapon_menu = true; //buy
		armor_menu = true; //buy
		consumable_menu = true; //buy
		sell_menu = true; //for sell menu

		gotoXY(56, 16); std::cout << "1) Buy";
		gotoXY(56, 17); std::cout << "2) Sell";
		gotoXY(56, 18); std::cout << "3) Leave" << std::endl;

		system("pause>nul");

		if (GetAsyncKeyState(VK_DOWN) && y != 18) //down button pressed, won't change if x is already at the bottom position
		{
			gotoXY(54, y); std::cout << "  ";
			y++;
			gotoXY(54, y); std::cout << "->";
			main_menu_item++;
			continue;

		}

		if (GetAsyncKeyState(VK_UP) && y != 16) //up button pressed, won't change if x is already at the top position
		{
			gotoXY(54, y); std::cout << "  ";
			y--;
			gotoXY(54, y); std::cout << "->";
			main_menu_item--;
			continue;
		}

		if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

			switch (main_menu_item) {

			case 0: { //buy      
					  //main_menu_item = 0;
				run;
				y = 16;
				buy_menu_item = 0;
				weapon_menu_item = 0;
				armor_menu_item = 0;
				consumable_menu_item = 0;
				sell_menu_item = 0;
				main_menu = true; //for main shop menu
				buy_menu = true; //for buy menu
				weapon_menu = true; //buy
				armor_menu = true; //buy
				consumable_menu = true; //buy
				sell_menu = true; //for sell menu

				clear_menu();
				buy_menu = true; //make sure this is on in case they have left the buy menu

				print_shop();

				gotoXY(54, 14); std::cout << "Buy something, will ya?";
				gotoXY(54, 16); std::cout << "->";
				//start buy sub-menu
				do
				{

					gotoXY(56, 16); std::cout << "1) Weapons";
					gotoXY(56, 17); std::cout << "2) Armor";
					gotoXY(56, 18); std::cout << "3) Consumables";
					gotoXY(56, 19); std::cout << "4) Back" << std::endl;

					system("pause>nul"); //puts a short delay in reading next key press so you don't accidentally hit a button twice in a row

					if (GetAsyncKeyState(VK_DOWN) && y != 19) //down button pressed, won't change if x is already at the bottom position
					{
						gotoXY(54, y); std::cout << "  ";
						y++;
						gotoXY(54, y); std::cout << "->";
						buy_menu_item++;
						continue;

					}

					if (GetAsyncKeyState(VK_UP) && y != 16) //up button pressed, won't change if x is already at the top position
					{
						gotoXY(54, y); std::cout << "  ";
						y--;
						gotoXY(54, y); std::cout << "->";
						buy_menu_item--;
						continue;
					}

					if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

						switch (buy_menu_item) {

						case 0: { //weapons
								  //main_menu_item = 0;
							run;
							y = 16;
							buy_menu_item = 0;
							weapon_menu_item = 0;
							armor_menu_item = 0;
							consumable_menu_item = 0;
							sell_menu_item = 0;
							main_menu = true; //for main shop menu
							buy_menu = true; //for buy menu
							weapon_menu = true; //buy
							armor_menu = true; //buy
							consumable_menu = true; //buy
							sell_menu = true; //for sell menu

							clear_menu();
							weapon_menu = true; //make sure this is on in case they just left the weapons menu

							print_shop();

							gotoXY(54, 14); std::cout << "That's not a weapon.  THESE are weapons.";
							gotoXY(54, 16); std::cout << "->";
							//start weapon sub-menu
							do
							{
								gotoXY(56, 16); std::cout << "1) " << stick.getName() << ":"; gotoXY(76, 16); std::cout << "Attack +" << stick.getStat(); gotoXY(88, 16); std::cout << "Cost: " << stick.getCost();
								gotoXY(56, 17); std::cout << "2) " << sword.getName() << ":"; gotoXY(76, 17); std::cout << "Attack +" << sword.getStat(); gotoXY(88, 17); std::cout << "Cost: " << sword.getCost();
								gotoXY(56, 18); std::cout << "3) " << probe.getName() << ":"; gotoXY(76, 18); std::cout << "Attack +" << probe.getStat(); gotoXY(88, 18); std::cout << "Cost: " << probe.getCost();
								gotoXY(56, 19); std::cout << "4) " << halberd.getName() << ":"; gotoXY(76, 19); std::cout << "Attack +" << halberd.getStat(); gotoXY(88, 19); std::cout << "Cost: " << halberd.getCost();
								gotoXY(56, 20); std::cout << "5) " << scimitar.getName() << ":"; gotoXY(76, 20); std::cout << "Attack +" << scimitar.getStat(); gotoXY(88, 20); std::cout << "Cost: " << scimitar.getCost();
								gotoXY(56, 21); std::cout << "6) " << face_destroyer.getName() << ":"; gotoXY(76, 21); std::cout << "Attack +" << face_destroyer.getStat(); gotoXY(88, 21); std::cout << "Cost: " << face_destroyer.getCost();
								gotoXY(56, 22); std::cout << "7) Back" << std::endl;

								system("pause>nul");

								if (GetAsyncKeyState(VK_DOWN) && y != 22) //down button pressed, won't change if x is already at the bottom position
								{
									gotoXY(54, y); std::cout << "  ";
									y++;
									gotoXY(54, y); std::cout << "->";
									weapon_menu_item++;
									continue;

								}

								if (GetAsyncKeyState(VK_UP) && y != 16) //up button pressed, won't change if x is already at the top position
								{
									gotoXY(54, y); std::cout << "  ";
									y--;
									gotoXY(54, y); std::cout << "->";
									weapon_menu_item--;
									continue;
								}

								if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

									switch (weapon_menu_item) {

									case 0: { //item 1
										if (currentGold < stick.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (weaponPtr != NULL) //if a weapon is equipped, buy it back then give new weapon
											{
												gotoXY(56, 23); std::cout << "Buying " << weaponPtr->getName() << " for " << weaponPtr->getValue() << " gold.  Equipping " << stick.getName() << ".";
												//buy old item
												currentGold = currentGold + weaponPtr->getValue();
												//take money
												currentGold = currentGold - stick.getCost();
												//give item
												weaponPtr = (Stick *)&stick;
												break;
											}
											else //(weaponPtr = NULL) //if no weapon currently equipped
											{
												gotoXY(56, 23); std::cout << "Equipping " << stick.getName() << ".";
												//take money
												currentGold = currentGold - stick.getCost();
												//give item
												weaponPtr = (Stick *)&stick;
												break;
											}
										}
										break;
									}
									case 1: { //item 2
										if (currentGold < sword.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (weaponPtr != NULL) //if a weapon is equipped, buy it back then give new weapon
											{
												gotoXY(56, 23); std::cout << "Buying " << weaponPtr->getName() << " for " << weaponPtr->getValue() << " gold.  Equipping " << sword.getName() << ".";
												//buy old item
												currentGold = currentGold + weaponPtr->getValue();
												//take money
												currentGold = currentGold - sword.getCost();
												//give item
												weaponPtr = (Sword *)&sword;
											}
											else //if no weapon currently equipped
											{
												gotoXY(56, 23); std::cout << "Equipping " << sword.getName() << ".";
												//take money
												currentGold = currentGold - sword.getCost();
												//give item
												weaponPtr = (Sword *)&sword;
											}
										}
										break;
									}
									case 2: { //item 3
										if (currentGold < probe.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (weaponPtr != NULL)
											{
												gotoXY(56, 23); std::cout << "Buying " << weaponPtr->getName() << " for " << weaponPtr->getValue() << " gold.  Equipping " << probe.getName() << ".";
												//buy old item
												currentGold = currentGold + weaponPtr->getValue();
												//take money
												currentGold = currentGold - probe.getCost();
												//give item
												weaponPtr = (Probe *)&probe;
											}
											else //if no weapon currently equipped
											{
												gotoXY(56, 23); std::cout << "Equipping " << probe.getName() << ".";
												//take money
												currentGold = currentGold - probe.getCost();
												//give item
												weaponPtr = (Probe *)&probe;
											}
										}
										break;
									}
									case 3: { //item 4
										if (currentGold < halberd.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (weaponPtr != NULL) //if a weapon is equipped, buy it back then give new weapon
											{
												gotoXY(56, 23); std::cout << "Buying " << weaponPtr->getName() << " for " << weaponPtr->getValue() << " gold.  Equipping " << halberd.getName() << ".";
												//buy old item
												currentGold = currentGold + weaponPtr->getValue();
												//take money
												currentGold = currentGold - halberd.getCost();
												//give item
												weaponPtr = (Halberd *)&halberd;
											}
											else //if no weapon currently equipped
											{
												gotoXY(56, 23); std::cout << "Equipping " << halberd.getName() << ".";
												//take money
												currentGold = currentGold - halberd.getCost();
												//give item
												weaponPtr = (Halberd *)&halberd;
											}
										}
										break;
									}
									case 4: { //item 5
										if (currentGold < scimitar.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (weaponPtr != NULL) //if a weapon is equipped, buy it back then give new weapon
											{
												gotoXY(56, 23); std::cout << "Buying " << weaponPtr->getName() << " for " << weaponPtr->getValue() << " gold.  Equipping " << scimitar.getName() << ".";
												//buy old item
												currentGold = currentGold + weaponPtr->getValue();
												//take money
												currentGold = currentGold - scimitar.getCost();
												//give item
												weaponPtr = (Scimitar *)&scimitar;
											}
											else //if no weapon currently equipped
											{
												gotoXY(56, 23); std::cout << "Equipping " << scimitar.getName() << ".";
												//take money
												currentGold = currentGold - scimitar.getCost();
												//give item
												weaponPtr = (Scimitar *)&scimitar;
											}
										}
										break;
									}
									case 5: { //item 6
										if (currentGold < face_destroyer.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (weaponPtr != NULL) //if a weapon is equipped, buy it back then give new weapon
											{
												gotoXY(56, 23); std::cout << "Buying " << weaponPtr->getName() << " for " << weaponPtr->getValue() << " gold.  Equipping " << face_destroyer.getName() << ".";
												//buy old item
												currentGold = currentGold + weaponPtr->getValue();
												//take money
												currentGold = currentGold - face_destroyer.getCost();
												//give item
												weaponPtr = (FaceDestroyer *)&face_destroyer;
											}
											else //if no weapon currently equipped
											{
												gotoXY(56, 23); std::cout << "Equipping " << face_destroyer.getName() << ".";
												//take money
												currentGold = currentGold - face_destroyer.getCost();
												//give item
												weaponPtr = (FaceDestroyer *)&face_destroyer;
											}
										}
										break;
									}
									case 6: { //back
										clear_menu();
										y = 16; //reinitialize x value

										print_shop();

										gotoXY(54, 14); std::cout << "I can't believe I got outta bed for this.";
										gotoXY(54, 16); std::cout << "->";

										weapon_menu = false;
										break;
									}
									} //close weapon menu switch
								}
							} while (weapon_menu); //close weapon menu
							break;
						} //close case 0
						case 1: { //armor
								  //main_menu_item = 0;
							run;
							y = 16;
							buy_menu_item = 0;
							weapon_menu_item = 0;
							armor_menu_item = 0;
							consumable_menu_item = 0;
							sell_menu_item = 0;
							main_menu = true; //for main shop menu
							buy_menu = true; //for buy menu
							weapon_menu = true; //buy
							armor_menu = true; //buy
							consumable_menu = true; //buy
							sell_menu = true; //for sell menu

							clear_menu();
							armor_menu = true; //make sure this is on in case they just exited the armor menu

							print_shop();

							gotoXY(54, 14); std::cout << "You call that armor?  My neice could punch through those rags.";
							gotoXY(54, 16); std::cout << "->";
							//start armor sub-menu
							do
							{
								//item name - stat modifier (attack, a/c, misc.) - cost
								gotoXY(56, 16); std::cout << "1) " << bucket.getName() << ":"; gotoXY(76, 16); std::cout << "Armor +" << bucket.getStat(); gotoXY(88, 16); std::cout << "Cost: " << bucket.getCost();
								gotoXY(56, 17); std::cout << "2) " << can_lid.getName() << ":"; gotoXY(76, 17); std::cout << "Armor +" << can_lid.getStat(); gotoXY(88, 17); std::cout << "Cost: " << can_lid.getCost();
								gotoXY(56, 18); std::cout << "3) " << helmet.getName() << ":"; gotoXY(76, 18); std::cout << "Armor +" << helmet.getStat(); gotoXY(88, 18); std::cout << "Cost: " << helmet.getCost();
								gotoXY(56, 19); std::cout << "4) " << chain_mail.getName() << ":"; gotoXY(76, 19); std::cout << "Armor +" << chain_mail.getStat(); gotoXY(88, 19); std::cout << "Cost: " << chain_mail.getCost();
								gotoXY(56, 20); std::cout << "5) " << plate_mail.getName() << ":"; gotoXY(76, 20); std::cout << "Armor +" << plate_mail.getStat(); gotoXY(88, 20); std::cout << "Cost: " << plate_mail.getCost();
								gotoXY(56, 21); std::cout << "6) " << mythril.getName() << ":"; gotoXY(76, 21); std::cout << "Armor +" << mythril.getStat(); gotoXY(88, 21); std::cout << "Cost: " << mythril.getCost();
								gotoXY(56, 22); std::cout << "7) Back" << std::endl;

								system("pause>nul");

								if (GetAsyncKeyState(VK_DOWN) && y != 22) //down button pressed, won't change if x is already at the bottom position
								{
									gotoXY(54, y); std::cout << "  ";
									y++;
									gotoXY(54, y); std::cout << "->";
									armor_menu_item++;
									continue;

								}

								if (GetAsyncKeyState(VK_UP) && y != 16) //up button pressed, won't change if x is already at the top position
								{
									gotoXY(54, y); std::cout << "  ";
									y--;
									gotoXY(54, y); std::cout << "->";
									armor_menu_item--;
									continue;
								}

								if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

									switch (armor_menu_item) {

									case 0: { //item 1
										if (currentGold < bucket.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (armorPtr != NULL) //if a weapon is equipped, buy it back then give new weapon
											{
												gotoXY(56, 23); std::cout << "Buying " << armorPtr->getName() << " for " << armorPtr->getValue() << " gold.  Equipping " << bucket.getName() << ".";
												//buy old item
												currentGold = currentGold + armorPtr->getValue();
												//take money
												currentGold = currentGold - bucket.getCost();
												//give item
												armorPtr = (Bucket *)&bucket;
											}
											else //if no weapon currently equipped
											{
												gotoXY(56, 23); std::cout << "Equipping " << bucket.getName() << ".";
												//take money
												currentGold = currentGold - bucket.getCost();
												//give item
												armorPtr = (Bucket *)&bucket;
											}
										}
										break;
									}
									case 1: { //item 2
										if (currentGold < can_lid.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (armorPtr != NULL) //if a weapon is equipped, buy it back then give new weapon
											{
												gotoXY(56, 23); std::cout << "Buying " << armorPtr->getName() << " for " << armorPtr->getValue() << " gold.  Equipping " << can_lid.getName() << ".";
												//buy old item
												currentGold = currentGold + armorPtr->getValue();
												//take money
												currentGold = currentGold - can_lid.getCost();
												//give item
												armorPtr = (CanLid *)&can_lid;
											}
											else //if no weapon currently equipped
											{
												gotoXY(56, 23); std::cout << "Equipping " << can_lid.getName() << ".";
												//take money
												currentGold = currentGold - can_lid.getCost();
												//give item
												armorPtr = (CanLid *)&can_lid;
											}
										}
										break;
									}
									case 2: { //item 3
										if (currentGold < helmet.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (armorPtr != NULL) //if a weapon is equipped, buy it back then give new weapon
											{
												gotoXY(56, 23); std::cout << "Buying " << armorPtr->getName() << " for " << armorPtr->getValue() << " gold.  Equipping " << helmet.getName() << ".";
												//buy old item
												currentGold = currentGold + armorPtr->getValue();
												//take money
												currentGold = currentGold - helmet.getCost();
												//give item
												armorPtr = (Helmet *)&helmet;
											}
											else //if no weapon currently equipped
											{
												gotoXY(56, 23); std::cout << "Equipping " << helmet.getName() << ".";
												//take money
												currentGold = currentGold - helmet.getCost();
												//give item
												armorPtr = (Helmet *)&helmet;
											}
										}
										break;
									}
									case 3: { //item 4
										if (currentGold < chain_mail.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (armorPtr != NULL) //if a weapon is equipped, buy it back then give new weapon
											{
												gotoXY(56, 23); std::cout << "Buying " << armorPtr->getName() << " for " << armorPtr->getValue() << " gold.  Equipping " << chain_mail.getName() << ".";
												//buy old item
												currentGold = currentGold + armorPtr->getValue();
												//take money
												currentGold = currentGold - chain_mail.getCost();
												//give item
												armorPtr = (ChainMail *)&chain_mail;
											}
											else //if no weapon currently equipped
											{
												gotoXY(56, 23); std::cout << "Equipping " << chain_mail.getName() << ".";
												//take money
												currentGold = currentGold - chain_mail.getCost();
												//give item
												armorPtr = (ChainMail *)&chain_mail;
											}
										}
										break;
									}
									case 4: { //item 5
										if (currentGold < plate_mail.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (armorPtr != NULL) //if a weapon is equipped, buy it back then give new weapon
											{
												gotoXY(56, 23); std::cout << "Buying " << armorPtr->getName() << " for " << armorPtr->getValue() << " gold.  Equipping " << plate_mail.getName() << ".";
												//buy old item
												currentGold = currentGold + armorPtr->getValue();
												//take money
												currentGold = currentGold - plate_mail.getCost();
												//give item
												armorPtr = (PlateMail *)&plate_mail;
											}
											else //if no weapon currently equipped
											{
												gotoXY(56, 23); std::cout << "Equipping " << plate_mail.getName() << ".";
												//take money
												currentGold = currentGold - plate_mail.getCost();
												//give item
												armorPtr = (PlateMail *)&plate_mail;
											}
										}
										break;
									}
									case 5: { //item 6
										if (currentGold < mythril.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (armorPtr != NULL) //if a weapon is equipped, buy it back then give new weapon
											{
												gotoXY(56, 23); std::cout << "Buying " << armorPtr->getName() << " for " << armorPtr->getValue() << " gold.  Equipping " << mythril.getName() << ".";
												//buy old item
												currentGold = currentGold + armorPtr->getValue();
												//take money
												currentGold = currentGold - mythril.getCost();
												//give item
												armorPtr = (Mythril *)&mythril;
											}
											else //if no weapon currently equipped
											{
												gotoXY(56, 23); std::cout << "Equipping " << mythril.getName() << ".";
												//take money
												currentGold = currentGold - mythril.getCost();
												//give item
												armorPtr = (Mythril *)&mythril;
											}
										}
										break;
									}
									case 6: { //back
										clear_menu();
										y = 16; //reinitialize x value

										print_shop();

										gotoXY(54, 14); std::cout << "Hurry it up.  You're cutting into my naptime.";
										gotoXY(54, 16); std::cout << "->";

										armor_menu = false;
									}
									} //close armor menu switch
								}
							} while (armor_menu); //close armor menu
							break;
						} //close case 1
						case 2: { //consumable
								  //main_menu_item = 0;
							run;
							y = 16;
							buy_menu_item = 0;
							weapon_menu_item = 0;
							armor_menu_item = 0;
							consumable_menu_item = 0;
							sell_menu_item = 0;
							main_menu = true; //for main shop menu
							buy_menu = true; //for buy menu
							weapon_menu = true; //buy
							armor_menu = true; //buy
							consumable_menu = true; //buy
							sell_menu = true; //for sell menu

							clear_menu();
							consumable_menu = true; //make sure this is on in case they left the consumable menu

							print_shop();

							gotoXY(54, 14); std::cout << "Eh, I'm not using these.  Might as well sell 'em to this fool.";
							gotoXY(54, 16); std::cout << "->";
							//start consumable sub-menu
							do
							{
								gotoXY(56, 16); std::cout << "1) " << apple.getName() << ":"; gotoXY(76, 16); std::cout << "Heal +" << apple.getStat(); gotoXY(88, 16); std::cout << "Cost: " << apple.getCost();
								gotoXY(56, 17); std::cout << "2) " << banana.getName() << ":"; gotoXY(76, 17); std::cout << "Heal +" << banana.getStat(); gotoXY(88, 17); std::cout << "Cost: " << banana.getCost();
								gotoXY(56, 18); std::cout << "3) " << red_potion.getName() << ":"; gotoXY(76, 18); std::cout << "Heal +" << red_potion.getStat(); gotoXY(88, 18); std::cout << "Cost: " << red_potion.getCost();
								gotoXY(56, 19); std::cout << "4) " << med_kit.getName() << ":"; gotoXY(76, 19); std::cout << "Heal +" << med_kit.getStat(); gotoXY(88, 19); std::cout << "Cost: " << med_kit.getCost();
								gotoXY(56, 20); std::cout << "5) Back" << std::endl;

								system("pause>nul");

								if (GetAsyncKeyState(VK_DOWN) && y != 20) //down button pressed, won't change if x is already at the bottom position
								{
									gotoXY(54, y); std::cout << "  ";
									y++;
									gotoXY(54, y); std::cout << "->";
									consumable_menu_item++;
									continue;
								}

								if (GetAsyncKeyState(VK_UP) && y != 16) //up button pressed, won't change if x is already at the top position
								{
									gotoXY(54, y); std::cout << "  ";
									y--;
									gotoXY(54, y); std::cout << "->";
									consumable_menu_item--;
									continue;
								}

								if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

									switch (consumable_menu_item) {

									case 0: { //item 1
										if (currentGold < apple.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (item1Ptr != NULL) //if item slot 1 is occupied
											{
												if (item2Ptr != NULL) //if item slot 2 is occupied
												{
													if (item3Ptr != NULL) //if item slot 3 is occupied
													{
														if (item4Ptr != NULL) //if item slot 4 is occupied
														{
															gotoXY(56, 23); std::cout << "Your inventory is full.  Sell something or get lost.";
														}
														else //if item slot 4 is empty
														{
															gotoXY(56, 23); std::cout << "Placing " << apple.getName() << " in slot 4.";
															//take money
															currentGold = currentGold - apple.getCost();
															//give item
															item4Ptr = (Apple *)&apple;
														}
													}
													else //if item slot 3 is empty
													{
														gotoXY(56, 23); std::cout << "Placing " << apple.getName() << " in slot 3.";
														//take money
														currentGold = currentGold - apple.getCost();
														//give item
														item3Ptr = (Apple *)&apple;
													}
												}
												else //if item slot 2 is empty
												{
													gotoXY(56, 23); std::cout << "Placing " << apple.getName() << " in slot 2.";
													//take money
													currentGold = currentGold - apple.getCost();
													//give item
													item2Ptr = (Apple *)&apple;
												}
											}
											else //if item slot 1 is empty
											{
												gotoXY(56, 23); std::cout << "Placing " << apple.getName() << " in slot 1.";
												//take money
												currentGold = currentGold - apple.getCost();
												//give item
												item1Ptr = (Apple *)&apple;
											}
										}
										break;
									}
									case 1: { //item 2
										if (currentGold < banana.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (item1Ptr != NULL) //if item slot 1 is occupied
											{
												if (item2Ptr != NULL) //if item slot 2 is occupied
												{
													if (item3Ptr != NULL) //if item slot 3 is occupied
													{
														if (item4Ptr != NULL) //if item slot 4 is occupied
														{
															gotoXY(56, 23); std::cout << "Your inventory is full.  Sell something or get lost.";
														}
														else //if item slot 4 is empty
														{
															gotoXY(56, 23); std::cout << "Placing " << banana.getName() << " in slot 4.";
															//take money
															currentGold = currentGold - banana.getCost();
															//give item
															item4Ptr = (Banana *)&banana;
														}
													}
													else //if item slot 3 is empty
													{
														gotoXY(56, 23); std::cout << "Placing " << banana.getName() << " in slot 3.";
														//take money
														currentGold = currentGold - banana.getCost();
														//give item
														item3Ptr = (Banana *)&banana;
													}
												}
												else //if item slot 2 is empty
												{
													gotoXY(56, 23); std::cout << "Placing " << banana.getName() << " in slot 2.";
													//take money
													currentGold = currentGold - banana.getCost();
													//give item
													item2Ptr = (Banana *)&banana;
												}
											}
											else //if item slot 1 is empty
											{
												gotoXY(56, 23); std::cout << "Placing " << banana.getName() << " in slot 1.";
												//take money
												currentGold = currentGold - banana.getCost();
												//give item
												item1Ptr = (Banana *)&banana;
											}
										}
										break;
									}
									case 2: { //item 3
										if (currentGold < red_potion.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (item1Ptr != NULL) //if item slot 1 is occupied
											{
												if (item2Ptr != NULL) //if item slot 2 is occupied
												{
													if (item3Ptr != NULL) //if item slot 3 is occupied
													{
														if (item4Ptr != NULL) //if item slot 4 is occupied
														{
															gotoXY(56, 23); std::cout << "Your inventory is full.  Sell something or get lost.";
														}
														else //if item slot 4 is empty
														{
															gotoXY(56, 23); std::cout << "Placing " << red_potion.getName() << " in slot 4.";
															//take money
															currentGold = currentGold - red_potion.getCost();
															//give item
															item4Ptr = (RedPotion *)&red_potion;
														}
													}
													else //if item slot 3 is empty
													{
														gotoXY(56, 23); std::cout << "Placing " << red_potion.getName() << " in slot 3.";
														//take money
														currentGold = currentGold - red_potion.getCost();
														//give item
														item3Ptr = (RedPotion *)&red_potion;
													}
												}
												else //if item slot 2 is empty
												{
													gotoXY(56, 23); std::cout << "Placing " << red_potion.getName() << " in slot 2.";
													//take money
													currentGold = currentGold - red_potion.getCost();
													//give item
													item2Ptr = (RedPotion *)&red_potion;
												}
											}
											else //if item slot 1 is empty
											{
												gotoXY(56, 23); std::cout << "Placing " << red_potion.getName() << " in slot 1.";
												//take money
												currentGold = currentGold - red_potion.getCost();
												//give item
												item1Ptr = (RedPotion *)&red_potion;
											}
										}
										break;
									}
									case 3: { //item 4
										if (currentGold < med_kit.getCost())
										{
											gotoXY(56, 23); std::cout << "Hey, what're you try'n ta pull? You can't afford that.";
										}
										else
										{
											if (item1Ptr != NULL) //if item slot 1 is occupied
											{
												if (item2Ptr != NULL) //if item slot 2 is occupied
												{
													if (item3Ptr != NULL) //if item slot 3 is occupied
													{
														if (item4Ptr != NULL) //if item slot 4 is occupied
														{
															gotoXY(56, 23); std::cout << "Your inventory is full.  Sell something or get lost.";
														}
														else //if item slot 4 is empty
														{
															gotoXY(56, 23); std::cout << "Placing " << med_kit.getName() << " in slot 4.";
															//take money
															currentGold = currentGold - med_kit.getCost();
															//give item
															item4Ptr = (MedKit *)&med_kit;
														}
													}
													else //if item slot 3 is empty
													{
														gotoXY(56, 23); std::cout << "Placing " << med_kit.getName() << " in slot 3.";
														//take money
														currentGold = currentGold - med_kit.getCost();
														//give item
														item3Ptr = (MedKit *)&med_kit;
													}
												}
												else //if item slot 2 is empty
												{
													gotoXY(56, 23); std::cout << "Placing " << med_kit.getName() << " in slot 2.";
													//take money
													currentGold = currentGold - med_kit.getCost();
													//give item
													item2Ptr = (MedKit *)&med_kit;
												}
											}
											else //if item slot 1 is empty
											{
												gotoXY(56, 23); std::cout << "Placing " << med_kit.getName() << " in slot 1.";
												//take money
												currentGold = currentGold - med_kit.getCost();
												//give item
												item1Ptr = (MedKit *)&med_kit;
											}
										}
										break;
									}
									case 4: { //back
										clear_menu();
										y = 16; //reinitialize x value

										print_shop();

										gotoXY(54, 14); std::cout << "No window shopping.  Buy something or get out!";
										gotoXY(54, 16); std::cout << "->";

										consumable_menu = false;
									}
									} //close consumable menu switch
								}
							} while (consumable_menu); //close consumable menu
							break;
						} //close case 2
						case 3: { //leave buy menu
								  //main_menu_item = 0;
							run;
							y = 16;
							buy_menu_item = 0;
							weapon_menu_item = 0;
							armor_menu_item = 0;
							consumable_menu_item = 0;
							sell_menu_item = 0;
							main_menu = true; //for main shop menu
							buy_menu = true; //for buy menu
							weapon_menu = true; //buy
							armor_menu = true; //buy
							consumable_menu = true; //buy
							sell_menu = true; //for sell menu

							clear_menu();

							print_shop();

							gotoXY(54, 14); std::cout << "You don't want to give me any more of your money?";
							gotoXY(54, 16); std::cout << "->";
							buy_menu = false;
						} //close case 3
						} //close buy menu switch
					} //close buy menu if statement
				} while (buy_menu); //close buy menu
				main_menu_item = 0;
				y = 16;
				break;
			} //close case 0 from main menu
			case 1: { //sell, extra spaces in this section clear out remainder of text when it reprints menu
					  //main_menu_item = 0;
				run;
				y = 16;
				buy_menu_item = 0;
				weapon_menu_item = 0;
				armor_menu_item = 0;
				consumable_menu_item = 0;
				sell_menu_item = 0;
				main_menu = true; //for main shop menu
				buy_menu = true; //for buy menu
				weapon_menu = true; //buy
				armor_menu = true; //buy
				consumable_menu = true; //buy
				sell_menu = true; //for sell menu

								  //open/load player inventory/backpack
				clear_menu();
				sell_menu = true; //make sure this is on in case they left the sell menu

				print_shop();

				gotoXY(54, 14); std::cout << "You expect me to pay you?  For that?!";
				gotoXY(54, 16); std::cout << "->";
				//start sell sub-menu
				do
				{
					if (weaponPtr != NULL)
					{
						gotoXY(56, 16); std::cout << "1) " << weaponPtr->getName() << "               ";
					}
					else
					{
						gotoXY(56, 16); std::cout << "1) Empty                  ";
					}
					if (armorPtr != NULL)
					{
						gotoXY(56, 17); std::cout << "2) " << armorPtr->getName() << "               ";
					}
					else
					{
						gotoXY(56, 17); std::cout << "2) Empty                  ";
					}
					if (item1Ptr != NULL)
					{
						gotoXY(56, 18); std::cout << "3) " << item1Ptr->getName() << "               ";
					}
					else
					{
						gotoXY(56, 18); std::cout << "3) Empty                  ";
					}
					if (item2Ptr != NULL)
					{
						gotoXY(56, 19); std::cout << "4) " << item2Ptr->getName() << "               ";
					}
					else
					{
						gotoXY(56, 19); std::cout << "4) Empty                  ";
					}
					if (item3Ptr != NULL)
					{
						gotoXY(56, 20); std::cout << "5) " << item3Ptr->getName() << "               ";
					}
					else
					{
						gotoXY(56, 20); std::cout << "5) Empty                  ";
					}
					if (item4Ptr != NULL)
					{
						gotoXY(56, 21); std::cout << "6) " << item4Ptr->getName() << "               ";
					}
					else
					{
						gotoXY(56, 21); std::cout << "6) Empty                  ";
					}
					gotoXY(56, 22); std::cout << "7) Back" << std::endl;

					system("pause>nul");

					if (GetAsyncKeyState(VK_DOWN) && y != 22) //down button pressed, won't change if x is already at the bottom position
					{
						gotoXY(54, y); std::cout << "  ";
						y++;
						gotoXY(54, y); std::cout << "->";
						sell_menu_item++;
						continue;

					}

					if (GetAsyncKeyState(VK_UP) && y != 16) //up button pressed, won't change if x is already at the top position
					{
						gotoXY(54, y); std::cout << "  ";
						y--;
						gotoXY(54, y); std::cout << "->";
						sell_menu_item--;
						continue;
					}

					if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

						switch (sell_menu_item) {

						case 0: { //item 1
							if (weaponPtr != NULL)
							{
								//give money
								currentGold = currentGold + weaponPtr->getValue();
								gotoXY(56, 23); std::cout << "Buying " << weaponPtr->getName() << " for " << weaponPtr->getValue() << " gold.                   ";
								//remove item from inventory
								weaponPtr = NULL;
							}
							else
							{
								gotoXY(56, 23); std::cout << "You have nothing here to sell.                       ";
							}
							break;
						}
						case 1: { //item 2
							if (armorPtr != NULL)
							{
								//give money
								currentGold = currentGold + armorPtr->getValue();
								gotoXY(56, 23); std::cout << "Buying " << armorPtr->getName() << " for " << armorPtr->getValue() << " gold.                   ";
								//remove item from inventory
								armorPtr = NULL;
							}
							else
							{
								gotoXY(56, 23); std::cout << "You have nothing here to sell.                      ";
							}
							break;
						}
						case 2: { //item 3
							if (item1Ptr != NULL)
							{
								//give money
								currentGold = currentGold + item1Ptr->getValue();
								gotoXY(56, 23); std::cout << "Buying " << item1Ptr->getName() << " for " << item1Ptr->getValue() << " gold.                    ";
								//remove item from inventory and bump items up
								item1Ptr = item2Ptr;
								item2Ptr = item3Ptr;
								item3Ptr = item4Ptr;
								item4Ptr = NULL;
							}
							else
							{
								gotoXY(56, 23); std::cout << "You have nothing here to sell.                      ";
							}
							break;
						}
						case 3: { //item 4
							if (item2Ptr != NULL)
							{
								//give money
								currentGold = currentGold + item2Ptr->getValue();
								gotoXY(56, 23); std::cout << "Buying " << item2Ptr->getName() << " for " << item2Ptr->getValue() << " gold.                   ";
								//remove item from inventory and bump items up
								item2Ptr = item3Ptr;
								item3Ptr = item4Ptr;
								item4Ptr = NULL;
							}
							else
							{
								gotoXY(56, 23); std::cout << "You have nothing here to sell.                      ";
							}
							break;
						}
						case 4: { //item 5
							if (item3Ptr != NULL)
							{
								//give money
								currentGold = currentGold + item3Ptr->getValue();
								gotoXY(56, 23); std::cout << "Buying " << item3Ptr->getName() << " for " << item3Ptr->getValue() << " gold.                   ";
								//remove item from inventory and bump items up
								item3Ptr = item4Ptr;
								item4Ptr = NULL;
							}
							else
							{
								gotoXY(56, 23); std::cout << "You have nothing here to sell.                      ";
							}
							break;
						}
						case 5: { //item 6
							if (item4Ptr != NULL)
							{
								//give money
								currentGold = currentGold + item4Ptr->getValue();
								gotoXY(56, 23); std::cout << "Buying " << item4Ptr->getName() << " for " << item4Ptr->getValue() << " gold.                   ";
								//remove item from inventory
								item4Ptr = NULL;
							}
							else
							{
								gotoXY(56, 23); std::cout << "You have nothing here to sell.                     ";
							}
							break;
						}
						case 6: { //back
							clear_menu();
							y = 16; //reinitialize x value

							print_shop();

							gotoXY(54, 14); std::cout << "None of your other junk is worth anything, anyway.";
							gotoXY(54, 16); std::cout << "->";

							sell_menu = false;
						}
						} //close sell menu switch
					} //close sell menu if statement
				} while (sell_menu); //close sell menu
				main_menu_item = 0;
				y = 16;
				break;
			} //close case 1 from menu
			  //exit shop
			case 2: { //leave
					  //main_menu_item = 0;
				run;
				y = 16;
				buy_menu_item = 0;
				weapon_menu_item = 0;
				armor_menu_item = 0;
				consumable_menu_item = 0;
				sell_menu_item = 0;
				main_menu = true; //for main shop menu
				buy_menu = true; //for buy menu
				weapon_menu = true; //buy
				armor_menu = true; //buy
				consumable_menu = true; //buy
				sell_menu = true; //for sell menu

				clear_menu();

				print_shop();

				gotoXY(54, 14); std::cout << "Good, get out of here.            ";
				main_menu = false;
			}
			}
		}
	} while (main_menu);

	player.setGold(currentGold);

	//copy all the new data into the user's player class
	if (idiot.Name != "")
	{
		idiot.gold = player.gold;
		idiot.Name = player.Name;
	}
	else if (ranger.Name != "")
	{
		ranger.gold = player.gold;
		ranger.Name = player.Name;
	}
	else if (cloud.Name != "")
	{
		cloud.gold = player.gold;
		cloud.Name = player.Name;
	}
	//player.setGold(currentGold); //set player's gold equal to end result after shopping
	clear_menu();	
}

void gotoXY(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}

void clear_menu()
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

void print_shop()
{
	gotoXY(0, 5);
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "|||_O__         __ . ---------- . __           ______________________________    ________________________           |||" << std::endl;
	std::cout << "|||[_]/|  O   ( __                __ )     o  / ____/ __  / __  / ____/ ____/   /      / __  / __  /_  _/           |||" << std::endl;
	std::cout << "|||  / |  T   |    ' ---------- '    |  o     \\ \\  / /_/ / /_/ / /   /   /     / / /  / /_/ / /_/_/ / /             |||" << std::endl;
	std::cout << "||| /  |  |   |       .--\\           |    o ___\\ \\/ ____/ __  / /___/ __/_    / /|// / __  / _  \\  / /              |||" << std::endl;
	std::cout << "|||/___|  __  |     /     |._/\\      |  o  /_____/_/   /_/ /_/_____/_____/   /_/  /_/_/ /_/_/ \\_/ /_/               |||" << std::endl;
	std::cout << "|||{{?/| /^^\\ |    |      /    |     |    o  o              \"Git ur stuff and git out!\"                             |||" << std::endl;
	std::cout << "|||o=/ |()()()|    | [0]    [x]|     |     __o                                                                      |||" << std::endl;
	std::cout << "|||x/  | \\  / |    |           |     |     ||                                                                       |||" << std::endl;
	std::cout << "|||/O__|  ||  |     \\    /\\   /      |    /__\\                                                                      |||" << std::endl;
	std::cout << "|||[_]/|  ||  |    _ \\       /  _   _|___/    \\______                                                               |||" << std::endl;
	std::cout << "|||  / |  ||  |   '   |-|-|-|        |  / XXXX \\   //                                                               |||" << std::endl;
	std::cout << "||| /|_|  ||  | /     |-|-|-|        | (________) //|                                                               |||" << std::endl;
	std::cout << "|||/||/| [XX] |  _  .  --'--   . _   |       __  // |                                                               |||" << std::endl;
	std::cout << "|||||/ |     /( __                __ )    o [__]//| |                                                               |||" << std::endl;
	std::cout << "||||/  |    /      ' ---------- ______  o | o  ///| |                                                               |||" << std::endl;
	std::cout << "|||/_X_|   /     #            // xxx /  |/O\\X)/// | |                                                               |||" << std::endl;
	std::cout << "||| X /   / [@]==I=====>     //     /  /O\\X_)///  | |                                                               |||" << std::endl;
	std::cout << "|||X /   /       #          // xxx /  ( X ) //|   | |                                                               |||" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
}