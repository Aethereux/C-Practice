#include <iostream>

using namespace std;
/* 
******************************************************************************
Write a program that accepts a one-digit number and then outputs that number
in words. if the number is more than one digit or is negative, the program 
should print an error message
******************************************************************************
*/
int main() {
	int input;
	
	cout << "Enter a one-digit number: ";
	cin >> input;
	
	switch(input) {
		case 1:
		cout <<	"The Number is one";
			break;
		case 2:
		cout <<	"The Number is two";
			break;
		case 3:
		cout <<	"The Number is three";
			break;
		case 4:
		cout <<	"The Number is four";
			break;
		case 5:
		cout <<	"The Number is five";
			break;
		case 6:
		cout <<	"The Number is six";
			break;
		case 7:
		cout <<	"The Number is seven";
			break;
		case 8:
		cout <<	"The Number is eight";
			break;
		case 9:
		cout <<	"The Number is nine";
			break;
	}
	
	if (input >= 10) {
	cout  << "Invalid Entry! Program Terminating!!!";
	}
	
	return 0;
	
}
