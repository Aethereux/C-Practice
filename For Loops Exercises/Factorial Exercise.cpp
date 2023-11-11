#include <iostream>

using namespace std;

int factorial(int out) {
	
	// formula for factorial is n! = n * n - 1
	int n;
	for(int i = 0; i <= out; i++) {
		n += out * (out - 1); // n = n + out * (out - 1) 
	}
	return n;
}

int main () {
	
	cout << factorial(5);
	
}
