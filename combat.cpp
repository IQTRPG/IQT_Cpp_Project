#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <vector>
#include <ctime>
#include "classes.h"
#include "player.h"
#include "Enemies.h"

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); // used for goto
COORD CursorPosition; // used for goto

void gotoXY(int, int); //go to coord position

//pointers
Item *weaponPtr = NULL;
Item *armorPtr = NULL;
Item *item1Ptr = NULL;
Item *item2Ptr = NULL;
Item *item3Ptr = NULL;
Item *item4Ptr = NULL;
Enemy *enemyPtr = NULL;

//setup player
Player player;

//setup enemies
Goblin goblin;
Squirrel squirrel;
Bandit bandit;
Hobgoblin hobgoblin;
Pirate pirate;
Robot robot;
Cannon cannon;
Spider spider;
GoblinBoss goblin_boss;
SpiderBoss spider_boss;
Shopkeeper shopkeeper;

//item initialization
Stick stick;
Sword sword;
Probe probe;
Halberd halberd;
Scimitar scimitar;
FaceDestroyer face_destroyer;
Bucket bucket;
CanLid can_lid;
Helmet helmet;
ChainMail chain_mail;
PlateMail plate_mail;
Mythril mythril;
Apple apple;
Banana banana;
RedPotion red_potion;
MedKit med_kit;

void print_battle();

void fightMinion1(); //encounter chance favors weaker enemies
void fightMinion2(); //encounter chance favors mid-tier enemies
void fightMinion3(); //encounter chance favors stronger enemies
void fightBoss1(); //fight level 1 boss
void fightBoss2(); //fight level 2 boss
void fightBoss3(); //fight level 3 boss
void printGoblin();
void printSquirrel();
void printBandit();
void printHobgoblin();
void printPirate();
void printCannon();
void printSpider();
void printRobot();
void printBoss1();
void printBoss2();
void printBoss3();


void fightMinion1() //void fightMinion1() level 1 odds
{
	srand(time(NULL)); //see the randomizer based on computer's time
	int playerMaxHP;
	int playerHP;
	int playerDamage;
	int playerDefense;
	int playerGold;
	std::string enemyName;
	int enemyHP;
	int enemyDamage;
	int enemyDefense;
	int reward;
	int randomizer = rand() % 100; //gives random number between 0 and 99

	//for selectors
	int battle_menu_item = 0;
	int y = 12;
	bool battle_menu = true;
	int item_menu_item = 0;
	bool item_menu = true;
	bool win = false;

	//load player stats (with weapon stats)
	playerHP = playerPtr->getHP();
	playerDamage = playerPtr->getDamage() + weaponPtr->getStat();
	playerDefense = playerPtr->getDefense() + armorPtr->getStat();
	playerGold = playerPtr->getGold();

	print_battle();

	//randomize minion and load their stats
	if (randomizer >= 0 && randomizer < 25) //25%

	{
		//fight goblin
		enemyName = goblin.getName();
		enemyHP = goblin.getHP();
		enemyDamage = goblin.getDamage();
		enemyDefense = goblin.getDefense();
		reward = goblin.getReward();
		//print goblin
		printGoblin();
	}
	else if (randomizer >= 25 && randomizer < 45) //20%
	{
		//fight squirrel
		enemyName = squirrel.getName();
		enemyHP = squirrel.getHP();
		enemyDamage = squirrel.getDamage();
		enemyDefense = squirrel.getDefense();
		reward = squirrel.getReward();
		//print squirrel
		printSquirrel();
	}
	else if (randomizer >= 45 && randomizer < 65) //20%
	{
		//fight bandit
		enemyName = bandit.getName();
		enemyHP = bandit.getHP();
		enemyDamage = bandit.getDamage();
		enemyDefense = bandit.getDefense();
		reward = bandit.getReward();
		//print bandit
		printBandit();
	}
	else if (randomizer >= 65 && randomizer < 80) //15%
	{
		//fight hobgoblin
		enemyName = hobgoblin.getName();
		enemyHP = hobgoblin.getHP();
		enemyDamage = hobgoblin.getDamage();
		enemyDefense = hobgoblin.getDefense();
		reward = hobgoblin.getReward();
		//print hobgoblin
		printHobgoblin();
	}
	else if (randomizer >= 80 && randomizer < 90) //10%
	{
		//fight pirate
		enemyName = pirate.getName();
		enemyHP = pirate.getHP();
		enemyDamage = pirate.getDamage();
		enemyDefense = pirate.getDefense();
		reward = pirate.getReward();
		//print pirate
		printPirate();
	}
	else if (randomizer >= 90 && randomizer < 95) //5%
	{
		//fight cannon
		enemyName = cannon.getName();
		enemyHP = cannon.getHP();
		enemyDamage = cannon.getDamage();
		enemyDefense = cannon.getDefense();
		reward = cannon.getReward();
		//print cannon
		printCannon();
	}
	else if (randomizer >= 95 && randomizer < 98) //3%
	{
		//fight spider
		enemyName = spider.getName();
		enemyHP = spider.getHP();
		enemyDamage = spider.getDamage();
		enemyDefense = spider.getDefense();
		reward = spider.getReward();
		//print spider
		printSpider();
	}
	else // randomizer = 98 or 99, 2%
	{
		//fight robot
		enemyName = robot.getName();
		enemyHP = robot.getHP();
		enemyDamage = robot.getDamage();
		enemyDefense = robot.getDefense();
		reward = robot.getReward();
		//print robot
		printRobot();
	}

	gotoXY(8, 7); std::cout << "Your Attack Power: " << playerDamage << "              ";
	gotoXY(8, 8); std::cout << "Your Armor Class: " << playerDefense << "              ";
	gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";
	gotoXY(8, 11); std::cout << "A " << enemyName << " approaches.  Prepare to fight!    ";
	
	gotoXY(6, 12); std::cout << "->";
	//choice: attack (did you win?), use item (no attack, another choice in here), run (80%)

	do //start battle menu
	{

		gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

		gotoXY(8, 12); std::cout << "1) Attack                                      ";
		gotoXY(8, 13); std::cout << "2) Heal With Item                              ";
		gotoXY(8, 14); std::cout << "3) Run Away                                    ";


		system("pause>nul");
		
		//did they win yet?
		if (win == false) //no winner yet
		{
			if (GetAsyncKeyState(VK_DOWN) && y != 14) //down is pressed unless at bottom
			{
				gotoXY(6, y); std::cout << "  ";
				y++;
				gotoXY(6, y); std::cout << "->";
				battle_menu_item++;
				continue;
			}
			if (GetAsyncKeyState(VK_UP) && y != 12) //up is pressed unless at top
			{
				gotoXY(6, y); std::cout << "  ";
				y--;
				gotoXY(6, y); std::cout << "->";
				battle_menu_item--;
				continue;
			}
			if (GetAsyncKeyState(VK_RETURN)) //enter key pressed
			{
				switch (battle_menu_item)
				{
				case 0: //attack
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					int trueDamage = ((playerDamage * (rand() % 21 + 90)) / 100) - (enemyDefense / 10); //deals anywhere from 90-110% of damage minus 10% of enemy defense
					enemyHP = enemyHP - trueDamage; //enemy health remaining
					gotoXY(8, 16); std::cout << "You hit the " << enemyName << " for " << trueDamage << " damage.    ";

					if (enemyHP <= 0) //enemy is dead
					{
						gotoXY(8, 18); std::cout << "You have defeated the " << enemyName << ".              ";
						playerGold = playerGold + reward;
						gotoXY(8, 19); std::cout << "You picked up " << reward << " gold pieces.                  ";
						playerPtr->setGold(playerGold);
						win = true;
						//while (1); //you win
						break;
					}

					else //enemy attacks
					{
						int enemyTrueDamage = ((enemyDamage * (rand() % 21 + 90)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
						playerHP = playerHP - enemyTrueDamage;
						gotoXY(8, 18); std::cout << "The " << enemyName << " has " << enemyHP << " hit points remaining.     ";
						gotoXY(8, 19); std::cout << "The " << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

						gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";


						if (playerHP <= 0) //player is dead
						{
							gotoXY(8, 21); std::cout << "You are dead!  Game over!                  ";
							while (1); //game ends
							break;
						}
					}break;
				}
				case 1: //use item
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					gotoXY(6, 13); std::cout << "  ";
					y = 12;
					item_menu_item = 0;
					item_menu = true;

					gotoXY(8, 11); std::cout << "Select an item to heal with.                    ";
					gotoXY(6, 12); std::cout << "->";

					do //start item menu
					{


						playerMaxHP = player.getMaxHP();

						if (item1Ptr != NULL)
						{
							gotoXY(8, 12); std::cout << "1) " << item1Ptr->getName() << " heals for " << item1Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 12); std::cout << "1) Empty                                       ";
						}
						if (item2Ptr != NULL)
						{
							gotoXY(8, 13); std::cout << "2) " << item2Ptr->getName() << " heals for " << item2Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 13); std::cout << "2) Empty                                       ";
						}
						if (item3Ptr != NULL)
						{
							gotoXY(8, 14); std::cout << "3) " << item3Ptr->getName() << " heals for " << item3Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 14); std::cout << "3) Empty                                       ";
						}
						if (item4Ptr != NULL)
						{
							gotoXY(8, 15); std::cout << "4) " << item4Ptr->getName() << " heals for " << item4Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 15); std::cout << "4) Empty                                       ";
						}

						system("pause>nul");

						if (GetAsyncKeyState(VK_DOWN) && y != 15)
						{
							gotoXY(6, y); std::cout << "  ";
							y++;
							gotoXY(6, y); std::cout << "->";
							item_menu_item++;
							continue;
						}
						if (GetAsyncKeyState(VK_UP) && y != 12)
						{
							gotoXY(6, y); std::cout << "  ";
							y--;
							gotoXY(6, y); std::cout << "->";
							item_menu_item--;
							continue;
						}
						if (GetAsyncKeyState(VK_RETURN))
						{
							switch (item_menu_item)
							{
							case 0: //item 1
							{
								gotoXY(6, 12); std::cout << "  ";
								if (item1Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item1Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item1Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item1Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item1Ptr = item2Ptr;
									item2Ptr = item3Ptr;
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 1.  You lose your turn.        ";
								}
								break;
							}
							case 1: //item 2
							{
								gotoXY(6, 13); std::cout << "  ";
								if (item2Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item2Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item2Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item2Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item2Ptr = item3Ptr;
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 2.  You lose your turn.        ";
								}
								break;
							}
							case 2: //item 3
							{
								gotoXY(6, 14); std::cout << "  ";
								if (item3Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item3Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item3Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item3Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 3.  You lose your turn.        ";
								}
								break;
							}
							case 3: //item 4
							{
								gotoXY(6, 15); std::cout << "  ";
								if (item4Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item4Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item4Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item4Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 4.  You lose your turn.        ";
								}
								break;
							}
							} // close switch
							//enemy attacks
							int enemyTrueDamage = ((enemyDamage * (rand() % 20 + 91)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
							playerHP = playerHP - enemyTrueDamage;
							gotoXY(8, 19); std::cout << "The " << enemyName << " has " << enemyHP << " hit points remaining.         ";
							gotoXY(8, 20); std::cout << "The " << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

							gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

							if (playerHP <= 0) //player is dead
							{
								gotoXY(8, 22); std::cout << "You are dead!  Game over!                  ";
								while (1); //game ends
							}
							item_menu = false;
						} //close if
					} while (item_menu);
					y = 12;
					gotoXY(6, 12); std::cout << "->";
					item_menu_item = 0;
					item_menu = true;
					break;
				}
				case 2: //run
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					gotoXY(6, 14); std::cout << "  ";
					int random = rand() % 5; //80% chance to run away successfully
					if (random == 0)
					{
						gotoXY(8, 11); std::cout << "Run away attempt has failed.                   ";
						//enemy attacks
						int enemyTrueDamage = ((enemyDamage * (rand() % 20 + 91)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
						playerHP = playerHP - enemyTrueDamage;
						gotoXY(8, 13); std::cout << "The " << enemyName << " has " << enemyHP << " hit points remaining.         ";
						gotoXY(8, 14); std::cout << "The " << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

						gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

						if (playerHP <= 0) //player is dead
						{
							gotoXY(8, 16); std::cout << "You are dead!  Game over!                  ";
							while (1); //game ends
						}
					}
					else
					{
					gotoXY(8, 11); std::cout << "RUN AWAY!!!!!                                      ";
					gotoXY(8, 12); std::cout << "                                               ";
					gotoXY(8, 13); std::cout << "                                               ";
					gotoXY(8, 14); std::cout << "                                               ";
					getchar();
					return;
					}
					break;
				}
				} //close switch
				y = 12;
				battle_menu_item = 0;
				//battle_menu = false;
			}
		}
		else //you won
		{
			return;
		}
	}while (battle_menu);
	while (1);
	return;
}


