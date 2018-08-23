#pragma once
#include <iostream>
#include <string>
using namespace std;

/*
	Here we have basic classes for the items
*/

class Item {
	//the master class that does literally nothing but holding all the other items inside it. hooray inheritance!
};

class Consumable : public Item {
	int uses = 0; //how many times an item can be used
	string ItemName = ""; //dynamically pass the name of the item, such as keycards
};

class Potion : public Item {
public:
	int HP = 0; //all potions can restore or remove health
	string effect; //possible status effects tied to drinking a potion

	int affect_health(string potion_effect, int player_hp, int potionHp)
	{
		int health = player_hp;

		if (potion_effect == "Restore")
		{
			health += potionHp;
		}
		else if (potion_effect == "Harm")
		{
			health -= potionHp;
		}
		else if (potion_effect == "poison")
		{
			health - 15;
		}
		else if (potion_effect == "Lol")
		{
			health + 10;
		}

		return health;
	}
};

class Weapon : public Item
{
	int dmg = 0; //natural damage of a weapon
	int cost = 0; //price of weapon
	int sell = 0; //gold value for selling the weapon

	int damage_enemy(int dmg, int enemyHp) {
		//insert damage against enemy
	}
};

class Armor : public Item
{
	int armor = 0; //armor value, added to a player based upon the value of the armor types
	int cost = 0;
	int sell = 0;
};