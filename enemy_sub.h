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

//gotta add evil spiders
class Spider : public Enemy {
	int HP = 20; //health points, will be assigned by class
	int MP = 10; //magic points, assigned by class and affects how often you can use spells
	int DEF = 12; //defense, can be changed by armor value
	int armor = 5; //changes based on armor equipped
	int AGI = 12; //agility, affected by armor possibly, affects crit chance
	int STR = 6; //strength, affected by weapons, affects damage
	int CAR = 0; //charisma, affects shop prices maybe?
	int INT = 8; //intelligence, affects mp and magic damage
	int LUCK = 3; //luck, affects dodge chance
};

//sorry arachnaphobics
class Arachne : public Spider {
	int HP = 40; //health points, will be assigned by class
	int MP = 20; //magic points, assigned by class and affects how often you can use spells
	int DEF = 24; //defense, can be changed by armor value
	int armor = 10; //changes based on armor equipped
	int AGI = 24; //agility, affected by armor possibly, affects crit chance
	int STR = 12; //strength, affected by weapons, affects damage
	int CAR = 0; //charisma, affects shop prices maybe?
	int INT = 16; //intelligence, affects mp and magic damage
	int LUCK = 6; //luck, affects dodge chance
};

//first boss
class CornOnTheGoblin : public Boss {
	//hahahahaha i couldnt help myself with boss names
	int HP = 100; //health points, will be assigned by class
	int MP = 40; //magic points, assigned by class and affects how often you can use spells
	int DEF = 20; //defense, can be changed by armor value
	int armor = 10; //changes based on armor equipped
	int AGI = 25; //agility, affected by armor possibly, affects crit chance
	int STR = 20; //strength, affected by weapons, affects damage
	int CAR = 0; //charisma, affects shop prices maybe?
	int INT = 20; //intelligence, affects mp and magic damage
	int LUCK = 10; //luck, affects dodge chance
};

//second boss, this one themed after our lord and savior..... BANDITS
class CurrentExpendableBanditLeader : public Boss{
	int HP = 150; //health points, will be assigned by class
	int MP = 40; //magic points, assigned by class and affects how often you can use spells
	int DEF = 40; //defense, can be changed by armor value
	int armor = 20; //changes based on armor equipped
	int AGI = 30; //agility, affected by armor possibly, affects crit chance
	int STR = 25; //strength, affected by weapons, affects damage
	int CAR = 10; //charisma, affects shop prices maybe?
	int INT = 12; //intelligence, affects mp and magic damage
	int LUCK = 20; //luck, affects dodge chance
};

//third boss, this one based around spiders
class SoMANYLegs : public Boss {
	int HP = 200; //health points, will be assigned by class
	int MP = 50; //magic points, assigned by class and affects how often you can use spells
	int DEF = 60; //defense, can be changed by armor value
	int armor = 30; //changes based on armor equipped
	int AGI = 45; //agility, affected by armor possibly, affects crit chance
	int STR = 20; //strength, affected by weapons, affects damage
	int CAR = 40; //charisma, affects shop prices maybe? (its 40 because im sure the spider would try to be sexy. and then it dies. with fire)
	int INT = 20; //intelligence, affects mp and magic damage
	int LUCK = 15; //luck, affects dodge chance
};

//fourth boss... for those nerds out there. yknow who you are -_-
class DoctorWhat : public Boss{
	int HP = 200; //health points, will be assigned by class
	int MP = 50; //magic points, assigned by class and affects how often you can use spells
	int DEF = 60; //defense, can be changed by armor value
	int armor = 30; //changes based on armor equipped
	int AGI = 45; //agility, affected by armor possibly, affects crit chance
	int STR = 20; //strength, affected by weapons, affects damage
	int CAR = 40; //charisma, affects shop prices maybe? (its 40 because im sure the spider would try to be sexy. and then it dies. with fire)
	int INT = 20; //intelligence, affects mp and magic damage
	int LUCK = 15; //luck, affects dodge chance
};
