#pragma once
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

//our galactic dumbass
class InterStellar_Idiot : public Player
{
public:
	int HP = 100; //health points, will be assigned by class
	int MP = 30; //magic points, assigned by class and affects how often you can use spells
	int DEF = 3; //defense, can be changed by armor value
	int armor = 0; //changes based on armor equipped
	int AGI = 4; //agility, affected by armor possibly, affects crit chance
	int STR = 6; //strength, affected by weapons, affects damage
	int CAR = 2; //charisma, affects shop prices maybe?
	int INT = 1; //yup, dumber than a space squirrel
	int LUCK = 30; //luck, affects dodge chance
	int XP = 0; //x-perience points needed to level up
};

//totally not buzz lightyear
class Space_Ranger : public Player 
{
	int HP = 150; //health points, will be assigned by class
	int MP = 50; //magic points, assigned by class and affects how often you can use spells
	int DEF = 5; //defense, can be changed by armor value
	int armor = 0; //changes based on armor equipped
	int AGI = 6; //agility, affected by armor possibly, affects crit chance
	int STR = 9; //strength, affected by weapons, affects damage
	int CAR = 5; //charisma, affects shop prices maybe?
	int INT = 12; //yup, dumber than a space squirrel
	int LUCK = 10; //luck, affects dodge chance
	int XP = 0; //x-perience points needed to level up
};

//i swear its not a stromtrooper. its different. it actually hits what it aims at
class CloudTrooper : public Player
{
	int HP = 125; //health points, will be assigned by class
	int MP = 40; //magic points, assigned by class and affects how often you can use spells
	int DEF = 6; //defense, can be changed by armor value
	int armor = 0; //changes based on armor equipped
	int AGI = 5; //agility, affected by armor possibly, affects crit chance
	int STR = 9; //strength, affected by weapons, affects damage
	int CAR = 6; //charisma, affects shop prices maybe?
	int INT = 15; //yup, dumber than a space squirrel
	int LUCK = 15; //luck, affects dodge chance
	int XP = 0; //x-perience points needed to level up
};
