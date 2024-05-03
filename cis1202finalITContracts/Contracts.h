/*
Anthony (Tony) Benincasa 5/2/2024 CIS1202.N01
Week 16 Final project
Trash Information Technologies
Person, Place and Things (PP&T) Contracts
This program will
*/

#ifndef CONTRACTS_H
#define CONTRACTS_H
#include <string>
#include <iostream>
using namespace std;

class Contracts
{
protected:
	int ctID;
	string ctName;
	double ctStartDate;
	double ctEndDate;
	double ctCost;

public:
	Contracts() {
		ctID = 0;
		ctName = "Bogus";
		ctStartDate = 1970.00;
		ctEndDate = 1971.00;
		ctCost = 1000000;
	}
	Contracts(int i, string n, double sD, double eD, double cst) {
		ctID = i;
		ctName = n;
		ctStartDate = sD;
		ctEndDate = eD;
		ctCost = cst;
	}

	// getters
	int getCTID() const
	{ return ctID; }
	
	string getCTName() const
	{ return ctName; }
		
	double getCTStartDate() const
	{ return ctStartDate; }

	double getCTEndDate() const
	{ return ctEndDate; }

	double getCTCost() const
	{ return ctCost; }

	void displayCTInfo();

	//setters
	void setCTID(int);

	void setCTName(string);

	void setCTStartDate(double);

	void setCTEndDate(double);

	void setCTCost(double);

};

#endif

