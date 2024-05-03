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
#include <iomanip>

int thID = 0;
string thManufacturer="";
string thModel="";
int thYearPurch=0;
int thYearsLife=0;

void Thing::displayCTInfo() {
	Contracts::displayCTInfo();					// call base class display function

	cout << setprecision(2) << fixed << showpoint;
	cout << endl;
	cout << endl;
	cout << left << setw(12) << "Eq ID#" << left << setw(30) << "Manufacturer" << left << setw(20) << "Model" << left << setw(10) << "Yr Purch" << left << setw(10) << "Yrs Life" << endl;
	cout << "--------------------------------------------------------------------------------------\n";
	cout << left << setw(12) << thID;
	cout << left << setw(30) << thManufacturer;
	cout << left << setw(20) << thModel;
	cout << left << setw(10) << thYearPurch;
	cout << left << setw(10) << thYearsLife;
	cout << endl;
	cout << endl;

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