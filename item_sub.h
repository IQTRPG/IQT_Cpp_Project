#pragma once
#include "Items.h"
#include <iostream>
#include <string>
using namespace std;

/*
	Tada here is where we have the variants of potions, weapons, and armor
*/

class Stick : public Item {
public:
	Stick() {
		itemName = "Stick";
		itemType = "Weapon";
		stat = 1;
		price = 5;
		value = 1;
	}
};

class Sword : public Item {
public:
	Sword() {
		itemName = "Sword";
		itemType = "Weapon";
		stat = 4;
		price = 70;
		value = 20;
	}
};

class Probe : public Item {
public:
	Probe() {
		itemName = "Probe";
		itemType = "Weapon";
		stat = 10;
		price = 100;
		value = 30;
	}
};

class Halberd : public Item {
public:
	Halberd() {
		itemName = "Halberd";
		itemType = "Weapon";
		stat = 12;
		price = 200;
		value = 50;
	}
};

class Scimitar : public Item {
public:
	Scimitar() {
		itemName = "Scimitar";
		itemType = "Weapon";
		stat = 15;
		price = 400;
		value = 100;
	}
};

class FaceDestroyer : public Item {
public:
	FaceDestroyer() {
		itemName = "Face Destroyer";
		itemType = "Weapon";
		stat = 20;
		price = 1000;
		value = 300;
	}
};

class Bucket : public Item {
public:
	Bucket() {
		itemName = "Bucket";
		itemType = "Armor";
		stat = 1;
		price = 5;
		value = 1;
	}
};

class CanLid : public Item {
public:
	CanLid() {
		itemName = "Can Lid";
		itemType = "Armor";
		stat = 4;
		price = 70;
		value = 20;
	}
};

class Helmet : public Item {
public:
	Helmet() {
		itemName = "Helmet";
		itemType = "Armor";
		stat = 10;
		price = 100;
		value = 30;
	}
};

class ChainMail : public Item {
public:
	ChainMail() {
		itemName = "Chain Mail";
		itemType = "Armor";
		stat = 12;
		price = 200;
		value = 50;
	}
};

class PlateMail : public Item {
public:
	PlateMail() {
		itemName = "Plate Mail";
		itemType = "Weapon";
		stat = 15;
		price = 400;
		value = 100;
	}
};

class Mythril : public Item {
public:
	Mythril() {
		itemName = "Mythril";
		itemType = "Armor";
		stat = 20;
		price = 1000;
		value = 300;
	}
};

class Apple : public Item {
public:
	Apple() {
		itemName = "Apple";
		itemType = "Consumable";
		stat = 10;
		price = 20;
		value = 5;
	}
};

class Banana : public Item {
public:
	Banana() {
		itemName = "Banana";
		itemType = "Consumable";
		stat = 20;
		price = 50;
		value = 12;
	}
};

class RedPotion : public Item {
public:
	RedPotion() {
		itemName = "Red Potion";
		itemType = "Consumable";
		stat = 50;
		price = 200;
		value = 50;
	}
};

class MedKit : public Item {
public:
	MedKit() {
		itemName = "Med Kit";
		itemType = "Consumable";
		stat = 100;
		price = 500;
		value = 200;
	}
};