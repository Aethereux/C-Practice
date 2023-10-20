#include <iostream>

using namespace std;

/* 
******************************************************************************
Write a program that swaps the value of two integer values entered by the user
******************************************************************************
*/

int main () {
	
	int input[2] = {};
	int temp = 0;
	cout << "Enter the value for Number 1: ";
	cin >> input[0];
	cout << "Enter the value for Number 2: ";
	cin >> input[1];
	
	cout << "The values entered are: " << input[0] << " , " << input[1] << endl;
	
	temp = input[0]; // Switches value 1 to temporary variable
	input[0] = input[1]; // switches value1 to value 2
	input[1] = temp; // switches the temporary value to value 2
	
	cout << "Swapped values are " << input[0] << " and " << input[1];
	
	return 0;
}
