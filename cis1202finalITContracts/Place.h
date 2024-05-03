/*
Anthony (Tony) Benincasa 5/2/2024 CIS1202.N01
Week 16 Final project
Trash Information Technologies
Person, Place and Things (PP&T) Contracts
This program will
*/

#ifndef PLACE_H
#define PLACE_H
#include "Contracts.h"
#include <string>
#include <iostream>
using namespace std;

class Place : public Contracts
{
protected:
	int lcID;
	string lcLocation;
	int lcSFt;

public:
	Place() {
		lcID = 0;
		lcLocation = "Mars";
		lcSFt = 0;
	}
	Place(int i, string l, int sf) {
		lcID = i;
		lcLocation = l;
		lcSFt = sf;
	}

	// getters
	int getLcID() const
	{ return lcID; }

	string getLcLocation() const
	{ return lcLocation; }

	int getLcSFt() const
	{ return lcSFt; }

	void displayCTInfo();

	//setters
	void setLcID(int);

	void setLcLocation(string);

	void setLcSFt(int);

};

#endif

