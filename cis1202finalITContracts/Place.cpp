/*
Anthony (Tony) Benincasa 5/2/2024 CIS1202.N01
Week 16 Final project
Trash Information Technologies
Person, Place and Things (PP&T) Contracts
This program will
*/

#include "Contracts.h"
#include "Place.h"
#include <string>
#include <iostream>

int lcID = 0;
string lcLocation = "";
int lcSFt = 0;

void Place::displayCTInfo() {
	Contracts::displayCTInfo();					// call base class display function
	cout << "Location ID:" << lcID << endl;
	cout << "Location Name: " << lcLocation << endl;
	cout << "Location Square Feet: " << lcSFt << endl;
}

void Place::setLcID(int i) {
	lcID = i;
}

void Place::setLcLocation(string l) {
	lcLocation = l;
}

void Place::setLcSFt(int sf) {
	lcSFt = sf;
}
