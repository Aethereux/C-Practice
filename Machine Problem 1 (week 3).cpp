#include <iostream>

using namespace std;

int main () {

	float price_of_item[2] = {};

	
	cout << "Enter the price of item last year: ";
	cin >> price_of_item[0];
	cout << "\nEnter the price of item this year: ";
	cin >> price_of_item[1];
	
	float inflation_rate = (price_of_item[1] - price_of_item[0]) / price_of_item[0];
	
	cout << "The inflation rate is " << inflation_rate << "%\n"; 
	
	float increase_per_year = price_of_item[1] * inflation_rate;
	
	cout << "The Price of the item next year is " << increase_per_year + price_of_item[1] << " pesos"; 
	
}
