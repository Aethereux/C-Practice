#include <iostream>

using namespace std;

int main() {
	
	int number, i, j;
	cout << "Enter an Integer: ";
	cin >> number;
 
		for (i = 1; i <= number; i++)
		{
			for(j = 1; j <= number; j++)
			{
				if (j <= i){
					cout << j;
				} else {
					cout << "*";
				}
			}
			cout << "\n";
		}	

}
