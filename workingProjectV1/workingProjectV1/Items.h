#pragma once
#include <iostream>
#include <string>
using namespace std;

/*
	Here we have basic classes for the items
*/

class Item {
public:
	std::string itemName; //name of the item
	std::string itemType; //weapon, armor, consumable
	int stat; //attack damage, armor class, xp/hp boost
	int price; //for buy
	int value; //for sell

	Item() {}
	std::string getName() //item name
	{
		return itemName;
	}
	std::string getType() //item type
	{
		return itemType;
	}
	int getStat() //dmg, a/c, other
	{
		return stat;
	}
	int getCost() //price to buy
	{
		return price;
	}
	int getValue() //money you get for selling
	{
		return value;
	}
};

class Key : public Item
{
	string name = ""; //keys do absolutely nothing, but stop someone from entering if the name is different
};