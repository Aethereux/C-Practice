#include <iostream>

using namespace std;

int reverseNumber() {

	int originalNumber,reversedNumber, temp;
	
	cout << "Please Enter the integer the you want to Reverse: ";
	cin >> originalNumber;
	
		while (originalNumber > 0) {
		
		int lastDigit = originalNumber % 10;  // Extract the last digit
        reversedNumber = reversedNumber * 10 + lastDigit;  // Append the digit to the reversed number
        originalNumber = originalNumber / 10;  // Remove the last digit
		
		}
	cout << reversedNumber;
}

int main () {
	
	reverseNumber();
}
