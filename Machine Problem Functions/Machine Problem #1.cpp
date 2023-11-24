#include <iostream>

using namespace std;

float height_in_meters(float height, float inches) {
	float height_in_inches = (height * 12) + inches;
	return height_in_inches * 0.0254;
}

float weight_in_pounds(float pounds) {
	return pounds / 2.2;
}


int main ()
{
	float input, input2, input3;
	cout << "Enter your height in feet and inches:\n";
	cout << "First Enter the feet: ";
	cin >> input;
	cout << "\nSecond Enter the inches: ";
	cin >> input2;
	cout << "\nFinally Enter your weight in pounds: ";
	cin >> input3;
	
		
	float height = height_in_meters(input, input2);
	float weight = weight_in_pounds(input3);
	
	cout << "\nYour height in meters is: " << height;
	cout << "\nYour weight in kilograms is: " << weight;

	float bmi = weight / (height * height);
		
	cout << "\nYour BMI is: " << bmi;
}
