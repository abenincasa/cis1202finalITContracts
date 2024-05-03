/*
Anthony (Tony) Benincasa 5/2/2024 CIS1202.N01
Week 16 Final project
Trash Information Technologies
Person, Place and Things (PP&T) Contracts
This program will 
*/

#include "persLib.h"
#include "Contracts.h"
#include "Person.h"
#include "Place.h"
#include "Thing.h"

// function prototypes
int menu();
void createPersonContract();
void createPlaceContract();
void createThingContract();
Contracts createContractHeader();

int main() {
	// declare and intialize variables
	int	choice = 0;

	do
	{
		choice = menu();

		if (choice != 5)
		{
			switch (choice)
			{
			case 1:
				createPersonContract();
				break;
			case 2:
				createPlaceContract();
				break;
			case 3:
				createThingContract();
				break;
			case 4:
				cout << "Option4 chosen";
				break;
			}
		}
	} while (choice != 5);

	endProg();

}
int menu() {
	// declare variable
	int selection;
	cout << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	cout << "^Menu -- PP&T Contracts          ^\n";
	cout << "^1: Enter Staffing Contract      ^\n";
	cout << "^2: Enter Site Location Contract ^\n";
	cout << "^3: Enter Equipment Contract     ^\n";
	cout << "^4: Display All Contracts        ^\n";
	cout << "^5: EXIT                         ^\n";
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	cout << "^TRASH INFORMATION TECHNOLOGIES  ^\n";
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";


	selection = validateInt("", 1, 5);

	return selection;
}

void createPersonContract() {
	// declare and initialize variables
	int userPID=0, userPYearsExp=0;
	string userPSkill="";
	char userPHire = 'N';
	
	Contracts c1 = createContractHeader();
	
	userPID = validateInt("PERSON ID Number: ");
	while (userPID <= 0) {
		cout << "ID Number must be greater than 0!\n";
		userPID = validateInt("PERSON ID Number: ");
	}

	cout << "PERSON Skillset: ";
	cin.ignore();
	getline(cin, userPSkill);

	userPYearsExp= validateInt("PERSON Years of Experience: ");
	while (userPYearsExp < 0) {
		cout << "Years of Experience cannot be negative!\n";
		userPYearsExp = validateInt("PERSON Years of Experience: ");
	}
	
	cout << "PERSON Hire?: ";
	cin >> userPHire;
	while (userPHire != 'Y' && userPHire != 'y' && userPHire != 'N' && userPHire != 'n') {
		cout << "Error, enter Y or N\n";
		cout << "PERSON Hire?: ";
		cin >> userPHire;
	}

	Person p1 = Person(userPID, userPSkill, userPYearsExp, userPHire);
	
	p1.setCTID(c1.getCTID());
	p1.setCTName(c1.getCTName());
	p1.setCTStartDate(c1.getCTStartDate());
	p1.setCTEndDate(c1.getCTEndDate());
	p1.setCTCost(c1.getCTCost());
	p1.displayCTInfo();

}

void createPlaceContract() {
	// declare and initialize variables
	int userLcID = 0, userLcSFt = 0;
	string userLcLocation = "";

	Contracts c1 = createContractHeader();
	
	userLcID = validateInt("LOCATION ID Number: ");
	while (userLcID <= 0) {
		cout << "ID Number must be greater than 0!\n";
		userLcID = validateInt("LOCATION ID Number: ");
	}

	cout << "LOCATION Location: ";
	cin.ignore();
	getline(cin, userLcLocation);

	userLcSFt = validateInt("LOCATON Square Feet: ");
	while (userLcSFt < 0) {
		cout << "Location Square Footage cannot be negative!\n";
		userLcSFt = validateInt("LOCATION Square Feet: ");
	}

	Place pl1 = Place(userLcID, userLcLocation, userLcSFt);
	pl1.setCTID(c1.getCTID());
	pl1.setCTName(c1.getCTName());
	pl1.setCTStartDate(c1.getCTStartDate());
	pl1.setCTEndDate(c1.getCTEndDate());
	pl1.setCTCost(c1.getCTCost());
	pl1.displayCTInfo();
}

