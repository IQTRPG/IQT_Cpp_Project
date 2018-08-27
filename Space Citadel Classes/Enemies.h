#pragma once
#include <iostream>
#include <string>
using namespace std;

class Enemy
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
	int xPos = 0; //position
	int yPos = 0; //position

	//display the enemy's stats when requested
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

	void attack()
	{
		//initiate battle code
	}
};

class Boss {
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
	int xPos = 0;
	int yPos = 0;

	//display the enemy's stats when requested
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

	void attack()
	{
		//initiate battle code
	}

	void Ability() {
		//add ability code. ties in with status check id assume
		
	}

	void Summon() {
		//not really a summon, it more just makes sure we add minions to the boss fight
	}
};
