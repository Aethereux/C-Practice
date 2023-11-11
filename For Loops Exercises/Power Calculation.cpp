#include <iostream>

using namespace std;

void powerCalc() {
	
	int baseNumber, exponent, result;
	cout << "Please Enter Base Number: ";
	cin >> baseNumber;
	cout << "\nPlease Enter Exponent: ";
	cin >> exponent;
	
	for (int i = 1; i <= exponent; i++) {
		result = baseNumber * baseNumber;
	}
	
	cout << "\nThe Result is " << result;
	
	
	
}

int main () {
	
	powerCalc();
	
}
