/*
Anthony (Tony) Benincasa 5/2/2024 CIS1202.N01
Week 16 Final project
Trash Information Technologies
Person, Place and Things (PP&T) Contracts
This program will
*/

#include "Contracts.h"
#include <string>
#include <iostream>

int ctID = 0;
string ctName = "";
double ctStartDate = 0;
double ctEndDate = 0;
double ctCost = 0;

void Contracts::displayCTInfo() {
	cout << "Contract Number:" << ctID << endl;
	cout << "Contract Name: " << ctName << endl;
	cout << "Contract Start Date: " << ctStartDate << endl;
	cout << "Contract End Date: " << ctEndDate << endl;
	cout << "Contract Cost: " << ctCost << endl;
}
void Contracts::setCTID(int i) {
	ctID = i;
}

void Contracts::setCTName(string n) {
	ctName = n;
}

void Contracts::setCTStartDate(double sD) {
	ctStartDate = sD;
}

void Contracts::setCTEndDate(double eD) {
	ctEndDate = eD;
}

void Contracts::setCTCost(double cst) {
	ctCost = cst;
}
