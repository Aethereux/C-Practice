#include <iostream>

using namespace std;

// Defining Functions
void printName(string name[], int size);
void setName(string name[], int size);


int main () 
{
	// Defining Variables
	string studentsName[6];
	
	setName(studentsName, 6);
	printName(studentsName,6);
	
	return 0;
}

// Functions
void setName(string name[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter the Name of Student: "; cin >> name[i]; 
	}
}

void printName(string name[], int size) {
	cout << "Student Name\n";
	for (int i = 0; i < size; i++) {
		cout << name[i] << endl;
	}
}
