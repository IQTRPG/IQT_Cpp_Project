#include "intro.h"
#include "spaceMap.h"

int main() 
{
	InterStellar_Idiot idiot;
	Space_Ranger ranger;
	CloudTrooper cloud;
	Intro();
	spaceMap();
	shop(idiot, ranger, cloud);
	while (1);
}

//known issues
//-display.h - change weapon needs to be altered to the new weapons, and set displayed data to the player