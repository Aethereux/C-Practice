#include <iostream>
#include <cmath>

using namespace std;
int main() {
    char user_input;
    int hour, minutes;
    cout << "Activity 1\n";
    cout << "-----------------------------\n";
    cout << "Enter The Number of hours: ";
    cin >> hour;
    cout << "\nEnter the Number of Minutes: ";
    cin >> minutes;

    cout << "\n" << hour << ":" << minutes;

    cout << "\nContinue to Activity 2? ( Y/N ): ";
    cin >> user_input;
    if (user_input == 'Y' || user_input == 'y'){
        const double miles_per_kilometer = 0.62137;
        float kilometers;
        cout << "---------------------------------------\n";
        cout << "\nEnter the distance in Kilometers: ";
        cin >> kilometers;
        cout << "\nThe Distance is " << kilometers << ", then it is equivalent to " << kilometers * miles_per_kilometer << " miles\n";
    } else {
        return 0;
    }

    cout << "\nContinue to Activity 3? ( Y/N ): ";
    cin >> user_input;

    if (user_input == 'Y' || user_input == 'y') {
        const double c = 2.997925 * pow(10,8); // Speed of light
        double m;

        cout << "\n Enter the mass of the object in kilograms: ";
        cin >> m;

        double E = m * pow(c, 2); // Defining E = mc squared
        cout << "\nThe mass is " << m << " kg " << "then the energy produced is " << E << " joules";
    } else {
        return 0;
    }

    cout << "\nContinue to Activity 4? (Y/N): ";
    cin >> user_input;

    if (user_input == 'Y' || user_input == 'y') {
        float kilometers, liters_of_gas;
        cout << "\nEnter the number of kilometers travelled: ";
        cin >> kilometers;
        cout << "Enter the numbers of liters of gas consumed: ";
        cin >> liters_of_gas;

        float kilometers_per_liter = kilometers / liters_of_gas;
        cout << "\nThe Number of kilometers per liter is " << kilometers_per_liter;
    } else {
        return 0;
    }

    cout << "\nContinue to Activity 5? (Y/N): ";
    cin >> user_input;

    if (user_input == 'Y' || user_input == 'y') {
        // Defining Variables
        int input, input_2, input_3; // Stores the information inputted by the user.

        cout << "\nEnter your height in feet and inches\n"
        << "First Enter your height in feet: ";
        cin >> input;
        cout << "Next, enter your inches: \n";
        cin >> input_2;
        cout << "Finally, Enter your weight in pounds: ";
        cin >> input_3;

        // Used variable double to display float numbers (decimals) that exceeds more than 5 decimals
        const double feet_to_inches = input * 12; // Calculates the input and converts it to inches
        const double inches = input_2; // stores the input_2 to inches
        const double totalHeight = (feet_to_inches + inches) * 0.0254; // Total height in meters
        const double pounds_to_kilograms = input_3 / 2.205; // Converts pounds to kilograms.
        const double bmi = pounds_to_kilograms / pow(totalHeight, 2);

        cout << "Your Height in meters is " << totalHeight << "\n";
        cout << "Your Weight in Kilograms is " << pounds_to_kilograms << "\n";
        cout << "Your BMI is " << bmi;
    } else {
        return 0;
    }

    cout << "\nContinue to Activity 6? (Y/N): ";
    cin >> user_input;

    if (user_input == 'Y' || user_input == 'y') {
        // Defining Variables
        // const means constant so it doesnt change.
        const int seconds_per_minute = 60;
        const int seconds_per_hour = 3600;
        const int seconds_per_day = 86400;
        //defining input for cin
        int user_input1;

        cout << "Enter the number of seconds: ";
        cin >> user_input1;

        int days = user_input1 / seconds_per_day;
        int hours = (user_input1 % seconds_per_day) / seconds_per_hour;
        int minutes1 = (user_input1 % seconds_per_hour) / seconds_per_minute;
        int remaining_seconds = user_input % seconds_per_minute;

        // Minutes and Seconds
        if (user_input1 == 1 || user_input1 == 60 || user_input1 == 3600) {
            cout << user_input1 << " seconds = " << days << " days " << hours << " hours " << minutes1 << " minutes "
                 << remaining_seconds << " seconds";
        } else if (user_input1 <= 59 || user_input1 <= 3599 || user_input1 > 86400 || user_input1 < 86400) {
            cout << user_input1 << " seconds = " << days << " days " << hours << " hours " << minutes1 << " minutes "
                 << remaining_seconds << " seconds";
        }

        return 0;
    }


}
