#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "classes.h"

using namespace std;

class Player
{
public:
	int HP = 0; //health points, will be assigned by class
	int MP = 0; //magic points, assigned by class and affects how often you can use spells
	int DEF = 0; //defense, can be changed by armor value
	int armor = 0; //changes based on armor equipped
	int AGI = 0; //agility, affected by armor possibly, affects crit chance
	int STR = 0; //strength, affected by weapons, affects damage
	int CAR = 0; //charisma, affects shop prices maybe?
	int INT = 0; //intelligence, affects mp and magic damage
	int LUCK = 0; //luck, affects dodge chance
	int XP = 0; //x-perience points needed to level up
	int gold = 0; //available money you've earned
	int xPos = 0;
	int yPos = 0;
	string Name = ""; //the name of the bro
	string Status = ""; //yeah boi the stats be back
	Item Backpack[6] = {}; //backpack holds 6 items, with 3 being filled at start
	Item CurrentWeapon = Backpack[0]; //this will be the current displayed weapon

									  //display the user's stats when requested
	void display_stats() {
		cout << "Health: " << HP << endl;
		cout << "Mana: " << MP << endl;
		cout << "Defense: " << DEF << endl;
		cout << "Agility: " << AGI << endl;
		cout << "Strength: " << STR << endl;
		cout << "Charisma: " << CAR << endl;
		cout << "Intelligence: " << INT << endl;
		cout << "Luck: " << LUCK << endl;
	}

	//allows the character to move
	void position(int xpos, int ypos) {
		xPos = xpos;
		yPos = ypos;
	}

	int equip_armor(int AC)
	{
		armor = AC;
		DEF = DEF + armor;
		return DEF;
	}

	int getGold()
	{
		return gold;
	}

	void setGold(int number)
	{
		gold = number;
	}

	//int setGold(int money)
	//{
	//	gold = money;
	//}
	

		
	/*
	void inventory() {
		cout << "Slot 1: " << Backpack[0].name << endl;
		cout << "Slot 2: " << Backpack[1].name << endl;
		cout << "Slot 3: " << Backpack[2].name << endl;
		cout << "Slot 4: " << Backpack[3].name << endl;
		cout << "Slot 5: " << Backpack[4].name << endl;
		cout << "Slot 6: " << Backpack[5].name << endl;
	}
	*/

	void options_menu() {
		//code for options menu goes here
	}

	void attack()
	{
		//initiate battle code
	}

	void applyStatus(string effect)
	{
		//here is where we mess with the status depending upon what the player was hit with
		//if (effect == )
	}

	void statusReport(string status) {
		//here is where we check for a status during the player's turn, then act upon it
	}
};