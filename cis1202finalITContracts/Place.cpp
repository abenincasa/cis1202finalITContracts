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
#include <iomanip>

int lcID = 0;
string lcLocation = "";
int lcSFt = 0;

void Place::displayCTInfo() {
	Contracts::displayCTInfo();					// call base class display function
	cout << setprecision(2) << fixed << showpoint;
	cout << endl;
	cout << endl;
	cout << left << setw(12) << "Loc ID#" << left << setw(30) << "Loc Location" << left << setw(10) << "Loc Sqr Feet" << endl;
	cout << "-------------------------------------------------------\n";
	cout << left << setw(12) << lcID;
	cout << left << setw(30) << lcLocation;
	cout << left << setw(10) << lcSFt;
	cout << endl;
	cout << endl;
	
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
