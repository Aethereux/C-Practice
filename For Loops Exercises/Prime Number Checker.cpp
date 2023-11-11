#include <iostream>

using namespace std;

int primeNumber() {
	
	int number;
	int result;
	cout << "Enter the number you want to be checked whether it's prime or not: ";
	cin >> number;
	
	if (number == 1)
		cout << "It's a prime.";
	else {
		cout << "it's' not a prime";
	}
	for(int i = 2; i <= number; i++) {
		result = number % i;
		if (result == 1) {
			cout << "The Number is not a prime. Terminating!!!";
			return 0;
		} 
}

	
}

int main () {
	
	primeNumber();
}
