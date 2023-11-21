#include <iostream>
using namespace std;

int problemOne() {
	int month, day;
	cout << "\nEnter the month of the birthday: ";
	cin >> month;

	cout << "\nEnter the day of the birthday: ";
	cin >> day;

	
	switch(month)
	{
		case 1:
			if(day >= 20 && day <= 31) {
				cout << "The horoscope sign is Aquarius";
			}
			 else if (day <= 19){
			 	cout << "The horoscope sign is Capricorn";
			 }
			break;
		case 2:
			if(day >= 19 && day <= 28) {
				cout << "The horoscope sign is Pisces";
			}
			 else if (day <= 18){
			 	cout << "The horoscope sign is Aquarius";
			 } else {
			 	cout << "You Entered an Invalid Day!";
			 } 
			break;
		case 3:
			if(day >= 21 && day <= 31) {
				cout << "The horoscope sign is Aries";
			}
			 else if (day <= 20){
			 	cout << "The horoscope sign is Pisces";
			 }
			break;	
		case 4:
			if(day >= 20 && day <= 30) {
				cout << "The horoscope sign is Taurus";
			}
			 else if (day <= 19){
			 	cout << "The horoscope sign is Aries";
			 } else {
			 	cout << "You Entered an Invalid Day!";
			 } 
			break;	
		case 5:
			if(day >= 21 && day <= 31) {
				cout << "The horoscope sign is Gemini";
			}
			 else if (day <= 20){
			 	cout << "The horoscope sign is Taurus";
			 }
			break;	
		case 6:
			if(day >= 22 && day <= 30) {
				cout << "The horoscope sign is Cancer";
			}
			 else if (day <= 21){
			 	cout << "The horoscope sign is Gemini";
			 } else {
			 	cout << "You Entered an Invalid Day!";
			 } 
			break;
		case 7:
			if(day >= 23 && day <= 31) {
				cout << "The horoscope sign is Leo";
			}
			 else if (day <= 22){
			 	cout << "The horoscope sign is Cancer";
			 }
			break;
		case 8:
			if(day >= 23 && day <= 31) {
				cout << "The horoscope sign is Virgo";
			}
			 else if (day <= 22){
			 	cout << "The horoscope sign is Leo";
			 }
			break;
		case 9:
			if(day >= 23 && day <= 30) {
				cout << "The horoscope sign is Libra";
			}
			 else if (day <= 22){
			 	cout << "The horoscope sign is Virgo";
			 } else {
			 	cout << "You Entered an Invalid Day!";
			 } 
			break;
		case 10:
			if(day >= 24 && day <= 31) {
				cout << "The horoscope sign is Scorpio";
			}
			 else if (day <= 21){
			 	cout << "The horoscope sign is Libra";
			 }
			break;
		case 11:
			if(day >= 22 && day <= 30) {
				cout << "The horoscope sign is Sagittarius";
			}
			 else if (day <= 21){
			 	cout << "The horoscope sign is Scorpio";
			 } else {
			 	cout << "You Entered an Invalid Day!";
			}
			break;
		case 12:
			if(day >= 22 && day <= 31) {
				cout << "The horoscope sign is Capricorn";
			}
			 else if (day <= 21){
			 	cout << "The horoscope sign is Sagittarius";
			 }
			break;	
			
		// Sets the default so whenever the users enters random numbers it will display Invalid Date.
		default:
			cout << "You Entered an Invalid Date!";
			break;
	
	}
	

}


int main() {
	char response;	
	// Loop for never ending question 
 	do {
        problemOne();
        cout << "\nWould you like to try again? Y/N: ";
        cin >> response;
    } while (response == 'Y' || response == 'y');

    cout << "Program Terminating! Thank You!";
    return 0;

}
	
