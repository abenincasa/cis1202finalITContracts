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

int pID = 0;
string pSkill = "";
int pYearsExp = 0;
char pHire =' ';


void Person::displayCTInfo() {
	Contracts::displayCTInfo();					// call base class display function
	cout << "Person ID:" << pID << endl;
	cout << "Person Skill: " << pSkill << endl;
	cout << "Person Years of Experience: " << pYearsExp << endl;
	cout << "Hire?: " << pHire << endl;
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

