#include <iostream>

using namespace std;

int main () {

float money, cost, change, tax, cost_and_tax; 
cout << "Enter the cost of the item: ";
cin >> cost;

tax = 0.06 * cost; 
cost_and_tax = tax + cost;

cout << "\nThe total cost of the item including the sales tax is " << cost_and_tax << endl;
cout << "Enter the amount tendered: ";
cin >> money;

cout << "Your change is: " << money - cost_and_tax ;

return 0;
}
