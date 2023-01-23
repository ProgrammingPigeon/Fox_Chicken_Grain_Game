#pragma once
#include <iostream>
#include <vector>
#include "definitions.h"

class CGame
{
private:
	// Private member variables
	std::vector<EItem> mNorthItems;
	std::vector<EItem> mSouthItems;
	ERiverBank FarmerLocation;
public:
	// Constructor
	CGame();
	// Destructor
	~CGame();
	// Public Member Methods
	void displayBanks();
	void displayInstructions();
	bool isWon();
	bool isLost(std::vector<EItem> withoutFarmer);
};