void fightMinion2() //level 2 odds
{
	srand(time(NULL)); //see the randomizer based on computer's time
	int playerMaxHP;
	int playerHP;
	int playerDamage;
	int playerDefense;
	int playerGold;
	std::string enemyName;
	int enemyHP;
	int enemyDamage;
	int enemyDefense;
	int reward;
	int randomizer = rand() % 100; //gives random number between 0 and 99

								   //for selectors
	int battle_menu_item = 0;
	int y = 12;
	bool battle_menu = true;
	int item_menu_item = 0;
	bool item_menu = true;
	bool win = false;

	//load player stats (with weapon stats)
	playerHP = playerPtr->getHP();
	playerDamage = playerPtr->getDamage() + weaponPtr->getStat();
	playerDefense = playerPtr->getDefense() + armorPtr->getStat();
	playerGold = playerPtr->getGold();

	print_battle();

	//randomize minion and load their stats
	if (randomizer >= 0 && randomizer < 3) //3%

	{
		//fight goblin
		enemyName = goblin.getName();
		enemyHP = goblin.getHP();
		enemyDamage = goblin.getDamage();
		enemyDefense = goblin.getDefense();
		reward = goblin.getReward();
		//print goblin
		printGoblin();
	}
	else if (randomizer >= 3 && randomizer < 10) //7%
	{
		//fight squirrel
		enemyName = squirrel.getName();
		enemyHP = squirrel.getHP();
		enemyDamage = squirrel.getDamage();
		enemyDefense = squirrel.getDefense();
		reward = squirrel.getReward();
		//print squirrel
		printSquirrel();
	}
	else if (randomizer >= 10 && randomizer < 25) //15%
	{
		//fight bandit
		enemyName = bandit.getName();
		enemyHP = bandit.getHP();
		enemyDamage = bandit.getDamage();
		enemyDefense = bandit.getDefense();
		reward = bandit.getReward();
		//print bandit
		printBandit();
	}
	else if (randomizer >= 25 && randomizer < 45) //20%
	{
		//fight hobgoblin
		enemyName = hobgoblin.getName();
		enemyHP = hobgoblin.getHP();
		enemyDamage = hobgoblin.getDamage();
		enemyDefense = hobgoblin.getDefense();
		reward = hobgoblin.getReward();
		//print hobgoblin
		printHobgoblin();
	}
	else if (randomizer >= 45 && randomizer < 65) //20%
	{
		//fight pirate
		enemyName = pirate.getName();
		enemyHP = pirate.getHP();
		enemyDamage = pirate.getDamage();
		enemyDefense = pirate.getDefense();
		reward = pirate.getReward();
		//print pirate
		printPirate();
	}
	else if (randomizer >= 65 && randomizer < 80) //15%
	{
		//fight cannon
		enemyName = cannon.getName();
		enemyHP = cannon.getHP();
		enemyDamage = cannon.getDamage();
		enemyDefense = cannon.getDefense();
		reward = cannon.getReward();
		//print cannon
		printCannon();
	}
	else if (randomizer >= 80 && randomizer < 92) //12%
	{
		//fight spider
		enemyName = spider.getName();
		enemyHP = spider.getHP();
		enemyDamage = spider.getDamage();
		enemyDefense = spider.getDefense();
		reward = spider.getReward();
		//print spider
		printSpider();
	}
	else // randomizer = 92 to 99, 8%
	{
		//fight robot
		enemyName = robot.getName();
		enemyHP = robot.getHP();
		enemyDamage = robot.getDamage();
		enemyDefense = robot.getDefense();
		reward = robot.getReward();
		//print robot
		printRobot();
	}

	gotoXY(8, 7); std::cout << "Your Attack Power: " << playerDamage << "              ";
	gotoXY(8, 8); std::cout << "Your Armor Class: " << playerDefense << "              ";
	gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";
	gotoXY(8, 11); std::cout << "A " << enemyName << " approaches.  Prepare to fight!    ";

	gotoXY(6, 12); std::cout << "->";
	//choice: attack (did you win?), use item (no attack, another choice in here), run (80%)

	do //start battle menu
	{

		gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

		gotoXY(8, 12); std::cout << "1) Attack                                      ";
		gotoXY(8, 13); std::cout << "2) Heal With Item                              ";
		gotoXY(8, 14); std::cout << "3) Run Away                                    ";


		system("pause>nul");

		//did they win yet?
		if (win == false) //no winner yet
		{
			if (GetAsyncKeyState(VK_DOWN) && y != 14) //down is pressed unless at bottom
			{
				gotoXY(6, y); std::cout << "  ";
				y++;
				gotoXY(6, y); std::cout << "->";
				battle_menu_item++;
				continue;
			}
			if (GetAsyncKeyState(VK_UP) && y != 12) //up is pressed unless at top
			{
				gotoXY(6, y); std::cout << "  ";
				y--;
				gotoXY(6, y); std::cout << "->";
				battle_menu_item--;
				continue;
			}
			if (GetAsyncKeyState(VK_RETURN)) //enter key pressed
			{
				switch (battle_menu_item)
				{
				case 0: //attack
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					int trueDamage = ((playerDamage * (rand() % 21 + 90)) / 100) - (enemyDefense / 10); //deals anywhere from 90-110% of damage minus 10% of enemy defense
					enemyHP = enemyHP - trueDamage; //enemy health remaining
					gotoXY(8, 16); std::cout << "You hit the " << enemyName << " for " << trueDamage << " damage.    ";

					if (enemyHP <= 0) //enemy is dead
					{
						gotoXY(8, 18); std::cout << "You have defeated the " << enemyName << ".              ";
						playerGold = playerGold + reward;
						gotoXY(8, 19); std::cout << "You picked up " << reward << " gold pieces.                  ";
						playerPtr->setGold(playerGold);
						win = true;
						//while (1); //you win
						break;
					}

					else //enemy attacks
					{
						int enemyTrueDamage = ((enemyDamage * (rand() % 21 + 90)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
						playerHP = playerHP - enemyTrueDamage;
						gotoXY(8, 18); std::cout << "The " << enemyName << " has " << enemyHP << " hit points remaining.     ";
						gotoXY(8, 19); std::cout << "The " << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

						gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";


						if (playerHP <= 0) //player is dead
						{
							gotoXY(8, 21); std::cout << "You are dead!  Game over!                  ";
							while (1); //game ends
							break;
						}
					}break;
				}
				case 1: //use item
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					gotoXY(6, 13); std::cout << "  ";
					y = 12;
					item_menu_item = 0;
					item_menu = true;

					gotoXY(8, 11); std::cout << "Select an item to heal with.                    ";
					gotoXY(6, 12); std::cout << "->";

					do //start item menu
					{


						playerMaxHP = player.getMaxHP();

						if (item1Ptr != NULL)
						{
							gotoXY(8, 12); std::cout << "1) " << item1Ptr->getName() << " heals for " << item1Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 12); std::cout << "1) Empty                                       ";
						}
						if (item2Ptr != NULL)
						{
							gotoXY(8, 13); std::cout << "2) " << item2Ptr->getName() << " heals for " << item2Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 13); std::cout << "2) Empty                                       ";
						}
						if (item3Ptr != NULL)
						{
							gotoXY(8, 14); std::cout << "3) " << item3Ptr->getName() << " heals for " << item3Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 14); std::cout << "3) Empty                                       ";
						}
						if (item4Ptr != NULL)
						{
							gotoXY(8, 15); std::cout << "4) " << item4Ptr->getName() << " heals for " << item4Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 15); std::cout << "4) Empty                                       ";
						}

						system("pause>nul");

						if (GetAsyncKeyState(VK_DOWN) && y != 15)
						{
							gotoXY(6, y); std::cout << "  ";
							y++;
							gotoXY(6, y); std::cout << "->";
							item_menu_item++;
							continue;
						}
						if (GetAsyncKeyState(VK_UP) && y != 12)
						{
							gotoXY(6, y); std::cout << "  ";
							y--;
							gotoXY(6, y); std::cout << "->";
							item_menu_item--;
							continue;
						}
						if (GetAsyncKeyState(VK_RETURN))
						{
							switch (item_menu_item)
							{
							case 0: //item 1
							{
								gotoXY(6, 12); std::cout << "  ";
								if (item1Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item1Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item1Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item1Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item1Ptr = item2Ptr;
									item2Ptr = item3Ptr;
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 1.  You lose your turn.        ";
								}
								break;
							}
							case 1: //item 2
							{
								gotoXY(6, 13); std::cout << "  ";
								if (item2Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item2Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item2Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item2Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item2Ptr = item3Ptr;
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 2.  You lose your turn.        ";
								}
								break;
							}
							case 2: //item 3
							{
								gotoXY(6, 14); std::cout << "  ";
								if (item3Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item3Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item3Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item3Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 3.  You lose your turn.        ";
								}
								break;
							}
							case 3: //item 4
							{
								gotoXY(6, 15); std::cout << "  ";
								if (item4Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item4Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item4Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item4Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 4.  You lose your turn.        ";
								}
								break;
							}
							} // close switch
							  //enemy attacks
							int enemyTrueDamage = ((enemyDamage * (rand() % 20 + 91)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
							playerHP = playerHP - enemyTrueDamage;
							gotoXY(8, 19); std::cout << "The " << enemyName << " has " << enemyHP << " hit points remaining.         ";
							gotoXY(8, 20); std::cout << "The " << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

							gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

							if (playerHP <= 0) //player is dead
							{
								gotoXY(8, 22); std::cout << "You are dead!  Game over!                  ";
								while (1); //game ends
							}
							item_menu = false;
						} //close if
					} while (item_menu);
					y = 12;
					gotoXY(6, 12); std::cout << "->";
					item_menu_item = 0;
					item_menu = true;
					break;
				}
				case 2: //run
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					gotoXY(6, 14); std::cout << "  ";
					int random = rand() % 5; //80% chance to run away successfully
					if (random == 0)
					{
						gotoXY(8, 11); std::cout << "Run away attempt has failed.                   ";
						//enemy attacks
						int enemyTrueDamage = ((enemyDamage * (rand() % 20 + 91)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
						playerHP = playerHP - enemyTrueDamage;
						gotoXY(8, 13); std::cout << "The " << enemyName << " has " << enemyHP << " hit points remaining.         ";
						gotoXY(8, 14); std::cout << "The " << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

						gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

						if (playerHP <= 0) //player is dead
						{
							gotoXY(8, 16); std::cout << "You are dead!  Game over!                  ";
							while (1); //game ends
						}
					}
					else
					{
					gotoXY(8, 11); std::cout << "RUN AWAY!!!!!                                      ";
					gotoXY(8, 12); std::cout << "                                               ";
					gotoXY(8, 13); std::cout << "                                               ";
					gotoXY(8, 14); std::cout << "                                               ";
					getchar();
					return;
					}
					break;
				}
				} //close switch
				y = 12;
				battle_menu_item = 0;
				//battle_menu = false;
			}
		}
		else //you won
		{
			return;
		}
	} while (battle_menu);
	while (1);
	return;
}

