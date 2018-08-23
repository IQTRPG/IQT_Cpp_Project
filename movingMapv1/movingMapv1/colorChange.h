#pragma once
#include <windows.h>
#include <limits>


enum {
	black,
	dark_blue,
	dark_green,
	dark_cyan,
	dark_red,
	dark_magenta,
	dark_yellow,
	light_gray,
	dark_gray,
	light_blue,
	light_green,
	light_cyan,
	light_red,
	light_magenta,
	light_yellow,
	white
};

void color()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), dark_gray);
}
void colorReset()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), white);
}