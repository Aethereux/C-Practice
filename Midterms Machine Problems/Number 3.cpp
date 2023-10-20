#include <iostream>

using namespace std;

/* 
******************************************************************************
Write a program that prompts the ser to input five(5) integer values and find
the greatest value of three values.
******************************************************************************
*/

int main () {
	int input1,input2,input3,input4,input5;
	cout << "Enter the 1st integer: ";
	cin >> input1;
	cout << "Enter the 2nd integer: ";
	cin >> input2;
	cout << "Enter the 3rd integer: ";
	cin >> input3;
	cout << "Enter the 4th integer: ";
	cin >> input4;
	cout << "Enter the 5th integer: ";
	cin >> input5;
	
	if (input1 > input2 && input1 > input3 && input1 > input4 && input1 > input5) {
		cout << "The integer with the greatest value is " << input1;
	} 
	if (input2 > input1 && input2 > input3 && input2 > input4 && input2 > input5) {
		cout << "The integer with the greatest value is " << input2;
	} 
	if (input3 > input2 && input3 > input1 && input3 > input4 && input3 > input5) {
		cout << "The integer with the greatest value is " << input3;
	} 
	if (input4 > input2 && input4 > input3 && input4 > input1 && input4 > input5) {
	cout << "The integer with the greatest value is " << input4;
	} 
	if (input5 > input2 && input5 > input3 && input5 > input4 && input5 > input1) {
	cout << "The integer with the greatest value is " << input5;
	} 
}
