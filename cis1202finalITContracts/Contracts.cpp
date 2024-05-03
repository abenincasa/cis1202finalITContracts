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
#include <iomanip>

int ctID = 0;
string ctName = "";
double ctStartDate = 0;
double ctEndDate = 0;
double ctCost = 0;

void Contracts::displayCTInfo() {
	cout << setprecision(2) << fixed << showpoint;
	cout << endl;
	cout << endl;
	cout << left << setw(12) << "Cont ID#" << left << setw(30) << "Cont Name" << left << setw(10) << "Start" << left << setw(10) << "End" << left << setw(10) << "Cost($)" << endl;
	cout << "-------------------------------------------------------------------------\n";
	cout << left << setw(12) << ctID;
	cout << left << setw(30) << ctName;
	cout << left << setw(10) << ctStartDate;
	cout << left << setw(10) << ctEndDate;
	cout << left << setw(10) << ctCost;

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