void fightMinion3() //level 3 odds
{
	srand(time(NULL)); //see the randomizer based on computer's time
	int playerMaxHP;
	int playerHP;
	int playerDamage;
	int playerDefense;
	int playerGold;
	std::string enemyName;
	int enemyHP;
	int enemyDamage;
	int enemyDefense;
	int reward;
	int randomizer = rand() % 100; //gives random number between 0 and 99

								   //for selectors
	int battle_menu_item = 0;
	int y = 12;
	bool battle_menu = true;
	int item_menu_item = 0;
	bool item_menu = true;
	bool win = false;

	//load player stats (with weapon stats)
	playerHP = playerPtr->getHP();
	playerDamage = playerPtr->getDamage() + weaponPtr->getStat();
	playerDefense = playerPtr->getDefense() + armorPtr->getStat();
	playerGold = playerPtr->getGold();

	print_battle();

	//randomize minion and load their stats
	if (randomizer >= 0 && randomizer < 2) //2%

	{
		//fight goblin
		enemyName = goblin.getName();
		enemyHP = goblin.getHP();
		enemyDamage = goblin.getDamage();
		enemyDefense = goblin.getDefense();
		reward = goblin.getReward();
		//print goblin
		printGoblin();
	}
	else if (randomizer >= 2 && randomizer < 5) //3%
	{
		//fight squirrel
		enemyName = squirrel.getName();
		enemyHP = squirrel.getHP();
		enemyDamage = squirrel.getDamage();
		enemyDefense = squirrel.getDefense();
		reward = squirrel.getReward();
		//print squirrel
		printSquirrel();
	}
	else if (randomizer >= 5 && randomizer < 10) //5%
	{
		//fight bandit
		enemyName = bandit.getName();
		enemyHP = bandit.getHP();
		enemyDamage = bandit.getDamage();
		enemyDefense = bandit.getDefense();
		reward = bandit.getReward();
		//print bandit
		printBandit();
	}
	else if (randomizer >= 10 && randomizer < 20) //10%
	{
		//fight hobgoblin
		enemyName = hobgoblin.getName();
		enemyHP = hobgoblin.getHP();
		enemyDamage = hobgoblin.getDamage();
		enemyDefense = hobgoblin.getDefense();
		reward = hobgoblin.getReward();
		//print hobgoblin
		printHobgoblin();
	}
	else if (randomizer >= 20 && randomizer < 35) //15%
	{
		//fight pirate
		enemyName = pirate.getName();
		enemyHP = pirate.getHP();
		enemyDamage = pirate.getDamage();
		enemyDefense = pirate.getDefense();
		reward = pirate.getReward();
		//print pirate
		printPirate();
	}
	else if (randomizer >= 35 && randomizer < 55) //20%
	{
		//fight cannon
		enemyName = cannon.getName();
		enemyHP = cannon.getHP();
		enemyDamage = cannon.getDamage();
		enemyDefense = cannon.getDefense();
		reward = cannon.getReward();
		//print cannon
		printCannon();
	}
	else if (randomizer >= 55 && randomizer < 75) //20%
	{
		//fight spider
		enemyName = spider.getName();
		enemyHP = spider.getHP();
		enemyDamage = spider.getDamage();
		enemyDefense = spider.getDefense();
		reward = spider.getReward();
		//print spider
		printSpider();
	}
	else // randomizer = 75 to 99, 25%
	{
		//fight robot
		enemyName = robot.getName();
		enemyHP = robot.getHP();
		enemyDamage = robot.getDamage();
		enemyDefense = robot.getDefense();
		reward = robot.getReward();
		//print robot
		printRobot();
	}

	gotoXY(8, 7); std::cout << "Your Attack Power: " << playerDamage << "              ";
	gotoXY(8, 8); std::cout << "Your Armor Class: " << playerDefense << "              ";
	gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";
	gotoXY(8, 11); std::cout << "A " << enemyName << " approaches.  Prepare to fight!    ";

	gotoXY(6, 12); std::cout << "->";
	//choice: attack (did you win?), use item (no attack, another choice in here), run (80%)

	do //start battle menu
	{

		gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

		gotoXY(8, 12); std::cout << "1) Attack                                      ";
		gotoXY(8, 13); std::cout << "2) Heal With Item                              ";
		gotoXY(8, 14); std::cout << "3) Run Away                                    ";


		system("pause>nul");

		//did they win yet?
		if (win == false) //no winner yet
		{
			if (GetAsyncKeyState(VK_DOWN) && y != 14) //down is pressed unless at bottom
			{
				gotoXY(6, y); std::cout << "  ";
				y++;
				gotoXY(6, y); std::cout << "->";
				battle_menu_item++;
				continue;
			}
			if (GetAsyncKeyState(VK_UP) && y != 12) //up is pressed unless at top
			{
				gotoXY(6, y); std::cout << "  ";
				y--;
				gotoXY(6, y); std::cout << "->";
				battle_menu_item--;
				continue;
			}
			if (GetAsyncKeyState(VK_RETURN)) //enter key pressed
			{
				switch (battle_menu_item)
				{
				case 0: //attack
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					int trueDamage = ((playerDamage * (rand() % 21 + 90)) / 100) - (enemyDefense / 10); //deals anywhere from 90-110% of damage minus 10% of enemy defense
					enemyHP = enemyHP - trueDamage; //enemy health remaining
					gotoXY(8, 16); std::cout << "You hit the " << enemyName << " for " << trueDamage << " damage.    ";

					if (enemyHP <= 0) //enemy is dead
					{
						gotoXY(8, 18); std::cout << "You have defeated the " << enemyName << ".              ";
						playerGold = playerGold + reward;
						gotoXY(8, 19); std::cout << "You picked up " << reward << " gold pieces.                  ";
						playerPtr->setGold(playerGold);
						win = true;
						//while (1); //you win
						break;
					}

					else //enemy attacks
					{
						int enemyTrueDamage = ((enemyDamage * (rand() % 21 + 90)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
						playerHP = playerHP - enemyTrueDamage;
						gotoXY(8, 18); std::cout << "The " << enemyName << " has " << enemyHP << " hit points remaining.     ";
						gotoXY(8, 19); std::cout << "The " << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

						gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";


						if (playerHP <= 0) //player is dead
						{
							gotoXY(8, 21); std::cout << "You are dead!  Game over!                  ";
							while (1); //game ends
							break;
						}
					}break;
				}
				case 1: //use item
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					gotoXY(6, 13); std::cout << "  ";
					y = 12;
					item_menu_item = 0;
					item_menu = true;

					gotoXY(8, 11); std::cout << "Select an item to heal with.                    ";
					gotoXY(6, 12); std::cout << "->";

					do //start item menu
					{


						playerMaxHP = player.getMaxHP();

						if (item1Ptr != NULL)
						{
							gotoXY(8, 12); std::cout << "1) " << item1Ptr->getName() << " heals for " << item1Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 12); std::cout << "1) Empty                                       ";
						}
						if (item2Ptr != NULL)
						{
							gotoXY(8, 13); std::cout << "2) " << item2Ptr->getName() << " heals for " << item2Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 13); std::cout << "2) Empty                                       ";
						}
						if (item3Ptr != NULL)
						{
							gotoXY(8, 14); std::cout << "3) " << item3Ptr->getName() << " heals for " << item3Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 14); std::cout << "3) Empty                                       ";
						}
						if (item4Ptr != NULL)
						{
							gotoXY(8, 15); std::cout << "4) " << item4Ptr->getName() << " heals for " << item4Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 15); std::cout << "4) Empty                                       ";
						}

						system("pause>nul");

						if (GetAsyncKeyState(VK_DOWN) && y != 15)
						{
							gotoXY(6, y); std::cout << "  ";
							y++;
							gotoXY(6, y); std::cout << "->";
							item_menu_item++;
							continue;
						}
						if (GetAsyncKeyState(VK_UP) && y != 12)
						{
							gotoXY(6, y); std::cout << "  ";
							y--;
							gotoXY(6, y); std::cout << "->";
							item_menu_item--;
							continue;
						}
						if (GetAsyncKeyState(VK_RETURN))
						{
							switch (item_menu_item)
							{
							case 0: //item 1
							{
								gotoXY(6, 12); std::cout << "  ";
								if (item1Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item1Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item1Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item1Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item1Ptr = item2Ptr;
									item2Ptr = item3Ptr;
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 1.  You lose your turn.        ";
								}
								break;
							}
							case 1: //item 2
							{
								gotoXY(6, 13); std::cout << "  ";
								if (item2Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item2Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item2Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item2Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item2Ptr = item3Ptr;
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 2.  You lose your turn.        ";
								}
								break;
							}
							case 2: //item 3
							{
								gotoXY(6, 14); std::cout << "  ";
								if (item3Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item3Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item3Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item3Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 3.  You lose your turn.        ";
								}
								break;
							}
							case 3: //item 4
							{
								gotoXY(6, 15); std::cout << "  ";
								if (item4Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item4Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item4Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item4Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 4.  You lose your turn.        ";
								}
								break;
							}
							} // close switch
							  //enemy attacks
							int enemyTrueDamage = ((enemyDamage * (rand() % 20 + 91)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
							playerHP = playerHP - enemyTrueDamage;
							gotoXY(8, 19); std::cout << "The " << enemyName << " has " << enemyHP << " hit points remaining.         ";
							gotoXY(8, 20); std::cout << "The " << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

							gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

							if (playerHP <= 0) //player is dead
							{
								gotoXY(8, 22); std::cout << "You are dead!  Game over!                  ";
								while (1); //game ends
							}
							item_menu = false;
						} //close if
					} while (item_menu);
					y = 12;
					gotoXY(6, 12); std::cout << "->";
					item_menu_item = 0;
					item_menu = true;
					break;
				}
				case 2: //run
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					gotoXY(6, 14); std::cout << "  ";
					int random = rand() % 5; //80% chance to run away successfully
					if (random == 0)
					{
						gotoXY(8, 11); std::cout << "Run away attempt has failed.                   ";
						//enemy attacks
						int enemyTrueDamage = ((enemyDamage * (rand() % 20 + 91)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
						playerHP = playerHP - enemyTrueDamage;
						gotoXY(8, 13); std::cout << "The " << enemyName << " has " << enemyHP << " hit points remaining.         ";
						gotoXY(8, 14); std::cout << "The " << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

						gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

						if (playerHP <= 0) //player is dead
						{
							gotoXY(8, 16); std::cout << "You are dead!  Game over!                  ";
							while (1); //game ends
						}
					}
					else
					{
					gotoXY(8, 11); std::cout << "RUN AWAY!!!!!                                      ";
					gotoXY(8, 12); std::cout << "                                               ";
					gotoXY(8, 13); std::cout << "                                               ";
					gotoXY(8, 14); std::cout << "                                               ";
					getchar();
					return;
					}
					break;
				}
				} //close switch
				y = 12;
				battle_menu_item = 0;
				//battle_menu = false;
			}
		}
		else //you won
		{
			return;
		}
	} while (battle_menu);
	while (1);
	return;
}


