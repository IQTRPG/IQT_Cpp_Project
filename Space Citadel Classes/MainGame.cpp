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

void typeIt(string it, int x, bool y);

int main()
{
	//hold the name to pass the name
	int selection;
	string name;

	//begin the story
	string it = "The year is 4018. The human race has crossed into the final frontier, and discovered that space wasn't very lonely.";
	typeIt(it, 75, 1);
	it = "Indeed, it was populated with all manner of beings. One such was the famous Cap'n Slap. A renowned space pirate, he had quit his less - than noble career in favor of a better one - being a game host. You are…… who are you again ?";
	typeIt(it, 75, 1);
	cout << "_SELECT NAME_" << endl;
	cout << "1.) Greasy McFry" << endl;
	cout << "2.) XxTotallyLegit420xX" << endl;
	cout << "3.) I Love the Space Force" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1:
		name = "Greasy McFry";
		break;
	case 2:
		name = "XxTotallyLegit420xX";
		break;
	case 3:
		name = "I Love the Space Force";
		break;
	default:
		cout << "since you cant pick between 1, 2, or 3, you get to be named, 'Intergalactic Idiot'" << endl;
		name = "Intergalactic Idiot";
		break;
	}

	cout << "Ah, " << name << ".What is your story ?" << endl;
	cout << "_SELECT USELESS BACKGROUND_" << endl;
	cout << "1.) I am a Veteran of the United States Space Force." << endl;
	cout << "2.) I am a masked Vigilante from Go- I mean Space Detroit." << endl;
	cout << "3.) I am a random person with some boring backstory." << endl;
	cin >> selection;

	switch (selection)
	{
	case 1:
		break;
	case 2:
		break;
	case 3: //suprise! no one cares about the background!
		break;
	default:
		break;
	}
	
	it = "Oh. That’s….. nice? Either way, welcome to Cap’n Slap’s Space Citadel, the most popular game show in 4 quadrants! Cap’n Slap has invited you to this somewhat lovely place to try and earn fame and glory! And maybe not die!";
	typeIt(it, 75, 1);
	cout << "_SELECT CLASS_" << endl;
	cout << "1.) Inter-Galactic Idiot" << endl;
	cout << "2.) Space-Ranger" << endl;
	cout << "3.) CloudTrooper" << endl;
	cin >> selection;

	//player selection done right
	Player Selected;

	//now create the actual player with their name
	switch(selection)
	{
	case 1:
		Selected.Name = name;
		break;
	case 2:
		Selected.Name = name;
		break;
	case 3:
		Selected.Name = name;
		break;
	default:
		cout << "Your lack of choosing one of three numbers is.... disturbing. We'll just go with Inter-Stellar Idiot " << endl;
		Selected.Name = name;
		selection = 1;
		break;
	}

	//create the starting items
	Stick stickyStick;
	RedPotion HealthUp;
	Bucket bucket;

	//player creation yo
	if (selection == 1)
	{
		InterStellar_Idiot Player1;
		Player1.Name = name;
		
		//add the starting items
		Player1.Backpack[1] = stickyStick;
		Player1.Backpack[2] = HealthUp;
		Player1.Backpack[3] = bucket;
	}
	else if (selection == 2)
	{
		Space_Ranger Player1;
		Player1.Name = name;

		//add the starting items
		Player1.Backpack[1] = stickyStick;
		Player1.Backpack[2] = HealthUp;
		Player1.Backpack[3] = bucket;
	}
	else if (selection == 3)
	{
		CloudTrooper Player1;
		Player1.Name = name;

		//add the starting items
		Player1.Backpack[1] = stickyStick;
		Player1.Backpack[2] = HealthUp;
		Player1.Backpack[3] = bucket;
	}
	
	it = "-Cap’n Slap has arrived to bid you greetings! Or farewell! Or both!-";
	typeIt(it, 75, 1);
	it = "AAAARRRGH, oh god how do they do that? As you know I’m Cap’n Slap. I… won’t explain how I got that title. Just know I have several Space-Restraining orders. Anyway, welcome to the Space Citadel. I’ll be watching your progress from the Space-Television. Good Luck!";
	typeIt(it, 75, 1);
	cout << "_PRESS ENTER TO....... ENTER THE DUNGEON_" << endl;


	return 0;
}

//function for making our text lines type out and make it more enjoyable.
void delay(int x)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(x));
}

// Write out char by char with a delay
//example: typeIt("Hello world", 1000, 1;
//                ^ string       ^ms   ^add endline
void typeIt(string it, int x, bool y)
{
	for (auto i = 0; i < it.length(); i++)
	{
		std::cout << it[i];
		delay(x);
	}
	if (y == true)
		std::cout << std::endl;
}
