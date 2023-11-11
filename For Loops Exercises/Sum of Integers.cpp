#include <iostream>

using namespace std;

void sumOfIntegers(){
	int range = 0;
	int sum;
	
	cout << "Please Enter the range of your Integer: ";
	cin >> range;
	
	for(int i = 0; i <= range; i++) {
		
		sum += i;
	}
	
	cout << "The sum of your integer is: " << sum;
}

int main() {
	sumOfIntegers();
}
