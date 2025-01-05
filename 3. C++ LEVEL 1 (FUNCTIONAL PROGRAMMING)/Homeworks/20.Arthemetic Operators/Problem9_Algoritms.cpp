#include <iostream>
using namespace std;
int main()
{
      //defining vars
         long double Num1User;
         long double Num2User;
         long double Num3User;
   cout << "Hello!\nThis program makes you enter 3 numbers then it calculates the sum of it.\n";
   cout <<"Please enter the first number.\n";
   cin >> Num1User;
   cout << "Ok, Please enter the second number.\n";
   cin >> Num2User ;
   cout << "Ok, Please enter the third number." << endl;
   cin >> Num3User ;
   long double result = Num1User+Num2User+Num3User;
   cout << "Ok, here is the sum of your number: ";
   cout << Num1User << " + " << Num2User << " + " << Num3User << " = " << result << ".\n";
   system("pause");
}