void fightBoss1()
{
	srand(time(NULL)); //see the randomizer based on computer's time
	int playerMaxHP;
	int playerHP;
	int playerDamage;
	int playerDefense;
	int playerGold;
	std::string enemyName;
	int enemyHP;
	int enemyDamage;
	int enemyDefense;
	int reward;

								   //for selectors
	int battle_menu_item = 0;
	int y = 12;
	bool battle_menu = true;
	int item_menu_item = 0;
	bool item_menu = true;
	bool win = false;

	weaponPtr = (Probe *)&probe;			//damage = 10
	armorPtr = (Helmet *)&helmet;			//defense = 10
	item1Ptr = (Apple *)&apple;				//heal = 10
	item2Ptr = (Banana *)&banana;			//heal = 20
	item3Ptr = (RedPotion *)&red_potion;	//heal = 50
	item4Ptr = (MedKit *)&med_kit;			//heal = 100

	//load player stats (with weapon stats)
	playerHP = playerPtr->getHP();
	playerDamage = playerPtr->getDamage() + weaponPtr->getStat();
	playerDefense = playerPtr->getDefense() + armorPtr->getStat();
	playerGold = playerPtr->getGold();

	print_battle();

	//fight boss 1

	enemyName = goblin_boss.getName();
	enemyHP = goblin_boss.getHP();
	enemyDamage = goblin_boss.getDamage();
	enemyDefense = goblin_boss.getDefense();
	reward = goblin_boss.getReward();
	//print boss 1

	printBoss1();

	gotoXY(8, 7); std::cout << "Your Attack Power: " << playerDamage << "              ";
	gotoXY(8, 8); std::cout << "Your Armor Class: " << playerDefense << "              ";
	gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";
	gotoXY(8, 11); std::cout << enemyName << " approaches.  Prepare to fight!";

	gotoXY(6, 12); std::cout << "->";
	//choice: attack (did you win?), use item (no attack, another choice in here), run (80%)

	do //start battle menu
	{

		gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

		gotoXY(8, 12); std::cout << "1) Attack                                      ";
		gotoXY(8, 13); std::cout << "2) Heal With Item                              ";
		gotoXY(8, 14); std::cout << "3) Run Away                                    ";


		system("pause>nul");

		//did they win yet?
		if (win == false) //no winner yet
		{
			if (GetAsyncKeyState(VK_DOWN) && y != 14) //down is pressed unless at bottom
			{
				gotoXY(6, y); std::cout << "  ";
				y++;
				gotoXY(6, y); std::cout << "->";
				battle_menu_item++;
				continue;
			}
			if (GetAsyncKeyState(VK_UP) && y != 12) //up is pressed unless at top
			{
				gotoXY(6, y); std::cout << "  ";
				y--;
				gotoXY(6, y); std::cout << "->";
				battle_menu_item--;
				continue;
			}
			if (GetAsyncKeyState(VK_RETURN)) //enter key pressed
			{
				switch (battle_menu_item)
				{
				case 0: //attack
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					int trueDamage = ((playerDamage * (rand() % 21 + 90)) / 100) - (enemyDefense / 10); //deals anywhere from 90-110% of damage minus 10% of enemy defense
					enemyHP = enemyHP - trueDamage; //enemy health remaining
					gotoXY(8, 16); std::cout << "You hit " << enemyName << " for " << trueDamage << " damage.    ";

					if (enemyHP <= 0) //enemy is dead
					{
						gotoXY(8, 18); std::cout << "You have defeated " << enemyName << ".              ";
						playerGold = playerGold + reward;
						gotoXY(8, 19); std::cout << "You picked up " << reward << " gold pieces.                  ";
						playerPtr->setGold(playerGold);
						win = true;
						//while (1); //you win
						break;
					}

					else //enemy attacks
					{
						int enemyTrueDamage = ((enemyDamage * (rand() % 21 + 90)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
						playerHP = playerHP - enemyTrueDamage;
						gotoXY(8, 18); std::cout << enemyName << " has " << enemyHP << " hit points remaining.     ";
						gotoXY(8, 19); std::cout << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

						gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";


						if (playerHP <= 0) //player is dead
						{
							gotoXY(8, 21); std::cout << "You are dead!  Game over!                  ";
							while (1); //game ends
							break;
						}
					}break;
				}
				case 1: //use item
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					gotoXY(6, 13); std::cout << "  ";
					y = 12;
					item_menu_item = 0;
					item_menu = true;

					gotoXY(8, 11); std::cout << "Select an item to heal with.                    ";
					gotoXY(6, 12); std::cout << "->";

					do //start item menu
					{


						playerMaxHP = player.getMaxHP();

						if (item1Ptr != NULL)
						{
							gotoXY(8, 12); std::cout << "1) " << item1Ptr->getName() << " heals for " << item1Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 12); std::cout << "1) Empty                                       ";
						}
						if (item2Ptr != NULL)
						{
							gotoXY(8, 13); std::cout << "2) " << item2Ptr->getName() << " heals for " << item2Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 13); std::cout << "2) Empty                                       ";
						}
						if (item3Ptr != NULL)
						{
							gotoXY(8, 14); std::cout << "3) " << item3Ptr->getName() << " heals for " << item3Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 14); std::cout << "3) Empty                                       ";
						}
						if (item4Ptr != NULL)
						{
							gotoXY(8, 15); std::cout << "4) " << item4Ptr->getName() << " heals for " << item4Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 15); std::cout << "4) Empty                                       ";
						}

						system("pause>nul");

						if (GetAsyncKeyState(VK_DOWN) && y != 15)
						{
							gotoXY(6, y); std::cout << "  ";
							y++;
							gotoXY(6, y); std::cout << "->";
							item_menu_item++;
							continue;
						}
						if (GetAsyncKeyState(VK_UP) && y != 12)
						{
							gotoXY(6, y); std::cout << "  ";
							y--;
							gotoXY(6, y); std::cout << "->";
							item_menu_item--;
							continue;
						}
						if (GetAsyncKeyState(VK_RETURN))
						{
							switch (item_menu_item)
							{
							case 0: //item 1
							{
								gotoXY(6, 12); std::cout << "  ";
								if (item1Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item1Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item1Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item1Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item1Ptr = item2Ptr;
									item2Ptr = item3Ptr;
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 1.  You lose your turn.        ";
								}
								break;
							}
							case 1: //item 2
							{
								gotoXY(6, 13); std::cout << "  ";
								if (item2Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item2Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item2Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item2Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item2Ptr = item3Ptr;
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 2.  You lose your turn.        ";
								}
								break;
							}
							case 2: //item 3
							{
								gotoXY(6, 14); std::cout << "  ";
								if (item3Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item3Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item3Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item3Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 3.  You lose your turn.        ";
								}
								break;
							}
							case 3: //item 4
							{
								gotoXY(6, 15); std::cout << "  ";
								if (item4Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item4Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item4Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item4Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 4.  You lose your turn.        ";
								}
								break;
							}
							} // close switch
							  //enemy attacks
							int enemyTrueDamage = ((enemyDamage * (rand() % 20 + 91)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
							playerHP = playerHP - enemyTrueDamage;
							gotoXY(8, 19); std::cout << enemyName << " has " << enemyHP << " hit points remaining.         ";
							gotoXY(8, 20); std::cout << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

							gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

							if (playerHP <= 0) //player is dead
							{
								gotoXY(8, 22); std::cout << "You are dead!  Game over!                  ";
								while (1); //game ends
							}
							item_menu = false;
						} //close if
					} while (item_menu);
					y = 12;
					gotoXY(6, 12); std::cout << "->";
					item_menu_item = 0;
					item_menu = true;
					break;
				}
				case 2: //run
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					gotoXY(6, 14); std::cout << "  ";
					int random = rand() % 5; //80% chance to run away successfully
					if (random == 0)
					{
						gotoXY(8, 11); std::cout << "Run away attempt has failed.                   ";
						//enemy attacks
						int enemyTrueDamage = ((enemyDamage * (rand() % 20 + 91)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
						playerHP = playerHP - enemyTrueDamage;
						gotoXY(8, 13); std::cout << enemyName << " has " << enemyHP << " hit points remaining.         ";
						gotoXY(8, 14); std::cout << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

						gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

						if (playerHP <= 0) //player is dead
						{
							gotoXY(8, 16); std::cout << "You are dead!  Game over!                  ";
							while (1); //game ends
						}
					}
					else
					{
						gotoXY(8, 11); std::cout << "RUN AWAY!!!!!                                      ";
						gotoXY(8, 12); std::cout << "                                               ";
						gotoXY(8, 13); std::cout << "                                               ";
						gotoXY(8, 14); std::cout << "                                               ";
						getchar();
						return;
					}
					break;
				}
				} //close switch
				y = 12;
				battle_menu_item = 0;
				//battle_menu = false;
			}
		}
		else //you won
		{
			return;
		}
	} while (battle_menu);
	while (1);
	return;
}

