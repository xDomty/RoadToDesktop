#include <iostream>
using namespace std;
int main()
{
 //identifing vars
     int num1;
     int num2;
     int num3;
 //Welcoming User & Taking Values
     cout << "Welcome To My Program\n"; //welcome
     cout << "This program makes you type 3 numbers then it calculates the sum of it\n"; //making the user understand the program
     cout << "Please enter the first number you want to calculate\n"; //Asking the user to type num1 value
     cin >> num1; //Taking the value of num1
     cout << "Ok, And the second number please\n"; //Asking the user to type num2 value
     cin >> num2; //Taking the value of num2
     cout << "Ok , And the third number please" << endl; //Asking the user to type num3 value
     cin >> num3; //Taking the value of num3
 //Printing the result
     cout << num1 << "+\n";
     cout << num2 << "+\n";
     cout << num3 << "\n";
     cout << "_____________________________\n" << endl;
     cout << "Total = " << (num1 + num2 + num3);
      //returning 0
     return 0;
}