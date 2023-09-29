#include <iostream>

using namespace std;

int main () {
	
	float degrees;
	float minutes, seconds;
	
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, Enter the degrees: ";
	cin >> degrees;
	cout << "\nNext, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, Enter the seconds of Arc: ";
	cin >> seconds;
	
	
	float minutes_to_degrees, seconds_to_degrees;
	minutes_to_degrees = minutes / 60;
	seconds_to_degrees = (seconds / 60) / 60;
	
	float total_degrees = degrees + minutes_to_degrees + seconds_to_degrees;
	
	cout << "\n" << total_degrees;
	
}