void fightBoss2()
{
	srand(time(NULL)); //see the randomizer based on computer's time
	int playerMaxHP;
	int playerHP;
	int playerDamage;
	int playerDefense;
	int playerGold;
	std::string enemyName;
	int enemyHP;
	int enemyDamage;
	int enemyDefense;
	int reward;

	//for selectors
	int battle_menu_item = 0;
	int y = 12;
	bool battle_menu = true;
	int item_menu_item = 0;
	bool item_menu = true;
	bool win = false;

	weaponPtr = (Probe *)&probe;			//damage = 10
	armorPtr = (Helmet *)&helmet;			//defense = 10
	item1Ptr = (Apple *)&apple;				//heal = 10
	item2Ptr = (Banana *)&banana;			//heal = 20
	item3Ptr = (RedPotion *)&red_potion;	//heal = 50
	item4Ptr = (MedKit *)&med_kit;			//heal = 100

											//load player stats (with weapon stats)
	playerHP = playerPtr->getHP();
	playerDamage = playerPtr->getDamage() + weaponPtr->getStat();
	playerDefense = playerPtr->getDefense() + armorPtr->getStat();
	playerGold = playerPtr->getGold();

	print_battle();

	//fight boss 2

	enemyName = spider_boss.getName();
	enemyHP = spider_boss.getHP();
	enemyDamage = spider_boss.getDamage();
	enemyDefense = spider_boss.getDefense();
	reward = spider_boss.getReward();
	//print boss 2

	printBoss2();

	gotoXY(8, 7); std::cout << "Your Attack Power: " << playerDamage << "              ";
	gotoXY(8, 8); std::cout << "Your Armor Class: " << playerDefense << "              ";
	gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";
	gotoXY(8, 11); std::cout << enemyName << " approaches.  Prepare to fight!";

	gotoXY(6, 12); std::cout << "->";
	//choice: attack (did you win?), use item (no attack, another choice in here), run (80%)

	do //start battle menu
	{

		gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

		gotoXY(8, 12); std::cout << "1) Attack                                      ";
		gotoXY(8, 13); std::cout << "2) Heal With Item                              ";
		gotoXY(8, 14); std::cout << "3) Run Away                                    ";


		system("pause>nul");

		//did they win yet?
		if (win == false) //no winner yet
		{
			if (GetAsyncKeyState(VK_DOWN) && y != 14) //down is pressed unless at bottom
			{
				gotoXY(6, y); std::cout << "  ";
				y++;
				gotoXY(6, y); std::cout << "->";
				battle_menu_item++;
				continue;
			}
			if (GetAsyncKeyState(VK_UP) && y != 12) //up is pressed unless at top
			{
				gotoXY(6, y); std::cout << "  ";
				y--;
				gotoXY(6, y); std::cout << "->";
				battle_menu_item--;
				continue;
			}
			if (GetAsyncKeyState(VK_RETURN)) //enter key pressed
			{
				switch (battle_menu_item)
				{
				case 0: //attack
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					int trueDamage = ((playerDamage * (rand() % 21 + 90)) / 100) - (enemyDefense / 10); //deals anywhere from 90-110% of damage minus 10% of enemy defense
					enemyHP = enemyHP - trueDamage; //enemy health remaining
					gotoXY(8, 16); std::cout << "You hit " << enemyName << " for " << trueDamage << " damage.    ";

					if (enemyHP <= 0) //enemy is dead
					{
						gotoXY(8, 18); std::cout << "You have defeated " << enemyName << ".              ";
						playerGold = playerGold + reward;
						gotoXY(8, 19); std::cout << "You picked up " << reward << " gold pieces.                  ";
						playerPtr->setGold(playerGold);
						win = true;
						//while (1); //you win
						break;
					}

					else //enemy attacks
					{
						int enemyTrueDamage = ((enemyDamage * (rand() % 21 + 90)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
						playerHP = playerHP - enemyTrueDamage;
						gotoXY(8, 18); std::cout << enemyName << " has " << enemyHP << " hit points remaining.     ";
						gotoXY(8, 19); std::cout << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

						gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";


						if (playerHP <= 0) //player is dead
						{
							gotoXY(8, 21); std::cout << "You are dead!  Game over!                  ";
							while (1); //game ends
							break;
						}
					}break;
				}
				case 1: //use item
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					gotoXY(6, 13); std::cout << "  ";
					y = 12;
					item_menu_item = 0;
					item_menu = true;

					gotoXY(8, 11); std::cout << "Select an item to heal with.                    ";
					gotoXY(6, 12); std::cout << "->";

					do //start item menu
					{


						playerMaxHP = player.getMaxHP();

						if (item1Ptr != NULL)
						{
							gotoXY(8, 12); std::cout << "1) " << item1Ptr->getName() << " heals for " << item1Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 12); std::cout << "1) Empty                                       ";
						}
						if (item2Ptr != NULL)
						{
							gotoXY(8, 13); std::cout << "2) " << item2Ptr->getName() << " heals for " << item2Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 13); std::cout << "2) Empty                                       ";
						}
						if (item3Ptr != NULL)
						{
							gotoXY(8, 14); std::cout << "3) " << item3Ptr->getName() << " heals for " << item3Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 14); std::cout << "3) Empty                                       ";
						}
						if (item4Ptr != NULL)
						{
							gotoXY(8, 15); std::cout << "4) " << item4Ptr->getName() << " heals for " << item4Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 15); std::cout << "4) Empty                                       ";
						}

						system("pause>nul");

						if (GetAsyncKeyState(VK_DOWN) && y != 15)
						{
							gotoXY(6, y); std::cout << "  ";
							y++;
							gotoXY(6, y); std::cout << "->";
							item_menu_item++;
							continue;
						}
						if (GetAsyncKeyState(VK_UP) && y != 12)
						{
							gotoXY(6, y); std::cout << "  ";
							y--;
							gotoXY(6, y); std::cout << "->";
							item_menu_item--;
							continue;
						}
						if (GetAsyncKeyState(VK_RETURN))
						{
							switch (item_menu_item)
							{
							case 0: //item 1
							{
								gotoXY(6, 12); std::cout << "  ";
								if (item1Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item1Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item1Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item1Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item1Ptr = item2Ptr;
									item2Ptr = item3Ptr;
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 1.  You lose your turn.        ";
								}
								break;
							}
							case 1: //item 2
							{
								gotoXY(6, 13); std::cout << "  ";
								if (item2Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item2Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item2Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item2Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item2Ptr = item3Ptr;
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 2.  You lose your turn.        ";
								}
								break;
							}
							case 2: //item 3
							{
								gotoXY(6, 14); std::cout << "  ";
								if (item3Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item3Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item3Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item3Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 3.  You lose your turn.        ";
								}
								break;
							}
							case 3: //item 4
							{
								gotoXY(6, 15); std::cout << "  ";
								if (item4Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item4Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item4Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item4Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 4.  You lose your turn.        ";
								}
								break;
							}
							} // close switch
							  //enemy attacks
							int enemyTrueDamage = ((enemyDamage * (rand() % 20 + 91)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
							playerHP = playerHP - enemyTrueDamage;
							gotoXY(8, 19); std::cout << enemyName << " has " << enemyHP << " hit points remaining.         ";
							gotoXY(8, 20); std::cout << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

							gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

							if (playerHP <= 0) //player is dead
							{
								gotoXY(8, 22); std::cout << "You are dead!  Game over!                  ";
								while (1); //game ends
							}
							item_menu = false;
						} //close if
					} while (item_menu);
					y = 12;
					gotoXY(6, 12); std::cout << "->";
					item_menu_item = 0;
					item_menu = true;
					break;
				}
				case 2: //run
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					gotoXY(6, 14); std::cout << "  ";
					int random = rand() % 5; //80% chance to run away successfully
					if (random == 0)
					{
						gotoXY(8, 11); std::cout << "Run away attempt has failed.                   ";
						//enemy attacks
						int enemyTrueDamage = ((enemyDamage * (rand() % 20 + 91)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
						playerHP = playerHP - enemyTrueDamage;
						gotoXY(8, 13); std::cout << enemyName << " has " << enemyHP << " hit points remaining.         ";
						gotoXY(8, 14); std::cout << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

						gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

						if (playerHP <= 0) //player is dead
						{
							gotoXY(8, 16); std::cout << "You are dead!  Game over!                  ";
							while (1); //game ends
						}
					}
					else
					{
						gotoXY(8, 11); std::cout << "RUN AWAY!!!!!                                      ";
						gotoXY(8, 12); std::cout << "                                               ";
						gotoXY(8, 13); std::cout << "                                               ";
						gotoXY(8, 14); std::cout << "                                               ";
						getchar();
						return;
					}
					break;
				}
				} //close switch
				y = 12;
				battle_menu_item = 0;
				//battle_menu = false;
			}
		}
		else //you won
		{
			return;
		}
	} while (battle_menu);
	while (1);
	return;
}

