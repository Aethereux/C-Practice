#include <iostream>

using namespace std;

int main() {
	int n, number = 1;

	cout << "Enter the number: ";
	cin >> n;

	// formula for factorial is n! = n * n - 1
	for(int i = 1; i <= n; i++) {
		number *= i;
	}
	
	cout << "The factorial of " << n << " is " << number;
	
}
