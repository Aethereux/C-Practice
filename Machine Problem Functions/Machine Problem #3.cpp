#include <iostream>
#define PI 3.14159
using namespace std;
float circle(float radius)
{
	return PI * (radius * radius);
}
float square(float side)
{
	return side * side;
}
float triangle(float base, float height)
{
	return (base * height) * 0.5;
}
int main () {
	int input;
	float caseInput, caseInput2, area;
	cout << "This program computes the area of a circle, square, or triangle.\n";
	cout << "Press 1 for a Circle, 2 for a Sqaure, and 3 for a triangle.\n";
	cout << "Enter your selection: ";
	cin >> input;
	system("cls");
	switch(input) 
	{
		case 1: 
			cout << "You have selected Circle.\n";
			cout << "Enter the radius of the Circle: ";
			cin >> caseInput;
			area = circle(caseInput);
			cout << "\nThe area of the Circle is " << area;
			break;	
		case 2: 
			cout << "You have selected Square.\n";
			cout << "Enter the length of the side of a Square: ";
			cin >> caseInput;
			area = square(caseInput);
			cout << "\nThe area of the Square is " << area;
			break;	
		case 3: 
			cout << "You have selected triangle.\n";
			cout << "Enter the base of the triangle: ";
			cin >> caseInput;
			cout << "\nEnter the height of the triangle: ";
			cin >> caseInput2;
			area = triangle(caseInput, caseInput2);
			cout << "\nThe area of the triangle is " << area;
			break;
		default: 
			cout << "Invalid entry! Program terminating!";
			break;
	}
}
