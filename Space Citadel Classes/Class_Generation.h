#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include "Player.h"
#include "player_sub.h"
#include "Items.h"
#include "item_sub.h"
#include "Enemies.h"
#include "enemy_sub.h"
using namespace std;

//player selection done right
Player Selected;

//create the starting items
Stick stickyStick;
RedPotion HealthUp;
Bucket bucket;

//generate the dungeon key
Key TotallyNotBossKey;

//generating all items
Liqour licker;
GreenPotion PoisonCup;
Sword IronSword;
Cutlass Swashbuckler;
Halberd pointyBoi;
HasselSawedOff hehe;
Glock rockOut;
Scimitar slashySlash;
CanLid TheLid;
ChainMale LinkNotZelda;
MedKit Bandages;
Apple GrannySmith;
Banana nana;
PlateMail instantShip;
FaceDestoryer TaserFace;

//Generate Enemies, up to three duplicates of each enemy type have been generated
SpaceGoblin Goblin1;
SpaceGoblin Goblin2;
SpaceGoblin Goblin3;
SpaceHobGoblin HobbyGobby1;
SpaceHobGoblin HobbyGobby2;
SpaceHobGoblin HobbyGobby3;
SpaceSquirrel Squirrel1;
SpaceSquirrel Squirrel2;
SpaceSquirrel Squirrel3;
SpaceBandit Bandit1;
SpaceBandit Bandit2;
SpaceBandit Bandit3;
BritishRobot Durlec1;
BritishRobot Durlec2;
BritishRobot Durlec3;
Spider SpideyBoi1;
Spider SpideyBoi2;
Spider SpideyBoi3;
Arachne BiteyBoi1;
Arachne BiteyBoi2;
Arachne BiteyBoi3;

//Bosses, currently 4.
CornOnTheGoblin Jerry;
CurrentExpendableBanditLeader Handsome_Bill;
SoMANYLegs Arachnia;
DoctorWhat drWhat;