void fightBoss3()
{
	srand(time(NULL)); //see the randomizer based on computer's time
	int playerMaxHP;
	int playerHP;
	int playerDamage;
	int playerDefense;
	int playerGold;
	std::string enemyName;
	int enemyHP;
	int enemyDamage;
	int enemyDefense;
	int reward;

	//for selectors
	int battle_menu_item = 0;
	int y = 12;
	bool battle_menu = true;
	int item_menu_item = 0;
	bool item_menu = true;
	bool win = false;

	weaponPtr = (Probe *)&probe;			//damage = 10
	armorPtr = (Helmet *)&helmet;			//defense = 10
	item1Ptr = (Apple *)&apple;				//heal = 10
	item2Ptr = (Banana *)&banana;			//heal = 20
	item3Ptr = (RedPotion *)&red_potion;	//heal = 50
	item4Ptr = (MedKit *)&med_kit;			//heal = 100

											//load player stats (with weapon stats)
	playerHP = playerPtr->getHP();
	playerDamage = playerPtr->getDamage() + weaponPtr->getStat();
	playerDefense = playerPtr->getDefense() + armorPtr->getStat();
	playerGold = playerPtr->getGold();

	print_battle();

	//fight boss 3

	enemyName = shopkeeper.getName();
	enemyHP = shopkeeper.getHP();
	enemyDamage = shopkeeper.getDamage();
	enemyDefense = shopkeeper.getDefense();
	reward = shopkeeper.getReward();
	//print boss 3

	printBoss3();

	gotoXY(8, 7); std::cout << "Your Attack Power: " << playerDamage << "              ";
	gotoXY(8, 8); std::cout << "Your Armor Class: " << playerDefense << "              ";
	gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";
	gotoXY(8, 11); std::cout << enemyName << " approaches.  Prepare to fight!";

	gotoXY(6, 12); std::cout << "->";
	//choice: attack (did you win?), use item (no attack, another choice in here), run (80%)

	do //start battle menu
	{

		gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

		gotoXY(8, 12); std::cout << "1) Attack                                      ";
		gotoXY(8, 13); std::cout << "2) Heal With Item                              ";
		gotoXY(8, 14); std::cout << "3) Run Away                                    ";


		system("pause>nul");

		//did they win yet?
		if (win == false) //no winner yet
		{
			if (GetAsyncKeyState(VK_DOWN) && y != 14) //down is pressed unless at bottom
			{
				gotoXY(6, y); std::cout << "  ";
				y++;
				gotoXY(6, y); std::cout << "->";
				battle_menu_item++;
				continue;
			}
			if (GetAsyncKeyState(VK_UP) && y != 12) //up is pressed unless at top
			{
				gotoXY(6, y); std::cout << "  ";
				y--;
				gotoXY(6, y); std::cout << "->";
				battle_menu_item--;
				continue;
			}
			if (GetAsyncKeyState(VK_RETURN)) //enter key pressed
			{
				switch (battle_menu_item)
				{
				case 0: //attack
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					int trueDamage = ((playerDamage * (rand() % 21 + 90)) / 100) - (enemyDefense / 10); //deals anywhere from 90-110% of damage minus 10% of enemy defense
					enemyHP = enemyHP - trueDamage; //enemy health remaining
					gotoXY(8, 16); std::cout << "You hit " << enemyName << " for " << trueDamage << " damage.    ";

					if (enemyHP <= 0) //enemy is dead
					{
						gotoXY(8, 18); std::cout << "You have defeated " << enemyName << ".              ";
						playerGold = playerGold + reward;
						gotoXY(8, 19); std::cout << "You picked up " << reward << " gold pieces.                  ";
						playerPtr->setGold(playerGold);
						win = true;
						//while (1); //you win
						break;
					}

					else //enemy attacks
					{
						int enemyTrueDamage = ((enemyDamage * (rand() % 21 + 90)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
						playerHP = playerHP - enemyTrueDamage;
						gotoXY(8, 18); std::cout << enemyName << " has " << enemyHP << " hit points remaining.     ";
						gotoXY(8, 19); std::cout << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

						gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";


						if (playerHP <= 0) //player is dead
						{
							gotoXY(8, 21); std::cout << "You are dead!  Game over!                  ";
							while (1); //game ends
							break;
						}
					}break;
				}
				case 1: //use item
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					gotoXY(6, 13); std::cout << "  ";
					y = 12;
					item_menu_item = 0;
					item_menu = true;

					gotoXY(8, 11); std::cout << "Select an item to heal with.                    ";
					gotoXY(6, 12); std::cout << "->";

					do //start item menu
					{


						playerMaxHP = player.getMaxHP();

						if (item1Ptr != NULL)
						{
							gotoXY(8, 12); std::cout << "1) " << item1Ptr->getName() << " heals for " << item1Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 12); std::cout << "1) Empty                                       ";
						}
						if (item2Ptr != NULL)
						{
							gotoXY(8, 13); std::cout << "2) " << item2Ptr->getName() << " heals for " << item2Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 13); std::cout << "2) Empty                                       ";
						}
						if (item3Ptr != NULL)
						{
							gotoXY(8, 14); std::cout << "3) " << item3Ptr->getName() << " heals for " << item3Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 14); std::cout << "3) Empty                                       ";
						}
						if (item4Ptr != NULL)
						{
							gotoXY(8, 15); std::cout << "4) " << item4Ptr->getName() << " heals for " << item4Ptr->getStat() << " hit points.        ";
						}
						else
						{
							gotoXY(8, 15); std::cout << "4) Empty                                       ";
						}

						system("pause>nul");

						if (GetAsyncKeyState(VK_DOWN) && y != 15)
						{
							gotoXY(6, y); std::cout << "  ";
							y++;
							gotoXY(6, y); std::cout << "->";
							item_menu_item++;
							continue;
						}
						if (GetAsyncKeyState(VK_UP) && y != 12)
						{
							gotoXY(6, y); std::cout << "  ";
							y--;
							gotoXY(6, y); std::cout << "->";
							item_menu_item--;
							continue;
						}
						if (GetAsyncKeyState(VK_RETURN))
						{
							switch (item_menu_item)
							{
							case 0: //item 1
							{
								gotoXY(6, 12); std::cout << "  ";
								if (item1Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item1Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item1Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item1Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item1Ptr = item2Ptr;
									item2Ptr = item3Ptr;
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 1.  You lose your turn.        ";
								}
								break;
							}
							case 1: //item 2
							{
								gotoXY(6, 13); std::cout << "  ";
								if (item2Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item2Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item2Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item2Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item2Ptr = item3Ptr;
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 2.  You lose your turn.        ";
								}
								break;
							}
							case 2: //item 3
							{
								gotoXY(6, 14); std::cout << "  ";
								if (item3Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item3Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item3Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item3Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item3Ptr = item4Ptr;
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 3.  You lose your turn.        ";
								}
								break;
							}
							case 3: //item 4
							{
								gotoXY(6, 15); std::cout << "  ";
								if (item4Ptr != NULL)
								{
									//heal player
									playerHP = playerHP + item4Ptr->getStat();
									if (playerHP > playerMaxHP)
									{
										gotoXY(8, 17); std::cout << "You were healed for " << playerMaxHP + item4Ptr->getStat() - playerHP << " hit points.         ";
										playerHP = playerMaxHP;
									}
									else
									{
										gotoXY(8, 17); std::cout << "You were healed for " << item4Ptr->getStat() << " hit points.         ";
									}
									//remove item and shift other items
									item4Ptr = NULL;
								}
								else
								{
									gotoXY(8, 17); std::cout << "No item in slot 4.  You lose your turn.        ";
								}
								break;
							}
							} // close switch
							  //enemy attacks
							int enemyTrueDamage = ((enemyDamage * (rand() % 20 + 91)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
							playerHP = playerHP - enemyTrueDamage;
							gotoXY(8, 19); std::cout << enemyName << " has " << enemyHP << " hit points remaining.         ";
							gotoXY(8, 20); std::cout << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

							gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

							if (playerHP <= 0) //player is dead
							{
								gotoXY(8, 22); std::cout << "You are dead!  Game over!                  ";
								while (1); //game ends
							}
							item_menu = false;
						} //close if
					} while (item_menu);
					y = 12;
					gotoXY(6, 12); std::cout << "->";
					item_menu_item = 0;
					item_menu = true;
					break;
				}
				case 2: //run
				{
					gotoXY(8, 15); std::cout << "                                               ";
					gotoXY(8, 16); std::cout << "                                               ";
					gotoXY(8, 17); std::cout << "                                               ";
					gotoXY(8, 18); std::cout << "                                               ";
					gotoXY(8, 19); std::cout << "                                               ";
					gotoXY(8, 20); std::cout << "                                               ";
					gotoXY(8, 21); std::cout << "                                               ";
					gotoXY(8, 22); std::cout << "                                               ";
					gotoXY(6, 14); std::cout << "  ";
					int random = rand() % 5; //80% chance to run away successfully
					if (random == 0)
					{
						gotoXY(8, 11); std::cout << "Run away attempt has failed.                   ";
						//enemy attacks
						int enemyTrueDamage = ((enemyDamage * (rand() % 20 + 91)) / 100) - (playerDefense / 10); //deals 90-110% damage minus 10% player defense
						playerHP = playerHP - enemyTrueDamage;
						gotoXY(8, 13); std::cout << enemyName << " has " << enemyHP << " hit points remaining.         ";
						gotoXY(8, 14); std::cout << enemyName << " hits you for " << enemyTrueDamage << " damage.        ";

						gotoXY(8, 9); std::cout << "Your current HP: " << playerHP << "              ";

						if (playerHP <= 0) //player is dead
						{
							gotoXY(8, 16); std::cout << "You are dead!  Game over!                  ";
							while (1); //game ends
						}
					}
					else
					{
						gotoXY(8, 11); std::cout << "RUN AWAY!!!!!                                      ";
						gotoXY(8, 12); std::cout << "                                               ";
						gotoXY(8, 13); std::cout << "                                               ";
						gotoXY(8, 14); std::cout << "                                               ";
						getchar();
						return;
					}
					break;
				}
				} //close switch
				y = 12;
				battle_menu_item = 0;
				//battle_menu = false;
			}
		}
		else //you won
		{
			return;
		}
	} while (battle_menu);
	while (1);
	return;
}



