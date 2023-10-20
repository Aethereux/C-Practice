#include <iostream>

using namespace std;
/* 
******************************************************************************
Write a program that gives the user the choice of computing the area of circle, 
a square, or a triangle. The program should first ask the user what kind of area
he/she wants to compute. After the user makes a selection, the program should
then ask the user to enter the dimensions of the geometric shape selected.
******************************************************************************
*/
int main () {

	int select;
	float pi = 3.1416;
	float radius, side, base, height, area;
	
	cout << "1. Circle" << endl;
	cout << "2. Square" << endl;
	cout << "3. Triangle" << endl;
	cout << "4. Exit" << endl;
	
	cout << "Select Number: ";
	cin >> select;
	
	switch(select){
		case 1:
			cout << "Enter Radius: " << endl;
			cin >> radius;
			area = pi * radius * radius;
			cout << "\nThe area of a circle is: " << area;
			break;
			
		case 2: 
			cout << "Enter side: " << endl;
			cin >> side;
			area = side * side;
			cout << "\nThe area of a square is: " << area;
			break;
		
		case 3:
			cout << "Enter base: " << endl;
			cin >> base;
			cout << "Enter height: " << endl;
			cin >> height;
			area = 0.5 * base * height;
			cout << "\nThe area of a Triangle is: " << area;
			break;
			
		case 4:
			return 0;
			break;
	}
	
}
