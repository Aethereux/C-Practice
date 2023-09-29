#include <iostream>

using namespace std;

int main () {


	float price_of_item[2] = {}; // Array Function
	cout << "Enter the price of item last year: ";
	cin >> price_of_item[0]; // Array Number 1
	cout << "\nEnter the price of item this year: ";
	cin >> price_of_item[1]; // Array Number 2
	
	float inflation_rate = (price_of_item[1] - price_of_item[0]) / price_of_item[0]; // Formula for Inflation rate
	
	cout << "The inflation rate is " << inflation_rate << "%\n";  
	
	float increase_per_year = price_of_item[1] * inflation_rate; // Formula for increase per year
	
	cout << "The Price of the item next year is " << increase_per_year + price_of_item[1] << " pesos"; // Display the total price for next year.
	
	
	return 0;
}