void print_battle()
{
	gotoXY(0, 5);
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||                                                        |                                                        |||" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
}

void gotoXY(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}

void printGoblin()
{
	gotoXY(60, 6);  std::cout << "   Can't have an RPG                                    ";
	gotoXY(60, 7);  std::cout << "      without 'em!     /| ^---^ |\\                      ";
	gotoXY(60, 8);  std::cout << "                      |  /_   _\\  |                     ";
	gotoXY(60, 9);  std::cout << "                      |'  O   O  '|                     ";
	gotoXY(60, 10); std::cout << "                      |/|   >   |\\|                     ";
	gotoXY(60, 11); std::cout << "                         \\ \"\"\" /                        ";
	gotoXY(60, 12); std::cout << "                           | |                          ";
	gotoXY(60, 13); std::cout << "                         ooooooo                        ";
	gotoXY(60, 14); std::cout << "                 ______ooooooooooo                      ";
	gotoXY(60, 15); std::cout << "                /      \\oooooooooo \\ |\\                 ";
	gotoXY(60, 16); std::cout << "               /        \\ooooooooo\\ \\||                 ";
	gotoXY(60, 17); std::cout << "              |    /\\    |oooooooo \\----                ";
	gotoXY(60, 18); std::cout << "              |    \\/    |========   o8                 ";
	gotoXY(60, 19); std::cout << "               \\        /        |                      ";
	gotoXY(60, 20); std::cout << "                \\______/|   /\\   |                      ";
	gotoXY(60, 21); std::cout << "                        |__|  |__|                      ";
	gotoXY(60, 22); std::cout << "                        /__\\  /__\\                      ";
	gotoXY(60, 23); std::cout << "                                \"Stabby, stabby, stab!\" ";
	return;
}

void printSquirrel()
{
	gotoXY(60, 6);  std::cout << "                                                        ";
	gotoXY(60, 7);  std::cout << "                                                        ";
	gotoXY(60, 8);  std::cout << "                                                        ";
	gotoXY(60, 9);  std::cout << "        SQUIRREL!            ^ --- ^                    ";
	gotoXY(60, 10); std::cout << "                            /  O O  \\                   ";
	gotoXY(60, 11); std::cout << "                 __        |    o    |                  ";
	gotoXY(60, 12); std::cout << "               /    \\       \\  ---  /                   ";
	gotoXY(60, 13); std::cout << "              |      \\     ,-      -.                   ";
	gotoXY(60, 14); std::cout << "               \\ __/  \\   /   \\\\ //  \\                  ";
	gotoXY(60, 15); std::cout << "                   \\   | |     \"0\"    |                 ";
	gotoXY(60, 16); std::cout << "                    \\   \\'            |                 ";
	gotoXY(60, 17); std::cout << "                     \\      ____  ___/                  ";
	gotoXY(60, 18); std::cout << "                      '---|___,,|___,,|                 ";
	gotoXY(60, 19); std::cout << "                                                        ";
	gotoXY(60, 20); std::cout << "                    \"Have you seen my nuts?\"            ";
	gotoXY(60, 21); std::cout << "                                                        ";
	gotoXY(60, 22); std::cout << "                                                        ";
	gotoXY(60, 23); std::cout << "                                                        ";


	return;
}

void printBandit()
{
	gotoXY(60, 6);  std::cout << "                                                        ";
	gotoXY(60, 7);  std::cout << "     \"Get ready for a beating!\"                         ";
	gotoXY(60, 8);  std::cout << "                     .--\"\"\"\"--.                         ";
	gotoXY(60, 9);  std::cout << "                    /    \\/    \\                        ";
	gotoXY(60, 10); std::cout << "                   }   o    o   {                       ";
	gotoXY(60, 11); std::cout << "                    \\    <     /                        ";
	gotoXY(60, 12); std::cout << "                      - .__. -                          ";
	gotoXY(60, 13); std::cout << "                     _--------_                         ";
	gotoXY(60, 14); std::cout << "               OOOo |     X    \\                        ";
	gotoXY(60, 15); std::cout << "                \\ \\ |     O     \\                       ";
	gotoXY(60, 16); std::cout << "                 \\ \\| |   X    | |//                    ";
	gotoXY(60, 17); std::cout << "                  \\___|   O    | //                     ";
	gotoXY(60, 18); std::cout << "                     |____X____|//                      ";
	gotoXY(60, 19); std::cout << "                     /         OOOO                     ";
	gotoXY(60, 20); std::cout << "                    /    /|    |                        ";
	gotoXY(60, 21); std::cout << "  Thug Life        |    / |    |                        ";
	gotoXY(60, 22); std::cout << "                  _|___/  |____|                        ";
	gotoXY(60, 23); std::cout << "                 |_____|  |_____|                       ";
	return;
}

void printHobgoblin()
{
	gotoXY(60, 6);  std::cout << "                                                        ";
	gotoXY(60, 7);  std::cout << "   Ankle biter            ^---^                         ";
	gotoXY(60, 8);  std::cout << "                       /|/_   _\\|\\                      ";
	gotoXY(60, 9);  std::cout << "                      |'  O   O  '|                     ";
	gotoXY(60, 10); std::cout << "                      |/|   >   |\\|                     ";
	gotoXY(60, 11); std::cout << "                         \\ --- /                        ";
	gotoXY(60, 12); std::cout << "                           | |                          ";
	gotoXY(60, 13); std::cout << "                         ^^^^^^^--_____ 0               ";
	gotoXY(60, 14); std::cout << "               ________^^^^^^^^^^^____[===]             ";
	gotoXY(60, 15); std::cout << "              |^^^^^^^^^^|^^^^^^^^     | |              ";
	gotoXY(60, 16); std::cout << "              |^^^^^^^^^^|^^^^^^^^     | |              ";
	gotoXY(60, 17); std::cout << "              |    /\\    |^^^^^^^^     | |              ";
	gotoXY(60, 18); std::cout << "               \\   \\/   /=========     | |              ";
	gotoXY(60, 19); std::cout << "                \\      /|        |     | |              ";
	gotoXY(60, 20); std::cout << "                 \\    / |   /\\   |     | |              ";
	gotoXY(60, 21); std::cout << "                  \\__/  |__|  |__|     | |              ";
	gotoXY(60, 22); std::cout << "                        /__\\  /__\\     \\ /              ";
	gotoXY(60, 23); std::cout << "   \"I'm so gonna cut you.\"                              ";
	return;
}

void printPirate()
{
	gotoXY(60, 6);  std::cout << "                                                        ";
	gotoXY(60, 7);  std::cout << "     \"Where's me booty?!\"                               ";
	gotoXY(60, 8);  std::cout << "                     .--\"\"\"\"--.                         ";
	gotoXY(60, 9);  std::cout << "                    /    \\/    \\                        ";
	gotoXY(60, 10); std::cout << "                   }   o    o   {                       ";
	gotoXY(60, 11); std::cout << "                   o\\    <     /o                         ";
	gotoXY(60, 12); std::cout << "                      - .__. -        //                ";
	gotoXY(60, 13); std::cout << "                /\\   _--------_      //                 ";
	gotoXY(60, 14); std::cout << "               __/_ |     X    \    //                  ";
	gotoXY(60, 15); std::cout << "                \\ \\ |     O     \\  //                   ";
	gotoXY(60, 16); std::cout << "                 \\ \\| |   X    | |//                    ";
	gotoXY(60, 17); std::cout << "                  \\___|   O    | //                     ";
	gotoXY(60, 18); std::cout << "                     |____X____|//                      ";
	gotoXY(60, 19); std::cout << "                     /         OOOO                     ";
	gotoXY(60, 20); std::cout << "                    /    /|    |                        ";
	gotoXY(60, 21); std::cout << "                   |    /  \\__/  See the leg and hook? ";
	gotoXY(60, 22); std::cout << "                  _|___/    ||     Obviously a pirate.  ";
	gotoXY(60, 23); std::cout << "                 |_____|    ||                          ";
	return;
}

