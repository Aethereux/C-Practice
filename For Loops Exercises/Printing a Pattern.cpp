#include <iostream>

using namespace std;

void printPattern() {
	
	int rows;
	char pattern;
	
	cout << "Enter the the amount of rows you want: ";
	cin >> rows;
	cout << "Enter the desired pattern you want to be outputted: ";
	cin >> pattern;
	
		for(int i = 0; i < rows; i++) {
			cout << pattern << " ";
			for(int j = 0; j < i; j++) {
				cout << pattern << " ";
			}
			cout << "\n";
		}
}

int main () {
	printPattern();
}
