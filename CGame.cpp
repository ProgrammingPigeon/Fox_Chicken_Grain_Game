#include "CGame.h"

CGame::CGame()
{
	FarmerLocation = south;
	mSouthItems = { fox, chicken, grain };
}

CGame::~CGame()
{
	// Empty Destructor
}

void CGame::displayBanks()
{
	// Clear Screen
	std::system("cls");

	// Title to show South Bank
	std::cout << "South Bank:" << std::endl;
	// For loop to display all items at South Bank
	if (mSouthItems.size() > 0)
	{
		for (auto it = mSouthItems.begin(); it != mSouthItems.end(); it++)
		{
			switch (*it)
			{
			case 0:
				std::cout << "Fox" << std::endl;
				break;
			case 1:
				std::cout << "Chicken" << std::endl;
				break;
			case 2:
				std::cout << "Grain" << std::endl;
				break;
			default:
				std::cout << "ERROR" << std::endl;
				break;
			}
		}
	}
	else
	{
		std::cout << "EMPTY." << std::endl;
	}
	// Spacer
	std::cout << std::endl;
	// Title to show North Bank
	std::cout << "North Bank:" << std::endl;
	// For loop to display all items at North Bank
	if (mNorthItems.size() > 0)
	{
		for (auto it = mNorthItems.begin(); it != mNorthItems.end(); it++)
		{
			switch (*it)
			{
			case 0:
				std::cout << "Fox" << std::endl;
				break;
			case 1:
				std::cout << "Chicken" << std::endl;
				break;
			case 2:
				std::cout << "Grain" << std::endl;
				break;
			default:
				std::cout << "ERROR" << std::endl;
				break;
			}
		}
	}
	else
	{
		std::cout << "EMPTY." << std::endl;
	}
	// Spacer
	std::cout << std::endl;
	// Farmer's location to display
	std::cout << "Farmer's Location:" << std::endl;
	switch (FarmerLocation)
	{
	case 0:
		std::cout << "North" << std::endl;
		break;
	case 1:
		std::cout << "South" << std::endl;
		break;
	default:
		std::cout << "ERROR" << std::endl;
	}
}

void CGame::displayInstructions()
{
	std::cout << "*****************  How to play... *****************" << std::endl << std::endl;

	std::cout << "-------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "A particularly stupid farmer must get his fox, chicken, and grain safely across a river, from the south" << std::endl;
	std::cout << "river bank to the north bank. The farmer makes trips across the river in a little boat, but can only" << std::endl;
	std::cout << "take at most one item with him on each trip. If he leaves the fox and the chicken alone together," << std::endl;
	std::cout << "the fox will eat the chicken! If he leaves the chicken alone with the grain, the chicken will eat the" << std::endl;
	std::cout << "grain. The player must help the farmer by deciding what he should take with him (or nothing) on" << std::endl;
	std::cout << "each trip. Once all three items are on the north bank, the game is won. If anything gets eaten, the" << std::endl;
	std::cout << "game is lost." << std::endl;
	std::cout << "-------------------------------------------------------------------------------------------------------" << std::endl;
}

bool CGame::isWon()
{
	if (mNorthItems.size() == 3)
	{
		return true;
	}
}

bool CGame::isLost(std::vector<EItem> withoutFarmer)
{
	for (auto it = mSouthItems.begin(); it != mSouthItems.end(); it++)
	{
		//
	}
	return false;
}
