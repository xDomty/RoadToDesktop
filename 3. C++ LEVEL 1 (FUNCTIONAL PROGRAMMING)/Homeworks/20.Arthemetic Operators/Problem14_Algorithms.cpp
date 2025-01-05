#include <iostream>
using namespace std;
int main()
{
   //defining vars
     long double num1;
     long double num2;
  //begining
     cout << "Hello,\nThis program is made to swipe 2 numbers you enter\n";
     cout << "Please enter the first number\n";
     cin >> num1;
     cout << "Ok, and the second number\n" ;
     cin >> num2;
     cout << "\nOk, Here is the 2 numbers you had enter:\n";
     cout << num1 << endl << num2 << "\n";
     cout << "\nAnd here is after swiping them:\n";
     cout << num2 << "\n" << num1 << endl;
     system("pause");
}