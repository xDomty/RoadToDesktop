#include <iostream>
using namespace std;
int main()
{
 //defining vars
     int a,b;
     float x,y;
 cout << "Hi\nThis Program Doing Any Operation For 2 Numbers\n"; //Welcoming
 cout << "Please enter the first number\n"; // Asking the user to enter the first number
 cin >> a; //getting the value of a
 x = a; // making x=a
 cout << "Please enter the second number\n"; // Asking the user to enter the second number
 cin >> b; //getting the value of b
 y = b ; // making y=b
 cout << "a + b = " << a+b << "\n"; // addition operation
 cout << "a - b = " << a-b << "\n"; //subtraction operation
 cout << "a * b = " << a*b << "\n"; //multiplication operation
 cout << "a / b = " << x/y << "\n"; //division operation
 cout << "a % b = " << a%b << endl; //the process of the remainder of the division
 system("pause");
}