//Andy Ninh
//July 12, 2025
//HW 1 - Soda Master
//This is a Soda Master program that will calcuate the total volume of soda and the cup size.

#include <iostream>
using namespace std;

const double CAN_VOLUME = 0.355;	//Liters in a 12-ouce can
const int BOTTLE_VOLUME = 2;		//Bottles are 2 liters
const double US_CUP = 4.2268;		//US Cups per liter (rounded)

int main()
{
	int cansPerPack, packs, twoLiters;				//Input for cans, packs and bottles
	double canSodaVolume, bottleVolume, totalVolume, usCups;	//Calculation and output
	
	//Get input - the amount of soda in cans and bottles
	cout << "Welcome to Soda Master!\n\n";
	cout << "How many multi-packs do you have? ";
	cin >> packs;
	cout << "And are tese 4, 6, 8, 12, or 24-packs? ";
	cin >> cansPerPack;
	cout << "How many 2-liter bottles do you have? ";
	cin >> twoLiters;
	
	//Calculate
	canSodaVolume = packs * cansPerPack * CAN_VOLUME;
	bottleVolume = twoLiters * BOTTLE_VOLUME;
	totalVolume = canSodaVolume + bottleVolume;
	usCups = totalVolume * US_CUP;

	//Output
	cout << "\nYou have a total of " << totalVolume << " liters of soda, ";
	cout << "\nWhich is " << usCups << " cups." << endl;
	
	return 0;
}

