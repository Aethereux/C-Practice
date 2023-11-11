#include <iostream>

using namespace std;

int countingNumbers(int range) {
	
	for(int i = 0; i < range; i++){
		cout << i << "\n";
	}
}

int main () {
	cout << countingNumbers(20);
}
