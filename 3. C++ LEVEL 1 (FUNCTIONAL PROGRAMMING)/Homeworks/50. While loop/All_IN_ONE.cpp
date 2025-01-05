#include <iostream>
#include <cmath> // used cmath for pow function

using namespace std;

void Problem26() {
    int i;
    int loop;
    cout << "Want the program to print from 0 to what number?\n";
    cin >> loop;
    i = 0;
    while (i <= loop) {
        cout << i << endl;
        i++;
    }
}

void Problem27() {
    int i;
    int loop;
    cout << "Hello, This program prints from the number you type to 0\n";
    cout << "Please enter your number\n";
    cin >> loop;
    i = loop;
    while (i >= 0) { // Change to 0 so it includes 0 in the output
        cout << i << endl;
        i--;
    }
}

void Problem28() {
    int i;
    int loop;
    cout << "Hello, This program calculates the sum of odd numbers\n";
    cout << "Enter the number?\n";
    cin >> loop;
    int counter = 0;
    i = 1;
    while (i <= loop) {
        counter += i;
        i += 2;
    }
    cout << "The sum of odd numbers between 1 and " << loop << " = " << counter << endl;
}

void Problem29() {
    int i;
    int loop;
    cout << "Hello, This program calculates the sum of even numbers\n";
    cout << "Enter the number?\n";
    cin >> loop;
    int counter = 0;
    i = 0;
    while (i <= loop) {
        counter += i;
        i += 2;
    }
    cout << "The sum of even numbers between 0 and " << loop << " = " << counter << endl;
}

void ForProblem30() {
    int number;
    int counter;
    long double factorial = 1;
    cin >> number;
    if (number >= 0) {
        counter = number;
        while (counter >= 1) {
            factorial *= counter;
            cout << counter << " * ";
            counter--;
        }
        cout << "\b\b\b"; // Erase the last " * "
        cout << " = " << factorial;
    }
    else {
        cout << "PLEASE ENTER A POSITIVE NUMBER\n";
        ForProblem30(); // Recursive call for invalid input
    }
}

void Problem30() {
    cout << "Hello, This program calculates the factorial of numbers you put in\n";
    cout << "Please enter your number\n";
    ForProblem30();
}

void Problem32() {
    float number;
    float power;
    cout << "Hello, This program calculates (number ^ power)\n";
    cout << "Please enter the number\n";
    cin >> number;
    cout << "Please enter the power\n";
    cin >> power;
    cout << "Here is your result: " << number << " ^ " << power << " = " << pow(number, power) << endl;
}

void Problem37() {
    int number;
    int sum = 0;
    cout << "Hello, This program calculates the sum of numbers you input until you put -99\n";
    cout << "Please enter the numbers you want\n";
    cin >> number;
    while (number != -99) {
        sum += number;
        cin >> number;
    }
    sum += 109;
    cout << "Ok, Here is your result:\n" << sum << endl;
}

void Problem46() {
    cout << "HERE WE GOOO, IT IS A TO Z\n";
    char letter;
    short int counter = 65;
    while (counter <= 90) {
        letter = counter;
        cout << letter << endl;
        counter++;
    }
}

void ForProblem50() {
    int password = 1234;
    int PasswordEntered;
    int attempts = 0;
    cout << "Hello, Please enter your bank password\n";

    while (attempts < 3) {
        cin >> PasswordEntered;
        if (PasswordEntered == password) {
            cout << "Password correct. Access granted.\n";
            cout << "Your balance is 7500\n";
            return; // Exit function after correct password
        }
        else {
            attempts++;
            cout << "Incorrect password. Try again (" << (3 - attempts) << " attempts left).\n";
        }
    }
    cout << "Too many incorrect attempts. Access denied.\n";
}

void menu() {
    cout << "************************************\n";
    cout << "[1] Problem 26: 0 to what number\n";
    cout << "[2] Problem 27: What number to 0\n";
    cout << "[3] Problem 28: The sum of odd numbers\n";
    cout << "[4] Problem 29: The sum of even numbers\n";
    cout << "[5] Problem 30: Program calculates the factorial of numbers you put in\n";
    cout << "[6] Problem 32: Program calculates (number ^ power)\n";
    cout << "[7] Problem 46: A TO Z\n";
    cout << "[8] Problem 37: Sum until -99\n";
    cout << "[9] Problem 50: Bank password verification (pasword is : 1234)\n";
    cout << "************************************\n" << endl;
    cout << "What do you want to view of this?\n";
}

void SelectFromMenu() {
    int choose;
    menu();
    cin >> choose;
    switch (choose) {
    case 1:
        Problem26();
        break;
    case 2:
        Problem27();
        break;
    case 3:
        Problem28();
        break;
    case 4:
        Problem29();
        break;
    case 5:
        Problem30();
        break;
    case 6:
        Problem32();
        break;
    case 7:
        Problem46();
        break;
    case 8:
        Problem37();
        break;
    case 9:
        ForProblem50();
        break;
    default:
        cout << "WRONG CHOICE, PLEASE CHOOSE AGAIN\n";
    }
    char WantAnother;
    cout << "\n\nDo you want to do another operation? (y/n)\n";
    cin >> WantAnother;
    if (WantAnother == 'y') {
        SelectFromMenu();
    }
    else {
        cout << "Thanks for using my program :)\n";
        cout << "Made by Adam\n";
        cout << "EXITING PROGRAM...";
    }
}

int main() {
    SelectFromMenu();
    return 0;
}
