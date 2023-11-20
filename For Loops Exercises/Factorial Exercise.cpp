#include <iostream>

using namespace std;

int main() {
	int n, number = 1, count = 1;
	// The instruction said that it should repeat 3 times.
	while (count <= 3) {
		cout << "Enter the number: ";
		cin >> n;
	
		// formula for factorial is n! = n * n - 1
		for(int i = 1; i <= n; i++) {
			number *= i;
		}
		
		cout << "The factorial of " << n << " is " << number << endl;
		number = 1; // resets to 1 to avoid multiple results
		count++;
	}
}
