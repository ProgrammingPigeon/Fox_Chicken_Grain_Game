/*
	@Author - Dean Howe
	@Date - 23/01/23
	@Program - Fox Chicken Grain game for Extended Exercise Week 2 / Semester 2
*/

#include <iostream>
#include <vector>
#include <Windows.h>
#include "definitions.h"
#include "CGame.h"

int main()
{
	// Change console text colour
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 3);
	// Main Body
	CGame* newGame = new CGame;

	newGame->displayBanks();

}
