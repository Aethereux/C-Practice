#include <iostream>

using namespace std;

void interestCalc() {
	
	int principleAmount, timePeriod, total;
	float interestRate;
	cout << "Enter the principle amount: ";
	cin >> principleAmount;
	cout << "\nEnter the Rate of Interest: ";
	cin >> interestRate;
	cout << "\nEnter the Time Period in months: ";
	cin >> timePeriod;
	
	for(int i = 0; i < timePeriod; i++) {
		total += principleAmount * interestRate;
	}
	
	cout << "\n the total is: " << total + principleAmount;
	
}


int main () {
	
	interestCalc();
	
}
