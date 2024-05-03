/*
Anthony (Tony) Benincasa 5/2/2024 CIS1202.N01
Week 16 Final project
Trash Information Technologies
Person, Place and Things (PP&T) Contracts
This program will
*/

#include "Contracts.h"
#include "Person.h"
#include <string>
#include <iostream>
#include <iomanip>

int pID = 0;
string pSkill = "";
int pYearsExp = 0;
char pHire =' ';


void Person::displayCTInfo() {
	Contracts::displayCTInfo();					// call base class display function
	cout << setprecision(2) << fixed << showpoint;
	cout << endl;
	cout << endl;
	cout << left << setw(12) << "Per ID#" << left << setw(30) << "Per Skill" << left << setw(10) << "Yrs Exp" << left << setw(10) << "Hire?" << endl;
	cout << "-----------------------------------------------------------------\n";
	cout << left << setw(12) << pID;
	cout << left << setw(30) << pSkill;
	cout << left << setw(10) << pYearsExp;
	cout << left << setw(10) << pHire;
	cout << endl;
	cout << endl;
	
}

void Person::setPID(int i) {
	pID = i;
}

void Person::setPSkill(string s) {
	pSkill = s;
}

void Person::setPYearsExp(int exp) {
	pYearsExp = exp;
}

void Person::setPHire(char h) {
	pHire = h;
}

