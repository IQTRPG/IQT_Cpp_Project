#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>
#include <Mmsystem.h>
#pragma comment (lib, "winmm.lib")


char getButtonPress(JOYINFOEX &joyinfoex)
{
	char a = 0;
	MMRESULT joygetposex_result = joyGetPosEx(JOYSTICKID1, &joyinfoex);
	if (joyinfoex.dwButtons == 1)
	{
		return 'X';
	}
	else if (joyinfoex.dwButtons == 2)
	{
		return 'A';
	}
	else if (joyinfoex.dwButtons == 4)
	{
		return 'B';
	}
	else if (joyinfoex.dwButtons == 8)
	{
		return 'Y';
	}
	else if (joyinfoex.dwButtons == 16)
	{
		return 'J';//left bumper
	}
	else if (joyinfoex.dwButtons == 32)
	{
		return 'K';//right bumper
	}
	else if (joyinfoex.dwButtons == 256)
	{
		return 'E';//select button
	}
	else if (joyinfoex.dwButtons == 512)
	{
		return 'S';//start button
	}

	return 0;
}



char getMovementDirection(JOYINFOEX &joyinfoex)
{
	MMRESULT joygetposex_result = joyGetPosEx(JOYSTICKID1, &joyinfoex);
	if (joyinfoex.dwXpos == 0)
	{
		return 'R';
	}
	else if (joyinfoex.dwXpos == 65535)
	{
		return 'L';
	}
	else if (joyinfoex.dwYpos == 65535)
	{
		return 'D';
	}
	else if (joyinfoex.dwYpos == 0)
	{
		return 'U';
	}
	/////////////////////////////////////////////////////////////
	//default controls
	char b = 0;
	char a = 0;
	std::string input;
	MMRESULT unplugged1 = joyGetPosEx(JOYSTICKID1, &joyinfoex) == JOYERR_UNPLUGGED;
	if (unplugged1 == TRUE)
	{
		while (true)
		{
			//Reverify that the age is of the appropriate type
			std::getline(std::cin, input);
			std::stringstream myStream(input);
			if (myStream >> a)
			{
				break;
			}
			//std::cout << "Invalid number, please try again" << std::endl;
		}
		//a = getchar();
		tolower(a);
		if (a == 'a')
		{
			return 'R';
		}
		else if (a == 'd')
		{
			return 'L';
		}
		else if (a == 'w')
		{
			return 'U';
		}
		else if (a == 's')
		{
			return 'D';
		}
		return 0;
	}

	return 0;
}