void createThingContract() {
	// declare and initialize variables
	int userThID = 0, userThYearPurch = 0, userThYearsLife=0;
	string userThManufacturer = "", userThModel="";

	Contracts c1 = createContractHeader();

	userThID = validateInt("EQUIPMENT ID Number: ");
	while (userThID <= 0) {
		cout << "ID Number must be greater than 0!\n";
		userThID = validateInt("EQUIPMENT ID Number: ");
	}

	cout << "EQUIPMENT Manufacturer: ";
	cin.ignore();
	getline(cin, userThManufacturer);

	cout << "EQUIPMENT Model: ";
	getline(cin, userThModel);

	userThYearPurch = validateInt("EQUIPMENT Year Purchased: ");
	while (userThYearPurch < 2000) {
		cout << "EQUIPMENT must have been purchased in the 21st Century!\n";
		userThYearPurch = validateInt("EQUIPMENT Year Purchased: ");
	}

	userThYearsLife = validateInt("EQUIPMENT Years of Life: ");
	while (userThYearsLife < 0) {
		cout << "EQUIPMENT Years of Life cannot be negative!\n";
		userThYearsLife = validateInt("EQUIPMENT Years of Life: ");
	}

	Thing th1 = Thing(userThID, userThManufacturer, userThModel, userThYearPurch, userThYearsLife);
	th1.setCTID(c1.getCTID());
	th1.setCTName(c1.getCTName());
	th1.setCTStartDate(c1.getCTStartDate());
	th1.setCTEndDate(c1.getCTEndDate());
	th1.setCTCost(c1.getCTCost());
	th1.displayCTInfo();

}

Contracts createContractHeader() {
	// declare and initialize variables
	int userCTID = 0, qrtrCheckInt = 0;
	double userCTStart = 0, userCTEnd = 0, userCTCost = 0, qrtrCheckDbl = 0;
	string userCTName = "";
	bool qrtrCheckB = false;

	userCTID = validateInt("Contract ID Number: ");
	while (userCTID <= 0) {
		cout << "ID Number must be greater than 0!\n";
		userCTID = validateInt("Contract ID Number: ");
	}
	cout << "Contract Name: ";
	cin.ignore();
	getline(cin, userCTName);

	// collecting and validating dates values							
	userCTStart = validateDouble("Contract Start, Year.Qtr (Ex. 2024.25): ");			// Start Date Check
	while (userCTStart <= 2000) {
		cout << "Start Date must be in the 21st Century!\n";
		userCTStart = validateDouble("Contract Start, Year.Qtr (Ex. 2024.25): ");
	}
	qrtrCheckInt = userCTStart;
	qrtrCheckDbl = userCTStart - qrtrCheckInt;
	while (!qrtrCheckB) {
		if (qrtrCheckDbl != 0.0 && qrtrCheckDbl != 0.25 && qrtrCheckDbl != 0.5 && qrtrCheckDbl != 0.75) {
			cout << "Invalid Quarter Designation, Date decimal must be 0.0, 0.25, 0.5 or 0.75!\n";
			userCTStart = validateDouble("Contract Start, Year.Qtr (Ex. 2024.25): ");
			qrtrCheckInt = userCTStart;
			qrtrCheckDbl = userCTStart - qrtrCheckInt;
		}
		else qrtrCheckB = true;
	}
	qrtrCheckB = false;
	qrtrCheckInt = 0;
	qrtrCheckDbl = 0;

	userCTEnd = validateDouble("Contract End, Year.Qtr (Ex. 2024.25): ");				// End Date Check
	while (userCTEnd < userCTStart) {
		cout << "End Date must be same as or after Start Date!\n";
		userCTEnd = validateDouble("Contract End, Year.Qtr (Ex. 2024.25): ");
	}
	qrtrCheckInt = userCTEnd;
	qrtrCheckDbl = userCTEnd - qrtrCheckInt;
	while (!qrtrCheckB) {
		if (qrtrCheckDbl != 0.0 && qrtrCheckDbl != 0.25 && qrtrCheckDbl != 0.5 && qrtrCheckDbl != 0.75) {
			cout << "Invalid Quarter Designation, Date decimal must be 0.0, 0.25, 0.5 or 0.75!\n";
			userCTEnd = validateDouble("Contract End, Year.Qtr (Ex. 2024.25): ");
			qrtrCheckInt = userCTEnd;
			qrtrCheckDbl = userCTEnd - qrtrCheckInt;
		}
		else qrtrCheckB = true;
	}
	qrtrCheckB = false;
	qrtrCheckInt = 0;
	qrtrCheckDbl = 0;

	userCTCost = validateDouble("Contract Cost($): ");
	while (userCTCost < 0) {
		cout << "Cost cannot be negative!\n";
		userCTCost = validateDouble("Contract Cost($): ");
	}

	Contracts c1 = Contracts(userCTID, userCTName, userCTStart, userCTEnd, userCTCost);

	return c1;

}