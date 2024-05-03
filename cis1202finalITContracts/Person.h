/*
Anthony (Tony) Benincasa 5/2/2024 CIS1202.N01
Week 16 Final project
Trash Information Technologies
Person, Place and Things (PP&T) Contracts
This program will
*/

#ifndef PERSON_H
#define PERSON_H
#include "Contracts.h"
#include <string>
#include <iostream>
using namespace std;

class Person : public Contracts
{
protected:
	int pID;
	string pSkill;
	int pYearsExp;
	char pHire;

public:
	Person() {
		pID = 0;
		pSkill="Computers";
		pYearsExp=0;
		pHire='N';
	}
	Person(int i, string s, int exp, char h) {
		pID = i;
		pSkill = s;
		pYearsExp = exp;
		pHire = h;
	}

	// getters
	int getPID() const
	{ return pID; }

	string getPSkill() const
	{ return pSkill; }

	int getPYearsExp() const
	{ return pYearsExp; }

	char getPHire() const
	{ return pHire;}

	void displayCTInfo();

	//setters
	void setPID(int);
	
	void setPSkill(string);

	void setPYearsExp(int);

	void setPHire(char);

};

#endif

