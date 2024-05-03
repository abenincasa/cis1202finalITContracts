/*
Anthony (Tony) Benincasa 5/2/2024 CIS1202.N01
Week 16 Final project
Trash Information Technologies
Person, Place and Things (PP&T) Contracts
This program will
*/

#include "Contracts.h"
#include "Thing.h"
#include <string>
#include <iostream>

int thID = 0;
string thManufacturer="";
string thModel="";
int thYearPurch=0;
int thYearsLife=0;

void Thing::displayCTInfo() {
	Contracts::displayCTInfo();					// call base class display function
	cout << "Contract Equipment ID:" << thID << endl;
	cout << "Manufacturer: " << thManufacturer << endl;
	cout << "Model: " << thModel << endl;
	cout << "Year Purchased: " << thYearPurch << endl;
	cout << "Years of Life: " << thYearsLife << endl;
}

void Thing::setThID(int i) {
	thID = i;
}

void Thing::setThManufacturer(string mft) {
	thManufacturer = mft;
}

void Thing::setThModel(string mod) {
	thModel = mod;
}

void Thing::setThYearPurch(int yP) {
	thYearPurch = yP;
}

void Thing::setThYearsLife(int yL) {
	thYearsLife = yL;
}