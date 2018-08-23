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

void color_black()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), black);
}
void color_blue()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), dark_blue);
}
void color_green()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), dark_green);
}
void color_cyan()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), dark_cyan);
}
void color_red()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), dark_red);
}
void color_megenta()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), dark_magenta);
}
void color_yellow()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), dark_yellow);
}
void color_gray()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), dark_gray);
}

void color_light_blue()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), light_blue);
}
void color_light_green()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), light_green);
}
void color_light_cyan()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), light_cyan);
}
void color_light_red()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), light_red);
}
void color_light_megenta()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), light_magenta);
}
void color_light_yellow()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), light_yellow);
}
void color_light_gray()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), light_gray);
}
void colorReset()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), white);
}