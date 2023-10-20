#include <iostream>

using namespace std;

/* 
******************************************************************************
Write a program that accepts 2 numbers from the user. Display the Result for
Addition, Subtraction, Multiplication, and Division of the two numbers:
******************************************************************************
*/

class Operators {
	public: 
	
	int addition(int a, int b) {
		return a + b;
	}
	
	int subtraction(int a, int b) {
		return a - b;
	}
	
	int multiplicaiton(int a, int b) {
		return a * b;
	}
	
	float division(int a, int b) {
		return a / b;
	}
};

int main () {
	Operators test;
	float input[2] = {};
	
	cout << "Enter the value for Number 1: ";
	cin >> input[0];
	cout << "Enter the value for Number 2: ";
	cin >> input[1];
	
	cout << "Addition Result: " << test.addition(input[0], input[1]) << endl;
	cout << "Subtraction result: " << test.subtraction(input[0], input[1]) << endl;
	cout << "Multiplication result: " << test.multiplicaiton(input[0], input[1]) << endl;
	cout << "Division result: " << test.division(input[0], input[1]) << endl;
	
	
}


