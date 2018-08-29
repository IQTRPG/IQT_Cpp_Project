#pragma once
#include <iostream>
#include <string>
using namespace std;

class Enemy {
protected:
	std::string enemyName;
	std::string enemyType; //minion or boss
	int HP;
	int damage;
	int defense;
	int reward;

public:
	Enemy() {}
	std::string getName()
	{
		return enemyName;
	}
	std::string getType()
	{
		return enemyType;
	}
	int getHP()
	{
		return HP;
	}
	int getDamage()
	{
		return damage;
	}
	int getDefense()
	{
		return defense;
	}
	int getReward()
	{
		return reward;
	}
};

class Goblin : public Enemy {
public:
	Goblin() {
		enemyName = "Space Goblin";
		enemyType = "Minion";
		HP = 20;
		damage = 3;
		defense = 2;
		reward = 2;
	}
};
class Squirrel : public Enemy {
public:
	Squirrel() {
		enemyName = "Space Squirrel";
		enemyType = "Minion";
		HP = 25;
		damage = 5;
		defense = 5;
		reward = 3;
	}
};
class Bandit : public Enemy {
public:
	Bandit() {
		enemyName = "Space Bandit";
		enemyType = "Minion";
		HP = 30;
		damage = 9;
		defense = 7;
		reward = 8;
	}
};
class Hobgoblin : public Enemy {
public:
	Hobgoblin() {
		enemyName = "Hobgoblin";
		enemyType = "Minion";
		HP = 35;
		damage = 7;
		defense = 9;
		reward = 7;
	}
};
class Pirate : public Enemy {
public:
	Pirate() {
		enemyName = "Space Pirate";
		enemyType = "Minion";
		HP = 40;
		damage = 10;
		defense = 15;
		reward = 12;
	}
};
class Cannon : public Enemy {
public:
	Cannon() {
		enemyName = "Glass Cannon";
		enemyType = "Minion";
		HP = 40;
		damage = 20;
		defense = 0;
		reward = 14;
	}
};
class Spider : public Enemy {
public:
	Spider() {
		enemyName = "Spider";
		enemyType = "Minion";
		HP = 60;
		damage = 18;
		defense = 20;
		reward = 25;
	}
};
class Robot : public Enemy {
public:
	Robot() {
		enemyName = "British Robot";
		enemyType = "Minion";
		HP = 50;
		damage = 20;
		defense = 50;
		reward = 35;
	}
};
//bosses
class GoblinBoss : public Enemy {
public:
	GoblinBoss() {
		enemyName = "King Marl the Fierce";
		enemyType = "Boss";
		HP = 100;
		damage = 20;
		defense = 40;
		reward = 200;
	}
};
class SpiderBoss : public Enemy {
public:
	SpiderBoss() {
		enemyName = "Leshob the Destroyer";
		enemyType = "Boss";
		HP = 200;
		damage = 25;
		defense = 30;
		reward = 500;
	}
};
class Shopkeeper : public Enemy {
public:
	Shopkeeper() {
		enemyName = "Karen";
		enemyType = "Boss";
		HP = 1000;
		damage = 12;
		defense = 35;
		reward = 1000;
	}
};


