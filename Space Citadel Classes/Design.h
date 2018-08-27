#pragma once
#include <iostream>
#include <string>
#include "Items.h"
using namespace std;

class Design {
public:
	string Name = ""; //name of the weapon, calling a different weapon calls a different design

	//based on the name of the weapon, display something different on burright's screen
	void showWeapon(Weapon wp) {
		//get ready for the mother of all if statements
		if (wp.name == "Iron Blade")
		{
			weaponR1 = "         />_______________________";
			weaponR2 = " [#######[]_______________________>";
			weaponR3 = "         \\>";
			weaponName = "Iron Blade";  // <-- 30 CHARS TOTAL FOR NAME AND DMG COMBINED
			weaponDamage = 7;  // <--------------
		}
		else if (wp.name == "Sticky Stick")
		{
			weaponR1 = "                 ";
			weaponR2 = "            ===============---   ";
			weaponR3 = "    o======//         \\";
			weaponName = "Sticky stick";
			weaponDamage = 2;
		}
		else if (wp.name == "Rusty Metal Probe")
		{
			weaponR1 = "            \\         ";
			weaponR2 = "  O==========E>>>                 ";
			weaponR3 = "            /          ";
			weaponName = "Rusty metal probe";
			weaponDamage = 10;
		}
		else if (wp.name == "Slashy-Boi")
		{
			weaponR1 = "         />__________";
			weaponR2 = " [#######[]________ _ _ _ _ ------->";
			weaponR3 = "         \\>";
			weaponName = "Slashy-Boi";  // <-- 30 CHARS TOTAL FOR NAME AND DMG COMBINED
			weaponDamage = 20;  // <--------------
		}
		else if (wp.name == "Tricera- Glock")
		{
			weaponR1 = "'===='";
			weaponR2 = "/ /'";
			weaponR3 = "~";
			weaponName = "Tricera- Glock";  // <-- 30 CHARS TOTAL FOR NAME AND DMG COMBINED
			weaponDamage = 10;  // <--------------
		}
		else if (wp.name == "Hassel Sawed-Off")
		{
			weaponR1 = "'___________";
			weaponR2 = "/ /'________00'";
			weaponR3 = "~";
			weaponName = "Hassel Sawed-Off";  // <-- 30 CHARS TOTAL FOR NAME AND DMG COMBINED
			weaponDamage = 30;  // <--------------
		}
	}
};