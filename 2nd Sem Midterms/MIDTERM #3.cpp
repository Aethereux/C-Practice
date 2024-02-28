#include <iostream>

using namespace std;

// Defining Functions
void printNameIdAct(string name[], int id[], int activity[], int size);
void setName(string name[], int size);
void setID(string name[], int id[], int size);
void setScore(string name[], int id[], int activity[], int size);

int main () 
{
	// Defining Variables
    char response = 'Y';
	string studentsName[6];
	int studentID[6];
	int activity[6];
	
	// Calling the Functions
	setName(studentsName, 6);
	setID(studentsName, studentID, 6);
	printNameIdAct(studentsName, studentID, activity, 6);
	
	// Loop on setting Scores and Printing it.
	while (response == 'Y' || response == 'y') {
	setScore(studentsName, studentID, activity, 6);
	printNameIdAct(studentsName, studentID, activity, 6);
	cout << "Try Again? Y/N: "; cin >> response;
		// Ending the Program
	if (response == 'N' || response == 'n')
	cout << "Program Terminated";
		else 
		cout << "Wow. You didn't even put the proper character. Anyways, Program Terminated.";
	}
	
	return 0;
}

// Functions
void printNameIdAct(string name[], int id[], int activity[], int size) {
	cout << "Student Name\tID Number\tActivity1\n";
	for (int i = 0; i < size; i++) {
		cout << name[i] << "\t\t" << id[i] << "\t\t" << activity[i] << endl;
	}
}

void setName(string name[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter the Name of Student: "; cin >> name[i]; 
	}
}

void setID(string name[], int id[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter the ID Number for " << name[i] << ": "; cin >> id[i]; 
	}
}

void setScore(string name[], int id[], int activity[], int size) {
	int score = 0;
	string input;
	bool exist = false;
	cout << "Choose Name or ID: "; cin >> input;
	
	if (input == "Name" || input == "name") {
			string nameInput;
			cout << "Enter Name: "; cin >> nameInput;
			for (int i = 0; i < size; i++)
			{
				if (nameInput == name[i]) {
					cout << "Enter Score: "; cin >> score;	
					activity[i] = score;
					exist = true;
				}
			}
			if (exist == false)
			cout << "Name does not exist. Check the Table.\n";	
		}
		
	if (input == "ID" || input == "id" || input == "Id"){
		int idInput;
			cout << "Enter ID Number: "; cin >> idInput;
			for (int i = 0; i < size; i++)
			{
				if (idInput == id[i]) {
					cout << "Enter Score: "; cin >> score;	
					activity[i] = score;
					exist = true;
				}
			}
			if (exist == false)
			cout << "ID does not exist. Check the Table.\n";
		}	
	}


