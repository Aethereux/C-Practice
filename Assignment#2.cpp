#include <iostream>

using namespace std;
// Global Variables
float sum, highestTemp, lowestTemp;
int indexHigh, indexLow;
// Defining Functions
void getData(float arr[12][2]);
float averageHigh(float arr[12][2]);
float averageLow(float arr[12][2]);
float indexHighTemp(float arr[12][2]);
float indexLowTemp(float arr[12][2]);

int main () {
    float array[12][2];
    // Calling all the Functions
    getData(array);
    cout << "The Average High this year is: " << averageHigh(array) << endl;
    cout << "The Average Low this year is: " << averageLow(array) << endl;
    cout << "The Highest Temperature this year is: " << indexHighTemp(array) << " (Month " << indexHigh+1 << ")"<< endl;
    cout << "The Lowest Temperature this year is: " << indexLowTemp(array) << " (Month " << indexLow+1 << ")"<< endl;
}

// Functions Here
void getData (float arr[12][2]) {
    for (int i = 0; i < 12; i++) {
        cout << "Enter the highest temperature for month " << i + 1 << ": ";
        cin >> arr[i][0];
        cout << "Enter the lowest temperature for month " << i + 1 << ": ";
        cin >> arr[i][1];
    }
}

float averageHigh (float arr[12][2]) {
    sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += arr[i][0];
    }
    return sum / 12;
}

float averageLow (float arr[12][2]) {
    sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += arr[i][1];
    }
    return sum / 12;
}

float indexHighTemp(float arr[12][2]) {
    highestTemp = arr[0][0];
    for (int i = 0; i < 12; i++) {
        if (arr[i][0] > highestTemp)
        {
            highestTemp = arr[i][0];
            indexHigh = i;
        }
    }
    return highestTemp;
}

float indexLowTemp(float arr[12][2]) {
    lowestTemp = arr[0][1];
    for (int i = 0; i < 12; i++) {
        if (arr[i][1] < lowestTemp)
        {
            lowestTemp = arr[i][1];
            indexLow = i;
        }
    }
    return lowestTemp;
}