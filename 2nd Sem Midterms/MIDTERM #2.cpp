#include <iostream>

using namespace std;

// Defining Functions
void setName(string name[], int size);
void setID(string name[], int id[], int size);
void printNameID(string name[], int id[], int size) ;

int main () 
{
	// Defining Variables
	string studentsName[6];
	int studentID[6];
	
	setName(studentsName, 6);
	setID(studentsName, studentID, 6);
	printNameID(studentsName, studentID, 6);
	
	return 0;
}

// Functions
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
void printNameID(string name[], int id[], int size) {
	cout << "Student Name\tID Number\n";
	for (int i = 0; i < size; i++) {
		cout << name[i] << "\t\t" << id[i] << endl;
	}
}

