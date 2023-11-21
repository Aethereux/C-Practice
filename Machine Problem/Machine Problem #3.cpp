#include <iostream>

using namespace std;

int main() {
	int input, digit;

	cout << "Enter an integer greater than 0: ";
	cin >> input;
	
	if(input <= 0) {
	cout << "You entered an invalid number! Program terminating!";
	return 0;
	}
	
	while (input != 0) {
		input = input / 10;
		digit++;
	}

	cout << "The number has " << digit << " digits.";

}
