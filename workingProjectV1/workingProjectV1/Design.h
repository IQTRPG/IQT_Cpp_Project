#pragma once
#include <iostream>
#include <string>
#include "Items.h"
#include "display.h"
using namespace std;

//based on the name of the weapon, display something different on burright's screen
void showWeapon(Item wp) {
	//get ready for the mother of all if statements
	if (wp.itemName == "Sword")
	{
		weaponR1 = "         />_______________________";
		weaponR2 = " [#######[]_______________________>";
		weaponR3 = "         \\>";
		weaponName = "Sword";  // <-- 30 CHARS TOTAL FOR NAME AND DMG COMBINED
		weaponDamage = wp.stat;  // <--------------
	}
	else if (wp.itemName == "Stick")
	{
		weaponR1 = "                 ";
		weaponR2 = "            ===============---   ";
		weaponR3 = "    o======//         \\";
		weaponName = "Stick";
		weaponDamage = wp.stat;
	}
	else if (wp.itemName == "Probe")
	{
		weaponR1 = "            \\         ";
		weaponR2 = "  O==========E>>>                 ";
		weaponR3 = "            /          ";
		weaponName = "Probe";
		weaponDamage = wp.stat;
	}
	else if (wp.itemName == "Scimitar")
	{
		weaponR1 = "         />__________";
		weaponR2 = " [#######[]________ _ _ _ _ ------->";
		weaponR3 = "         \\>";
		weaponName = "Scimitar";  // <-- 30 CHARS TOTAL FOR NAME AND DMG COMBINED
		weaponDamage = wp.stat;  // <--------------
	}
	else if (wp.itemName == "Halberd")
	{
		weaponR1 = "               []";
		weaponR2 = "============== ))--->";
		weaponR3 = "               V";
		weaponName = "Halberd";  // <-- 30 CHARS TOTAL FOR NAME AND DMG COMBINED
		weaponDamage = wp.stat;  // <--------------
	}
	else if (wp.itemName == "Face Destroyer")
	{
		weaponR1 = "'_____________";
		weaponR2 = "/ /'________00'";
		weaponR3 = "~";
		weaponName = "Face Destroyer";  // <-- 30 CHARS TOTAL FOR NAME AND DMG COMBINED
		weaponDamage = wp.stat;  // <--------------
	}
}