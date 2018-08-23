
#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>
#include <Mmsystem.h>
#pragma comment (lib, "winmm.lib")


char getButtonPress(JOYINFOEX &joyinfoex)
{
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
		return 'J';
	}
	else if (joyinfoex.dwButtons == 32)
	{
		return 'K';
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
	return 0;
}