#pragma once
#include <string>
#include <iostream>
#include "Enemies.h"
using namespace std;

/*
	Here lies all the various enemy types in the game
*/

//your standard goblin
class SpaceGoblin : public Enemy
{
	int HP = 10; //health points, will be assigned by class
	int MP = 0; //magic points, assigned by class and affects how often you can use spells
	int DEF = 0; //defense, can be changed by armor value
	int armor = 0; //changes based on armor equipped
	int AGI = 4; //agility, affected by armor possibly, affects crit chance
	int STR = 2; //strength, affected by weapons, affects damage
	int CAR = 0; //charisma, affects shop prices maybe?
	int INT = 3; //intelligence, affects mp and magic damage
	int LUCK = 1; //luck, affects dodge chance
};

//yup. evil space squirrels
class SpaceSquirrel : public Enemy {
	int HP = 20; //health points, will be assigned by class
	int MP = 5; //magic points, assigned by class and affects how often you can use spells
	int DEF = 8; //defense, can be changed by armor value
	int armor = 0; //changes based on armor equipped
	int AGI = 9; //agility, affected by armor possibly, affects crit chance
	int STR = 4; //strength, affected by weapons, affects damage
	int CAR = 0; //charisma, affects shop prices maybe?
	int INT = 3; //intelligence, affects mp and magic damage
	int LUCK = 1; //luck, affects dodge chance
};

//bigger, meaner goblins
class SpaceHobGoblin : public SpaceGoblin 
{
	int HP = 25; //health points, will be assigned by class
	int MP = 5; //magic points, assigned by class and affects how often you can use spells
	int DEF = 8; //defense, can be changed by armor value
	int armor = 0; //changes based on armor equipped
	int AGI = 6; //agility, affected by armor possibly, affects crit chance
	int STR = 5; //strength, affected by weapons, affects damage
	int CAR = 0; //charisma, affects shop prices maybe?
	int INT = 5; //intelligence, affects mp and magic damage
	int LUCK = 1; //luck, affects dodge chance
};

//normal space enemies
class SpaceBandit : public Enemy {
	int HP = 15; //health points, will be assigned by class
	int MP = 0; //magic points, assigned by class and affects how often you can use spells
	int DEF = 6; //defense, can be changed by armor value
	int armor = 0; //changes based on armor equipped
	int AGI = 6; //agility, affected by armor possibly, affects crit chance
	int STR = 4; //strength, affected by weapons, affects damage
	int CAR = 1; //charisma, affects shop prices maybe?
	int INT = 6; //intelligence, affects mp and magic damage
	int LUCK = 4; //luck, affects dodge chance
};

//totally not daleks
class BritishRobot : public Enemy {
	int HP = 30; //health points, will be assigned by class
	int MP = 0; //magic points, assigned by class and affects how often you can use spells
	int DEF = 10; //defense, can be changed by armor value
	int armor = 0; //changes based on armor equipped
	int AGI = 3; //agility, affected by armor possibly, affects crit chance
	int STR = 8; //strength, affected by weapons, affects damage
	int CAR = 0; //charisma, affects shop prices maybe?
	int INT = 10; //intelligence, affects mp and magic damage
	int LUCK = 4; //luck, affects dodge chance
};