void printCannon()
{
	gotoXY(60, 6);  std::cout << "                                                        ";
	gotoXY(60, 7);  std::cout << "        \"Fire in the hole.\"                             ";
	gotoXY(60, 8);  std::cout << "                                                        ";
	gotoXY(60, 9);  std::cout << "                                                        ";
	gotoXY(60, 10); std::cout << "                                                ___     ";
	gotoXY(60, 11); std::cout << "          x                         ___...---'''  /\\    ";
	gotoXY(60, 12); std::cout << "           \\            ___...---'''             |  |   ";
	gotoXY(60, 13); std::cout << "            | _...---'''                         |  |   ";
	gotoXY(60, 14); std::cout << "       ____-__                                    \\/    ";
	gotoXY(60, 15); std::cout << "     /         \\                      ___...---''''     ";
	gotoXY(60, 16); std::cout << "    /           \\         ___...---'''                  ";
	gotoXY(60, 17); std::cout << "   |     /_\\     |..---'''  |                           ";
	gotoXY(60, 18); std::cout << "   |     \\ /     |\\        /                            ";
	gotoXY(60, 19); std::cout << "    \\           /  \\______/                             ";
	gotoXY(60, 20); std::cout << "     \\ _______ /                                        ";
	gotoXY(60, 21); std::cout << "                                                        ";
	gotoXY(60, 22); std::cout << "                       Glass cannon is made of glass.   ";
	gotoXY(60, 23); std::cout << "                                                        ";
	return;
}

void printSpider()
{
	gotoXY(60, 6);  std::cout << "                                                        ";
	gotoXY(60, 7);  std::cout << "      OHMYGODITSASPIDERKILLITWITHFIRE!!!!!!             ";
	gotoXY(60, 8);  std::cout << "                       _                                ";
	gotoXY(60, 9);  std::cout << "             _____/\\  ||\\  /|                           ";
	gotoXY(60, 10); std::cout << "            /.---,\\\\\\ ||\\\\/_'--'_                       ";
	gotoXY(60, 11); std::cout << "           //  ._.\\\\\\\\||/\"_ /\\___',_                    ";
	gotoXY(60, 12); std::cout << "         _//     __\\/---\\/.|/\\\\=={\\/                    ";
	gotoXY(60, 13); std::cout << "        '_'   ,-'o )/\\  //||/_\\\\_'\\\\                    ";
	gotoXY(60, 14); std::cout << "               _,-//\\  '//||\" //   \\\\_                  ";
	gotoXY(60, 15); std::cout << "                 //  ---- // //     -_,                 ";
	gotoXY(60, 16); std::cout << "                 \\\\      //  -_'                        ";
	gotoXY(60, 17); std::cout << "                  \\\\    '_.                             ";
	gotoXY(60, 18); std::cout << "                  ._'                                   ";
	gotoXY(60, 19); std::cout << "                                                        ";
	gotoXY(60, 20); std::cout << "                                                        ";
	gotoXY(60, 21); std::cout << "                  \"Kssprskljrrsss\"                      ";
	gotoXY(60, 22); std::cout << "                                                        ";
	gotoXY(60, 23); std::cout << "                                                        ";
	return;
}

void printRobot()
{
	gotoXY(60, 6);  std::cout << "                    (\\. -- ./)                          ";
	gotoXY(60, 7);  std::cout << "                O-0)))--|     \\      \"ELIMINATE!\"       ";
	gotoXY(60, 8);  std::cout << "                  |____________|                        ";
	gotoXY(60, 9);  std::cout << "                   -|--|--|--|-                         ";
	gotoXY(60, 10); std::cout << "                   _T~_T~_T~_T_                         ";
	gotoXY(60, 11); std::cout << "                  |____________|                        ";
	gotoXY(60, 12); std::cout << "                  |_o_|____|_o_|                        ";
	gotoXY(60, 13); std::cout << "               .-~/  :  |   %  \\                        ";
	gotoXY(60, 14); std::cout << "        .-..-~   /  :   |  %:   \\                       ";
	gotoXY(60, 15); std::cout << "        `-'     /   :   | %  :   \\                      ";
	gotoXY(60, 16); std::cout << "               /   :    |#   :    \\                     ";
	gotoXY(60, 17); std::cout << "              /    :    |     :    \\                    ";
	gotoXY(60, 18); std::cout << "             /    :     |     :     \\                   ";
	gotoXY(60, 19); std::cout << "         . -/     :     |      :     \\- .               ";
	gotoXY(60, 20); std::cout << "        |\\  ~-.  :      |      :   .-~  /|              ";
	gotoXY(60, 21); std::cout << "        \\ ~-.   ~ - .  _|_  . - ~   .-~ /               ";
	gotoXY(60, 22); std::cout << "          ~-.  ~ -  . _ _ _ .  - ~  .-~                 ";
	gotoXY(60, 23); std::cout << "      No copyright infringement going on here...        ";
	return;
}

void printBoss1() //goblin boss
{
	gotoXY(60, 6);  std::cout << "                     o  o  o  o  o                      ";
	gotoXY(60, 7);  std::cout << "   Baddest Goblin    |\\/ \\/ \\/ \\/|     /\\               ";
	gotoXY(60, 8);  std::cout << "  you've ever seen.  O__O__O__O__O|    ||               ";
	gotoXY(60, 9);  std::cout << " Easily 4 feet tall.  |'  <> <>  '|   [[]]              ";
	gotoXY(60, 10); std::cout << "                      |/|   >   |\\|    ||               ";
	gotoXY(60, 11); std::cout << "                      o  \\ \"\"\" /  o    ||               ";
	gotoXY(60, 12); std::cout << "                           | |         ||               ";
	gotoXY(60, 13); std::cout << "                _______  ooooooo       ||               ";
	gotoXY(60, 14); std::cout << "               /       \\oooooooooo     ||               ";
	gotoXY(60, 15); std::cout << "              /         \\ooooooooo \\___||               ";
	gotoXY(60, 16); std::cout << "             |    / \\    |oooooooo\\____o8               ";
	gotoXY(60, 17); std::cout << "             |   | O |   |oooooooo     ||               ";
	gotoXY(60, 18); std::cout << "             |    \\ /    |========     ||               ";
	gotoXY(60, 19); std::cout << "              \\         /        |     ||               ";
	gotoXY(60, 20); std::cout << "               \\_______/|   /\\   |     ||               ";
	gotoXY(60, 21); std::cout << "                        |__|  |__|     ||               ";
	gotoXY(60, 22); std::cout << "                        /__\\  /__\\     ||               ";
	gotoXY(60, 23); std::cout << "                                \"Size isn't everything\" ";
	return;
}

void printBoss2() //spider boss
{
	gotoXY(60, 6);  std::cout << "                                           \\_\\\\  //_/   ";
	gotoXY(60, 7);  std::cout << "    __    \"KSSPLKRSSLJSSRRRR!\"              .'/()\\'.    ";
	gotoXY(60, 8);  std::cout << " | /  \\ |                                    \\\\  //     ";
	gotoXY(60, 9);  std::cout << "\_\\  //_/              ,-'\"\"\"\"\"\"-,                     ";
	gotoXY(60, 10); std::cout << " .'/()\\'.       ,\"\"-,,-'.         ',                    ";
	gotoXY(60, 11); std::cout << "  \\\\  //     ,-'\"'-,-,,'.  '-,\"\",-'  ',-'\"-,            ";
	gotoXY(60, 12); std::cout << "         ,-'\",,-'\\. \\,'.  ,-'_'-,  ,-',-\"'-,'-,         ";
	gotoXY(60, 13); std::cout << "     ,-,-',-'\\ \\,-'\\ '-,          ,-',-'.,-', '-,'-,    ";
	gotoXY(60, 14); std::cout << "   ,' ,',' ..-\\ \\.'..\\/,- 'oooo' -,\\/ '-,'-,  '-,  ',   ";
	gotoXY(60, 15); std::cout << "     ,',' ..-' '-, ,-''-, .OOOO. ,-''-, ,-''- .. ',     ";
	gotoXY(60, 16); std::cout << "          '    -' '     ''(/\"(/\"''     ' '-             ";
	gotoXY(60, 17); std::cout << "                                                        ";
	gotoXY(60, 18); std::cout << "                                                        ";
	gotoXY(60, 19); std::cout << "                                                        ";
	gotoXY(60, 20); std::cout << "     Ha, you thought the little ones were bad.   //    \\";
	gotoXY(60, 21); std::cout << "                                                 '.\()/.";
	gotoXY(60, 22); std::cout << "   //  \\\\                                       / //  \\\\";
	gotoXY(60, 23); std::cout << "  '.\\()/.'                                       | \\__/ ";
	return;
}

void printBoss3() //shopkeeper
{
	gotoXY(60, 6);  std::cout << "                     _,.-----.,_                        ";
	gotoXY(60, 7);  std::cout << "  \"You've         ,.'''        \" - ,                    ";
	gotoXY(60, 8);  std::cout << " bothered me    ,'                   '.                 ";
	gotoXY(60, 9);  std::cout << "   for the    ,'                       '                ";
	gotoXY(60, 10); std::cout << " last time!\" /                          \\_              ";
	gotoXY(60, 11); std::cout << "             ;     -.                     `\\            ";
	gotoXY(60, 12); std::cout << "             |       |                    .             ";
	gotoXY(60, 13); std::cout << "            ;       ,'  ,                . |            ";
	gotoXY(60, 14); std::cout << "            |       '  /'-,__,.   ,.__ ,', .'           ";
	gotoXY(60, 15); std::cout << "             |         |:    .'   |:    .|              ";
	gotoXY(60, 16); std::cout << "              ;         \\:.._./    ':_..:/ `.           ";
	gotoXY(60, 17); std::cout << "               \\  ,-'           |\\_         `\\          ";
	gotoXY(60, 18); std::cout << "                `f              '/`>                    ";
	gotoXY(60, 19); std::cout << "                  |              '  `     . _,/         ";
	gotoXY(60, 20); std::cout << "                   \\_          _   _    .-.]            ";
	gotoXY(60, 21); std::cout << "                      ""----./` \\,' ',`\\'  \\            ";
	gotoXY(60, 22); std::cout << "  Karen the                 `\\  /\\  /\\  /  /            ";
	gotoXY(60, 23); std::cout << "  Shopkeeper                  \\/  \\/  \\/ \\/             ";
	return;
}