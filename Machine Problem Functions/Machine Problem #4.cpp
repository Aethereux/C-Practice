#include <iostream>

using namespace std;

float bill_no_vat(int a) // a = kilowatthours
{
	float total;
	float computation1 = a * 6.20;
	float computation2 = (250 * 6.20) + (9.30 * (a - 250));
	total = (a <= 250) ?  computation1 :  computation2;
	return total;
}

float bill_with_vat(int a)
{
	return a * 0.12;
}

int main () 
{
	int input;
	
	cout << "Enter the number of kilowatt hours consumed: ";
	cin >> input;
	
	float initialBill = bill_no_vat(input);
	float withTax = bill_with_vat(initialBill);
	float totalBill = initialBill + withTax;
	
	cout << "Your electric bill is " << totalBill << " pesos";
}

// This machine prob is my cleanest code yet lol
