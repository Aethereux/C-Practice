#include <iostream>
using namespace std;
// 500 Pesos per hour for 40 hours if 40 exceeds 1.5 times of 500 will be added
// gross pay total worked
// 1.5% tax for social security, 3% for home development mutual fund, 10% for professional income tax 
// if worker has 3 or more covered dependends then an additional 300 pesos will be added to the salary
int grossPay(int hoursWorked) 
{
	float overtime;
	if (hoursWorked >= 41)
	{
		overtime = 750 * (hoursWorked - 40);
		float total = (40 * 500) + overtime; //since the condition needs to exceed 40, we should just multiply 40 straight to 500,
											 //to get the normal salary and just needs to add the overtime fee which is 1.5 times the 500
		return total; // total of this ^^^
	
	} else if (hoursWorked <= 40) {
		return 500 * hoursWorked; // returns the normal salary without overtime additionals
	}
};

float socialSecurity(int a)
{
	return a * 0.015;
}

float homeDevFund(int a)
{
	return a * 0.03;
}

float proIncomeTax(int a)
{
	return a * 0.10;
}

int main()
{
	int input, input2;
	float nonTaxSalary;
	cout << "Enter the number of hours worked this week: ";
	cin >> input;
	cout << "\nEnter the number of dependents: ";
	cin >> input2;

	nonTaxSalary = grossPay(input);
	cout << "\nGross Pay = " << nonTaxSalary << " pesos\n";
	int healthInsurance = (input2 <= 2) ? 0 : 300; 
				 /* 
				 You can use 
				 
				 if (input <= 2) {
					healthInsurance = 0;
				}
					else {
					healthInsurance = 300;
				}
					either way, they are the same. I just used a Ternary Operator to shortend it
				 */
	cout << "\nSocial Security Tax = " << socialSecurity(nonTaxSalary) << " pesos\n";
	cout << "HDMF = " << homeDevFund(nonTaxSalary) << " pesos\n";
	cout << "Professional Income Tax = " << proIncomeTax(nonTaxSalary) << " pesos\n";
	cout << "Health Insurance = " << healthInsurance << " pesos\n";
	
	float totalSalary = nonTaxSalary - socialSecurity(nonTaxSalary) - homeDevFund(nonTaxSalary) - proIncomeTax(nonTaxSalary);
	
	if(input2 >= 3) {
	totalSalary = totalSalary - healthInsurance;
	}
	cout << "\nNet Take Home Pay for the Week = " << totalSalary;
	
}


