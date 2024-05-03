/*
Anthony (Tony) Benincasa 5/2/2024 CIS1202.N01
Week 16 Final project
Trash Information Technologies
Person, Place and Things (PP&T) Contracts
This program will
*/

#ifndef THING_H
#define THING_H
#include "Contracts.h"
#include <string>
#include <iostream>
using namespace std;

class Thing : public Contracts
{
protected:
	int thID;
	string thManufacturer;
	string thModel;
	int thYearPurch;
	int thYearsLife;
public:
	Thing() {
		thID=0;
		thManufacturer= "ACME";
		thModel="Space Modulator";
		thYearPurch=1970;
		thYearsLife=1;
	}
	Thing(int i, string mft, string mod, int yP, int yL) {
		thID = i;
		thManufacturer = mft;
		thModel = mod;
		thYearPurch = yP;
		thYearsLife = yL;
	}

	// getters
	int getThID() const
	{ return thID; }

	string getThManufacturer() const
	{ return thManufacturer; }

	string getThModel() const
	{ return thModel; }

	int getThYearPurch() const
	{ return thYearPurch; }

	int getThYearsLife() const
	{ return thYearsLife; }

	void displayCTInfo();

	//setters
	void setThID(int);

	void setThManufacturer(string);

	void setThModel(string);

	void setThYearPurch(int);

	void setThYearsLife(int);

};

#endif

