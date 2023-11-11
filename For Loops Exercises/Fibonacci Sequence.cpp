#include <iostream>

using namespace std;

void fibonacciSequence() {
	
	int first = 0, second = 1, next = 0, range;
	
	cout << "Please Enter the nth term for the sequence: ";
	cin >> range;
	
	if(range == 1 || range == 0) {
		cout << "1";
	} else {
		for (int i = 1; i <= range; i++) {
			cout << first << " ";
			next = first + second;
			first = second;
			second = next;

		}
	}
}

int main () {
	fibonacciSequence();
}
