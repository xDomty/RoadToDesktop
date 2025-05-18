#include <iostream>
#include <string>
using namespace std;

// Structs for address and user information
struct Address {
    string street;
    string poBox;
};

struct UserInfo {
    string name;
    short int age;
    string city;
    string country;
    int monthlySalary;
    int yearlySalary;
    string gender;
    bool married;
    string phoneNumber;
    Address address;
};

// Function to display a welcome message
void welcome() {
    cout << "Hello! Welcome to the Personal Information Card Program.\n";
}

// Function to get user information
void getInfo(UserInfo &info) {
    cout << "Please enter your name: ";
    getline(cin, info.name);

    cout << "Please enter your age: ";
    cin >> info.age;

    cout << "Please enter your city: ";
    cin.ignore(); // Clear the newline character from the buffer
    getline(cin, info.city);

    cout << "Please enter your country: ";
    getline(cin, info.country);

    cout << "Please enter your phone number: ";
    cin >> info.phoneNumber;

    cout << "Please enter your address (street): ";
    cin.ignore(); // Clear the newline character from the buffer
    getline(cin, info.address.street);

    cout << "Please enter your PO Box: ";
    getline(cin, info.address.poBox);

    cout << "Please enter your monthly salary: ";
    cin >> info.monthlySalary;
    info.yearlySalary = info.monthlySalary * 12;

    cout << "Please enter your gender: ";
    cin >> info.gender;

    cout << "Are you married? (1 for Yes, 0 for No): ";
    cin >> info.married;
}

// Function to print user information
void printInfo(UserInfo info) {
    cout << "\nHere is your info card:\n";
    cout << "*****************************\n";
    cout << "Name: " << info.name << "\n";
    cout << "Age: " << info.age << " years\n";
    cout << "City: " << info.city << "\n";
    cout << "Country: " << info.country << "\n";
    cout << "Phone Number: " << info.phoneNumber << "\n";
    cout << "Address: " << info.address.street << "\n";
    cout << "PO Box: " << info.address.poBox << "\n";
    cout << "Monthly Salary: $" << info.monthlySalary << "\n";
    cout << "Yearly Salary: $" << info.yearlySalary << "\n";
    cout << "Gender: " << info.gender << "\n";
    cout << "Married: " << info.married << "\n";
    cout << "*****************************" << endl;
}

// Main function to drive the program
int main() {
    UserInfo info;
    welcome();
    getInfo(info);
    printInfo(info);
    return 0;
}
