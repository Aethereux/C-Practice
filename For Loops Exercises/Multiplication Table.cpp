#include <iostream>

using namespace std;

void multiplicationTable() {
	
	int number, range, result = 0;
	
	cout << "Please Enter the Desired Number to Multiply: ";
	cin >> number;
	cout << "\nPlease Enter the range: ";
	cin >> range;
	
	for(int i = 1; i <= range; i++) {
		result = number * i;
		cout << result << " ";
	}
	
	
}

int main () {
	multiplicationTable();
}
