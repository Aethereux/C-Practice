#include <iostream>

using namespace std;

int main() {

    // Defining Variables
    // const means constant so it doesnt change.
    const int seconds_per_minute = 60;
    const int seconds_per_hour = 3600;
    const int seconds_per_day = 86400;
    //defining input for cin
    int user_input;

    cout << "Enter the number of seconds: ";
    cin >> user_input;

    int totalSeconds = user_input;

    int days = user_input / seconds_per_day;
    int hours = (user_input % seconds_per_day) / seconds_per_hour;
    int minutes = (user_input % seconds_per_hour) / seconds_per_minute;
    int remaining_seconds = user_input % seconds_per_minute;


    // Minutes and Seconds
    if (user_input == 1 && user_input == 60 || user_input == 3600) {
        cout << user_input << " seconds = " << days << " days " << hours << " hours " << minutes << " minutes "
             << remaining_seconds << " seconds";;
    } else if (user_input <= 59 || user_input <= 3599 || user_input > 86400 || user_input < 86400) {
        cout << user_input << " seconds = " << days << " days " << hours << " hours " << minutes << " minutes "
             << remaining_seconds << " seconds";
    }

    return 0;

}