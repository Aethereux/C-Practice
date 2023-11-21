#include <iostream>

using namespace std;

int main() {
		int input, digit;
		
	do {
		cout << "\nEnter an integer greater than 0: ";
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
	   	digit = 0; // resets to 0
	} while (input <= 0);
	
	
}
