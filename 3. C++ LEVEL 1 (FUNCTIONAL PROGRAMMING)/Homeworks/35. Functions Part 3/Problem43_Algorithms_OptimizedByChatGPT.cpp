#include <iostream>
using namespace std;

// Constants
const int SECONDS_PER_DAY = 24 * 60 * 60;
const int SECONDS_PER_HOUR = 60 * 60;
const int SECONDS_PER_MINUTE = 60;

// Global variable for total seconds
long long int totalSeconds;

// Function to display a welcome message
void welcome() {
    cout << "Hello!\nThis program calculates the total seconds into days, hours, minutes, and seconds.\n";
    cout << "Please enter the total number of seconds:\n";
}

// Function to change the global variable totalSeconds
void changeGlobalSeconds() {
    cin >> totalSeconds;
}

// Function to calculate days from seconds
long long int secondsToDays(long long int seconds) {
    return seconds / SECONDS_PER_DAY;
}

// Function to calculate hours from seconds
long long int secondsToHours(long long int seconds) {
    return (seconds % SECONDS_PER_DAY) / SECONDS_PER_HOUR;
}

// Function to calculate minutes from seconds
long long int secondsToMinutes(long long int seconds) {
    return (seconds % SECONDS_PER_HOUR) / SECONDS_PER_MINUTE;
}

// Function to calculate remaining seconds
long long int remainingSeconds(long long int seconds) {
    return seconds % SECONDS_PER_MINUTE;
}

// Function to display the results
void displayResults() {
    cout << "The number of days is: " << secondsToDays(totalSeconds) << " Days,\n";
    cout << "The number of hours is: " << secondsToHours(totalSeconds) << " Hours,\n";
    cout << "The number of minutes is: " << secondsToMinutes(totalSeconds) << " Minutes,\n";
    cout << "The number of seconds is: " << remainingSeconds(totalSeconds) << " Seconds.\n";
}

//Function to run the previous code together
void results()
{
    welcome();
    changeGlobalSeconds();
    displayResults();
}
// Main function to run the program
int main() {
    results();
    return 0;
}
