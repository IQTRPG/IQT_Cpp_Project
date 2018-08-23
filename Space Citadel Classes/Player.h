#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Items.h"
#include "item_sub.h"
using namespace std;

class Player
{
public :
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
	string Name = "";
	Item Backpack[6] = {};

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
	void move() {
		//input move code here
	}

	int equip_armor(int AC)
	{
		armor = AC;
		DEF = DEF + armor;
		return DEF;
	}

	void inventory(){
		//input inventory code here
	}

	void options_menu() {
		//code for options menu goes here
	}

	void attack()
	{
		//initiate battle code
	}
};